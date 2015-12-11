/*

    Tic Tac Toe
    Mariann Szabo-Freund
    Prototype

*/

#include <iostream>

using namespace std;

int main()
{
    //Defining the board and values in the board


    char playBoard[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'}; //each element of the array defines a cell in the board
    char player; //there are two players
    char tic; //this is either X or O, this is what is put in the cell when the player plays
    char playChoice; //

    cout << "Let's play a game of Tic Tac Toe!" << endl;
    cout << "Below is the initial Playing Board" << endl;
    cout << "\n\n" << endl;

    //Printing the board -- serves as a template to reprint the board
    //the board is using the elements of the array

    cout << "     |     |     " << endl;
    cout << "  " << playBoard[0] << "  |  " << playBoard[1] << "  |  " << playBoard[2] << endl;
cout << "_____|_____|_____" << endl;
cout << "     |     |     " << endl;
cout << "  " << playBoard[3] << "  |  " << playBoard[4] << "  |  " << playBoard[5] << endl;
cout << "_____|_____|_____" << endl;
cout << "     |     |     " << endl;
cout << "  " << playBoard[6] << "  |  " << playBoard[7] << "  |  " << playBoard[8] << endl;
cout << "     |     |     " << endl;

//End the board

cout <<"To Play you must select a cell by it's number !" <<endl;

//Begining the game in a do - while loop or maybe a for loop because there are 9 turns

for (int x = 0; x < 9; x++)
{
   if (x%2 == 0) //this first 'if' finds out who is the first player to go even is Player 1 and odd is Player 2
   {
       player = '1';
       tic = 'X';
   }
   else
   {
       player = '2';
       tic = 'O';
   }

   cout << "Player "  << player << " select a cell to play " << tic << " : " << endl;
   cin >> playChoice;

//resumed on 8/4
//The switch will check for user play move and assign the value to the array's subset
//if the move is invalid 'x' will be decremented to give the player another turn

switch(playChoice)
{
case '1'	: if (playBoard[0] == 'X' || playBoard[0] == 'O')
{
--x;
cout << "That was not a valid choice" << endl;
}
else { playBoard[0] = tic; }
break;
case '2'	: if (playBoard[1] == 'X' || playBoard[1] == 'O')
{
--x;
cout << "That was not a valid choice" << endl;
}
else { playBoard[1] = tic; }
break;
case '3'	: if (playBoard[2] == 'X' || playBoard[2] == 'O')
{
--x;
cout << "That was not a valid choice" << endl;
}
else { playBoard[2] = tic; }
break;
case '4'	: if (playBoard[3] == 'X' || playBoard[3] == 'O')
{
--x;
cout << "That was not a valid choice" << endl;
}
else { playBoard[3] = tic; }
break;
case '5'	: if (playBoard[4] == 'X' || playBoard[4] == 'O')
{
--x;
cout << "That was not a valid choice" << endl;
}
else { playBoard[4] = tic; }
break;
case '6'	: if (playBoard[5] == 'X' || playBoard[5] == 'O')
{
--x;
cout << "That was not a valid choice" << endl;
}
else { playBoard[5] = tic; }
break;
case '7'	: if (playBoard[6] == 'X' || playBoard[6] == 'O')
{
--x;
cout << "That was not a valid choice" << endl;
}
else { playBoard[6] = tic; }
break;
case '8'	: if (playBoard[7] == 'X' || playBoard[7] == 'O')
{
--x;
cout << "That was not a valid choice" << endl;
}
else { playBoard[7] = tic; }
break;
case '9'	: if (playBoard[8] == 'X' || playBoard[8] == 'O')
{
--x;
cout << "That was not a valid choice" << endl;
}
else { playBoard[8] = tic; }
break;
default	: cout << "That was not a valid choice" << endl;
x--;

}//END SWITCH

cout << "     |     |     " << endl;
cout << "  " << playBoard[0] << "  |  " << playBoard[1] << "  |  " << playBoard[2] << endl;
cout << "_____|_____|_____" << endl;
cout << "     |     |     " << endl;
cout << "  " << playBoard[3] << "  |  " << playBoard[4] << "  |  " << playBoard[5] << endl;
cout << "_____|_____|_____" << endl;
cout << "     |     |     " << endl;
cout << "  " << playBoard[6] << "  |  " << playBoard[7] << "  |  " << playBoard[8] << endl;
cout << "     |     |     " << endl;

}

cout << "Thanks for Playing!" << endl;
//to be continued

return 0;
}
