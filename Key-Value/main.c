//
//  main.c
//  Key-Value
//
//  Created by 何晓文 on 2017/7/18.
//  Copyright © 2017年 何晓文. All rights reserved.
//

#include <stdio.h>
#include <string.h>

//去掉空格
void noSpace (char *strIn, char *strOutn){

    char *start, *end, *temp;
    
    temp = strIn;
    
    while (*temp == ' ') {
        temp ++;
    }
    start =temp;
    
    temp = strIn + strlen(strIn) - 1;
    
    while (*temp == ' ') {
        --temp;
    }
    end = temp;
    
    for (strIn = start; strIn <= end; ) {
        
        *strOutn++ = *strIn++;
    }
    
    *strOutn = '\0';

}
void getvalueForKey(char *keyValue, char *key, char *value){
    //
    char *p = keyValue;
    //判断是否包含key
    p = strstr(p, key);
    if (p == NULL) {
        printf("没有对应的key");
        
        return;
    }
    
    //指针指向key之后
    p = p + strlen(key);
    noSpace(p, value);
    //定位"="位置
    
    p = strstr(p, "=");
    if (p == NULL) {
        printf("没有=号");
        return;
    }
    //指针指向等号之后
    p = p + strlen("=");
    noSpace(p, value);
    //
    p = strstr(value, "=");
    if(p != NULL){
        printf("多余的=\n");
        return;
    }
    p = value;
    noSpace(p, value);
    
    
    
}


int main(int argc, const char * argv[]) {
   
    char *map = " key1 = value123 ";
    char *key = "key1";
    char value[40];
    
    getvalueForKey(map, key, value);
    printf("%s\n",value);
    
    
    return 0;
}
