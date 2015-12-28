//
//  exp_05_02.c
//  exp_05
//
//  Created by Toxni on 12/28/15.
//  Copyright © 2015 Toxni. All rights reserved.
//

#include <stdio.h>

int binarySearch(int a[], int n, int key){
    int low = 0;
    int high = n - 1;
    while(low<= high){
        int mid = (low + high)/2;
        int midVal = a[mid];
        if(midVal<key)
            low = mid + 1;
        else if(midVal>key)
            high = mid - 1;
        else
            return mid;
    }
    return -1;
}

int main(){
    int i, val, ret;
    int a[8]={3, 10, 13, 17, 40, 45, 50, 70};
    for(i=0; i<8; i++)
        printf("%d\t", a[i]);
    
    printf("\nplease input the aim: ");

    
    while (1){
        scanf("%d",&val);
        if (val == -1) {
            break;
        }
        
        ret = binarySearch(a,8,val);
        
        if (-1 == ret)
            printf("do not exist\n");
        else
            printf("found it\n");
        
        printf("\nplease input the aim, input -1 to stop: ");
    }
        return 0;
}
