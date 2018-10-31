//
//  main.c
//  1
//
//  Created by Kingsley on 2018/10/30.
//  Copyright © 2018 Kingsley. All rights reserved.
//

#include <stdio.h>
void triangle_judge(int a, int b, int c);
int Triangle(int a,int b,int c);//三角形
int EqualTrian(int a,int b,int c);//等边
int IsocTrian(int a,int b,int c);//等腰

int main()
{
    int a,b,c;
    printf("Input three integers:\n");
    scanf("%d%d%d",&a,&b,&c);
    
    triangle_judge(a,b,c);
    
    return 0;
}


void triangle_judge(int a,int b,int c)
{
  int judeged = 0;
  if(Triangle(a,b,c) != 1){
    printf("It is not traingle!\n");
    return;
      
  }
  if(EqualTrian(a,b,c)){
    printf("It is a equilateral triangle!\n");
    judeged = 1;
      
  }
  if(IsocTrian(a,b,c)){
    printf("It is a isosceles triangle triangle!\n");
    judeged = 1;
      
  }

  if(judeged != 1){
    printf("It is a normal traingle!\n");
  }
    
}
    
int Triangle(int a,int b,int c)
    {
        if(a>=b+c)
            return 0;
        else if(b>=a+c)
            return 0;
        else if(c>=a+b)
            return 0;
        else
            return 1;
    }
    
int EqualTrian(int a,int b,int c)
    {
        if(a==b&&b==c)
            return 1;
        else
            return 0;
    }
    
int IsocTrian(int a,int b,int c)
    {
        if(a==b && (b!=c))
            return 1;
        else if(b==c && (b!=a))
            return 1;
        else if(a==c && (a!=c))
            return 1;
        else
            return 0;
    }
