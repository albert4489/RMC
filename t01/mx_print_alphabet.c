void mx_printchar(char c);

void mx_print_alphabet(void)
{
    int i;
    char alpha;
    for(i=0; i<26; i++){
        if(i%2==0) {
            alpha=i+65;
        } else {
            alpha=i+97;
        }
         mx_printchar(alpha);
    }
    mx_printchar('\n');
}

