
void print_char();

char* my_char_replace (char* origin, char toFinde, char toReplace){

    int x=0;
    for(x; origin[x]!='\0'; x++){
        
        if(origin[x]==toFinde){
            origin[x]= toReplace;
        }
    }
    return origin;
}