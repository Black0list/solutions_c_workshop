#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;

    srand(time(NULL)); // kat initialisi point de depart dyal dyal rand, bach kola mara te3tina different value

    printf("entrer longueur du Mot de passe");
    scanf("%d", &n);

    if (n <= 0) {
        printf("longueur positif svp .\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        int type = rand() % 3; 

        if (type== 0) {
            printf("%c", (rand() % 26) + 65);  
        } else if (type == 1) {
            printf("%c", (rand() % 26) + 97);  
        } else {
            printf("%c", (rand() % 10) + 48);  
        }
    }
    
    return 0;
}

