
void print_char();

char* my_print_square(int i, char c){
    if(i>0){
        for(int x=0; x<i;x++){
            for(int x=0; x<i;x++){

                print_char(c);
            }
            print_char('\n');
        }
    }
}