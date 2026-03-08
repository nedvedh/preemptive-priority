# Preemptive Priority CPU Scheduling (C)

This program implements **Preemptive Priority CPU Scheduling** where **lower priority value means higher priority**.

## Input Format

```
n
PID1 AT1 BT1 PR1
PID2 AT2 BT2 PR2
...
PIDn ATn BTn PRn
```

## Example Input

```
5
P1 0 5 2
P2 0 4 5
P3 1 3 1
P4 2 3 4
P5 3 3 3
```

## Example Output

```
Waiting Time:
P1 3
P2 14
P3 0
P4 9
P5 5

Turnaround Time:
P1 8
P2 18
P3 3
P4 12
P5 8

Average Waiting Time: 6.20
Average Turnaround Time: 9.80
```
