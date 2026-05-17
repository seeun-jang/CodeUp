#include <stdio.h>
int main(void){
	char x, t='a';
    scanf("%c", &x);
	
	while (t <= x)
	{
		printf("%c\t", t);
		t++;
	}
	return 0;
}
