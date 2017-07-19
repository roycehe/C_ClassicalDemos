//
//  main.c
//  二级指针做输入
//
//  Created by 何晓文 on 2017/7/17.
//  Copyright © 2017年 何晓文. All rights reserved.
//

#include <stdio.h>
void sortOne (char **myArray, int count){

    int num  = count;
    char *tmp = NULL;
    //指针数组
   
    
    printf("排序之前");
    for (int i = 0; i < num; ++i) {
//        printf("%s \n", myArray + i);
//        printf("%s \n",*(myArray + i));
        
    }
    
    //排序
    for (int i = 0; i < num-1; ++i) {
        
        for (int j = 0; j < num - i -1; ++j) {
            if (strcmp(myArray[j], myArray[j+1]) > 0){
                tmp = myArray[j];
                myArray[j] = myArray[j+1];
                myArray[j+1] = tmp;
                
                
            }
        }
        
    }
    
    printf("排序之后\n");
    for (int i = 0; i < num; ++i) {
//        printf("%s \n", myArray + i);
        printf("%s \n",* (myArray + i));
        
    }

}
//选择排序
void sortTwo(char **myArray, int count){
    int num  = count;
    char *tmp = NULL;
    //指针数组
    
    
    printf("排序之前");
    for (int i = 0; i < num; ++i) {
        //        printf("%s \n", myArray + i);
        //        printf("%s \n",*(myArray + i));
        
    }
    
    //排序
    for (int i = 0; i < num-1; ++i) {
        
        for (int j = i + 1; j < num; ++j) {
            if (strcmp(myArray[j], myArray[i]) > 0){
                tmp = myArray[i];
                myArray[i] = myArray[j];
                myArray[j] = tmp;
                
                
            }
        }
        
    }
    
    printf("排序之后\n");
    for (int i = 0; i < num; ++i) {
        //        printf("%s \n", myArray + i);
        printf("%s \n",* (myArray + i));
        
    }

    
    



}

int main(int argc, const char * argv[]) {
     char *myArray[] = {"jjjjj","aaaa","kkkk" ,"dddd", "ccccc", "bbbbb"};
  int  num = sizeof(myArray)/ sizeof(myArray[0]);
    sortOne(myArray, num);
    return 0;
}
