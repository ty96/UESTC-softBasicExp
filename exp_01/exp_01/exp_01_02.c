//
//  exp_01_02.c
//  exp_01
//
//  Created by Toxni on 12/8/15.
//  Copyright © 2015 Toxni. All rights reserved.
//


#include <stdlib.h>
#include <time.h>
#include "exp_01.h"

int X;
int NEWMAX = 10;

void createlist(list_type *lp) {
    int i;
    for (i = 0; i < NEWMAX; i++) {
        lp->data[i] = (i + 1)*10;
    }
    lp->length = NEWMAX;
}

int creatx() {
    int x;
    srand((unsigned)time(NULL));
    x = rand()%100;
    printf("x is %d\n", x);
    X = x;
    return x;
}


int main() {
    int i;
    list_type list;
    createlist(&list);
    showlist(&list);
    creatx();
    for (i = 0; i < NEWMAX; i++) {
        if (list.data[i] >= X) {
            insertlist(&list, X, i + 1);
            break;
        }
    }
    showlist(&list);
}