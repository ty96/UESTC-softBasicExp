//
//  main.c
//  exp_02
//
//  Created by Toxni on 12/9/15.
//  Copyright © 2015 Toxni. All rights reserved.
//

#include <stdio.h>

typedef struct node {
    int data;
    struct node* next;
}node;

void createsl(node* *h) {
    node *p = NULL, *s;
    int x;
    *h = (node*) malloc (sizeof(node));
    (*h)->next = NULL;
    
    scanf("%d", &x);
    
    while (x != -1) {
        s = (node*) malloc(sizeof(node));
                s->data = x;
        if ((*h)->next == NULL) {
            (*h)->next = s;
        }
        else {
            p->next = s;
        }
        p = s;
        
        scanf("%d", &x);
    }
    
    p->next = NULL;

}


int main() {
    node* chain;
    printf("please input elements\n");
    createsl(&chain);
    return 0;
}
