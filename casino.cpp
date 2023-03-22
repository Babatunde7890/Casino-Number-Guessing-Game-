// These are the header files that we need for the code.
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <iomanip>

// The line below "using namespace std" statement makes
//it unnecessary to prefix the standard library functions with "std::".
using namespace std;
void intro();
int main() {
	intro();
    // Seed the random number generator with the current time
    srand(time(0)); 
    // Generate a random number between 1 and 100
    int secretNum = rand() % 100 + 1; 
    int guess, numGuesses = 0;
    bool win = false;
    
   //We print some introductory messages to the user.
    cout << "\n\tWelcome to the Number Guessing Game!"<<endl;
    cout << "\tI'm thinking of a number between 1 and 100. Can you guess what it is?" << endl;
    
   //We enter a while loop that continues until the user guesses the correct number. The loop starts by prompting the user to //enter a guess with cin >> guess.

    while (!win) {
        cout << "\tEnter your guess: ";
        cin >> guess;

   //We increment numGuesses each time the user makes a guess.

        numGuesses++;

   //We use an if statement to check if the user's guess is equal to the secret number. If so, we set win to true.
        
        if (guess == secretNum) {
            win = true;
            //If the user's guess is not equal to the secret number, we use an else if statement to check if the guess is too low. If //so, we print a message telling the user to try again with a higher number.
        } else if (guess < secretNum) {
            cout << "\tToo low! Try again." << endl;

           //If the user's guess is not equal to the secret number and not too low, we assume it must be too high and print a message //telling the user to try again with a lower number.
        } else {
            cout << "\tToo high! Try again." << endl;
        }
    }

            //Once the loop is finished, we print a message telling the user how many guesses it took to win.
    
    cout << "\tCongratulations! You guessed the number in " << numGuesses << " guesses." << endl;
    
            //The program ends with a return 0 statement.

    return 0;
}

        // Introduction section 
void intro(){
    cout << "\n\n\n\t     CASINO GUESSING NUMBER GAME";
    cout << "\n\n\n\n\t     MADE BY:SADIQ SHITTU TUNDE";
    cout << "\n\n\n\n\t     MATRIC NO: H/CTE/22/0701";
    cout << "\n\n\n\n\t     SUPERVISOR : ENGR NZUBE";
    cout << "\n\n\n\n\t     SCHOOL : THE FEDERAL POLYTECHNIC ILARO";
    cin.get();
}
