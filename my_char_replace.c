
void print_char();

void my_char_replace (char*str, char toFinde, char toReplace){

    int x=0;
    for(x; str[x]!='\0'; x++){
        
        if(str[x]!= toFinde){
            print_char(str[x]);
        }
        else{
            print_char(toReplace);
        }
    }
}