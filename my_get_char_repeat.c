
void print_number();

int my_get_char_repeat(char to_find, char* str){
    int i=0;
    for(int x=0; str[x]; x++){

        if (str[x]== to_find)i++;
    }
    print_number(i);
}