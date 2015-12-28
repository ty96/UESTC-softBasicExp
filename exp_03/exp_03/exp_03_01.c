//
//  exp_03.c
//  exp_03
//
//  Created by Toxni on 12/20/15.
//  Copyright © 2015 Toxni. All rights reserved.
//

#include "exp_03_01.h"

int main() {
    
    linkStack s;
    elementType x;
    elementType t = 0;
    
    printf("please input figures\n");
    
    s = (linkStack)malloc(sizeof(stackNode));
    
    while(scanf("%d",&x) != EOF) {
        if (x == 0) {
            break;
        }
        else {
            push(s, x);
        }
    }
    
    int topEle;
    pop(s, &topEle);
    
    // pop element 0 out
    
    t = topEle;
    
    printf("the top element is %d\n", t);
    
    
    
    // pop once
    
    pop(s, &topEle);
    
    t = topEle;
    
    printf("the top element now is %d\n", t);
    
    
    //  pop twice
    
    
    pop(s, &topEle);
    
    t = topEle;
    
    printf("the top element now is %d\n", t);
    
    
}