#!/bin/bash
##Borro el directorio build si ya existiera
if [ -d "./build" ];
	then rm -r ./build;
fi

##Creo el directorio build
mkdir ./build

## Compilo código objeto
g++ -Wall -std=c++14 -c ./src/ControlRemoto.cpp -I./include/ 
g++ -Wall -std=c++14 -c test_control_remoto.cpp -I./include/ 

# ## Compilo el Binario
g++ -Wall -std=c++14 ControlRemoto.o test_control_remoto.o -o ./build/test_control_remoto.bin 

## Limpio los códigos objeto
rm ./*.o

# ## Permisos de Ejecución para el binario
chmod +x ./build/test_control_remoto.bin

#ejecutar:
./build/test_control_remoto.bin
