#!/bin/bash
# Name    : Sandeep Kumar Bollavaram
# Reg No  : 11249A040
# Email   : 11249A040@kanchiuniv.ac.in
# Ex No   : 3e — Shell Program: Fibonacci Series

echo "Enter number of terms:"
read n

a=0
b=1

echo "Fibonacci Series:"
echo $a
echo $b

for (( i=2; i<n; i++ ))
do
    c=$((a + b))
    echo $c
    a=$b
    b=$c
done

# Sample Output:
# Enter number of terms:
# 7
# Fibonacci Series:
# 0
# 1
# 1
# 2
# 3
# 5
# 8
