// Source - https://stackoverflow.com/a
// Posted by Vanni Totaro, modified by community. See post 'Timeline' for change history
// Retrieved 2026-01-25, License - CC BY-SA 4.0

#include <unistd.h> // getuid
#include <stdio.h> // printf

int main()
{
    if (getuid()) printf("%s", "You are not root!\n");
    else printf("%s", "OK, you are root.\n");
    return 0;
}
