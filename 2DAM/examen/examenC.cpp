#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>

static int SIGUSR1_recibida = 0;
static int SIGUSR2_recibida = 0;

void enviar(int sig)
{
  switch( sig )
  {
    case SIGUSR1:
      SIGUSR1_recibida = 1;
      break;
    case SIGUSR2:
      SIGUSR2_recibida = 1;
      break;
  }
}

int main()
{

  printf("PID del padre: %i --- Pid del hijo: %i \n ", getppid(), getpid());
  int status;
  pid_t id_padre = getpid();
  pid_t id_hijo = fork();


  signal(SIGUSR1,enviar);
  signal(SIGUSR2,enviar);
  

  if(id_hijo < 0 )
  {
    printf("Error al crear el proceso hijo!!!!\n");
  }
  else if(id_hijo == 0)
  {       /* Proceso hijo */
    sleep(2);
    kill(id_padre,SIGUSR1);
    sleep(2);
    kill(id_padre,SIGUSR2);
    sleep(2);
   // kill(id_hijo,SIGUS);
  }
  else
  {
    // espera activa
    while (!SIGUSR1_recibida) ;

    printf("SIGUSR1 recibida\n");

    while(!SIGUSR2_recibida) ;
    printf("SIGUSR2 recibida\n");
  }

  wait(&status);
  printf ("Fin del proceso %d\n", getpid ());

}
