#include <stdio.h>
#include <string.h>

 int main()
{

    int r_password;
    char r_name[20];

    int password;
    char name[20];

    printf("REGISTRATION \nenter your name and password :\n");
    scanf("%s %d", r_name, &r_password);

    printf("LOGIN  \nenter your name and password :\n");
    scanf("%s %d",name,&password);

    if (strcmp(r_name, name) == 0 && r_password == password)
        printf("LOGIN SUCCESS");
    else
        printf("LOGIN FAILED");


    return 0;
}