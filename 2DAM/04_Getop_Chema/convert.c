#include <getopt.h>
#include <stdlib.h>

int
main ()
{
  const char *short_options = "hb:v";

  const struct option long_options = {
      { "help",    0,  NULL,  'h' },
      { "base",    1,  NULL,  'b' },
      { "verbose", 0,  NULL,  'v' }
  };

  return EXIT_SUCCESS;

}

