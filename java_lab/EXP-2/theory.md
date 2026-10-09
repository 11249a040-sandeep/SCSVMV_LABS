# Experiment 2: Arithmetic and Decision Making

## Aim
To implement arithmetic operations, identify even and odd numbers, find the largest of three numbers, and test whether a year is a leap year.

## Theory
Arithmetic operators perform numerical calculations. A switch statement can select an operation based on a menu choice. A number is even when its remainder after division by two is zero. The largest value among three numbers can be found with comparisons or `Math.max`. A leap year is divisible by 400, or divisible by 4 but not by 100.

## Programs

| Exercise | Source file |
| --- | --- |
| Arithmetic operation | [`ArithmeticOperators.java`](ArithmeticOperators.java) |
| Even or odd | [`EvenOddSwitch.java`](EvenOddSwitch.java) |
| Largest of three numbers | [`LargestOfThreeNumbers.java`](LargestOfThreeNumbers.java) |
| Leap year | [`LeapYear.java`](LeapYear.java) |

## Algorithm

1. Read the input values.
2. Apply the selected arithmetic operator and reject division or modulus by zero.
3. Use the remainder operator to classify a number as even or odd.
4. Compare the three values and print the largest.
5. Apply the leap-year divisibility rule and print the result.

## Sample Output

```text
Result : 30
This number is even
Largest number: 42
Year 2024 is a Leap Year
```

## Result
The arithmetic and decision-making programs produced the expected results for the supplied values.

## Viva Prompts
1. Why is division by zero invalid?
2. What is the difference between `/` and `%`?
3. Why is 1900 not a leap year but 2000 is one?
