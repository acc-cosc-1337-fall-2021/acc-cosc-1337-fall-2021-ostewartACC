#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test tic tac toe start player X") {
	TicTacToe tictactoe;
	tictactoe.start_game("X");
	
	REQUIRE(tictactoe.get_player() == "X");
}

TEST_CASE("Test tic tac toe start player O") {
	TicTacToe tictactoe;
	tictactoe.start_game("O");
	
	REQUIRE(tictactoe.get_player() == "O");
}

TEST_CASE("Test tic tac toe draw") {
	TicTacToe tictactoe;
	tictactoe.start_game("X");
	tictactoe.mark_board(1);
	tictactoe.mark_board(2);
	tictactoe.mark_board(6);
	tictactoe.mark_board(4);
	tictactoe.mark_board(5);
	tictactoe.mark_board(3);
	tictactoe.mark_board(7);
	tictactoe.mark_board(9);
	tictactoe.mark_board(8);
	
	REQUIRE(tictactoe.game_over() == true);
	REQUIRE(tictactoe.get_winner() == "C");
}

TEST_CASE("Test tic tac toe win by first column") {
	TicTacToe tictactoe;
	tictactoe.start_game("X");
	tictactoe.mark_board(1);
	tictactoe.mark_board(2);
	tictactoe.mark_board(4);
	tictactoe.mark_board(5);
	tictactoe.mark_board(7);
	
	REQUIRE(tictactoe.game_over() == true);
	REQUIRE(tictactoe.get_winner() == "X");
}

TEST_CASE("Test tic tac toe win by second column") {
	TicTacToe tictactoe;
	tictactoe.start_game("X");
	tictactoe.mark_board(2);
	tictactoe.mark_board(3);
	tictactoe.mark_board(5);
	tictactoe.mark_board(4);
	tictactoe.mark_board(8);
	
	REQUIRE(tictactoe.game_over() == true);
	REQUIRE(tictactoe.get_winner() == "X");
}

TEST_CASE("Test tic tac toe win by third column") {
	TicTacToe tictactoe;
	tictactoe.start_game("X");
	tictactoe.mark_board(3);
	tictactoe.mark_board(2);
	tictactoe.mark_board(6);
	tictactoe.mark_board(4);
	tictactoe.mark_board(9);
	
	REQUIRE(tictactoe.game_over() == true);
	REQUIRE(tictactoe.get_winner() == "X");
}

TEST_CASE("Test tic tac toe win by first row") {
	TicTacToe tictactoe;
	tictactoe.start_game("X");
	tictactoe.mark_board(1);
	tictactoe.mark_board(4);
	tictactoe.mark_board(2);
	tictactoe.mark_board(5);
	tictactoe.mark_board(3);
	
	REQUIRE(tictactoe.game_over() == true);
	REQUIRE(tictactoe.get_winner() == "X");
}

TEST_CASE("Test tic tac toe win by second row") {
	TicTacToe tictactoe;
	tictactoe.start_game("X");
	tictactoe.mark_board(4);
	tictactoe.mark_board(2);
	tictactoe.mark_board(5);
	tictactoe.mark_board(3);
	tictactoe.mark_board(6);
	
	REQUIRE(tictactoe.game_over() == true);
	REQUIRE(tictactoe.get_winner() == "X");
}

TEST_CASE("Test tic tac toe win by third row") {
	TicTacToe tictactoe;
	tictactoe.start_game("X");
	tictactoe.mark_board(7);
	tictactoe.mark_board(2);
	tictactoe.mark_board(8);
	tictactoe.mark_board(3);
	tictactoe.mark_board(9);
	
	REQUIRE(tictactoe.game_over() == true);
	REQUIRE(tictactoe.get_winner() == "X");
}

TEST_CASE("Test tic tac toe win by first diagonal") {
	TicTacToe tictactoe;
	tictactoe.start_game("X");
	tictactoe.mark_board(1);
	tictactoe.mark_board(2);
	tictactoe.mark_board(5);
	tictactoe.mark_board(3);
	tictactoe.mark_board(9);
	
	REQUIRE(tictactoe.game_over() == true);
	REQUIRE(tictactoe.get_winner() == "X");
}

TEST_CASE("Test tic tac toe win by second diagonal") {
	TicTacToe tictactoe;
	tictactoe.start_game("X");
	tictactoe.mark_board(7);
	tictactoe.mark_board(2);
	tictactoe.mark_board(5);
	tictactoe.mark_board(4);
	tictactoe.mark_board(3);
	
	REQUIRE(tictactoe.game_over() == true);
	REQUIRE(tictactoe.get_winner() == "X");
}