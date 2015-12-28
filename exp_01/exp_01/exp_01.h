//
//  exp_01.h
//  exp_01
//
//  Created by Toxni on 12/7/15.
//  Copyright © 2015 Toxni. All rights reserved.
//

#ifndef exp_01_h
#define exp_01_h

#include <stdio.h>

#endif /* exp_01_h */


#define MAXNUM 20
#define true 1
#define false 0

typedef struct {
    int data[MAXNUM];
    int length;
}list_type;


void showlist(list_type *lp) {
    int i;
    printf("\nThese %d records are:\n", lp->length);
    if (lp->length <= 0)
    {
        printf("No data!\n");
        return;
    }
    for (i = 0; i<lp->length; i++)
        printf(" %d ", lp->data[i]);
    printf("\nlength of the list is:%d\n", lp->length);
}


//insert new element to the list


int insertlist(list_type *lp, int new_elem, int i) {
    int j;
    if (lp->length >= MAXNUM) {
        printf("the list is full,can not insert.");
        return(false);
    }
    if (i < 1 || i > lp->length + 1) {
        printf("\n%d is invalid value", i);
        return(false);
    }
    for (j = lp->length; j >= (i - 1); j--) {
        lp->data[j + 1] = lp->data[j];
    }
    lp->data[i - 1] = new_elem;
    lp->length++;
    return(true);
}


//delete a element in the list


int deletelist(list_type *lp, int i) {
    int j;
    if(i < 1 || i > lp->length)
    {
        printf("elem not exist");
        return(false);
    }
    for (j = i; j < lp->length + 1; j++) {
        lp->data[j - 1] = lp->data[j];
    }
    lp->length--;
    return(true);
}


//delete negative element


void delete_negative(list_type *lp) {
    int i;
    for (i = lp->length; i >= 1; i--) {
        if (lp->data[i - 1] < 0) {
            deletelist(&*lp, i);
        }
    }
}
