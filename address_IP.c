#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void getData(char chain[100]);

int main()
{
    char chaine[100];
    char a[50], b[50], c[50] , d[50] ;
    getData(chaine);

    return 0;
}

void getData(char chaine[100])
{
    int x=128, y=192, z=224, w=240, e=255;
    int a, b, c , d ;
    do
    {
    printf("Entrer l'addrress IP: ");
    scanf("%s", chaine);
    }
    while(!strstr(chaine, "."));


    printf("\n");
    sscanf(chaine, "%d.%d.%d.%d", &a, &b, &c, &d);

    if (a<x && b<e && c<e && d<e)
        {
            printf("L'address IP est au Classe de A\n");
        }
    else if(a>=x && a<y && b<e && c<e && d<e)
        {
            printf("L'address IP est au Classe de B\n");
        }
    else if(a>=y && a<z && b<e && c<e && d<e)
        {
            printf("L'address IP est au Classe de C\n");
        }
    else if(a>=z && a<w && b<e && c<e && d<e)
        {
            printf("L'address IP est au Classe de D\n");
        }
    else if(a>=w && a<e && b<e && c<e && d<e)
        {
            printf("L'address IP est au Classe de E\n");
        }
    else if (a>e || b>e || c>e || d>e)
        {
            printf("ERREUR Address IP est invalide : %d.%d.%d.%d\n\n",a, b, c, d);
        }
}