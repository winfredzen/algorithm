//
//  main.c
//  Algorithms
//
//  Created by wangzhen on 2017/7/20.
//  Copyright © 2017年 wz. All rights reserved.
//

#include <stdio.h>
#include <string.h>

//栈，进行验证括号的匹配
int main(int argc, const char * argv[]) {
    
    char a[101], s[101];
    int len, top;

    top = 0;//栈初始化
    
    printf("请输入字符串: ");
    gets(a);
    len = strlen(a);
    
    if (top == 0 && (a[0] == '{' || a[0] == '[' || a[0] == '(')) {
        s[++top] = a[0];
        
        for (int i = 1; i < len; i++) {
            
            if (a[i] == '{' || a[i] == '[' || a[i] == '(') {
                s[++top] = a[i];
            }else{
                if ((s[top] == '{' && a[i] == '}') ||
                    (s[top] == '[' && a[i] == ']') ||
                    (s[top] == '(' && a[i] == ')')) {
                    //出栈
                    top--;
                }else{
                    printf("NO");
                    return 0;
                }
            }
        }
        
        
        if (top == 0) {
            printf("YES");
        }
        
    }else{
        printf("NO");
    }
    

    
    
    getchar();getchar();
    
    return 0;
}
