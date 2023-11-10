#include <stdio.h>

void reverse_string(char s[], int i);
int get_line(char s[]);

int main(){
    char line[1000];
    while((get_line(line)) > 0){
        printf("%s", line);
    }
    return 0;
}

int get_line(char s[]){
    int c,i;

    i = 0;

    while((c = getchar()) != EOF && c != '\n'){
        s[i] = c;
        ++i;
    }

    reverse_string(s, i);

    if(c == '\n'){
        s[i] = c;
        i++;
    }

    s[i] = '\0';
    i++;

    return i;
}

void reverse_string(char s[], int i){
    int p1;
    int p2;

    p1 = 0;
    p2 = i - 1;
    while(p1 != p2){
        char tmp = s[p1];
        s[p1] = s[p2];
        s[p2] = tmp;

        p1++;
        p2--;
    }
}
