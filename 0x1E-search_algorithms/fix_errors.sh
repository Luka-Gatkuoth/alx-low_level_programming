#!/bin/bash
# convert dos line ending to unix
dos2unix *.c

#remove trailling whilespaces
sed -i 's/[[:space:]]\+$//' *.c