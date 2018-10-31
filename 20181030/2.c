//
//  main.c
//  2
//
//  Created by Kingsley on 2018/10/30.
//  Copyright © 2018 Kingsley. All rights reserved.
//

#include <stdio.h>
void print_hex(int num);

int main(int argc, const char * argv[]) {
    int num;
    scanf("%d",&num);
    print_hex(num);

    return 0;
}

void print_hex(int num){
        int b[16],i=0,m=0;
        char hex[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    
        while(num>0)
        {
            b[i++]=num%16;
            num=num/16;
        }
        printf("转化为十六进制的数为：");
        for(i=i-1;i>=0;i--)//倒序输出
        {
            m=b[i];
            printf("%c",hex[m]);
        }
        printf("\n");
    }
 
    
    
    
    

