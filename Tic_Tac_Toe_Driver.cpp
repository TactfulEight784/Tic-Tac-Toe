/**
 * @file    Lab7.2.cpp
 * @author  Dylan Brown
 * @brief   This file is the main for 7.2 lab
 * @version 0.1
 * @date    2022-04-3
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "Lab7_2.h" // including the header file with the functions

using namespace std;

   
int main(){
    do{
    char board[3][3]; // defining the array
    int i = 49;       // starting i as 49 which is 1 in the ascii table
    for(int y = 0;y<4;y++){ 
        for(int x =0; x<3; x++){
            board[y][x]=i; // applying numbers to all of the indexes to stat the game
            i++;
        }
    }
    
        showBoard(board);
        for(int i = 0; i<9;i++){ // runs the loop for 9 turns
            if(i % 2 == 0){ // starts on player 1 and alternates every time this make sure it does
                updateBoard(playerChoice1(board) ,board); // calls the functions the functions to get and update the board with the input

            }else{
                updateBoard2(playerChoice2(board) , board); // same as last comment but player 2
            }
            
            showBoard(board); // shows the board after every go so the users can see the game
            
            if(winner(board)== true){ // if winner is returned true than it breaks the loop
                break;
            }else if(i == 8){ // if the game reachs the end than it ends in a tie
                cout << "\nTie";
            }
        }
        
    }while(wantToContinue()); // play again function being called
    
    return 0;
}
