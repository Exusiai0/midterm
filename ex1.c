#include<stdio.h> 
int main (void)
{
    char string[50];
    int x=0,num=0;
    char a;
    printf ("please input a setence which cotians no more than 50 characters\n");
    gets(string);
    if (string[0]!=' ')
    {
        num=1;
    }
    for(x=0;(a=string[x])!='\0';x++)
    {
        if (a==' '&&string[x+1]!=' ')
        {
            num++;
            }
    }
    printf("The number of words is: %d\n",num);
    return 0;
}