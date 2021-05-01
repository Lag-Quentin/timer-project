#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "timer.h"

/*--------------------------------------------*/

void song(void)
{
    system("python3 song.py");
}

/*--------------------------------------------*/

void print_seconde(long seconde)
{
    for (long i = seconde; i > 0; i--)
    {
        printf("%ld\n", i);
        sleep(1);
        system("clear");
    }
}

/*--------------------------------------------*/

void print_minute(long seconde)
{

    seconde_en_minute(seconde);

    for (long i = seconde_en_minute(seconde); i > 0; i--)
    {
        printf("***********************");
        printf("%ld\n", i);
        sleep(60);
        system("clear");
    }
}

/*--------------------------------------------*/

long entrez_utilisateur(void)
{
    long min = 0;

    printf("Entrez le nombre de minute puis patienter :\n");

    scanf("%ld", &min);

    return minute_en_seconde(min);
}

/*--------------------------------------------*/

void print_all(void)
{
    print_minute(entrez_utilisateur());
    song();
}

/*--------------------------------------------*/

long minute_en_seconde(long minute)
{
    long seconde = 0;
    seconde = minute * 60;
    return seconde;
}

/*--------------------------------------------*/

long seconde_en_minute(long seconde)
{
    long minute = 0;
    minute = seconde / 60;
    return minute;
}
