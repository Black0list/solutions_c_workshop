#include <stdio.h>

int main(){

    int age[23] = { 25,22,23,20,18,19,18,25,28,22,22,21,22,23,24,26,21,21,21,19,21,22,22};
    int countermax = 0,index = 0;

    int length = sizeof(age)/sizeof(age[0]);

    //printf("%d", length);

    for(int i=0;i<length;i++){
        int counter = 0;
        for(int j=0;j<length;j++){
            if(age[i] == age[j]){
                counter++;
            }
        }
        if(counter > countermax){
            countermax = counter;
            counter  = 0;
            index = i;
        }
    }

    printf("Nombre le plus repeter est : %d", age[index]);


}