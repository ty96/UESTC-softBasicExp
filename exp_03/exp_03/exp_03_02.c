//
//  exp_03.c
//  exp_03
//
//  Created by Toxni on 12/20/15.
//  Copyright © 2015 Toxni. All rights reserved.
//

#include "exp_03_02.h"


int main() {
    
    QUEUE queue;

    initQueue(&queue);
    enQueue(&queue, 2);
    enQueue(&queue, 3);
    enQueue(&queue, -4);
    enQueue(&queue, 6);
    enQueue(&queue, -5);
    enQueue(&queue, 8);
    enQueue(&queue, -9);
    enQueue(&queue, 7);
    enQueue(&queue, -10);
    enQueue(&queue, 20);
    
    aa(&queue);

}