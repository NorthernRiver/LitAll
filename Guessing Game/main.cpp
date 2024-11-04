#include <iostream>

using namespace std;

int main()
{
   int secretNum = 7;
   int guess;
   int guessCount = 7;
   int guessLimit = 0;
   bool outOfGuesses = false;


   cout<< "Welcome to number guesser, you will have " << guessCount << " guesses to discover the secret number. Good luck." << endl;
   while(secretNum != guess && !outOfGuesses){
       if (guessCount > guessLimit){
    cout<< "Enter Guess: ";
    cin >> guess;
    guessCount--;
   } else {
   outOfGuesses = true;
   }
   if (guess > secretNum){
    cout << "To high. You have " << guessCount  << " Guesses left." << endl;
   } else if( guess < secretNum) {
   cout << "To Low. You have "<< guessCount <<" Guesses Left. " << endl;}
   else{
    cout << "DING DING DING " << endl;
   }
   }
   if(outOfGuesses){
    cout << "You Lose!";

   } else{
   cout << " You Win";}
    return 0;
}
