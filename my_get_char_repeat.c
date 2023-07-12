
#include <stdio.h>

void print_number();

int my_get_char_repeat(char to_find, char* str){
   
    if(str == NULL){
        print_number(0);
    }
    else{
        int i=0;
        for(int x=0; str[x]; x++){

                if (str[x]== to_find)i++;
            }
       print_number(i);
    }
}