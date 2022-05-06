/**
 * @file    Lab7_2.h
 * @author  Dylan Brown
 * @brief   This file is the header file for lab 7.2
 * @version 0.1
 * @date    2022-04-03
 *
 * @copyright Copyright (c) 2022
 *
 */

#pragma once        // make sure the functions are defined
#include <iostream> // imports input and output library

void showBoard(char board[3][3]);           // this function shows the board in its current state

char playerChoice1(char board[3][3]);       // Gets and validates player 1s choice

char playerChoice2(char board[3][3]);       // gets and validates player 2s choice

char updateBoard(char, char board[3][3]);   // updates the boared if its player1's turn

char updateBoard2(char, char board[3][3]);  // updates the board if tis player 2s turn

bool winner(char board[3][3]);              // checks to see if anyone won each round

bool wantToContinue();                      // play again function