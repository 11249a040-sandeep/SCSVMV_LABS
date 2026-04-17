#!/bin/bash
# Sandeep Kumar Bollavaram
# 11249A040

echo "how many terms :"
read n

a=0
b=1
i=1

echo "fibonacci :"
while [ $i -le $n ]
do
    echo $a
    c=`expr $a + $b`
    a=$b
    b=$c
    i=`expr $i + 1`
done
