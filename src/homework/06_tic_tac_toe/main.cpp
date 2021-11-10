#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include <iostream>

//write using statements
using std::cout; using std::cin;

int main() 
{
	TicTacToeManager manager; //create the game manager
	string choice = "N";
	string first_player;
	int x, o, t;

	do 
	{
		TicTacToe tictactoe; //create a game object
		cout << "Time to play Tic Tac Toe!\n\n";
		cout << "This board is set up like this:\n";
		cout << "1 | 2 | 3\n";
    	cout << "4 | 5 | 6\n";
    	cout << "7 | 8 | 9\n\n";
		// loop ensures that user correctly selects X or O to start the game
		do
		{
			cout << "Choose first player X or O: \n";
			cin >> first_player;
		} while (!(first_player == "X" || first_player == "O"));

		// start the game
		tictactoe.start_game(first_player);

		// loop will alternate between players and mark the board until the game is over
		while (tictactoe.game_over() != true)
		{
			cin>>tictactoe;
			cout<<tictactoe;			
		}

		// print the winner
		if(tictactoe.get_winner() != "C")
		{
			cout << "The winner is player " << tictactoe.get_winner() << "!\n";
		}
		else
		{
			cout << "This game was a tie.\n";
		}		

		cout << "The game is over!\n\n";

		//save the game to the game manager
		manager.save_game(tictactoe);
		//total the number of wins/ties
		manager.get_winner_totals(x, o, t);
		cout <<"X Wins: " << x << ", O Wins: " << o << ", Ties: " << t << "\n";

		// play again?
		cout << "Would you like to exit the game? (Y or N)?\n";
		cin >> choice;
	}		
	while (choice != "Y");
	cout << manager;
	cout << "Program Exiting";
	return 0;
}