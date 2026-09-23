#include <stdio.h>

int farewell(const char *name)
{
    printf("Goodbye, %s!\n", name);
    return 0;
}

int greeting(const char *name)
{
    printf("Hello, %s!\n", name);
    return 0;
}

int checkin(const char *name)
{
    printf("%s are checked in\n", name);
    return 0;
}

int main(void)
{
    // print a greeting message for the specified user
    greeting("Developer A,B,C !!");

    // print a farewell message for the specified user
    farewell("Developer A,B,C");

    // print a check-in message for the specified user
    checkin("Developer A,B,C");
    return 0;
}