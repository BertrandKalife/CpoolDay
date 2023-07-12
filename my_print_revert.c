
void print_char();
void print_number();

void my_print_revert(char* t){

    int x=0;
    for(x; t[x]!='\0'; x++);

    for(x; x!=-1; x--){
        
        int a= t[x];
        print_char(a);
    }
}
