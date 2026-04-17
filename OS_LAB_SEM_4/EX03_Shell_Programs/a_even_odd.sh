#!/bin/bash
# Name    : Sandeep Kumar Bollavaram
# Reg No  : 11249A040
# Email   : 11249A040@kanchiuniv.ac.in
# Ex No   : 3a — Shell Program: Even or Odd

echo "Enter a number:"
read n

if [ $((n % 2)) -eq 0 ]
then
    echo "The number $n is Even"
else
    echo "The number $n is Odd"
fi

# Sample Output:
# Enter a number:
# 7
# The number 7 is Odd
#
# Enter a number:
# 4
# The number 4 is Even
