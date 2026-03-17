#include<stdio.h>
int main()
{
int n,i,tq,time=0,remain;
int at[20],bt[20],rt[20],ct[20],tat[20],wt[20];
printf("Enter number of processes: ");
scanf("%d",&n);
remain=n;
for(i=0;i<n;i++)
{
printf("AT BT: ");
scanf("%d%d",&at[i],&bt[i]);
rt[i]=bt[i];
}
printf("Enter Time Quantum: ");
scanf("%d",&tq);
while(remain!=0)
{
for(i=0;i<n;i++)
{
if(rt[i]>0)
{
if(rt[i]<=tq)
{
time+=rt[i];
rt[i]=0;
ct[i]=time;
remain--;
}
else
{
rt[i]-=tq;
time+=tq;
}
}
}
}
float avgwt=0,avgtat=0;
for(i=0;i<n;i++)
{
tat[i]=ct[i]-at[i];
wt[i]=tat[i]-bt[i];
avgwt+=wt[i];
avgtat+=tat[i];
}
printf("\nPID AT BT CT TAT WT\n");
for(i=0;i<n;i++)
printf("P%d %d %d %d %d %d\n",i+1,at[i],bt[i],ct[i],tat[i],wt[i]);
printf("\nAverage WT=%.2f",avgwt/n);
printf("\nAverage TAT=%.2f",avgtat/n);
return 0;
}