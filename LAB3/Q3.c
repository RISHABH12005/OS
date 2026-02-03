/*
Question 3
CONTEXT SWITCHING 
Objective:
To understand the steps involved in performing a context switch between two processes.
Problem Statement:
Consider two processes P1 and P2 in a system. Initially, P1 is executing on the CPU and P2 is waiting in the ready state. A timer interrupt occurs, forcing the operating system to perform a context switch.
You are required to show the CPU state before and after the context switch and list the steps involved in the switching process.
Test Case:
Process Details:
Process P1
State: Running
Program Counter: 120
Register R1: 15
Register R2: 25
Process P2
State: Ready
Program Counter: 220
Register R1: 35
Register R2: 45
Expected Outcome:
Before Context Switch:
CPU executing Process P1
Program Counter = 120
R1 = 15, R2 = 25
Steps during Context Switch:
    1. A timer interrupt occurs.
    2. The CPU state of Process P1 is saved into its PCB.
    3. Process P1 changes state from Running to Ready.
    4. The PCB of Process P2 is loaded into the CPU.
    5. Process P2 changes state from Ready to Running.
After Context Switch:
CPU executing Process P2
Program Counter = 220
R1 = 35, R2 = 45
*/

#include <stdio.h>
#include <string.h>
struct PCB {
    int pid, pc, r1, r2;
    char state[10];
};
int main() {
    struct PCB P1 = {101, 120, 15, 25, "Running"};
    struct PCB P2 = {102, 220, 35, 45, "Ready"};
    printf("Before Context Switch:\n");
    printf("P1 State=%s\n", P1.state);
    strcpy(P1.state, "Ready");
    strcpy(P2.state, "Running");
    printf("After Context Switch:\n");
    printf("P2 State=%s\n", P2.state);
    return 0;
}
