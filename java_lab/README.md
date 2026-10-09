# Java Programming Laboratory Virtual Record

Academic Year: 2026-2027

This record contains the requested Java laboratory exercises. Each experiment folder contains its `theory.md` record and the runnable source files for that experiment. Unrelated Java demonstrations remain at the root.

## Experiments

1. [Arrays and Search](EXP-1/)
2. [Basic Arithmetic and Decision Making](EXP-2/)
3. [Number Programs](EXP-3/)
4. [String Programs](EXP-4/)
5. [Packages: Arithmetic and Shapes](EXP-5/)
6. [Interfaces: Student Details and Shapes](EXP-6/)
7. [Inheritance: Account and College Details](EXP-7/)
8. [Threads](EXP-8/)
10. [File Handling](EXP-10/)

## Compile and Run

```bash
cd java_lab
javac -d build EXP-1/*.java
java -cp build AscendingOrder
```

To compile all experiment programs together:

```bash
javac -d build EXP-1/*.java EXP-2/*.java EXP-3/*.java EXP-4/*.java \
	EXP-5/5.a/add/*.java EXP-5/5.a/sub/*.java EXP-5/5.a/mul/*.java \
	EXP-5/5.a/div/*.java EXP-5/5.a/ArithDemo.java \
	EXP-5/5.b/Shape/*.java EXP-5/5.b/Calculate.java \
	EXP-6/6.a/*.java EXP-6/6.b/*.java EXP-7/7.a/*.java EXP-7/7.b/*.java \
	EXP-8/8.a/*.java EXP-8/8.b/*.java EXP-10/10.a/*.java EXP-10/10.b/*.java
```

Experiment 5.a can be compiled with:

```bash
javac -d build EXP-5/5.a/add/*.java EXP-5/5.a/sub/*.java EXP-5/5.a/mul/*.java \
	EXP-5/5.a/div/*.java EXP-5/5.a/ArithDemo.java
java -cp build ArithDemo
```

The sample outputs in each experiment record are representative console runs. Values may differ when different input is supplied.
