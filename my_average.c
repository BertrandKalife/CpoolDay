
float my_average (int* lst, int taille){

    float i=0;

    for(int x=0; x<taille; x++){

       i = i + lst[x];
    }

    float a= i/taille;
    
    return a;
}