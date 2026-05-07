#include<stdio.h>
int flag[2] = {0,0};
int turn;
void process(int i, int n)
{
    int j = 1 - i;
    for(int k=0;k<n;k++)
    {
        printf("Process %d requesting critical section\n", i);
        flag[i] = 1;
        turn = j;
        while(flag[j] && turn == j);
        printf("Process %d entering critical section\n", i);
        printf("Process %d leaving critical section\n", i);
        flag[i] = 0;
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