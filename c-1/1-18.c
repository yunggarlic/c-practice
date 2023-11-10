#include <stdio.h>

int m_getline(char s[]);
void trimEnd(char line[], int i);
void copy(char to[], char from[]);

int main(){
    char line[1000];
    while((m_getline(line)) > 0){
        printf("%s",line);
    }
    return 0;
}

int m_getline(char s[]){
    int c, i;

    int trailing_start = 0;
    int trailing_end = 0;
    i = 0;
    while((c = getchar()) != EOF && c != '\n'){
        if(c != '\t' && c != ' '){
            trailing_start = 1;
        }

        if(trailing_start == 1){
            s[i] = c;
            ++i;
        }
    }

    trimEnd(s, i);

    if(c == '\n'){
        s[i] = c;
        ++i;
    }

    s[i] = '\0';

    return i;
}

void trimEnd(char line[], int i){
    int j;
    int trailing_end = 0;
    for(j = i-1; j > -1; j--){
        if(line[j] != ' ' || line[j] != '\t'){
            break;
        }
        if(trailing_end == 0){
            line[j] = '\0';
        }
    }
}

void copy(char to[], char from[]){
    int i = 0;

    i = 0;
    while((to[i] = from[i]) != '\0'){
        ++i;
    }
}
