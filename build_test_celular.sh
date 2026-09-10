#!/bin/bash
##Borro el directorio build si ya existiera
if [ -d "./build" ];
	then rm -r ./build;
fi

##Creo el directorio build
mkdir ./build

## Compilo código objeto
g++ -Wall -std=c++14 -c ./src/Celular.cpp -I./include/ 
g++ -Wall -std=c++14 -c test_celular.cpp -I./include/ 

# ## Compilo el Binario
g++ -Wall -std=c++14 Celular.o test_celular.o -o ./build/test_celular.bin 

## Limpio los códigos objeto
rm ./*.o

# ## Permisos de Ejecución para el binario
chmod +x ./build/test_celular.bin

#ejecutar:
./build/test_celular.bin
