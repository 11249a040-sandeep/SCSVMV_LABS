"""Experiment 6: summary statistics and grouped sales."""
from pathlib import Path
import pandas as pd

source = Path(__file__).parents[1] / "05-data-preparation" / "sales_data.csv"
data = pd.read_csv(source)
sales = data["Sales"]
print(f"Total Sales: {sales.sum()}")
print(f"Average Sales: {sales.mean():.2f}")
print(f"Minimum Sales: {sales.min()}")
print(f"Maximum Sales: {sales.max()}")
print("\nSales by Category:")
print(data.groupby("Category")["Sales"].sum())
