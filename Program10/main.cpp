#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i, NOP, sum=0,c=0, y, quant, wt=0, tat=0, a[10], bt[10], temp[10];
    float avg_wt, avg_tat;
    printf("Total number of process in the system: ");
    scanf("%d", &NOP);
    y = NOP;

    for(i=0; i<NOP; i++)
    {
        printf("\nEnter the Arrival and Burst time of the Process %d\n", i+1);
        printf("Arrival time is: ");
        scanf("%d", &a[i]);
        printf("Burst time is: ");
        scanf("%d", &bt[i]);
        temp[i] = bt[i];
    }
    printf("\nEnter the Time Quantum for the process: ");
    scanf("%d", &quant);
    printf("\n Process No \t\t Burst Time \t\t TAT \t\t Waiting Time ");
    for(sum=0, i = 0; y!=0; )
    {
        if(temp[i] <= quant && temp[i] > 0)
        {
            sum = sum + temp[i];
            temp[i] = 0;
            c=1;
        }
        else if(temp[i] > 0)
        {
            temp[i] = temp[i] - quant;
            sum = sum + quant;
        }
        if(temp[i]==0 && c==1)
        {
            y--;
            printf("\nProcess No %d \t\t %d \t\t\t %d\t\t\t %d", i+1, bt[i], sum-a[i], sum-a[i]-bt[i]);
            wt = wt+sum-a[i]-bt[i];
            tat = tat+sum-a[i];
            c=0;
        }
        if(i==NOP-1)
        {
            i=0;
        }
        else if(a[i+1]<=sum)
        {
            i++;
        }
        else
        {
            i=0;
        }
    }
    avg_wt = wt * 1.0/NOP;
    avg_tat = tat * 1.0/NOP;
    printf("\n Average Turn Around Time: %f", avg_wt);
    printf("\n Average Waiting Time: %f", avg_tat);
    system("pause");
}
