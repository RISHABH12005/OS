#include<stdio.h>
int main()
{
int n,i,j,time=0;
int at[20],bt[20],ct[20],tat[20],wt[20],done[20]={0};
float rr,maxrr,avgwt=0,avgtat=0;
printf("Enter number of processes: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("AT BT: ");
scanf("%d%d",&at[i],&bt[i]);
}
for(i=0;i<n;i++)
{
maxrr=-1;
int index=-1;
for(j=0;j<n;j++)
{
if(at[j]<=time && done[j]==0)
{
rr=(time-at[j]+bt[j])/(float)bt[j];
if(rr>maxrr)
{
maxrr=rr;
index=j;
}
}
}
time+=bt[index];
ct[index]=time;
done[index]=1;
}
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