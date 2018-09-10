#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

int main()
{
    char pt[100],ct[100];
    int key,i,length;
    printf("Enter the plain text\n");
    fgets(pt,100,stdin);
    printf("Enter the key for encryption\n");
    scanf("%d",&key);
    pt[strlen(pt)-1]='\0';
    length=(strlen(pt));
    //Encryption
    for(i=0;i<length;i++)
    {
      ct[i]=pt[i]+key;
      if((islower(pt[i]))&&(ct[i]>'z'))
            ct[i]=ct[i]-26;
      if((isupper(pt[i])&&(ct[i]>'Z')))
            ct[i]=ct[i]-26;
    }
    printf("Encrypted text is %s\n",ct);
    //Decryption
    for(i=0;i<length;i++)
    {
      pt[i]=ct[i]-key;
      if((islower(ct[i]))&&(pt[i]<'a'))
            pt[i]=pt[i]+26;
      if((isupper(ct[i])&&(pt[i]<'A')))
            pt[i]=pt[i]+26;
    }
    printf("Decrypted text is %s\n",pt);
    return 0;
}
