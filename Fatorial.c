#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int fatorial(int num){
int result =1;
int cont;
for(cont =2;cont<=num;cont++){
	result = cont*result;
}
	return result;
}

int main() {
	int num;
	printf("insira numero:\n");
	scanf("%d", &num);
	int res = fatorial(num);
	printf("%d\n", res);	
}


