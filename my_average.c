#include <stdio.h>



float my_average (int* lst, int taille){

    float i=0;

    for(int x=0; x<taille; x++){

       i = i + lst[x];
    }

    float a= i/taille;
    
    return a;
}



int main(void)
{
    int list[5] = {10, 17, 6, 14, 20};
    printf("%f\n", my_average(list, 5));
    return 0;
}