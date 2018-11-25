#include <stdio.h>
int add(int n1, int n2);
int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",add(a,b));
    return 0;
}



int add(int a,int b)
{
    if(b == 0)
        return a;
    return add(a^b,(a&b)<<1);
}
