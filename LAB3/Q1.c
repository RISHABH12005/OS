/*
Question 1 
PROCESS STATES AND STATE TRANSITIONS
Objective:
To understand the different states of a process and the transitions between these states during execution.
Problem Statement:
Consider a process P1 executing in a single-processor system. During its lifetime, the process moves through different states such as New, Ready, Running, Waiting, and Terminated.
You are required to identify the process state corresponding to each system event and verify that the transitions are valid according to the process state model.
Test Case (Sequence of Events):
    1. Process P1 is created by the operating system.
    2. Process P1 is placed in the ready queue.
    3. The CPU scheduler selects P1 for execution.
    4. Process P1 requests an I/O operation.
    5. The I/O operation completes.
    6. Process P1 finishes execution.
Expected Outcome:
Event – Process State
Process created – New
Admitted to ready queue – Ready
Dispatched to CPU – Running
Requests I/O – Waiting (Blocked)
I/O completed – Ready
Execution completed – Terminated
The process follows all valid state transitions without any invalid movement.
*/

#include <stdio.h>
int main() {
    printf("Process P1 State Transitions:\n");
    printf("Process Created       : New\n");
    printf("Admitted to CPU Queue : Ready\n");
    printf("CPU Allocated         : Running\n");
    printf("I/O Requested         : Waiting\n");
    printf("I/O Completed         : Ready\n");
    printf("Execution Finished    : Terminated\n");
    return 0;
}
