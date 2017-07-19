//
//  main.c
//  数组类型
//
//  Created by 何晓文 on 2017/7/19.
//  Copyright © 2017年 何晓文. All rights reserved.
//

#include <stdio.h>

void arrayAdress(){
    
    int a[10] = {0};
    
    printf("%p\n",a);
    
    printf("%p\n",a+1);//数组首元素地址 步长4字节
    
    printf("%p \n",&a+1);//整个数组的地址 步长sizeof(a) * 10

}
//怎么表示数组类型
//类型的本质是固定大小内存空间的别名
void typeArr(){
    typedef int (MyIntArray)[5];//int arr[5];
    
    MyIntArray arr;
    
    for (int i = 0; i < 5; i++) {
        arr[i] = i + i;
//        printf("%d\n",arr[i]);
        
    }
    //数组指针
    MyIntArray *pArr;
//    typedef int (* MyIntArrayP)[5];
//    MyIntArrayP p =&arr;
    pArr = &arr;
    for (int i = 0; i < 5; i++) {
        //取数组
        printf("%d\n",(*pArr)[i]);
        
        
    }
}


//指针数组的自我结束能力
void endSelf(char **arr){

    
    for (int i = 0; arr[i] != NULL; i++) {
        printf("%s\n",arr[i]);
    }



}



int main(int argc, const char * argv[]) {
//    arrayAdress();
//    typeArr();
    
    char *strArr[] = {"aa","bb","cc","dd","\0"};
    //NULL = 0 = "\0"
    
    endSelf(strArr);
    
    return 0;
}
