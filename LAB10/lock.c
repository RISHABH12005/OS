#include<stdio.h>
int lock = 0;   // 0 = free, 1 = busy
void process1()
{
    while(lock == 1);   // wait
    lock = 1;   // enter CS
    printf("Process 1 is in Critical Section\n");
    lock = 0;   // exit CS
}
void process2()
{
    while(lock == 1);
    lock = 1;
    printf("Process 2 is in Critical Section\n");
    lock = 0;
}
int main()
{
    process1();
    process2();
    return 0;
}