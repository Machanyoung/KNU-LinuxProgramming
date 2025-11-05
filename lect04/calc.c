#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
	if (argc != 4){
		return 1;
	}

	int a = atoi(argv[1]);
	int b = atoi(argv[3]);
	char op = argv[2][0];
	int result;

	switch (op) {
		case '+': result = a + b; break;
		case '-': result = a - b; break;
		case '*': result = a * b; break;
		case '/':
			  if ( b == 0) {
				  printf("not divided zoro\n"); return 1;}
			  result = a / b; break;
		defualt:
			  printf("use other op");
			  return 1;
	}

	printf ("%d\n", result);
	return 0;
}
