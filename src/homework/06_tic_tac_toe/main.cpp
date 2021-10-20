#include "tic_tac_toe.h"
#include <iostream>

//write using statements
using std::cout; using std::cin;

int main() 
{
	//cout << "Hello?";
	TicTacToe tictactoe;
	string choice = "N";
	string first_player;
	int position;

	do 
	{
		cout << "Time to play Tic Tac Toe!\n\n";
		cout << "This board is set up like this:\n";
		cout << "1 | 2 | 3\n";
    	cout << "4 | 5 | 6\n";
    	cout << "7 | 8 | 9\n\n";
		cout << "Choose first player X or O: \n";
		cin >> first_player;
		tictactoe.start_game(first_player);
		while (tictactoe.game_over() != true)
		{
			cout << "Player "<< tictactoe.get_player() << " pick a position from 1-9: \n";
			cin >> position;
			tictactoe.mark_board(position);
			tictactoe.display_board();			
		}
		cout << "The game is over!\n\n";
		cout << "Would you like to exit the game? (Y or N)?\n";
		cin >> choice;
	}		
	while (choice != "Y");
	cout << "Program Exiting";
	return 0;
}