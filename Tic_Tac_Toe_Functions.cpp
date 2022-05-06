/**
 * @file    Lab7_2Functions.cpp
 * @author  Dylan Brown
 * @brief   This file has the functions for 7.2
 * @version 0.1
 * @date    2022-04-3
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "Tic_Tac_Toe_Header.h" // header file import

void showBoard(char board[3][3]){ // prints the board out the the terminal with the formatting that is set
    std::cout << board[0][0] << " | " <<  board[0][1] << " | " <<  board[0][2] << "\n" << "- - - - - \n";
    std::cout << board[1][0] << " | " <<  board[1][1] << " | " <<  board[1][2] << "\n" << "- - - - - \n";
    std::cout << board[2][0] << " | " <<  board[2][1] << " | " <<  board[2][2]; 
}
char playerChoice1(char board[3][3]){
    char playerChoice; // declaring player1 choice as a char
    std::cout << "\nPlayer 1 pick a slot 1 through 9 or the game breaks: "; // asking for and receiving the choice from the user
    std::cin >> playerChoice;
    while(playerChoice != board[0][0] && playerChoice != board[0][1] && playerChoice != board[0][2] && playerChoice != board[1][0] 
     && playerChoice != board[1][1] && playerChoice != board[1][2] && playerChoice != board[2][0] && playerChoice != board[2][1] && playerChoice != board[2][2]){
        std::cout << "please try again"; // long validation process to make sure the choice is valid
        std::cin >> playerChoice;
    }
    for(int y = 0;y<4;y++){ // if it passes validation then is hits this loop and it finds which index to chnage to the user choice
        for(int x =0; x<3; x++){
            if(playerChoice == board[y][x]){
                return playerChoice; // if it finds the index that needs to be changed than it returns it
            
            }
        }
    }
    return playerChoice;    
}
char playerChoice2(char board[3][3]){ // exact same as the player 1 but with player 2 choice instead
    char playerChoice2;
    std::cout << "\nPlayer 2 pick a slot 1 through 9 or the game breaks: ";
    std::cin >> playerChoice2;
      while(playerChoice2 != board[0][0] && playerChoice2 != board[0][1] && playerChoice2 != board[0][2] && playerChoice2 != board[1][0]
     && playerChoice2 != board[1][1] && playerChoice2 != board[1][2] && playerChoice2 != board[2][0] && playerChoice2 != board[2][1] && playerChoice2 != board[2][2]){
        std::cout << "please try again";
        std::cin >> playerChoice2;
    }
    for(int y = 0;y<4;y++){
        for(int x =0; x<3; x++){
            if(playerChoice2 == board[y][x]){
                return playerChoice2;
            
            }
        }
    }
    return playerChoice2;
}
char updateBoard(char playerChoice, char board[3][3]){ // uses the return from the userChoice to find which index to update and updates it with the X
    if(playerChoice == '1'){ // if the player chose 1 then it turns into an x
        board[0][0] = 'X';   // turns the first index into an x
        return board[3][3];  // returns the updated board
    }else if(playerChoice == '2'){ // same as above just with different numbers to make sure all array indexes are checked.
        board[0][1] = 'X';
        return board[3][3];
    }else if(playerChoice == '3'){
        board[0][2] = 'X';
        return board[3][3];
    }else if(playerChoice == '4'){
        board[1][0] = 'X';
        return board[3][3];
    }else if(playerChoice == '5'){
        board[1][1] = 'X';
        return board[3][3];
    }else if(playerChoice == '6'){
        board[1][2] = 'X';
        return board[3][3];
    }else if(playerChoice == '7'){
        board[2][0] = 'X';
        return board[3][3];
    }else if(playerChoice == '8'){
        board[2][1] = 'X';
        return board[3][3];
    }else if(playerChoice == '9'){
        board[2][2] = 'X';
        return board[3][3];
    }
    return board[3][3];
}
char updateBoard2(char playerChoice, char board[3][3]){ // same code as above but it turns it into a O instead which is player 2s symbol
    if(playerChoice == '1'){
        board[0][0] = 'O';
        return board[3][3];
    }else if(playerChoice == '2'){
        board[0][1] = 'O';
        return board[3][3];
    }else if(playerChoice == '3'){
        board[0][2] = 'O';
        return board[3][3];
    }else if(playerChoice == '4'){
        board[1][0] = 'O';
        return board[3][3];
    }else if(playerChoice == '5'){
        board[1][1] = 'O';
        return board[3][3];
    }else if(playerChoice == '6'){
        board[1][2] = 'O';
        return board[3][3];
    }else if(playerChoice == '7'){
        board[2][0] = 'O';
        return board[3][3];
    }else if(playerChoice == '8'){
        board[2][1] = 'O';
        return board[3][3];
    }else if(playerChoice == '9'){
        board[2][2] = 'O';
        return board[3][3];
    }
    return board[3][3];
}
bool winner(char board[3][3]){ // goes through all of the possible winning scenarios checks to see if someone won that move or not.
    if(board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X'){ // if x is in all 3 spots listed than player 1 won
        std::cout << "\nPlayer 1 won";
        return true;
    }else if(board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X'){
        std::cout << "\nPlayer 1 won";
        return true;
    }else if(board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X'){
        std::cout << "\nPlayer 1 won";
        return true;
    }else if(board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X'){
        std::cout << "\nPlayer 1 won";
        return true;
    }else if(board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X'){
        std::cout << "\nPlayer 1 won";
        return true;
    }else if(board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X'){
        std::cout << "\nPlayer 1 won";
        return true;
    }else if(board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X'){
        std::cout << "\nPlayer 1 won";
        return true;
    }else if(board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X'){
        std::cout << "\nPlayer 1 won";
        return true;
    }
    if(board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O'){ // if O is in everyspot listed than player 2 won.
        std::cout << "\nPlayer 2 won";
        return true;
    }else if(board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O'){
        std::cout << "\nPlayer 2 won";
        return true;
    }else if(board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O'){
        std::cout << "\nPlayer 2 won";
        return true;
    }else if(board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O'){
        std::cout << "\nPlayer 2 won";
        return true;
    }else if(board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O'){
        std::cout << "\nPlayer 2 won";
        return true;
    }else if(board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O'){
       std::cout << "\nPlayer 2 won";
        return true;
    }else if(board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O'){
        std::cout << "\nPlayer 2 won";
        return true;
    }else if(board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O'){
        std::cout << "\nPlayer 2 won";
        return true;
    }
    return false; // returns false if no winning combo found which continous the loop in main
}
bool wantToContinue(){ // would you like to continue function
    std::string prompt = "\nWould you like to continue (Y/N): ";
    std::string answer;
    std::cout << prompt;
    std::cin >> answer;
    while (answer != "Y" && answer != "y" && answer != "N" && answer != "n"){
        std::cout << "Please input y or n" << std::endl;
        std::cout << prompt;
        std::cin >> answer;
    }
    return answer == "y" || answer == "Y"; //returns true if this is true and false if not
}
