#include<stdio.h>
int main()
{
    int n = 5, m = 3;
    int alloc[5][3] = {
        {0,1,0},
        {2,0,0},
        {3,0,2},
        {2,1,1},
        {0,0,2}
    };
    int max[5][3] = {
        {7,5,3},
        {3,2,2},
        {9,0,2},
        {2,2,2},
        {4,3,3}
    };
    int avail[3] = {3,3,2};
    int need[5][3];
    int finish[5] = {0};
    int safeSeq[5];
    int i,j,count=0;
    // Calculate Need matrix
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            need[i][j] = max[i][j] - alloc[i][j];
    while(count < n)
    {
        int found = 0;
        for(i=0;i<n;i++)
        {
            if(finish[i]==0)
            {
                int flag = 0;
                for(j=0;j<m;j++)
                {
                    if(need[i][j] > avail[j])
                    {
                        flag = 1;
                        break;
                    }
                }
                if(flag == 0)
                {
                    for(j=0;j<m;j++)
                        avail[j] += alloc[i][j];
                    safeSeq[count++] = i;
                    finish[i] = 1;
                    found = 1;
                }
            }
        }

        if(found == 0)
        {
            printf("System is NOT in safe state\n");
            return 0;
        }
    }
    printf("System is in SAFE state\nSafe Sequence: ");
    for(i=0;i<n;i++)
        printf("P%d ", safeSeq[i]);
    return 0;
}