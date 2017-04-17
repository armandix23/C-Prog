TARGET = nave #Nombre 

CC = g++ #En que queremos compilarlo
IDIR = ../include # Directorio donde estan librerias.h
DDIR = ../dist # Direccion de los directorios

CFLAGS = -g I$(IDIR)

DEPS = $(wildcard $(IDIR)/*.h) 
OBJS = $(patsubst %.cpp, %.o, $(wildcard *.cpp)) #busca los .cpp a .o

$(TARGET): $(OBJS) 
	$(CC) -o $(TARGET) $(CFLAGS) $^ 

%.o: %.cpp $(DEPS)
	$(CC) $(CFLAGS) -c $< 

.PHONY: clean dist #Manda lo que le pides sin mirar lo demas

clean:
	$(RM) *.o

dist: $(TARGET) clean
	mv $(TARGET) $(DDIR)
