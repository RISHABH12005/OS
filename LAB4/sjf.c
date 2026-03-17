#include<stdio.h>
int main()
{
int n,i,j;
int at[20],bt[20],ct[20],tat[20],wt[20],p[20];
float avgtat=0,avgwt=0;
printf("Enter number of processes: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
p[i]=i+1;
printf("AT BT: ");
scanf("%d%d",&at[i],&bt[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(bt[i]>bt[j])
{
int temp;
temp=bt[i]; bt[i]=bt[j]; bt[j]=temp;
temp=at[i]; at[i]=at[j]; at[j]=temp;
temp=p[i]; p[i]=p[j]; p[j]=temp;
}
}
}
ct[0]=bt[0];
for(i=1;i<n;i++)
ct[i]=ct[i-1]+bt[i];
for(i=0;i<n;i++)
{
tat[i]=ct[i]-at[i];
wt[i]=tat[i]-bt[i];
avgwt+=wt[i];
avgtat+=tat[i];
}
printf("\nPID AT BT CT TAT WT\n");
for(i=0;i<n;i++)
printf("P%d %d %d %d %d %d\n",p[i],at[i],bt[i],ct[i],tat[i],wt[i]);
printf("\nAverage WT=%.2f",avgwt/n);
printf("\nAverage TAT=%.2f",avgtat/n);
printf("\nGantt Chart:\n");
for(i=0;i<n;i++)
printf("|P%d",p[i]);
printf("|\n");
return 0;
}
