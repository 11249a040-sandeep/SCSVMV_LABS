# Experiment 5: Connecting to Data and Preparing Data

## Cleaned sample data

| OrderID | Product | Category | Sales | Quantity | Region |
| --- | --- | --- | ---: | ---: | --- |
| 101 | Laptop | Electronics | 55000 | 2 | South |
| 102 | Mobile | Electronics | 20000 | 3 | North |
| 103 | Chair | Furniture | 5000 | 5 | West |
| 104 | Table | Furniture | 7000 | 2 | East |
| 105 | Headphones | Electronics | 3000 | 4 | South |
| 106 | Sofa | Furniture | 25000 | 1 | North |

`program.py` reads `sales_data.csv`, checks missing values, removes duplicate
rows, validates numeric columns, and writes
[`cleaned_sales_data.csv`](cleaned_sales_data.csv).

| Check | Result |
| --- | ---: |
| Input rows | 6 |
| Output rows | 6 |
| Duplicate rows removed | 0 |
| Missing values | 0 |
