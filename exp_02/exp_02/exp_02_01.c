//
//  exp_02.c
//  exp_02
//
//  Created by Toxni on 12/7/15.
//  Copyright © 2015 Toxni. All rights reserved.
//

#include "exp_02.h"





int main() {
    
    LinkedList list, start;
    printf("please input figures:\n");
    list = LinkedListCreate();
    for(start = list->next; start != NULL; start = start->next)
        printf("%d ",start->data);
    printf("\n");
    
    int i;
    ElemType x;
    printf("position of insertEle:\n");
    scanf("%d",&i);
    printf("value of insertEle:\n");
    scanf("%d",&x);
    LinkedListInsert(list, i, x);
    
    for(start = list->next; start != NULL; start = start->next)
        printf("%d ",start->data);
    
    printf("\n");
    printf("position of deleteEle:\n");
    scanf("%d",&i);
    LinkedListDelete(list,i);
    
    for(start = list->next; start != NULL; start = start->next)
        printf("%d ", start->data);
    
    printf("\n");
    
    return 0;
}
