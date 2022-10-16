#include<stdio.h>
int luas (int panjang,int lebar){
	int luas;
	luas = panjang*lebar;
	return luas;
}
int keliling (int panjang, int lebar){
	int keliling;
	keliling = 2*(panjang+lebar);
	return keliling;
}
int main()
{
    int panjang, lebar;

   printf ("Masukkan panjang = ");
   scanf ("%d", &panjang);
   printf ("Masukkan lebar = ");
   scanf ("%d", &lebar);

    printf("Luas Persegi Panjang Adalah = %d\n", luas (panjang,lebar));
    printf("Keliling Persegi Panjang Adalah = %d", keliling (panjang,lebar));

	return 0;
}
