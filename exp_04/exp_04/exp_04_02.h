//
//  exp_04_02.h
//  exp_04
//
//  Created by Toxni on 12/28/15.
//  Copyright © 2015 Toxni. All rights reserved.
//

#ifndef exp_04_02_h
#define exp_04_02_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define     OK            1
#define     ERROR         0
#define     OVERFLOW     -1

#define     Status       int

#endif /* exp_04_02_h */


//哈夫曼树节点类型定义
typedef  struct  HTNodew
{
    unsigned  int weight;//权重
    unsigned  int parent,lchild,rchild;//父节点，左孩子，右孩子(无符号类型）
}HTNode,*HuffmanTree;

typedef char **  HuffmanCode;

HuffmanTree HT;

//选取最小的二个序列
Status Select(int n,int *s1,int *s2,int *foot);

//构造哈夫曼树
Status  HuffmanCoding(HuffmanCode *HC, int  n,unsigned int *w)
{
    /*
     **w存放n个字符的权值（均大于0），构造哈夫曼树HT，并且求出n个字符的哈夫曼编码HC
     */
    if(n<=0)
        return ERROR;
    int m=2*n-1;           //m是总共需要的节点个数
    
    HT = (HuffmanTree)malloc(sizeof(HTNode)*(m+1));      //0号单元不使用，下标从1开始到m结束
    int  i=1;
    HuffmanTree p;
    for(p = HT,p++;i<=n;i++,p++,w++)//依次给节点赋值（这里首先p++是因为下标从1开始）
    {
        (*p).weight = *w;//初始父节点，左孩子节点和右孩子节点均为0
        (*p).parent = 0;
        (*p).lchild = 0;
        (*p).lchild = 0;
    }
    
    for(;i<= m;i++,p++)              //给后面的n-1个节点赋值
    {
        (*p).weight = 0;//初始父节点，左孩子节点和右孩子节点均为0
        (*p).parent = 0;
        (*p).lchild = 0;
        (*p).lchild = 0;
    }
    //设置一个m长度的数组记录节点是否被访问过
    int *foot=(int *)malloc(sizeof(int)*(m+1));//（下标也是从1开始，为了和上面的正好对应）
    int *s=foot;
    s++;
    int k;
    for( k=1;k<=m;k++)
    {
        *(s++)=0;//初始话为0 ，当有访问过，则赋值1，表示已经访问过了
    }
    /*
     **构建哈夫曼树
     */
    for(i = n+1;i<=m;i++)   //依次给后面的n-1个节点赋值（从n+1到m）
    {
        /*
         **在HT[1...i-1]选择parent为0 且weight最小的二个节点，其序号为s1和s2
         */
        int *s1 = (int *)malloc(sizeof(int ));
        int *s2 = (int *)malloc(sizeof(int));
        if(!s1||!s2)
        {
            printf("分配内存空间错误.\n");
            return ERROR;
        }
        
        Select(i-1,s1,s2,foot);
        HT[*s1].parent = i;
        HT[*s2].parent = i;
        HT[i].lchild = *s1;
        HT[i].rchild = *s2;
        HT[i].weight = HT[*s1].weight + HT[*s2].weight;
        
    }
    
    
    
    //-----从叶子到根节点逆向求每个字符的哈夫曼编码---------//
    
    *HC=(HuffmanCode)malloc(sizeof(char *)*(n+1));//从1开始，抛弃下标1
    
    char *cd = (char *)malloc(sizeof(char)*n);   //分配求编码的工作区间（n个字符最长的编码需要n-1个空间，加上结束符号）
    cd[n-1]='\0';//编码结束符
    
    int  start;//用来跟踪位置
    for(i = 1;i<=n;i++)//逐个字符求哈夫曼编码
    {
        start = n-1;//编码结束符位置
        int c,f;
        start--;
        for(c = i,f = HT[i].parent;f != 0;c = f,f = HT[f].parent)
        {
            if(HT[f].lchild == c)
                cd[start] = '0';
            else
                cd[start] = '1';
            start-=1;
        }
        start+=1;//这里一定要加1  否则多分配了内存空间
        (*HC)[i]=(char *)malloc((n-start)*sizeof(char));//分配n-start个char空间即可
        strcpy((*HC)[i],&cd[start]);
        char *p=(*HC)[i];
        printf("HuffManNode of %d is(from root to child) ：\n",HT[i].weight);
        printf("%d:-->%s ",HT[i].weight,p);
        
        printf("\n");
        
    }
    free(cd);
    return OK;
}


Status Select(int n,int *s1,int *s2,int *foot)
{
    int i,j;
    int min=65536;
    int temp = 0;
    
    for(i=1;i<=n;i++)//找到第一个最小的值的下标
    {
        if(HT[i].weight<min&&foot[i]==0)
        {
            min=HT[i].weight;
            temp=i;//记录最终的最小值的下标
        }
    }
    foot[temp]=1;
    *s1=temp;
    
    
    min=65536;
    for(j=1;j<=n;j++)//寻找最小节点下标
    {
        if(HT[j].weight<min&&j!=(*s1)&&foot[j]==0)
        {
            min=HT[j].weight;
            temp=j;
        }
    }
    foot[temp]=1;
    *s2=temp;
    //交换*s1和*s2，让*s1指向小的坐标  *s2指向大的坐标
    temp=*s1;
    *s1=*s2;
    *s2=temp;
    return OK;
    
}










