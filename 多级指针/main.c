//
//  main.c
//  多级指针
//
//  Created by 何晓文 on 2017/7/19.
//  Copyright © 2017年 何晓文. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void test1(){

    //指针数组
    char *p1[] = {"123", "456", "789"};
    
    //二维数组
    char p2[3][4] = {"123", "456", "789"};
    
    //手动申请二维内存
    char **p3 = (char **)malloc(3 * sizeof(char *));
    
    for (int i = 0; i < 3; i++) {
        
        p3[i] = (char *)malloc(10*sizeof(char));
        sprintf(p3[i], "%d%d%d",i, i, i);
        printf("%s\n",p3[i]);
    }
   

}



int main(int argc, const char * argv[]) {
    // insert code here...
    test1();

    return 0;
}
