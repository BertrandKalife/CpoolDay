

int my_little_bistro(int val1, char sig, int val2){
    int result=0;

    if(sig == '+') result= val1 + val2;
    if(sig == '-') result= val1 - val2;
    if(sig == '*') result= val1 * val2;
    if(sig == '/') result= val1 / val2;
    if(sig == '%') result= val1 % val2;

    return result;
}