## First come first serve (Non-preemptive)

This is a scheduling algorithm, one of the simplest ones.
The idea is pretty simple - The process that comes first gets to execute before all the other processes. To know which process came first, we look at something called the Arrival Time (AT) of a process.

- <b>Arrival Time:</b> Time at which the process enters the ready queue (similar to how we stand in line or queue waiting for our turn, processes do that too!) 
- <b>Burst Time:</b> Time required for execution of process
- <b>Waiting Time:</b> Total time spent by a process in the ready queue, waiting to get CPU time
- <b>Turn Around Time:</b> total time interval between a process's submission and its completion


When a process enters the ready queue, The CPU will note its arrival time and will know its burst time as well.

This gives some logical idea of how the algorithm would be coded.

The main function should taken in some user input in the form of burst time for each process, and let there be n processes. 

The rough algorithm is - 
1. Ask for the number of processes (n)
2. Ask user to enter the arrival time for all processes
3. Ask user to enter burst time for all processes
4. Calculate the average waiting time
5. Calculate the average turn around time
6. return the average waiting time and average turn around time

I saw a lot of versions of this online, I tried to implement the version that I have studied.

Steps to run - 
1. compile the file 
```cd fcfs
gcc fcfs.c -o fcfs```

2. Run the file
`./fcfs`