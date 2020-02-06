#include <stdio.h>
#include <stdlib.h>





struct depart;
struct Musee;
struct Aqualand;
int Dir;
int Targent =0;
int pdv =20;


int main(){
	
	if (Targent +=1);{
		printf ("vous gagnez une piece d'or");
		 printf ("%d" , &Targent);
		 
			
		 }
		 
		 if (pdv -=1);{
			 printf ("vous perdez de la vie");
		 printf ("%d" ,&pdv);
		 
			
		 }
	
printf ("en quelle direction souhaitez-vous aller ?/n");
printf("1 pour le Musee et 2 pour la plage /n");
printf("Alors ?/n");

scanf ("%d" ,&Dir);

 if (Dir==1){
	 Targent+=1;
	 printf ( "vous arrivez au Musee");
	
	 
 }

 if (Dir==2){
	 pdv-=1;
	 printf ( "vous arrivez a la plage");
 }


 
 
 
 
 
 
 
 
 return 0;
}