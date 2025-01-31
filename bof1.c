#include <stdio.h>
void hacker()
{
    printf("No, I'm a hacker!\n");
}
void nonSecure()
{
    char name[4];
    printf("What's your name?\n");
    gets(name);
    //printf("Hey %s, you're harmless, aren't you?\n", name);
}
int main()
{
    nonSecure();
    return 0;
}
