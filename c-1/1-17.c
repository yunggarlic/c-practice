#include <stdio.h>

void clearArray(char s[], int len);

int main(){
    int i = 0;
    int c;
    char line[1000];
    while((c = getchar()) != EOF){
        if(c == '\n'){
            if(i >= 80){
                printf("This line was longer than 80 characters: ");
                printf("%s\n", line);
                clearArray(line, i);
                i = 0;
            }
        }else{
            line[i] = c;
            ++i;
        }
    }
    
    return 0;
}

void clearArray(char s[], int len){
    int i;

    for (i = 0; i < len-1; ++i){
        s[i] = '\0';
    }
}
