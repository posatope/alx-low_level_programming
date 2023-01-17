#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -o -c *.c
ar -rc liball.a *.o
