"""Experiment 2: five basic Matplotlib visualizations."""
from pathlib import Path

import matplotlib
matplotlib.use("Agg")
import matplotlib.pyplot as plt

OUTPUT = Path(__file__).parent / "outputs"
OUTPUT.mkdir(exist_ok=True)

x = [1, 2, 3, 4, 5]
y = [10, 15, 12, 18, 20]
subjects = ["Python", "Java", "R", "Tableau", "SQL"]
marks = [85, 78, 82, 90, 88]
hours = [1, 2, 3, 4, 5, 6]
study_marks = [45, 50, 58, 65, 72, 80]
all_marks = [45, 50, 52, 55, 58, 60, 62, 65, 68, 70, 72, 75, 78, 80, 82, 85, 88, 90]

charts = [
    ("line_chart", lambda: (plt.plot(x, y, marker="o", label="Values"), plt.title("Line Chart"), plt.xlabel("X Values"), plt.ylabel("Y Values"), plt.legend(), plt.grid(True))),
    ("bar_chart", lambda: (plt.bar(subjects, marks), plt.title("Marks by Subject"), plt.xlabel("Subject"), plt.ylabel("Marks"))),
    ("pie_chart", lambda: (plt.pie([35, 25, 20, 20], labels=["Python", "Java", "R", "Tableau"], autopct="%1.1f%%"), plt.title("Technology Usage"))),
    ("scatter_plot", lambda: (plt.scatter(hours, study_marks), plt.title("Study Hours vs Marks"), plt.xlabel("Study Hours"), plt.ylabel("Marks"))),
    ("histogram", lambda: (plt.hist(all_marks, bins=5, edgecolor="black"), plt.title("Distribution of Marks"), plt.xlabel("Marks"), plt.ylabel("Frequency"))),
]

for name, draw in charts:
    plt.figure(figsize=(7, 5))
    draw()
    plt.tight_layout()
    plt.savefig(OUTPUT / f"{name}.png", dpi=150)
    plt.close()
    print(f"Saved {name}.png")
