#include <stdio.h>
#include <string.h>

#define MAX 300

int main()
{
    char s1[MAX], s2[MAX];
    // unos stringova
    printf("Unesi prvi string: ");
    scanf("%s", s1);
    printf("Unesi drugi string: ");
    scanf("%s", s2);

    // provjera da li je drugi string podstring prvog
    if (strstr(s1, s2) != NULL)
    {
        printf("Drugi string se nalazi u prvom.\n");
    }
    else
    {
        printf("Drugi string se ne nalazi u prvom.\n");
    }

    // spajanje stringova pomocu strcat
    strcat(s1, s2);
    printf("Spojeni string: %s\n", s1);

    return 0;
}