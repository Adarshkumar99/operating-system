#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
int main()
{
  int bst[20],pro[20],waitt[20],tat[20],pr[20],i,j,n,tot=0,pos,tem,avg_wait,avg_tat;
     printf("Enter total no of process:");
    scanf("%d",&n);
 
    printf("\nEnter burst time and priority\n");
    for(i=0;i<n;i++)
    {
        printf("\nP[%d]\n",i+1);
        printf("Burst time:");
        scanf("%d",&bst[i]);
        printf("priority:");
        scanf("%d",&pr[i]);
        p[i]=i+1;           
    }
    for(i=0;i<n;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(pr[j]<pr[pos])
        }
    
