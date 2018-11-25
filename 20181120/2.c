#include <stdio.h>
int bin_insert(int n, int m, int j, int i);


int main() {
    int a,b,n,m;
    scanf("%d%d",&a,&b);
    scanf("%d%d",&m,&n);
    printf("%d",bin_insert(a,b,m,n));
    return 0;
}


int bin_insert(int n, int m, int j, int i)
{
    int u = 0;
    for(int k = j; k <= i; ++k)
    {
        int temp = ((m >> u)&1);
        n |=( temp << k );
        u++;
    }

    return n;

}

