#include<stdio.h>
#include<stdlib.h>
struct node
 {
   int data:12;

 }NODE;
int main()
{
   FILE *fp;
   fp=fopen("t","w");
   NODE.data=1024;
   printf("%d\n",NODE.data);
   fwrite(&NODE,sizeof(NODE),1,fp);
   NODE.data=0;
   NODE.data=2048;
   printf("%d\n",(unsigned)NODE.data);
   fwrite(&NODE,sizeof(NODE),1,fp);
   fclose(fp);
   fp=fopen("t","r");
   fread(&NODE,sizeof(NODE),1,fp);
   printf("%d\n",NODE.data);
   fread(&NODE,sizeof(NODE),1,fp);
   printf("%d\n",NODE.data);
   fclose(fp);
}
