"""Experiment 5: clean a sales CSV for Tableau."""
from pathlib import Path
import pandas as pd

ROOT = Path(__file__).parent
source = ROOT / "sales_data.csv"
cleaned = ROOT / "cleaned_sales_data.csv"
data = pd.read_csv(source)
print(data.head())
print("\nMissing values:\n", data.isna().sum())
data = data.drop_duplicates().copy()
data["Sales"] = pd.to_numeric(data["Sales"], errors="raise")
data["Quantity"] = pd.to_numeric(data["Quantity"], errors="raise")
data.to_csv(cleaned, index=False)
print(f"\nData prepared successfully: {cleaned.name}")
