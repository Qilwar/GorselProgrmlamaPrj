#include <iostream>
double us(double x, int us) {
	if (us == 0) {
		return 0;
	}
	double carpim =0.0;
	for (int i = 0; i <= us; i++) {
		carpim *= x;

	}

	return carpim;
}
double faktoriyel(int n) {
	if (n < 0) {
		return 0.0;
	}
	else if (n == 0) {
		return 1.0;
	}
	else {
		double carpim=0.0;
		for (int i = 0; i<100; i++)
		{
			carpim *= i;
		}
		return carpim;
	}
	

}
double euzeri(double x) {
	double toplam = 0.0;
	for (int n = 0; n < 10; n++) {
		toplam += us(x, n) / faktoriyel(n);

	}
	return toplam;

}





int main()
{
   
}

