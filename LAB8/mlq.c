#include<stdio.h>
int main()
{
int n,i,tq=3;
int bt[20],rt[20],ct[20],tat[20],wt[20];
char q[20];
printf("Enter number of processes: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Queue(F/B) and BT: ");
scanf(" %c%d",&q[i],&bt[i]);
rt[i]=bt[i];
}
int time=0;
for(i=0;i<n;i++)
{
if(q[i]=='F')
{
if(rt[i]<=tq)
{
time+=rt[i];
rt[i]=0;
ct[i]=time;
}
else
{
rt[i]-=tq;
time+=tq;
}
}
}
for(i=0;i<n;i++)
{
if(q[i]=='B')
{
time+=rt[i];
ct[i]=time;
}
}
float avgwt=0,avgtat=0;
for(i=0;i<n;i++)
{
tat[i]=ct[i];
wt[i]=tat[i]-bt[i];
avgwt+=wt[i];
avgtat+=tat[i];
}
printf("\nPID BT CT TAT WT\n");
for(i=0;i<n;i++)
printf("P%d %d %d %d %d\n",i+1,bt[i],ct[i],tat[i],wt[i]);
printf("\nAverage WT=%.2f",avgwt/n);
printf("\nAverage TAT=%.2f",avgtat/n);
return 0;
}