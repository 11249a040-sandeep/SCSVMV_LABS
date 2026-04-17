#!/bin/bash
# Name    : Sandeep Kumar Bollavaram
# Reg No  : 11249A040
# Email   : 11249A040@kanchiuniv.ac.in
# Ex No   : 3b — Shell Program: Biggest of Two Numbers

echo "Enter first number:"
read a
echo "Enter second number:"
read b

if [ $a -gt $b ]
then
    echo "Biggest number is $a"
elif [ $b -gt $a ]
then
    echo "Biggest number is $b"
else
    echo "Both numbers are equal"
fi

# Sample Output:
# Enter first number:
# 45
# Enter second number:
# 23
# Biggest number is 45
