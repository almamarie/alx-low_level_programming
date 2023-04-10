#!/bin/bash
gcc -Wall -pedantic -Wextra -Werror -c *.c
ar -rc liball.a *.a
randlib liball.a