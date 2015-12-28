//
//  exp_01.c
//  exp_01
//
//  Created by Toxni on 12/7/15.
//  Copyright © 2015 Toxni. All rights reserved.
//

#include "exp_01.h"


/*create a list:input data from keyboard,end by -1*/

void createlist(list_type *lp) {
    int i, elem;
    lp->length = 0;
    printf("\nplease input datas of the list\n");
    for (i = 0; i < MAXNUM; i++)
    {
        scanf(" %d", &elem);
        if(elem == -1) break;
        lp->data[i] = elem;
        lp->length++;
    }
}


int main() {
    list_type list;
    int i, data;
    createlist(&list);
    showlist(&list);
    printf("\ninsert:Enter i and data :\n");
    scanf("%d" "%d", &i, &data);
    insertlist(&list, data, i);
    printf("\nlist after insert:\n");
    showlist(&list);
    printf("\ndelete:Enter i:\n");
    scanf("%d", &i);
    deletelist(&list, i);
    printf("\nlist after delete:\n");
    showlist(&list);
    delete_negative(&list);
    printf("\nlist after delete all negative:\n");
    showlist(&list);
}