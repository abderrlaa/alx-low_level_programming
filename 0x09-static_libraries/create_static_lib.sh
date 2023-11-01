#!/bin/bash
gcc -c *.c
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c
ranlib liball.a

