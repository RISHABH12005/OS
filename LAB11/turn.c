#include<stdio.h>
int turn = 0;
void process0(int n)
{
    for(int i=0;i<n;i++)
    {
        while(turn != 0);
        printf("Process 0 entering critical section\n");
        turn = 1;
    }
}
void process1(int n)
{
    for(int i=0;i<n;i++)
    {
        while(turn != 1);
        printf("Process 1 entering critical section\n");
        turn = 0;
    }
}
int main()
{
    int n;
    printf("Enter number of attempts: ");
    scanf("%d",&n);
    process0(n);
    process1(n);
    return 0;
}