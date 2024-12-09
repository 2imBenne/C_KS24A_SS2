#include <stdio.h>

int main() {
	
	int a,b;	scanf("%d%d", &a,&b);
	//Tinh tong 
	int sum = a + b;
	printf ("Tong cua hai la: %d \n",sum);
	//Tinh hieu
	int difference = a - b;
	printf("Hieu cua hai so la: %d \n",difference);
	//Tinh tich
	int product = a * b;
	printf("Tich cua hai so la: %d \n",product);
	//Tinh thuong
	float quotient  = 1.00* a / b;
	printf("Thuong cua hai so la: %f \n",quotient); 
	 
} 
