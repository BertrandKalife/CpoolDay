
void print_char();

void my_print_n_ascii(int i){

    int a=33+i;
    int x=33;
    if(i>0 && i<=94){
        for(x;x<a;x++){
            print_char(x);
        }
    }
}
