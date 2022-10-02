#include <stdio.h>

#include "library.h"

main(){
int n,m,taille;
printf("saisir la taille de votre tableau : ");
scanf("%d",&taille);
int tab[taille];
printf("saisit les elements du tableau : \n");
for(n=0;n<taille;n++){
  scanf("%d",&tab[n]);


}
printf("votre tableau  avant : \n");
for(m=0;m<taille;m++){
 printf("%d ",tab[m]);




}

printf("\nvotre tableau apres : \n");

sorting(taille,tab);

}
