## Producer-Consumer or Bounded Buffer Problem

In this problem, we have 2 processes, one process takes resources from a common before to use (consumer process) and the other process adds resources to the common buffer (producer). This is a classic synchronisation problem that occurs when multiple process try to access a shared pool of resources. To resolve any problems, we have to ensure that the producer and consumer processes do not both try to access the buffer at the same time.

To implement this, we use a semaphore. Semaphores are integer based variable values that are used for signaling to manage any conflicts between concurrent processes.

Steps to run - 
1. compile the file 
```
cd producer-consumer
gcc pc.c -o pc
```

2. Run the file
```
./pc
```
