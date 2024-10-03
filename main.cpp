#include "GuessingGame.hpp"


int main(){
    GuessingGame player ;
    while(1){
        player.GenerateRandomNumber();
        while(player.GameFlag == "NotYet"){
            player.GetTheNumberFromUser();
            player.CompareTheTwoNumbers();
        }

    }


}
