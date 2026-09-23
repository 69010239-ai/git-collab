#include <stdio.h>

int greeting(const char *name)
{
    printf("Hello, %s!\n", name);
    return 0;
}

int main(void)
{
    //print a greeting messafe for the specified user
    greeting("Developer A,B,C !!");
    return 0;
}