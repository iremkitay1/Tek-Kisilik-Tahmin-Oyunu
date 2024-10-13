#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");

	srand(time(0));
	int number = rand() % 100 + 1;
	int guess;
	int attempts = 0;

	cout << "1 ile 100 arasýnda bir sayý tahmin edin: ";
	do
	{
		cin >> guess;
		attempts++;
		if (guess > number)
		{
			cout << "Daha küçük bir sayý tahmin edin!" << endl;
		}
		else if (guess < number)
		{
			cout << "Daha büyük bir sayý tahmin edin!" << endl;
		}
		else if (guess = number)
		{
			cout << "Tebrikler! Sayýyý" << attempts << ". denemede buldunuz!" << endl;
		}
	} while (guess != number);
	{
		return 0;
	}
}