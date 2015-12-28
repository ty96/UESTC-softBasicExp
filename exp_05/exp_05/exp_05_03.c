//
//  exp_05_03.c
//  exp_05
//
//  Created by Toxni on 12/28/15.
//  Copyright © 2015 Toxni. All rights reserved.
//

#include <stdio.h>


void selectSort(int arr[], int len) {
    
    int i,j,temp;
    for(i = 0; i < len; i++)
    {
        for(j = i + 1; j < len; j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

int main() {
    int i;
    int a[10]={513, 87, 512, 61, 908, 170, 897, 275, 653, 462};
    printf("arr before sort is: \n");
    for (i = 0;i < 10;i++) {
        
        printf("%d ",a[i]);
    }

    
    selectSort(a, 10);
    
    printf("\narr after sort is: \n");
    for (i = 0;i < 10;i++) {
        
        printf("%d ",a[i]);
    }
    printf("\n");
}
