//
//  exp_04_01.h
//  exp_04
//
//  Created by Toxni on 12/28/15.
//  Copyright © 2015 Toxni. All rights reserved.
//

#ifndef exp_04_01_h
#define exp_04_01_h

#include <stdio.h>
#include <stdlib.h>

#endif /* exp_04_01_h */



typedef int ElemType;
typedef int Status;


typedef struct BiTNode{
    ElemType data;
    struct BiTNode*lChild, *rChlid;
}BiTNode, *BiTree;


//create with preorder

Status CreateBiTree(BiTree *T)
{
    ElemType ch;
    ElemType temp;
    
    
    scanf("%d", &ch);
    temp = getchar();
    
    
    if (-1 == ch)
        *T = NULL;
    else
    {
        *T = (BiTree)malloc(sizeof(BiTNode));
        if (!(*T))
            exit(-1);
        
        
        (*T)->data = ch;
        printf("input leftChild of %d：", ch);
        CreateBiTree(&(*T)->lChild);
        printf("input rightChild of %d：", ch);
        CreateBiTree(&(*T)->rChlid);
    }
    
    return 1;
}


//preorder traversal
void TraverseBiTree(BiTree T)
{
    if (NULL == T)
        return ;
    printf("%d ", T->data);
    TraverseBiTree(T->lChild);
    TraverseBiTree(T->rChlid);
    
    
}


//inorder traversal
void InOrderBiTree(BiTree T)
{
    if (NULL == T)
        return ;
    InOrderBiTree(T->lChild);
    printf("%d ", T->data);
    InOrderBiTree(T->rChlid);
    
    
}


//postorder traversal
void PostOrderBiTree(BiTree T)
{
    if (NULL == T)
        return ;
    PostOrderBiTree(T->lChild);
    PostOrderBiTree(T->rChlid);
    printf("%d ", T->data);
    
}



