#!/bin/bash
#sandeep 11249A040

read -p "enter number : " n
rem=$((n%2))

if [ $rem -eq 0 ]
then
echo "$n is even"
else
echo "$n is odd"
fi
