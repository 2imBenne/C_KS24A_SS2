#include <stdio.h>

int main() {
    // Kieu du lieu  int - luu tru cac so nguyen 
    int tuoi  = 18; // Bien tuoi duoc khoi tao voi gia tri la 18 

    // Kieu du lieu float - luu tru cac so thap phan 
    float chieucao = 1.77; // Bien chieucao duoc khoi tao voi gia tri la 1.77m 

    // Kieu du lieu double - luu tru cac so thap phan co do chinh xac cao hon float  
    double cannang = 74.35; // Bien cannang duoc khoi tao voi gia tri là 74.35kg 

    // Kieu du lieu char - luu tru mot ky tu don 
    char xeploai = 'A'; // Bien xeploai duoc khoi tao voi gia tri la 'A'

    // Kieu du lieu char[] - luu tru chuoi ky tu 
    char ten[] = "LamGiaHuy"; // Bien ten duoc khoi tao voi gia tri la "LamGiaHuy"

    // In ra cac gia tri bien de kiem tra 
    printf("Ten: %s\n", ten);
    printf("Tuoi: %d\n", tuoi);
    printf("Chieu cao: %.2f m\n", chieucao);
    printf("Can nang: %.1f kg\n", cannang);
    printf("Xep loai: %c\n", xeploai);

    return 0;
}
