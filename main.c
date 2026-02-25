#include <stdio.h>

#define MAX 300

int jePodstring(const char s1[], const char s2[])
{
    int i, j;

    for (i = 0; s1[i] != '\0'; i++)
    {
        for (j = 0; s2[j] != '\0'; j++)
        {
            if (s1[i + j] == '\0')
                return 0;
            if (s1[i + j] != s2[j])
                break;
        }
        if (s2[j] == '\0')
            return 1;
    }
    return 0;
}

void spoji(char s1[], const char s2[])
{
    int i = 0, j = 0;

    while (s1[i] != '\0')
        i++; //nalazimo kraj s1
    while (s2[j] != '\0' && i < MAX - 1)
    { //dodajemo s2, pazeći da se ne prekorači max broj karaktera
        s1[i] = s2[j];
        i++;
        j++;
    }
    s1[i] = '\0';
}

int main()
{
    char s1[MAX], s2[MAX];
    //unosimo prvi i drugi string
    printf("Unesi prvi string: ");
    scanf("%299s", s1);

    printf("Unesi drugi string: ");
    scanf("%299s", s2);
    //provjeravamo da li je drugi string podstring prvog
    if (jePodstring(s1, s2))
        printf("Drugi string se nalazi u prvom.\n");
    else
        printf("Drugi string se ne nalazi u prvom.\n");
    //pozivamo funkciju za spajanje stringova
    spoji(s1, s2);
    printf("Spojeni string: %s\n", s1);
    getchar(); 
    getchar();
    return 0;
}


