#include<stdio.h>
#include<conio.h>
int main()
{
      FILE *file;
    char name[30];
    printf("enter your name=");
    gets(name);
    int length=strlen(name);

    file=fopen("shakib.txt","w");
    if(file==NULL)
    {
        printf("file doesn't exist");
    }
    else
    {
        printf("file is open\n");
        fputs(name,file);

        printf("file is written successfully");

    }





    getch();
}

