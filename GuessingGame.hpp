#ifndef GUESSINGGAME_HPP
#define GUESSINGGAME_HPP

#include <string>

class GuessingGame{

public :
    std::string GameFlag = "NotYet" ;
    // Do some initializations
    GuessingGame();
    // Generating a number 
    void GenerateRandomNumber();
    // Get the number from the user
    void GetTheNumberFromUser();
    // Do comparaison
    void CompareTheTwoNumbers();

private :
    int GeneratedNumber ;
    int GuessedNumber   ;
    const std::string success = "Congratulations! You've guessed the correct number!";
    const std::string LessThan = "Too low! Give it another shot.";
    const std::string MoreThan = "Too high! Try again.";

};

#endif 
