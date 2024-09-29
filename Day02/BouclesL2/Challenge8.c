#include <stdio.h>
#include <string.h>


int main(){

int n,temp;
int T[20] = {23,21,23,11,0,1,2,3,4,6,13,77,43,23,111,87,63,29,50,32};


printf("entrer n pour le Chercher Dans le Tableau : ");
scanf("%d", &n);

for(int i=0;i<20;i++){
    for (int j = 0; j < 20 - 1 - i; j++)
    {
        if(T[j] > T[j+1]) {
                temp = T[j];
                T[j] = T[j + 1];
                T[j + 1] = temp;
        }
    }
}

int first = 0;
int last = 19;
int half;
int found = 0;

while(first <= last) {
        half = (last + first)/2;
    if(n == T[half]){
        printf("%d existe a la position : %d", n,half);
        found = 1;
        break;
    } else if( n > T[half]){
        first = half + 1;
    } else {
        last = half - 1;
    }
}

if(!found) printf("%d existe pas", n);

}