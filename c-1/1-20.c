#include <stdio.h>

#define TABSTOP 4

int detab(char s[], int i);
int get_line(char s[]);

int main(){
    char line[1000];
    while((get_line(line)) > 0){
        printf("%s",line);
    }

    return 0;
}

int get_line(char s[]){
    int c, i;
    i = 0;
    while((c = getchar()) != EOF && c != '\n'){
        if(c == '\t'){
            i = detab(s, i);
        }else{
            s[i] = c;
            i++;
        }
    }

    if(c == '\n'){
        s[i] = c;
        i++;
    }

    s[i] = '\0';
    i++;

    return i;
}

int detab(char s[], int i){
    int j;

    for(j = 0; j < TABSTOP-1; j++){
        s[i] = ' ';
        i++;
    }

    return i; // return the new length of string
}


