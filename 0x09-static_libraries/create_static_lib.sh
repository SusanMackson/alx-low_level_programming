#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar rsc liball.a *.o
ranlib liball.a
