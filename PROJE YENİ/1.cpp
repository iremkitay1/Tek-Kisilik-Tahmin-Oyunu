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

	cout << "1 ile 100 aras�nda bir say� tahmin edin: ";
	do
	{
		cin >> guess;
		attempts++;
		if (guess > number)
		{
			cout << "Daha k���k bir say� tahmin edin!" << endl;
		}
		else if (guess < number)
		{
			cout << "Daha b�y�k bir say� tahmin edin!" << endl;
		}
		else if (guess = number)
		{
			cout << "Tebrikler! Say�y�" << attempts << ". denemede buldunuz!" << endl;
		}
	} while (guess != number);
	{
		return 0;
	}
}