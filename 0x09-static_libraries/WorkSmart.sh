#!/bin/bash
gcc -c -Wall -Werror -Wextra *.c
ar rcs libmy.a *.o
ranlib libmy.a
