# Experiment 1: Arrays and Searching

## Aim
To write Java programs for arranging numbers, searching an array, finding its largest and smallest values, and displaying students who scored at least 60 marks.

## Theory
Arrays store values of the same type under one name. Sorting arranges values in a defined order. Binary search repeatedly divides a sorted array into two halves, reducing the search space in logarithmic time. A single traversal is sufficient to find the minimum and maximum values. A condition can filter records such as students scoring 60 or above.

## Programs

| Exercise | Source file |
| --- | --- |
| Ascending order | [`AscendingOrder.java`](AscendingOrder.java) |
| Binary search | [`BinarySearch.java`](BinarySearch.java) |
| Largest and smallest | [`LargestSmallest.java`](LargestSmallest.java) |
| Marks above 60 | [`MarksAbvsixty.java`](MarksAbvsixty.java) |

## Algorithms

1. Read the required array or student records.
2. For ascending order, compare and swap out-of-order values.
3. For binary search, sort the array, compare the middle value, and discard the unsuitable half.
4. For largest and smallest values, update both values during one traversal.
5. For marks above 60, print only records satisfying `mark >= 60`.

## Sample Output

```text
Ascending Order: 4, 8, 12, 19
Sorted array: [4, 8, 12, 19]
Element found at sorted position 3
Largest Number in a given array is : 19
Smallest Number in a given array is : 4
Students scoring 60 or above:
Anu 78
```

## Result
The array and search programs executed successfully, and qualifying student records were displayed.

## Viva Prompts
1. Why must binary search use sorted data?
2. What is the time complexity of binary search?
3. How can minimum and maximum be found in one traversal?
