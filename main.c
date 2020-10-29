#include <stdio.h>
#include <stdlib.h>
#define MIN(a,b) (((a)>(b))?(b):(a))

void reverse(char *);
void swap(char *, char *);
int getLength(char *);

int main()
{
    printf("max. 100 hane string giriniz: \n");
    char *p = malloc(100);
    scanf("%s", p);
    reverse(p);
    printf("%s\n", p);
    printf("swap etmek icin max. 100 hane iki string giriniz: \n");
    char *p1 = malloc(100);
    char *p2 = malloc(100);
    scanf("%s", p1);
    fflush(stdin);
    scanf("%s", p2);
    swap(p1, p2);
}

void reverse(char *p)
{
    int uzunluk = getLength(p);
    char *son = p + uzunluk - 1;
    char temp;
    int i;
    for(i = 0; i<uzunluk/2; i++)
    {
        temp = *son;
        *son = *p;
        *p = temp;
        son--;
        p++;
    }
}

void swap(char *p1, char *p2)
{
    int uzp1 = getLength(p1);
    int uzp2 = getLength(p2);
    int min = MIN(uzp1, uzp2);

    int i;
    for(i = 0; i<min; i++)
    {
        char temp = *p1;
        *p1 = *p2;
        *p2 = temp;
        p1++;
        p2++;
    }
    if(uzp1 < uzp2)
    {

    }

    for(i = 0; i<abs(uzp1-uzp2); i++)
    {

    }
}

int getLength(char *p)
{
    int counter = 0;
    while(*p != '\0')
    {
        counter++;
        p++;
    }
    return counter;
}
