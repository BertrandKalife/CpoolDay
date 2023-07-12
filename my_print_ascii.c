
//0 - 127
void print_char();

void my_print_ascii(void){

    for(int i=33; i<=126; i++){
        print_char(i);
    }
}

int main(){
    my_print_ascii();
}