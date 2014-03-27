#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    char pt[50],ct[50],tmp[50][50],*a,t[50][50],ch;
    char key[]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};

    int i,n,l,j,c=0,f=1,L;
     a =(char *)malloc(100 * sizeof(char *));

do
{
    printf("Enter Plain Text\n");
 //   gets(pt);
    scanf("%s",pt);
    l=strlen(pt);
    printf("length of text %d\n",l);
    printf("\n");       
    
   for(i = 0; i<l; i++) 
     a[i]=rand()%(sizeof(key));
   c++;
    
   for(i=0;i<l;i++)
   {
     for(j=0;j<l;j++)
       tmp[i][j]=a[j];
   } 


    n=strlen(a);    
   printf("plaintext %s\n",pt);
printf("key is");
for(i = 0; i < l; i++) 
{


 printf("%c",a[i]+65);
}
L=strlen(a);
printf("\nkey length is %d\n",L);    



if(f!=0)
{
    if(strlen(pt)==strlen(a))
    {
      for(i=0;i<strlen(pt);i++)
      {
       
        a[i]=a[i]-65;
        ct[i]=(pt[i]+a[i]);
        while(ct[i] > 26)
        {
           ct[i]=(ct[i]-26);
        }
      }
   
    
      for(i=0;i<strlen(pt);i++)
      {
        ct[i]=ct[i]%26;
      }
    printf("Cipher text is\n");
    for(i=0;i<strlen(pt);i++)
    {
        
        printf("%c",ct[i]+65);
    }
   printf("\n");
    }
   else
   {
    printf("\nPlain Text and Key Have No Same Length");
   }

}  
for(i=0;i<c;i++)
{
    for(j=0;j<l;j++)
    {
     if(a[j]==t[i][j])
       f=0;
    }
}


 printf("\n");
 printf("do u want to cont...?");
 scanf("%s",&ch);
}
while(ch=='y');

}
