#!/bin/bash

# 1. Compilação comum
. common_script.sh
check_program g++
get_source_files cpp

. common_compile.sh
header

# 2. Rodar um main, caso exista.
files=`find . -name '*.cpp' | grep -v testador | grep -v testcase | paste -s`
g++ -std=c++11 -Wall $files -o main
chmod +x main
./main

footer
exit $?