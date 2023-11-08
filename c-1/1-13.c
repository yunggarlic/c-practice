#include <stdio.h>

int main(){
	int c, i;
	int count[20];
	int current_count = 0;
	for(i = 0; i < 20; i++)
		count[i] = 0;

	while((c = getchar()) != EOF){
		if(c == ' ' || c == '\t' || c == '\n'){
			count[current_count]++;
			current_count = 0;
		}else{
			current_count++;
		}
	}
	
	for(int j = 0; j < 20; j++){
		printf("%d: ", j);
		for(int k = 0; k < count[j]; k++){
			printf("|");
		}
		printf("\n");
	}
	
	printf("\n");
	return 0;
}
