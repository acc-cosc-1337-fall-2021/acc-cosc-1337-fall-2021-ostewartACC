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
    clear_board();
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
    cout << pegs[0] << "|" << pegs[1] << "|" << pegs[2] << "\n";
    cout << pegs[3] << "|" << pegs[4] << "|" << pegs[5] << "\n";
    cout << pegs[6] << "|" << pegs[7] << "|" << pegs[8] << "\n\n";
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
    bool check = true;
    for (auto i : pegs)
    {
        if (i == " ")
        {
            check = false;
            break;
        }        
    }
    return check;
}

void TicTacToe::clear_board()
{
    for (auto& i : pegs)
    {
        i = " ";        
    }
}