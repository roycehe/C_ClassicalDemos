//
//  main.c
//  C_string
//
//  Created by 何晓文 on 2017/7/14.
//  Copyright © 2017年 何晓文. All rights reserved.
//

#include <stdio.h>
 //传统方法
void exchange01(char *from, char *to){

    int i = 0;
    for (; *(from+i) != '\0'; i++) {
        
        *(to + i) = *(from + i);
        
    }
    //在b结尾加上'\0'
    *(to + i) = '\0';
    
}
//进化1
void exchange02(char *from, char *to){
    
    for (; *from != '\0';) {
        
       *to++ = *from++;
        
    }
    //在b结尾加上'\0'
    *to = '\0';
    
}
//进化2
void exchange03(char *from, char *to){
    
    while (*from != '\0') {
        
        *to++ = *from++;
        
    }
    //在b结尾加上'\0'
    *to = '\0';
    
}
//进化3
void exchange04(char *from, char *to){
    
    while ((*to = *from) != '\0') {
        
        to ++;
        from ++;
        
    }

    
}
//进化4
void exchange05(char *from, char *to){
    
    while ((*to++ = *from++) != '\0') {
        
        
        
    }
    
    
}
//进化5
void exchange06(char *from, char *to){
    //'\0'
    while ((*to++ = *from++)) {
        
        printf("%c\n",*from);
        
    }
    
    
}

int main(int argc, const char * argv[]) {
    //实现把a复制给你b
    char a[] = "i am a code";
    char b[20];

//    exchange01(a, b);
//    exchange02(a, b);
        exchange06(a, b);
    
    printf("a:%s\nb:%s\n", a,b);
    return 0;
}
