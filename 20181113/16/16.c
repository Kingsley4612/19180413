#include <stdio.h>
#include <stdlib.h>

int main() {
   FILE *pSourceFile, *pDestFile;
   char fSourceName[100], fDestName[100];
   int ch;
   scanf("%s", fSourceName);
   scanf("%s", fDestName);

   if ((pSourceFile = fopen(fSourceName, "r")) == NULL)
   {
       printf("打不开源文件！\n");
       exit(1);
   }
   if ((pDestFile = fopen(fDestName,"w")) == NULL)
   {
       printf("打不开新文件！\n");
       exit(1);
   }

   ch= fgetc(pSourceFile);
   while (feof(pSourceFile)==0)
   {
       fputc(ch,pDestFile);
       ch=fgetc(pSourceFile);
   }
   fclose(pSourceFile);
   fclose(pDestFile);
    return 0;
}