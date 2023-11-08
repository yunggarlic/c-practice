#include <stdio.h>

int main(){
	int c;
	int flag = 0;
	while((c = getchar()) != EOF){
		if(c == ' '){
			if(flag == 0)
				printf("\n");
			flag = 1;
		}
		else{
			putchar(c);
			flag = 0;
		}
	}
	return 0;
}
