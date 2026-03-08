#include <stdio.h>
#include <limits.h>

int main() {

    int n;
    scanf("%d",&n);

    char pid[n][10];
    int at[n],bt[n],pr[n];
    int rbt[n],ct[n],wt[n],tat[n];

    for(int i=0;i<n;i++) {
        scanf("%s %d %d %d",pid[i],&at[i],&bt[i],&pr[i]);
        rbt[i]=bt[i];
    }

    int time=0,completed=0;

    while(completed<n) {

        int idx=-1;
        int min=INT_MAX;

        for(int i=0;i<n;i++) {
            if(at[i]<=time && rbt[i]>0 && pr[i]<min) {
                min=pr[i];
                idx=i;
            }
        }

        if(idx==-1) {
            time++;
            continue;
        }

        rbt[idx]--;
        time++;

        if(rbt[idx]==0) {
            ct[idx]=time;
            completed++;
        }
    }

    float avgwt=0,avgtat=0;

    for(int i=0;i<n;i++) {
        tat[i]=ct[i]-at[i];
        wt[i]=tat[i]-bt[i];
        avgwt+=wt[i];
        avgtat+=tat[i];
    }

    printf("Waiting Time:\n");
    for(int i=0;i<n;i++) {
        printf("%s %d\n",pid[i],wt[i]);
    }

    printf("Turnaround Time:\n");
    for(int i=0;i<n;i++) {
        printf("%s %d\n",pid[i],tat[i]);
    }

    printf("Average Waiting Time: %.2f\n",avgwt/n);
    printf("Average Turnaround Time: %.2f\n",avgtat/n);

    return 0;
}
