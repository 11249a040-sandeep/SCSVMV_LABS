#!/bin/bash
# Name    : Sandeep Kumar Bollavaram
# Reg No  : 11249A040
# Email   : 11249A040@kanchiuniv.ac.in
# Ex No   : 3c — Shell Program: Biggest of Three Numbers

echo "Enter three numbers:"
read a
read b
read c

if [ $a -gt $b ] && [ $a -gt $c ]
then
    echo "Biggest number is $a"
elif [ $b -gt $c ]
then
    echo "Biggest number is $b"
else
    echo "Biggest number is $c"
fi

# Sample Output:
# Enter three numbers:
# 12
# 47
# 35
# Biggest number is 47
