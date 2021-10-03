/*
Nick Peterson
9/26/2021
This program runs a game where the user tries to guess a number 1-100
upon guessing the right number, it will ask them if they want to play again as well
as displaying how many attempts it took the to get the correct answer
*/
#include <iostream>
#include <iomanip>
using namespace std;
char chr;

int main()
{
	int number = 0;
	int guess = 0;
	int tries = 0;
    	char answer;

    srand(number>0);
	do
	{
    number = rand()%100+1;;
	cout<<"Enter a number between 1 and 100"<<endl;
	cin>>guess;
	if (number < guess)
		cout << "Too high try again" <<endl;
	tries = 1;
	} while(number > guess);
		cout <<"Too low try again" <<endl;
		tries++;
	if (number==guess)
		cout << "You guessed the number! " <<endl;
	cout << "It took you " << tries << " tries";
	do
	{
cout << "Would you like to play again?  Enter Y/N";
		cin >> answer;
    if ('N')
		cout << "Thanks for playing!";
	} while(answer='Y');
			

	
	cin >> chr;
		return 0;

	}
