#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char ch;
    char fname[100];
    scanf("%s",fname);
    
    if ((fp=fopen(fname, "r")) == NULL) {
        printf("无法打开文件！\n");
        exit(1);
    }

    ch=fgetc(fp);
    while (ch != EOF)
    {
        putchar(ch);
        ch=fgetc(fp);
    }
    printf("\n");
    return 0;

}
