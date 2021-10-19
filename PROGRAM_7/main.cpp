#include<stdio.h>
void findWaitingTime(int processes[], int n, int bt[], int wt[])
{
    wt[1] = 0;
    for (int i =2; i <= n ; i++ )
        wt[i] = bt[i-1] + wt[i-1] ;
}
void findTurnAroundTime( int processes[], int n, int bt[], int wt[], int tat[])
{
    for (int i = 1; i <= n ; i++)
    tat[i] = bt[i] + wt[i];
}
void findavgTime( int processes[], int n, int bt[])
{
    int wt[n], tat[n], total_wt = 0, total_tat = 0;
    findWaitingTime(processes, n, bt, wt);
    findTurnAroundTime(processes, n, bt, wt, tat);
    printf("Processes\tBurst time\tWaiting time\tTurn around time\n");
    for (int i=1; i<=n; i++)
    {
        total_wt = total_wt + wt[i];
        total_tat = total_tat + tat[i];
        printf(" %d ",(i));
        printf("\t\t %d ", bt[i] );
        printf("\t\t %d",wt[i] );
        printf("\t\t %d\n",tat[i] );
    }
    float s=(float)total_wt / (float)n;
    float t=(float)total_tat / (float)n;
    printf("Average waiting time = %.2f",s);
    printf("\n");
    printf("Average turn around time = %.2f ",t);
}
int main()
{
    int processes[100],n,burst_time[100];
    printf("Enter the number of processes: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        processes[i]=i;
    }
    for(int i=1;i<=n;i++)
    {
        printf("Enter execution/burst time of process %d: ",i);
        scanf("%d",&burst_time[i]);
    }
findavgTime(processes, n, burst_time);
return 0;
}
