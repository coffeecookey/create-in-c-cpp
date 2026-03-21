#include <stdio.h>

// sort processes by arrival time
void sort(int processBT[], int arrivalTime[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arrivalTime[j] > arrivalTime[j+1]){
                int temp = arrivalTime[j];
                arrivalTime[j] = arrivalTime[j+1];
                arrivalTime[j+1] = temp;

                temp = processBT[j];
                processBT[j] = processBT[j+1];
                processBT[j+1] = temp;
            }
        }
    }
}

void findCT(int processBT[], int arrivalTime[], int n, int processCT[]){
    // To find CT in FCFS, always pick the process with the earliest AT
    // arrange processes in ready queue in increasing order of AT
    // Let it completely execute
    // select next process from ready queue 
    // repeat till all processes are executed

    int curr_time = 0;
    for(int i = 0; i < n; i++){
        if(arrivalTime[i] > curr_time){
            // if process has not arrived yet, CPU is idle until it arrives so time+=AT
            curr_time = arrivalTime[i];
        }
        // when it has arrived then time += BT i.e. we just let it run
        curr_time += processBT[i];
        processCT[i] = curr_time;
    }
}

void findWT(int processBT[], int arrivalTime[], int n, int WT[]){
    // general formula for WT = TAT-BT = (CT - AT)-BT
    int CT[n];
    findCT(processBT, arrivalTime, n, CT);

    for(int i = 0; i < n; i++){
        WT[i] = CT[i] - arrivalTime[i] - processBT[i];
    }
}

void findTAT(int processBT[], int arrivalTime[], int n, int TAT[]){
    // general formula for TAT = CT-AT
    int CT[n];
    findCT(processBT, arrivalTime, n, CT);

    for(int i = 0; i < n; i++){
        TAT[i] = CT[i] - arrivalTime[i];
    }
}

int avg(int arr[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum / n;
}

int main(void){
    int n; // n is num of processes
    scanf("%d", &n);

    int processBT[n];
    int arrivalTime[n];
    int TAT[n];
    int WT[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &processBT[i]); // user input for burst time
    }
    for(int i = 0; i < n; i++){
        scanf("%d", &arrivalTime[i]); // user input for arrival time
    }

    sort(processBT, arrivalTime, n);
    findTAT(processBT, arrivalTime, n, TAT);
    findWT(processBT, arrivalTime, n, WT);

    printf("Average Turn Around Time: %d\n", avg(TAT, n));
    printf("Average Waiting Time: %d\n", avg(WT, n));
    return 0;
}
