#include <stdio.h>

int main(){

	//for(int i = 0; i < 1000000; i+=1000) {
	//	printf("%d Fungujeme\n",i);
	//}

	int j=0;
	do {
		printf("%d Fungujeme\n",j);
		j+=2;
	}
	while(j < 10);
		

	return 0;
}