//
//  main.c
//  栈逆序
//
//  Created by 何晓文 on 2017/7/18.
//  Copyright © 2017年 何晓文. All rights reserved.
//

#include <stdio.h>
#include <string.h>

//char buf_g[10];

//指针逆序打印

void revers(char  *buf, char *out){
    char *p = buf;
    if (p == NULL) {
        
        return;
    }
    //递归结束条件
    if (*p == '\0') {
        
        return;
    }
    //递归调用
    revers(p + 1, out);
    //在字符串的结尾追加n个字符
    strncat(out, p, 1);
    
    


}
int main(int argc, const char * argv[]) {
    
    char *c = "abcde";
    //清空
//    memset(buf_g, 0, sizeof(buf_g));
    char p[100] ;
    
    revers(c,p);
    printf("%s\n",p);
    
    
    
    return 0;
}
