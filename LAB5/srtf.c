#include<stdio.h>
int main()
{
int n,i,time=0,smallest,completed=0;
int at[20],bt[20],rt[20],ct[20],tat[20],wt[20];
float avgtat=0,avgwt=0;
printf("Enter number of processes: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("AT BT: ");
scanf("%d%d",&at[i],&bt[i]);
rt[i]=bt[i];
}
while(completed!=n)
{
int min=999;
for(i=0;i<n;i++)
{
if(at[i]<=time && rt[i]<min && rt[i]>0)
{
min=rt[i];
smallest=i;
}
}
rt[smallest]--;
time++;
if(rt[smallest]==0)
{
completed++;
ct[smallest]=time;
}
}
for(i=0;i<n;i++)
{
tat[i]=ct[i]-at[i];
wt[i]=tat[i]-bt[i];
avgtat+=tat[i];
avgwt+=wt[i];
}
printf("\nPID AT BT CT TAT WT\n");
for(i=0;i<n;i++)
printf("P%d %d %d %d %d %d\n",i+1,at[i],bt[i],ct[i],tat[i],wt[i]);
printf("\nAverage WT=%.2f",avgwt/n);
printf("\nAverage TAT=%.2f",avgtat/n);
return 0;
}