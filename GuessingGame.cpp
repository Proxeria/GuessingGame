# include <iostream>
/*
Nick Peterson
9/26/2021
This program runs a game where the user tries to guess a number 1-100
upon guessing the right number, it will ask them if they want to play again as well
as displaying how many attempts it took the to get the correct answer
*/
using namespace std;


int main()
{
  int guesscount = 0;
  while true {
      stillPlaying = true;
      int randmnum = rand() % 100 + 1;
      int input  = 0;
      bool stillplaying = true;
      cout << "Enter a number 1-100" << endl;
      cin >> input;
      cout << "You Entered: " << input << endl;
      if input == randnum {
	  cout << "You guessed the number!" << endl;
	  cout << "It took you " << guesscount << " tries to guess it!" << endl;
	  cout << "Would You Like to Play Again? true/false" << endl;
	  cin >> stillplaying;
	  if still playing == true {
	      continue;
	    }
	  else {
	    break
	      }
      return 0;
	}
      if input != randnum {
	  guesscount = guesscount + 1;
	  cout << "You guessed the wrong number!" << endl << "Try again!";
}
