#include <stdio.h>
int main() {
    int n, i, t = 0;
    int at[10], bt[10], ct[10], tat[10], wt[10];
    float atat = 0, awt = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d%d", &at[i], &bt[i]);
    for(i = 0; i < n; i++) {
        if(t < at[i]) t = at[i];
        t += bt[i];
        ct[i] = t;
        tat[i] = ct[i] - at[i];
        wt[i] = tat[i] - bt[i];
        atat += tat[i];
        awt += wt[i];
    }
    for(i = 0; i < n; i++)
        printf("%d %d %d %d %d\n", at[i], bt[i], ct[i], tat[i], wt[i]);
    printf("Avg TAT=%.2f\nAvg WT=%.2f", atat/n, awt/n);
    return 0;
}