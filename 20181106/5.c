#include <stdio.h>
void Move(char source,char target);
void Hanoi(int n,char source,char help,char target);
int counter=0;
int main(int argc, const char * argv[])
{
    int n;
    scanf("%d",&n);
    Hanoi(n,'A','B','C');
    printf("%d\n",counter*2);
    return 0;
}

void Move(char source,char target)
{
    counter++;
}

void Hanoi(int n,char source,char help,char target)
{
    if(n==1) Move(source,target);
    else
    {
        Hanoi(n-1,source,target,help);
        Move(source,target);
        Hanoi(n-1,help,source,target);
    }
}


