//cpp
#include "tic_tac_toe.h"
#include <iostream>

using std::cout; using std::cin;

bool TicTacToe::game_over()
{
    bool over = false;
    if(TicTacToe::check_column_win() || TicTacToe::check_row_win() || TicTacToe::check_diagonal_win())
    {
        TicTacToe::set_winner();
        over = true;
    }
    else if(TicTacToe::check_board_full())
    {
        winner = "C";
        over = true;
    }
    return over;
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

string TicTacToe::get_winner()
{
    return winner;
}

bool TicTacToe::check_column_win()
{
    return false;
}

bool TicTacToe::check_row_win()
{
    return false; 
}

bool TicTacToe::check_diagonal_win()
{
    return false;  
}

void TicTacToe::set_winner()
{
    if(player == "X")
    {
        winner = "O";
    }
    else
    {
        winner = "X";
    }
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

ostream& operator<<(ostream& out, unique_ptr<TicTacToe(s)> game)
{
    out << game.pegs[0] << "|" << game.pegs[1] << "|" << game.pegs[2] << "\n" \
    << game.pegs[3] << "|" << game.pegs[4] << "|" << game.pegs[5] << "\n" \
    << game.pegs[6] << "|" << game.pegs[7] << "|" << game.pegs[8] << "\n\n";
    
    return out;
}

istream& operator>>(istream& in, TicTacToe& game)
{
    auto position = 0;
    cout << "Player "<< game.get_player() << " pick a position from 1-9: \n";
    in >> position;
    game.mark_board(position);
	
    return in;
}