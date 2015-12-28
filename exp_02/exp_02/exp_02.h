//
//  exp_02.h
//  exp_02
//
//  Created by Toxni on 12/22/15.
//  Copyright © 2015 Toxni. All rights reserved.
//

#ifndef exp_02_h
#define exp_02_h

#include <stdio.h>
#include <stdlib.h>

#endif /* exp_02_h */


typedef int ElemType;


typedef struct Node {
    ElemType data;
    struct Node *next;
}Node, *LinkedList;


//init the chain

LinkedList LinkedListInit() {
    Node *L;
    L = (Node *)malloc(sizeof(Node));
    if(L == NULL)
        printf("malloc failed\n");
    L->next = NULL;
    return 0;
}



LinkedList LinkedListCreate() {
    Node *L;
    L = (Node *)malloc(sizeof(Node));
    L->next = NULL;
    Node *r;
    r = L;
    ElemType x;
    while(scanf("%d",&x) != EOF)
    {
        if (x == -1) {
            break;
        }
        Node *p;
        p = (Node *)malloc(sizeof(Node));
        p->data = x;
        r->next = p;
        r = p;
    }
    return L;
}



LinkedList LinkedListInsert(LinkedList L,int i,ElemType x) {
    Node *pre;
    pre = L;
    int tempi = 0;
    for (tempi = 1; tempi < i; tempi++)
        pre = pre->next;
    Node *p;
    p = (Node *)malloc(sizeof(Node));
    p->data = x;
    p->next = pre->next;
    pre->next = p;
    
    return L;
}



LinkedList LinkedListDelete(LinkedList L, int i) {
    Node *pre;
    Node *p = NULL;
    pre = L;
    int tempi = 0;
    for (tempi = 1; tempi <= i; tempi++) {
        p = pre;
        pre = pre->next;
    }
    p->next = pre->next;

    
    free(p);
    return L;
}


