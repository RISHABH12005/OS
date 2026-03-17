#include<stdio.h>
int main()
{
int n,i;
int at[20],bt[20],ct[20],tat[20],wt[20];
float avgtat=0,avgwt=0;
printf("Enter number of processes: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("AT and BT for P%d: ",i+1);
scanf("%d%d",&at[i],&bt[i]);
}
ct[0]=at[0]+bt[0];
for(i=1;i<n;i++)
{
if(ct[i-1] < at[i])
ct[i]=at[i]+bt[i];
else
ct[i]=ct[i-1]+bt[i];
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
printf("\nAverage WT = %.2f",avgwt/n);
printf("\nAverage TAT = %.2f",avgtat/n);
printf("\nGantt Chart:\n");
for(i=0;i<n;i++)
printf("|P%d",i+1);
printf("|\n");
return 0;
}
