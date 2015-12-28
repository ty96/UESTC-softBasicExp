//
//  exp_04_02.c
//  exp_04
//
//  Created by Toxni on 12/28/15.
//  Copyright © 2015 Toxni. All rights reserved.
//

#include "exp_04_02.h"


int main()
{
    
    int n;
    printf("Input the number of weight:\n");
    scanf("%d",&n);
    unsigned int *w=(unsigned int *)malloc(sizeof(unsigned int)*n);
    printf("Input The weight!\n");
    
    unsigned s;
    unsigned *p=w;
    int i = 1;
    // unsigned int p[8]={5,29,7,8,14,23,3,11};
    while(i<=n)
    {
        scanf("%ud",&s);
        *p=s;
        i++;
        p++;
    }
    p=w;
    HuffmanCode *HC=(HuffmanCode *)malloc(sizeof(HuffmanCode));

    HuffmanCoding(HC,n,p);
    return 0;
}

