#!/bin/bash
gcc -c -Wall -Wextra -pedantic -fPIC *.c
gcc -shared *.o -o liball.so

