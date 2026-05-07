#include<stdio.h>
int turn = 0;   // 0 = P1, 1 = P2
void process1()
{
    while(turn != 0);   // wait
    printf("Process 1 is in Critical Section\n");
    turn = 1;   // give turn to P2
}
void process2()
{
    while(turn != 1);
    printf("Process 2 is in Critical Section\n");
    turn = 0;   // give turn to P1
}
int main()
{
    process1();
    process2();
    return 0;
}