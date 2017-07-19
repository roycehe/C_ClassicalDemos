//
//  main.c
//  辅助指针分割字符串
//
//  Created by 何晓文 on 2017/7/19.
//  Copyright © 2017年 何晓文. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int spitString(char *str, char c, char ourArr[10][30], int *count)
{
    //strcpy(ourArr[0], "aaaaa");
    //strcpy(ourArr[1], "bbbbbb");
    char *p=NULL, *pTmp = NULL;
    int	tmpcount = 0;
    
    //1 p和ptmp初始化
    p = str;
    pTmp = str;
    
    do
    {
        //2 查找c 如果有返回首次地址,没有返回NULL strstr 传char*
        p = strchr(p, c);
        if (p != NULL)
        {
            
            if (p-pTmp > 0)
            {
                strncpy(ourArr[tmpcount], pTmp,  p-pTmp);//(dest, src, len)
                ourArr[tmpcount][p-pTmp]  = '\0';  //把第一行数据变成 C风格字符串
                tmpcount ++;
                //3重新 让p和ptmp达到下一次检索的条件
                pTmp = p = p + 1;
            }
        }
        else
        {

            break;
        }
    } while (*p!='\0');
    
    
    *count = tmpcount;
    return 0;
}

int main()

{
    int ret = 0, i = 0;
    char *p1 = "abcdef,acccd,eeee,aaaa,e3eeeee,sssss,";
    char cTem= ',';
    int nCount;
    
    char myArray[10][30];
    
    ret = spitString(p1, cTem, myArray, &nCount);
  
    
    for (i=0; i<nCount; i++ )
    {
        printf("%s \n", myArray[i]);
    }

    return 0;
}
