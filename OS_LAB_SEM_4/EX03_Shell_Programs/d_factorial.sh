#!/bin/bash
# Name    : Sandeep Kumar Bollavaram
# Reg No  : 11249A040
# Email   : 11249A040@kanchiuniv.ac.in
# Ex No   : 3d — Shell Program: Factorial of a Number

echo "Enter a number:"
read n

if [ $n -lt 0 ]
then
    echo "Factorial is not defined for negative numbers"
else
    fact=1
    for (( i=1; i<=n; i++ ))
    do
        fact=$((fact * i))
    done
    echo "Factorial of $n is $fact"
fi

# Sample Output:
# Enter a number:
# 5
# Factorial of 5 is 120
