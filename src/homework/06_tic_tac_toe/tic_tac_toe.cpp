//cpp
#include "tic_tac_toe.h"
#include <iostream>

using std::cout;

bool TicTacToe::game_over()
{
    return check_board_full();
}

void TicTacToe::start_game(string first_player)
{
    player = first_player;
}

void TicTacToe::mark_board(int position)
{
    pegs[position-1] = player;
    set_next_player();
}

string TicTacToe::get_player() const
{
    return player;
}

void TicTacToe::display_board() const
{
    cout << "BLAH\n";
}

void TicTacToe::set_next_player()
{
    if(player == "X")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
    
}

bool TicTacToe::check_board_full()
{
    return 0;
}

void TicTacToe::clear_board()
{
    cout << "BLAH";
}