#include<stdio.h>
void avgTAT_and_WT(int tat[],int wt[],int m)
{
    float sum1=0,sum2=0;int i=0;
    float avgtat=0,avgwt=0;
    for(i=0;i<m;i++)
    {
        sum1=sum1+tat[i];
        sum2=sum2+wt[i];
    }
    avgtat=sum1/m;
    avgwt=sum2/m;
    printf("Average TAT: %0.2f\n",avgtat);
    printf("Average WT: %0.2f\n",avgwt);
}
void main()
{
    int AT[100],BT[100],CT[100],TAT[100],WT[100],i,j,idle_time=0,n;
    char PID[100];
    printf("enter the no of process");
    scanf("%d",&n);
    printf("Enter the processess name");
    for(i=0;i<n;i++)
    {
        scanf("%s",&PID[i]);
    }

    printf("Enter the arrival time");
    for(i=0;i<n;i++)
    {
        scanf("%d",&AT[i]);
    }
    printf("Enter the burst time");
    for(i=0;i<n;i++)
    {
        scanf("%d",&BT[i]);
    }
    CT[0]=BT[0]+AT[0];
    for(j=1;j<n;j++)
    {

                CT[j]=CT[j-1]+BT[j];


    }
    for(j=0;j<n;j++)
    {
        TAT[j]=CT[j]-AT[j];
    }
    for(j=0;j<n;j++)
    {
        WT[j]=TAT[j]-BT[j];
    }
     printf("PID\tAT\tBT\tCT\tTAT\tWT\n");
    for(i=0;i<n;i++)
    {
        printf("%c\t%d\t%d\t%d\t%d\t%d\n",PID[i],AT[i],BT[i],CT[i],TAT[i],WT[i]);
    }
    avgTAT_and_WT(TAT,WT,n);

}
