#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc ,char *argv[]) {
    FILE *pSourceFile,*pDestFile;
    int ch,len;
    char sourcename[80],destname[80],fname[20],name[20];
strcpy(sourcename,argv[1]);
strcpy(destname,argv[2]);
len=strlen(sourcename);
int i,j;
for(i=len-1,j=0;sourcename[i]!='/';i--,j++)
{
   fname[j]=sourcename[i];
}
int len1=strlen(fname);
name[0]='/';
for(i=len1-1,j=1;i>=0;i--,j++)
{
     name[j]=fname[i];
}
strcat(destname,name);
    if((pSourceFile=fopen(argv[1],"r"))==NULL)
    {
        printf("失败");
        exit(1);
    }
    if((pDestFile=fopen(destname,"w"))==NULL)
    {
        printf("失败");
        exit(1);
    }
    ch=fgetc(pSourceFile);
    while(feof(pSourceFile)==0)
    {
        fputc(ch,pDestFile);
        ch=fgetc(pSourceFile);
    }
    fclose(pSourceFile);
    fclose(pDestFile);
    return 0;
}
