#!/bin/bash
# sandeep 11249A040

echo -n "n = "
read n

f=1
i=1
while [ $i -le $n ]
do
f=`expr $f \* $i`
i=`expr $i + 1`
done

echo "factorial = $f"
