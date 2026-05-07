#include<stdio.h>
int lock = 0;
void process(int i, int n)
{
    for(int k=0;k<n;k++)
    {
        printf("Process %d requesting critical section\n", i);
        while(lock == 1);   // wait
        lock = 1;
        printf("Process %d entering critical section\n", i);
        printf("Process %d leaving critical section\n", i);
        lock = 0;
    }
}
int main()
{
    int n;
    printf("Enter number of attempts: ");
    scanf("%d",&n);
    process(0,n);
    process(1,n);
    return 0;
}