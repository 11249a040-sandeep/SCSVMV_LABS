# DBMS Lab

This lab follows the experiments in `DBMS LAB-1.docx` and uses Oracle Database Free for SQL and PL/SQL execution.

## Setup

Start the database from this directory:

```bash
docker compose up -d
```

The first startup can take a few minutes. The database listener is available at `localhost:1521/FREEPDB1`.

Connect with SQL Developer, SQLcl, or another Oracle client using:

```text
Host: localhost
Port: 1521
Service: FREEPDB1
User: SYSTEM
Password: OracleLab123
```

Stop the database with `docker compose down`. Use `docker compose down -v` only when you want to delete the stored database data.

## Experiments

Each experiment directory contains the executable SQL or PL/SQL program and a short theory/procedure note. Run scripts in numerical order when an experiment has multiple files.

| Experiment | Topic |
| --- | --- |
| 1 | Database creation and retrieval queries |
| 2 | DML and DDL operations |
| 3 | DCL and TCL commands |
| 4 | Integrity constraints |
| 5 | Subqueries and set operators |
| 6 | Aggregate functions, `GROUP BY`, and `HAVING` |
| 7 | Views, sequences, indexes, and savepoints |
| 8 | Functional dependencies and normalization |
| 9 | Relationships, joins, and subqueries |
| 10 | PL/SQL blocks, exceptions, procedures, functions, triggers, and cursors |
| 11 | Mini database design projects |

## Notes

The supplied manual mixes MySQL and Oracle syntax. The completed executable scripts use Oracle syntax so that the PL/SQL experiment can run in the same environment. Where Oracle differs from the manual, the experiment notes identify the equivalent operation.