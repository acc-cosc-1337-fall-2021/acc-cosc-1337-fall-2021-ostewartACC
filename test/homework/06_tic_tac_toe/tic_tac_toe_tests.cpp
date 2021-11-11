#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <iostream>

using std::cout; using std::cin;


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test tic tac toe start player X") {
	unique_ptr<TicTacToe> tictactoe = make_unique<TicTacToe3>();
	tictactoe->start_game("X");
	
	REQUIRE(tictactoe->get_player() == "X");
}

TEST_CASE("Test tic tac toe start player O") {
	unique_ptr<TicTacToe> tictactoe = make_unique<TicTacToe3>();
	tictactoe->start_game("O");
	
	REQUIRE(tictactoe->get_player() == "O");
}

TEST_CASE("Test tic tac toe draw") {
	unique_ptr<TicTacToe> tictactoe = make_unique<TicTacToe3>();
	tictactoe->start_game("X");
	tictactoe->mark_board(1);
	REQUIRE(tictactoe->game_over() == false);
	tictactoe->mark_board(2);
	REQUIRE(tictactoe->game_over() == false);
	tictactoe->mark_board(6);
	REQUIRE(tictactoe->game_over() == false);
	tictactoe->mark_board(4);
	REQUIRE(tictactoe->game_over() == false);
	tictactoe->mark_board(5);
	REQUIRE(tictactoe->game_over() == false);
	tictactoe->mark_board(3);
	REQUIRE(tictactoe->game_over() == false);
	tictactoe->mark_board(7);
	REQUIRE(tictactoe->game_over() == false);
	tictactoe->mark_board(9);
	REQUIRE(tictactoe->game_over() == false);
	tictactoe->mark_board(8);
	
	REQUIRE(tictactoe->game_over() == true);
	REQUIRE(tictactoe->get_winner() == "C");
}

TEST_CASE("Test tic tac toe win by first column") {
	unique_ptr<TicTacToe> tictactoe = make_unique<TicTacToe3>();
	tictactoe->start_game("X");
	tictactoe->mark_board(1);
	REQUIRE(tictactoe->game_over() == false);
	tictactoe->mark_board(2);
	REQUIRE(tictactoe->game_over() == false);
	tictactoe->mark_board(4);
	REQUIRE(tictactoe->game_over() == false);
	tictactoe->mark_board(5);
	REQUIRE(tictactoe->game_over() == false);
	tictactoe->mark_board(7);
	
	REQUIRE(tictactoe->game_over() == true);
	REQUIRE(tictactoe->get_winner() == "X");
}

TEST_CASE("Test tic tac toe win by second column") {
	unique_ptr<TicTacToe> tictactoe = make_unique<TicTacToe3>();
	tictactoe->start_game("X");
	tictactoe->mark_board(2);
	REQUIRE(tictactoe->game_over() == false);
	tictactoe->mark_board(3);
	REQUIRE(tictactoe->game_over() == false);
	tictactoe->mark_board(5);
	REQUIRE(tictactoe->game_over() == false);
	tictactoe->mark_board(4);
	REQUIRE(tictactoe->game_over() == false);
	tictactoe->mark_board(8);
	
	REQUIRE(tictactoe->game_over() == true);
	REQUIRE(tictactoe->get_winner() == "X");
}

TEST_CASE("Test tic tac toe win by third column") {
	unique_ptr<TicTacToe> tictactoe = make_unique<TicTacToe3>();
	tictactoe->start_game("X");
	tictactoe->mark_board(3);
	REQUIRE(tictactoe->game_over() == false);
	tictactoe->mark_board(2);
	REQUIRE(tictactoe->game_over() == false);
	tictactoe->mark_board(6);
	REQUIRE(tictactoe->game_over() == false);
	tictactoe->mark_board(4);
	REQUIRE(tictactoe->game_over() == false);
	tictactoe->mark_board(9);
	
	REQUIRE(tictactoe->game_over() == true);
	REQUIRE(tictactoe->get_winner() == "X");
}

TEST_CASE("Test tic tac toe win by first row") {
	unique_ptr<TicTacToe> tictactoe = make_unique<TicTacToe3>();
	tictactoe->start_game("X");
	tictactoe->mark_board(1);
	REQUIRE(tictactoe->game_over() == false);
	tictactoe->mark_board(4);
	REQUIRE(tictactoe->game_over() == false);
	tictactoe->mark_board(2);
	REQUIRE(tictactoe->game_over() == false);
	tictactoe->mark_board(5);
	REQUIRE(tictactoe->game_over() == false);
	tictactoe->mark_board(3);
	
	REQUIRE(tictactoe->game_over() == true);
	REQUIRE(tictactoe->get_winner() == "X");
}

TEST_CASE("Test tic tac toe win by second row") {
	unique_ptr<TicTacToe> tictactoe = make_unique<TicTacToe3>();
	tictactoe->start_game("X");
	tictactoe->mark_board(4);
	REQUIRE(tictactoe->game_over() == false);
	tictactoe->mark_board(2);
	REQUIRE(tictactoe->game_over() == false);
	tictactoe->mark_board(5);
	REQUIRE(tictactoe->game_over() == false);
	tictactoe->mark_board(3);
	REQUIRE(tictactoe->game_over() == false);
	tictactoe->mark_board(6);
	
	REQUIRE(tictactoe->game_over() == true);
	REQUIRE(tictactoe->get_winner() == "X");
}

TEST_CASE("Test tic tac toe win by third row") {
	unique_ptr<TicTacToe> tictactoe = make_unique<TicTacToe3>();
	tictactoe->start_game("X");
	tictactoe->mark_board(7);
	REQUIRE(tictactoe->game_over() == false);
	tictactoe->mark_board(2);
	REQUIRE(tictactoe->game_over() == false);
	tictactoe->mark_board(8);
	REQUIRE(tictactoe->game_over() == false);
	tictactoe->mark_board(3);
	REQUIRE(tictactoe->game_over() == false);
	tictactoe->mark_board(9);
	
	REQUIRE(tictactoe->game_over() == true);
	REQUIRE(tictactoe->get_winner() == "X");
}

TEST_CASE("Test tic tac toe win by first diagonal") {
	unique_ptr<TicTacToe> tictactoe = make_unique<TicTacToe3>();
	tictactoe->start_game("X");
	tictactoe->mark_board(1);
	REQUIRE(tictactoe->game_over() == false);
	tictactoe->mark_board(2);
	REQUIRE(tictactoe->game_over() == false);
	tictactoe->mark_board(5);
	REQUIRE(tictactoe->game_over() == false);
	tictactoe->mark_board(3);
	REQUIRE(tictactoe->game_over() == false);
	tictactoe->mark_board(9);
	
	REQUIRE(tictactoe->game_over() == true);
	REQUIRE(tictactoe->get_winner() == "X");
}

TEST_CASE("Test tic tac toe win by second diagonal") {
	unique_ptr<TicTacToe> tictactoe = make_unique<TicTacToe3>();
	tictactoe->start_game("X");
	tictactoe->mark_board(7);
	REQUIRE(tictactoe->game_over() == false);
	tictactoe->mark_board(2);
	REQUIRE(tictactoe->game_over() == false);
	tictactoe->mark_board(5);
	REQUIRE(tictactoe->game_over() == false);
	tictactoe->mark_board(4);
	REQUIRE(tictactoe->game_over() == false);
	tictactoe->mark_board(3);
	
	REQUIRE(tictactoe->game_over() == true);
	REQUIRE(tictactoe->get_winner() == "X");
}

TEST_CASE("Test tic tac toe manager") {
	
	int x_test, o_test, t_test; //create local variables
	
	TicTacToeManager manager; //create manager object

	unique_ptr<TicTacToe> game1 = make_unique<TicTacToe3>(); //create game1 object
	game1->start_game("X");
	game1->mark_board(7);
	REQUIRE(game1->game_over() == false);
	game1->mark_board(2);
	REQUIRE(game1->game_over() == false);
	game1->mark_board(5);
	REQUIRE(game1->game_over() == false);
	game1->mark_board(4);
	REQUIRE(game1->game_over() == false);
	game1->mark_board(3);
	REQUIRE(game1->game_over() == true);
	REQUIRE(game1->get_winner() == "X");

	manager.save_game(game1);	//save game1
	manager.get_winner_totals(x_test, o_test, t_test);
	REQUIRE(x_test == 1); 
	REQUIRE(o_test == 0);
	REQUIRE(t_test == 0);

	unique_ptr<TicTacToe> game2 = make_unique<TicTacToe3>();  //create game2 object
	game2->start_game("O");
	game2->mark_board(7);
	REQUIRE(game2->game_over() == false);
	game2->mark_board(2);
	REQUIRE(game2->game_over() == false);
	game2->mark_board(5);
	REQUIRE(game2->game_over() == false);
	game2->mark_board(4);
	REQUIRE(game2->game_over() == false);
	game2->mark_board(3);
	REQUIRE(game2->game_over() == true);
	REQUIRE(game2->get_winner() == "O");

	manager.save_game(game2);	//save game2
	manager.get_winner_totals(x_test, o_test, t_test);
	REQUIRE(x_test == 1);
	REQUIRE(o_test == 1);
	REQUIRE(t_test == 0);

	unique_ptr<TicTacToe> game3 = make_unique<TicTacToe3>(); //create game3 object
	game3->start_game("X");
	game3->mark_board(1);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(2);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(6);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(4);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(5);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(3);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(7);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(9);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(8);
	
	REQUIRE(game3->game_over() == true);
	REQUIRE(game3->get_winner() == "C");

	manager.save_game(game3);	//save game3
	manager.get_winner_totals(x_test, o_test, t_test);
	REQUIRE(x_test == 1);
	REQUIRE(o_test == 1);
	REQUIRE(t_test == 1);
}