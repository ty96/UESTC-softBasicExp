//
//  exp_04_01.c
//  exp_04
//
//  Created by Toxni on 12/28/15.
//  Copyright © 2015 Toxni. All rights reserved.
//

#include "exp_04_01.h"

int main()
{
    BiTree T;
    
    printf("please input the value of first node, -1 means no node here:\n");
    CreateBiTree(&T);
    printf("preorder traversal:\n");
    TraverseBiTree(T);
    printf("\n");
    printf("inorder traversal:\n");
    InOrderBiTree(T);
    printf("\n");
    printf("preorder traversal:\n");
    PostOrderBiTree(T);
    printf("\n");
    return 0;
}