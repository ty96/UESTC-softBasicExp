//
//  exp_05_04.c
//  exp_05
//
//  Created by Toxni on 12/28/15.
//  Copyright © 2015 Toxni. All rights reserved.
//

#include <stdio.h>

void insertSort(int arr[],int len)
{
    int i,j;
    int key;
    for(i=1;i<len;i++)
    {
        key=arr[i];
        for(j=i-1;j>=0;j--)
        {
            if(arr[j]>key)
                arr[j+1]=arr[j];
            else
                break;
        }
        arr[j+1]=key;
    }
}


int main() {
    int i;
    int a[10]={513, 87, 512, 61, 908, 170, 897, 275, 653, 462};
    printf("arr before sort is: \n");
    for (i = 0;i < 10;i++) {
        
        printf("%d ",a[i]);
    }
    
    
    insertSort(a, 10);
    
    printf("\narr after sort is: \n");
    for (i = 0;i < 10;i++) {
        
        printf("%d ",a[i]);
    }
    printf("\n");
}