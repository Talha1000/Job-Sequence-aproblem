#include<stdio.h>
struct Job
{
    char id;
    int deadLine;
    int profit;
} joblist[100], temp;

int min(int a, int b)
{
    return (a<b)
           return a;
    return b;
}

void jobSequence(Job jobList[], int n)
{
    int result[100];
    bool slot[n];

    for (int i=0; i<n; i++)
        slot[i] = false;

    for (int i=0; i<n; i++)
    {
        for (int j=min(n, jobList[i].deadLine)-1; j>=0; j--)
        {
            if (slot[j]==false)
            {
                jobSeq[j] = i;
                slot[j] = true;
                break;
            }
        }
    }

    for (int i=0; i<n; i++)
        if (slot[i])
            printf("%d ", jobList[result[i]].id);
}

int main()
{

    int n = 5;
    printf("Input : \n");
    scanf("%d",&n);
    for(i = 0 ; i < n ; i++)
    {
        scanf("%d %d %d", &joblist[i].id, &joblist[i].deadline, &joblist[i].profit) ;
    }
    jobSequence(jobList, n);
}
