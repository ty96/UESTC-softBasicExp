//
//  main.c
//  exp_05
//
//  Created by Toxni on 12/28/15.
//  Copyright © 2015 Toxni. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

int ordersearch(int a[], int n, int des){
    int i;
    for(i=0; i<n; i++)
        if(des==a[i])
            return 1;
    
    return 0;
}

int main(){
    int i, val;
    int a[] = {3, 10, 13, 17, 40, 45, 50, 70};
    int ret;
    
    for (i=0; i<8; i++)
        printf("%d\t", a[i]);
    
    printf("\nplease input the aim: ");
    
    while (1){
        scanf("%d", &val);
        
        if (val == -1) {
            break;
        }
        
        ret = ordersearch(a, 8, val);
        
        if(1 == ret)
            printf ("found it");
        else
            printf ("do not exist");
        
        printf("\nplease input the aim, input -1 to stop: ");
        
    }
    
    return 0;
}
