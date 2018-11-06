//
//  main.c
//  2
//
//  Created by Kingsley on 2018/11/5.
//  Copyright © 2018 Kingsley. All rights reserved.
//

#include <stdio.h>
void Move(char source,char target);
void Hanoi(int n,char source,char help,char target);

int main(int argc, const char * argv[]) {
    Hanoi(3,'A','B','C');
    return 0;

}

void Move(char source,char target){
    printf("%c->%c\n",source,target);
}

void Hanoi(int n,char source,char help,char target){
    if(n==1) Move(source, target);
    else{
        Hanoi(n-1, source , target, help);
        Move(source, target);
        Hanoi(n-1, help, source, target);
    }
}
