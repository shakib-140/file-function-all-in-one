#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *file;
    char ch;
    file=fopen("shakib.txt","r");
    if(file==NULL)
    {
        printf("file does't exist");
    }
    else
    {
        printf("file is open\n");
        while(!feof(file))
        {
            ch=fgetc(file);
            printf("%c",ch);
        }
        printf("\n file is read successfully\n");
    }

    getch();
}
