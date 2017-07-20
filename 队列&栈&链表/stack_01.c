//
//  main.c
//  Algorithms
//
//  Created by wangzhen on 2017/7/20.
//  Copyright © 2017年 wz. All rights reserved.
//

#include <stdio.h>
#include <string.h>

//栈，检查是否是回文
int main(int argc, const char * argv[]) {
    
    char a[101], s[101];
    int i, len, mid, next, top;
    
    gets(a);//读入一行字符串
    len = strlen(a);//求字符串的长度
    mid = len/2 - 1;//求字符串的中点
    
    top = 0;//栈的初始化
    //将mid前的字符依次入栈
    for( i=0; i<=mid; i++)
    {
        s[++top] = a[i];
    }
    //判断字符串的长度是奇数还是偶数，并找出需要进行字符串匹配的起始小标
    if (len%2==0) {
        next = mid + 1;
    }else{
        next = mid + 2;
    }
    
    //开始匹配
    for( i=next; i<=len-1; i++)
    {
        if (a[i] != s[top]) {
            break;
        }
        top--;
    }
    //如果top值为0，则说明栈内所有的字符都被一一匹配
    if (top==0) {
        printf("YES");
    }else{
        printf("NO");
    }
    
    getchar();getchar();
    
    return 0;
}
