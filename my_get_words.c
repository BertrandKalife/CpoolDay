void print_char();


void my_get_words (char* phr){

    for(int x=0; phr[x]!='\0'; x++){

        if(phr[x]!= ' ' && phr[x] != '\t'){

            print_char(phr[x]);
        }
        if(phr[x]==' '|| phr[x]=='\t'){
            
            if(phr[x+1]!= ' ' && phr[x+1] != '\t'){

                print_char('\n');
            }
        }
    }
}