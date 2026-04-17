#!/bin/bash
# Sandeep Kumar  Reg: 11249A040
# biggest of 2 numbers

echo "enter a :"
read a
echo "enter b :"
read b

if [ $a -gt $b ]
then
    echo "biggest = $a"
elif [ $a -lt $b ]
then
    echo "biggest = $b"
else
    echo "both equal"
fi
