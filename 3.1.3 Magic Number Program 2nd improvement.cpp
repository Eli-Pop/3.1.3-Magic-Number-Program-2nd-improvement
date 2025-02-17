// Magic Number program: 2nd improvement

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int magic;  // magic number
	int guess;  // user's guess

	magic = rand(); // get a random number

	cout << "Enter your guess: ";
	cin >> guess;

	if (guess == magic)
	{
		cout << "** Right **\n";
		cout << magic << " is the magic number. \n";
	}
	else
	{
		cout << "...Sorry, you're wrong.";
		if (guess > magic)
		{
			cout << "Your guess is too high.\n";
		}
		else cout << "Your guess is too low.\n";
	}

	system("pause");
	return 0;
}