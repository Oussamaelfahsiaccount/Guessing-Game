#include "GuessingGame.hpp"
#include <experimental/random>
#include <iostream>

GuessingGame::GuessingGame(){
    std::cout<<"- Welcome to the Number Guessing Game!"
    <<std::endl
    <<"- Can you guess the secret number between 1 and 100?"
    <<std::endl; 
    GuessedNumber   = 0 ; 

}


void GuessingGame::GenerateRandomNumber(){
    GeneratedNumber = std::experimental::randint(0, 100);
    GameFlag = "NotYet" ; 
}


void GuessingGame::GetTheNumberFromUser(){
    std::cout << "-->Please enter your guess: ";
    std::cin >> GuessedNumber;
}

void GuessingGame::CompareTheTwoNumbers(){
    if(GuessedNumber == GeneratedNumber ){
        std::cout<<success <<std::endl;
        GameFlag = "successed" ; 
    }else if(GuessedNumber < GeneratedNumber){
        std::cout << LessThan << std::endl;
    }else {
        std::cout << MoreThan << std::endl;
    }
}
