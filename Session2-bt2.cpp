#include <stdio.h>

int main() {
	
	int num1,num2,sum;
	//cho nguoi dung nhap vao so thu nhat 
	printf("Moi nhap so thu nhat: "); 
	scanf("%d" ,&num1 );
	//cho nguoi dung nhap vao so thu hai
	printf("Moi nhap so thu hai: "); 
	scanf("%d" ,&num2);
	//tinh tong
	sum = num1 + num2;
	//tra ket qua 
	printf("Tong cua %d va %d la: %d\n",num1,num2,sum);
	
	return 0; 
} 
