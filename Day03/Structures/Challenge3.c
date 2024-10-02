#include <stdio.h>


typedef struct Rectangle{
        int longueur;
        int largeur;
} Rectangle;



int Surface(int longueur, int largeur){
    return longueur * largeur;
}

int main(){

    Rectangle p;

    printf("entrer longueur :");
    scanf("%d", &p.longueur);

    printf("entrer largeur :");
    scanf("%d", &p.largeur);   

    printf("Surface est : %d", Surface(p.longueur, p.largeur));

}