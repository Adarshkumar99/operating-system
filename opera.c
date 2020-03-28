#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
int main()
{
  int bst[20],p[20],waitt[20],tat[20],pr[20],i,j,n,tot=0,pos,tem,avg_wait,avg_tat;
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
              pos=j;
        }
      
        tem=pr[i];
        pr[i]=pr[pos];
        pr[pos]=tem;
 
        tem=bst[i];
        bst[i]=bst[pos];
        bst[pos]=tem;
 
        tem=p[i];
        p[i]=p[pos];
        p[pos]=tem;
    }
 
    waitt[0]=0;	
 
    for(i=1;i<n;i++)
    {
        waitt[i]=0;
        for(j=0;j<i;j++)
            waitt[i]+=bst[j];
 
        tot+=waitt[i];
    }
 
    avg_wait=tot/n;      
    tot=0;
 
    printf("\nProcess\t    Burst Time    \tWaiting Time\tTurnaround Time");
    for(i=0;i<n;i++)
    {
        tat[i]=bst[i]+waitt[i];     
        tot+=tat[i];
        printf("\nP[%d]\t\t  %d\t\t    %d\t\t\t%d",p[i],bst[i],waitt[i],tat[i]);
    }
 
    avg_tat=tot/n; 
    printf("\n\nAverage waiting time=%d",avg_wait);
    printf("\nAverage turnaround time=%d\n",avg_tat);
 
	return 0;
}
      
    
