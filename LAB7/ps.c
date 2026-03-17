#include<stdio.h>
int main()
{
int n,i,j;
int at[20],bt[20],pr[20],ct[20],tat[20],wt[20];
float avgwt=0,avgtat=0;
printf("Enter number of processes: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("AT BT Priority: ");
scanf("%d%d%d",&at[i],&bt[i],&pr[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(pr[i]>pr[j])
{
int temp;
temp=pr[i]; pr[i]=pr[j]; pr[j]=temp;
temp=bt[i]; bt[i]=bt[j]; bt[j]=temp;
temp=at[i]; at[i]=at[j]; at[j]=temp;
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
printf("\nPID AT BT PR CT TAT WT\n");
for(i=0;i<n;i++)
printf("P%d %d %d %d %d %d %d\n",i+1,at[i],bt[i],pr[i],ct[i],tat[i],wt[i]);
printf("\nAverage WT=%.2f",avgwt/n);
printf("\nAverage TAT=%.2f",avgtat/n);
return 0;
}