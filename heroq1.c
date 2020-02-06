#include <stdio.h>
#include <stdlib.h>





struct depart;
struct Musee;
struct Aqualand;
int Dir;




int main(){
	
printf ("en quelle direction souhaitez-vous aller ? \n");
printf ("1 pour le Musee et 2 pour la plage \n");
printf ("Alors ? \n");

scanf ("%d" ,&Dir);

 if (Dir==1){
	 printf ( "vous arrivez au Musee" );
 }

 if (Dir==2){
	 printf ( "vous arrivez a la plage" );
	 


 }


 
 
 
 
 
 
 
 
 return 0;
}