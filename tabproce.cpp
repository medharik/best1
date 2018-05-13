#include<stdio.h>
#include<conio.h>
//edition des procedures
void ajouter(float x , float y){
	float somme =x+y;
	printf("la somme est %.2f \n",somme);
}
// une procédure qui , selon un tableau et sa longueur
//, nous affiche la somme de ses valeurs
void sommer(float t[],int l){
float somme =0;
int i;
for(i=0;i<l;i++){
	somme += t[i];
}
printf("la somme est %.2f\n", somme);
}


main(){
	int i;
float prix[3], note[4];
ajouter(10,30);	
ajouter(12,8);	
// pour saisir dans le tableau prix
for(i=0;i<3;i++){
	printf("entrer un prix\n");
	scanf("%f",&prix[i]);
}
for(i=0;i<4;i++){
	printf("entrer une note\n");
	scanf("%f",&note[i]);
}
// appel de la procedure sommer
sommer(prix,3); 
sommer(note,4);	
	getch();
}
