//
//  main.c
//  Algorithms
//
//  Created by wangzhen on 2017/7/20.
//  Copyright © 2017年 wz. All rights reserved.
//

#include <stdio.h>

struct queue {
    int data[100];//队列的主体，用来存储内容
    int head;//队首
    int tail;//队尾
};

int main(int argc, const char * argv[]) {
    
    struct queue q;
    int i;
    //初始化队列
    q.head = 1;
    q.tail = 1;
    for( i = 1; i<=9; i++)
    {
        //依次向队列插入9个数
        printf("请向队列插入第%d个数: ", i);
        scanf("%d", &q.data[q.tail]);
        q.tail++;
    }
    
    while (q.head < q.tail) {//当队列不为空的时候执行循环
        //打印队首并将队首出队
        printf("%d ", q.data[q.head]);
        q.head++;
        
        //先将新队首的数添加到对尾
        q.data[q.tail] = q.data[q.head];
        q.tail++;
        //再将队首出队
        q.head++;
    }
    
    getchar();getchar();
    
    return 0;
}
