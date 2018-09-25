/* FSFS Disk Scheduling Algorithm
 */
#include<stdio.h>
#include<stdlib.h>

void main() {
	int n;
	printf("Enter the size of the Queue: ");
	scanf("%d", &n);
	int queue[n] /* Array for the queue */;
	int seek = 0; /* for total seek */;
	int head; // for head position
	int i; // control variable for various loops
	
	printf("Enter the locations to be accessed: ");
	for(i = 1;i < n; i++) {
		scanf("%d", &queue[i]);
	}
	printf("Enter the initial head position: ");
	scanf("%d", &head);
	queue[0] = head;
	for(i = 0; i <= n-1; i++) {
		seek += abs(queue[i] - queue[i-1]);
	}
	printf("Total seek time: %d", seek);
	printf("Average seek time: %d", seek/n);
}
