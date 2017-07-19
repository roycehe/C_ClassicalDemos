//
//  main.c
//  strstr
//
//  Created by 何晓文 on 2017/7/14.
//  Copyright © 2017年 何晓文. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int countOfSubstring(char *mainStr, char *subString, int *count){
    
    //防止崩溃
    if (mainStr == NULL || subString ==NULL || count == NULL) {
        
        return -1;
    }
    
    int ret = 0;
    int tempCount = 0;
    char *p = mainStr;
    
    do {
        //strstr(str1,str2) 函数用于判断字符串str2是否是str1的子串。如果是，则该函数返回str2在str1中首次出现的地址；否则，返回NULL
        p = strstr(p,subString);
        if (mainStr != NULL) {
            tempCount++;
            p = p + (strlen(subString));
        }

    } while (*p != '\0');
    
    *count = tempCount;

    return ret;
}

int main(int argc, const char * argv[]) {
    char *a = "ljadfsbresbhsjksb";
    char *b = "sb";
    int c = 0;
    
    countOfSubstring(a, b, &c);

    printf("%d\n",c);
    
    return 0;
}
