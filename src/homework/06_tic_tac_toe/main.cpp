#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_data.h"
#include <iostream>

//write using statements
using std::cout; using std::cin;

int main() 
{
	TicTacToeData data;
	TicTacToeManager(games);
	string choice = "Y";
	string first_player;
	int game_type;
	int x, o, t;

	do 
	{
		unique_ptr<TicTacToe> tictactoe; //declare the tictactoe object
		cout << "\nTime to play Tic Tac Toe!\n\n";
		// loop ensures that user correctly selects 3x3 or 4x4 grid
		do
		{
			cout << "Choose 3x3 or 4x4 grid (3 or 4): ";
			cin >> game_type;
		} while (!(game_type == 3 || game_type == 4));
		// loop ensures that user correctly selects X or O to start the game
		do
		{
			cout << "Choose first player X or O: ";
			cin >> first_player;
		} while (!(first_player == "X" || first_player == "O"));

		// start the game (3 or 4)
		if (game_type == 3)
		{
			tictactoe = make_unique<TicTacToe3>();
		}
		else
		{
			tictactoe = make_unique<TicTacToe4>();
		}
		
		tictactoe->start_game(first_player);

		// loop will alternate between players and mark the board until the game is over
		while (tictactoe->game_over() != true)
		{
			cin>>*tictactoe;
			cout<<*tictactoe;			
		}

		// print the winner
		if(tictactoe->get_winner() != "C")
		{
			cout << "The winner is player " << tictactoe->get_winner() << "!\n";
		}
		else
		{
			cout << "This game was a tie.\n";
		}		

		cout << "The game is over!\n\n";

		//save the game to the game manager
		games.save_game(tictactoe);
		//total the number of wins/ties
		games.get_winner_totals(x, o, t);
		cout <<"X Wins: " << x << ", O Wins: " << o << ", Ties: " << t << "\n\n";

		// play again?
		cout << "Would you like to play again? (Y or N)?\n";
		cin >> choice;
	}		
	while (choice != "N");
	cout << games;
	cout << "Program Exiting...\n";
	return 0;
}