//
//  exp_03_02.h
//  exp_03
//
//  Created by Toxni on 12/28/15.
//  Copyright © 2015 Toxni. All rights reserved.
//

#ifndef exp_03_02_h
#define exp_03_02_h


#endif /* exp_03_02_h */


typedef struct Queue {
    int * qBase;
    int front;
    int rear;
}QUEUE;

//init a queue

void initQueue(QUEUE *pq) {
    
    pq->qBase = (int *)malloc(sizeof(int));
   
    
    pq->front = pq->rear = 0;
    
}

//insert an element


void enQueue(QUEUE *pq, int value) {
    
    pq->qBase[pq->rear] = value;
    pq->rear = (pq->rear + 1);
    printf("%d enQueue \n", value);
    
}


//delete an element


void deQueue(QUEUE *pq, int *value) {
    
    *value = pq->qBase[pq->front];
    printf("%d deQueue \n", *value);
    pq->front = (pq->front + 1);
    
}


//aa function

void aa(QUEUE *pq) {
    

    printf("now in the queue\n");
    printf("front is %d,rear is %d :\n", pq->front, pq->rear);
    
    int tail = pq->front;
    while(tail != pq->rear) {
                
        printf(" %d ",pq->qBase[tail]);
        tail = (tail + 1);
    }
    printf("\n");

}







