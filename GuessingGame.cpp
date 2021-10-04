/*
Nick Peterson
9/26/2021
This program runs a game where the user tries to guess a number 1-100
upon guessing the right number, it will ask them if they want to play again as well
as displaying how many attempts it took the to get the correct answer
*/
#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
char chr;

int main() {
  int number = 0;
  int guess = 0;
  int tries = 1;
  char answer;
  srand(time(0));
  do {
    number = rand()%100+1;
    do {
      cout<<"Enter a number between 1 and 100"<<endl;
      cin>>guess;
      if (number < guess) {
	cout << "Too high" <<endl;
	tries += 1;
      }
      if (number > guess) {
	cout << "Too low" << endl;
	tries += 1;
      }
    } while(guess != number);
    if (number == guess) {
      cout << "You guessed the number! " <<endl;
      cout << "It took you " << tries << " tries" << endl;
    }
    
    cout << "Would you like to play again?  Enter Y/N " << endl;
    cin >> answer;
    if (answer == 'N') {
      cout << "Thanks for playing!" << endl;
    }
  } while(answer == 'Y');
  
  return 0;
}
  
