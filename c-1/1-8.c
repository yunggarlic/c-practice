#include <stdio.h>

int main(){
  int c;
	int blanks, tabs, newlines;

	blanks = tabs = newlines = 0;

	while((c = getchar()) != EOF){
		if(c == '\n') ++newlines;
		if(c == '\t') ++tabs;
		if(c == ' ') ++blanks;
	
	}

	printf("Tabs --> %d\nBlanks --> %d\nNew Lines --> %d\n", tabs, blanks, newlines);

  return 0;
}
