#include <stdio.h>

int main(void)
{
    const char fname[] = "Sean";
    const char lname[] = "Sawyer";

    printf("%s %s\n", fname, lname);
    printf("%s\n%s\n", fname, lname);
    printf("%s ", fname);
    printf("%s\n", lname);

    return 0;
}
