#include <stdio.h>

void print_number();

int my_get_char_repeat(char to_find, char* to_search){
   
    if(to_search == NULL){
        print_number(0);
    }
    else{
        int i=0;
        for(int x=0; to_search[x]; x++){

                if (to_search[x]== to_find)i++;
            }
        return i; 
    }
}
