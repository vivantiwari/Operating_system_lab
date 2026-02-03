#include<stdio.h>
int main(){
	int n,i;
	int bt[10],wt[10],tat[10];
	float avg_wt,avg_tat;
	printf("Enter number of processes: ");
	scanf("%d",&n);
	printf("Enter burst time of each process\n");
	for(i=0; i<n; i++){
		printf("Process %d: ",i+1);
		scanf("%d",&bt[i]);
	}
	//Calculating waiting time for each process
	wt[0]=0;
	for(i=1; i<n; i++){
		wt[i]=wt[i-1]+bt[i-1];
	}
	//Calculating turn around time for each process
	for(i=0; i<n; i++){
		tat[i]=wt[i]-bt[i];
	}
	avg_wt=0;
	//Calculating  average wait time
	for(i=0; i<n; i++){
		avg_wt+=wt[i];
	}
	avg_wt/=n;
	//Calculating average turn around time
	for(i=0; i<n; i++){
		avg_tat+=tat[i];
	}
	avg_tat/=n;
	printf("\nBurst time\tWaiting time\tTurn around time\n");
	for(i=0; i<n; i++){
		printf("%d\t\t%d\t\t%d\n",bt[i],wt[i],tat[i]);
	}

	printf("\nAverage wait time for %d processes is %.2f\n",n,avg_wt);
	printf("\nAverage turn around time for %d processes is %.2f\n",n,avg_tat);
	return 0;
}
