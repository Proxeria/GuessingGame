# include <iostream>

using namespace std;


int main()
{
  while true {
      stillPlaying = true;
      int randmnum = rand() % 100 + 1; 
      int input  = 0;
      cout << "Enter a number 1-100" << endl;
      cin >> input;
      cout << "You Entered: " << input << endl;
      if input == randnum {
	  cout << "You guessed the number!" << endl;
	  
	}				      
      return 0;
    }
}
