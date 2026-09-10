#!/bin/bash
##Borro el directorio build si ya existiera
if [ -d "./build" ];
	then rm -r ./build;
fi

##Creo el directorio build
mkdir ./build

## Compilo código objeto
g++ -Wall -std=c++14 -c ./src/Animal.cpp -I./include/ 
g++ -Wall -std=c++14 -c test_animal.cpp -I./include/ 

# ## Compilo el Binario
g++ -Wall -std=c++14 Animal.o test_animal.o -o ./build/test_animal.bin 

## Limpio los códigos objeto
rm ./*.o

# ## Permisos de Ejecución para el binario
chmod +x ./build/test_animal.bin

#ejecutar:
./build/test_animal.bin
