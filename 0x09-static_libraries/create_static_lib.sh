#!/bin/bash
ar -rc liball.a | gcc -Wall -pedantic -Werror -Wextra -c *.c
ranlib liball.a
