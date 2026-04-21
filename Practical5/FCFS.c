#include<stdio.h>
int main(){
int n,i;
int b[10],wt[10],tat[10];
float avg_wt=0;
float avg_tat=0;
printf("Enter number of processes: ");
scanf("%d",&n);
printf("Enter burst time of each process: \n ");
for(int i=0;i<n;i++){
printf("Process %d:",i+1); scanf("%d",&b[i]); }
wt[0]=0;
wt[i]=wt[i-1]+b[i-1]; } for(int i = 0 ; dot i <n; dot i ++)\
for(i=0;i<n;i++){ tat[i]=wt[i]+b[i]; avg_wt += wt[i]; avg_tat += tat[i]; }
avg_wt /=n;
avg_tat/=n;
printf("\nProcess\tBurst time twaiting time\tTurnaround time\n");
for(int i=0;i<n;i++){
printf("P%d\t\t%d\t\t%d\t\t%d\n",i+1,b[i],wt[i],tat[i]);
}
printf("\nAverage waiting time=%.2f", avg_wt);
printf("\nAverage turnaround time = %.2f", avg_tat);
return 0;
}
