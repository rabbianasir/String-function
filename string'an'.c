#include<stdio.h>
int main()
{
    char str[500];
    int i=0;
    puts("enter the string:");
    gets(str);
    while(str[i]!='\0')
    {
        if(str[i]=='a' && str[i+1]=='n')
        {
            while(str[i]!='\0')
            {
                str[i]=str[i+2];
                i++;
            }
            i=0;
        }
        i++;
    }
    printf("the required string is ==> %s",str);

}
