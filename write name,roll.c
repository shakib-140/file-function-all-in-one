#include<stdio.h>
#include<conio.h>
int main()
{
    char name[20];
    int roll,phonenumber;
    int n,i;
    FILE *file;
    file=fopen("shakib444","w");
    if(file==NULL)
    {
        printf("file doesn't open");
    }
    else
    {

        printf("file is open\n");
        printf("enter the number of person=");
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            printf("enter the name of person[%d]=",i);
            scanf("%s",name);
            printf("enter the roll of person[%d]=",i);
            scanf("%d",&roll);
            printf("enter phonenumber of person[%d]=",i);
            scanf("%d",&phonenumber);
            fprintf(file,"\n");
            fprintf(file,"%s\t%d\t%d\n",name,roll,phonenumber);
        }
        printf("file written successfully");

        fclose(file);
    }

    getch();
}
