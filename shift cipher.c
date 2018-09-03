#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
int main()
{
    int i=0,key;
    char pt[100],ct[100];
    printf("Enter the plain text\n");
    fgets(pt,100,stdin);
    printf("Enter the key");
    scanf("%d",&key);
    pt[strlen(pt)-1]='\0';
    while(pt[i]!=0)
    {
        if(pt[i] >= 'z')
        {
            ct[i]=(((int)pt[i])%26)+79;
            ct[i]=(char)ct[i];
            i++;
        }
        else
        {

        ct[i]=(int)pt[i]+key;
        ct[i]=(char)ct[i];
        i++;
        }
    }
    ct[i] = '\0';
    printf("The cipher text=\n%s",ct);
    i=0;
    return 0;
}
