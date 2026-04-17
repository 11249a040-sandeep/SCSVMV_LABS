#!/bin/bash
#name:sandeep  regno:11249A040

echo enter three numbers
read x
read y
read z

if [ $x -ge $y ] && [ $x -ge $z ]
then
    echo "biggest is $x"
elif [ $y -ge $z ]
then
    echo "biggest is $y"
else
    echo "biggest is $z"
fi
