#include <stdio.h>
int main() {
    int n, i, t = 0, done = 0;
    int at[10], bt[10], ct[10], tat[10], wt[10], used[10] = {0};
    float atat = 0, awt = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d%d", &at[i], &bt[i]);
    while(done < n) {
        int min = 9999, p = -1;
        for(i = 0; i < n; i++)
            if(!used[i] && at[i] <= t && bt[i] < min)
                min = bt[i], p = i;
        if(p == -1) { t++; continue; }
        t += bt[p];
        ct[p] = t;
        tat[p] = ct[p] - at[p];
        wt[p] = tat[p] - bt[p];
        atat += tat[p];
        awt += wt[p];
        used[p] = 1;
        done++;
    }
    for(i = 0; i < n; i++)
        printf("%d %d %d %d %d\n", at[i], bt[i], ct[i], tat[i], wt[i]);
    printf("Avg TAT=%.2f\nAvg WT=%.2f", atat/n, awt/n);
    return 0;
}
