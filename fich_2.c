/* fich_2.c */
#include <stdio.h>
void main(void)
{
FILE *fich;
char c, nom[30];
printf("Nom du fichier a lire : ");
gets(nom);
fich = fopen(nom,"r");
c = fgetc(fich);
while ((!feof(fich)) && (c != "\26")) /* non portable */
{
if (c != "\26") putchar(c); /* pour MS-DOS */
c = fgetc(fich);
}
fclose(fich);
}
