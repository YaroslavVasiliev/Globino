#include <iostream>
#include <ctime>
int a = 0, ch = 0, sum = 0;
float sr = 0;
using namespace std;
void inpt(int *a, int *max, int *min);
void sum(int *sr);
void che(int *ch);
int main(){
	int random[1000] = {};	
	srand(time(NULL));
	int max = 0, min = 100;
	void inpt(int *a, int *max, int *min){
		for (int i = 0; i < 1000; i++)
		{
			a += 1;
			random[i] += rand() % 100;
			if (max < random[i]) max = random[i];
			if (min > random[i]) min = random[i];
			cout << random[i] << " ";
			if (a == 6){a = 0; cout << endl;}
		}
		system("pause");
	void sum(int *sr)
	{
		for (int i = 0; i < 1000; i++) {sum += random[i];}
		sr = sum / 1000.;
	}
	void che(int *ch)
	{
		for (int i = 0; i < 1000; i++)
		{
			if (random[i] % 2 == 0) {ch += 1;}
			random[i] *= 2;
		}
	}
	cout << "chentie = " << ch << endl;
	cout << "nechitnie = " << 1000-ch << endl;
	cout << "summa = " << sum << endl << "srednee = " << sr << endl;
	cout << "max = " << max << endl << "min = " << min << endl;
	system("pause");
	return 0;
}