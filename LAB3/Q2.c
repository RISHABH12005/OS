/*
Question 2
PROCESS CONTROL BLOCK (PCB) STUDY
Objective:
To understand the structure and role of the Process Control Block (PCB) in process management.
Problem Statement:
The operating system maintains a Process Control Block for each process. The PCB stores important information needed for process execution and context switching.
Given the details of two processes, P1 and P2, you are required to list the PCB contents and identify the fields that are saved during a context switch.
Test Case:
Process P1
Process ID: 101
Process State: Running
Program Counter: 500
Registers: R1 = 5, R2 = 10
Process P2
Process ID: 102
Process State: Ready
Program Counter: 300
Registers: R1 = 8, R2 = 12
Expected Outcome:
PCB of Process P1 contains:
    • Process ID: 101
    • Process State: Running
    • Program Counter: 500
    • CPU Registers: R1 = 5, R2 = 10
PCB of Process P2 contains:
    • Process ID: 102
    • Process State: Ready
    • Program Counter: 300
    • CPU Registers: R1 = 8, R2 = 12
During a context switch, the following fields are saved and restored:
    • Program Counter
    • CPU Registers
    • Process State
*/

#include <stdio.h>
struct PCB {
    int pid, pc, r1, r2;
    char state[10];
};
int main() {
    struct PCB P1 = {101, 500, 5, 10, "Running"};
    struct PCB P2 = {102, 300, 8, 12, "Ready"};
    printf("PCB of P1: PID=%d PC=%d R1=%d R2=%d State=%s\n",
           P1.pid, P1.pc, P1.r1, P1.r2, P1.state);
    printf("PCB of P2: PID=%d PC=%d R1=%d R2=%d State=%s\n",
           P2.pid, P2.pc, P2.r1, P2.r2, P2.state);
    return 0;
}