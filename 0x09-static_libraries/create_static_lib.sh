#!/bin/bash

#creates a static library called liball.a from all .c files in pwd

gcc -c *.c
ar rc liball.a *.o
echo y | rm -I *.o
