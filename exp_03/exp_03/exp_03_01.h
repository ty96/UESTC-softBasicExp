//
//  exp_03.h
//  exp_03
//
//  Created by Toxni on 12/20/15.
//  Copyright © 2015 Toxni. All rights reserved.
//

#ifndef exp_03_h
#define exp_03_h

#include <stdio.h>
#include <stdlib.h>

#endif /* exp_03_h */


typedef int elementType;
typedef struct node {
    elementType data;
    struct node *next;
}stackNode, *linkStack;

void initStack(linkStack top) {
    top->next = NULL;
}


    
int push(linkStack top, elementType element) {
    stackNode *temp;
    temp = (stackNode *)malloc(sizeof(stackNode));
    if(temp == NULL) return 0;
        temp->data = element;
        temp->next = top->next;
        top->next = temp;
        return 1;
}
    
int pop(linkStack top, elementType *element) {
    stackNode *temp = top->next;
    *element = temp->data;
    top->next = temp->next;
    free(temp);
    return 1;
}
        
