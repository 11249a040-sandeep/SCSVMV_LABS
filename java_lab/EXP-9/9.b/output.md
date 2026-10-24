# Console output and resulting file

The writer's console output was:

```text
Wrote A-Z to sample2.txt
```

After the program completed, `sample2.txt` contained:

```text
ABCDEFGHIJKLMNOPQRSTUVWXYZ
```

`WriteFile` and `ReadFile` are used instead of `FileWriter` and `FileReader`
for the class names, avoiding collisions with the classes in `java.io`.
