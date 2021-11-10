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
    bool win = false;
    if(
        (pegs[0] != " " && pegs[0] == pegs[3] && pegs[3] == pegs[6]) //column 1 win
        ||
        (pegs[1] != " " && pegs[1] == pegs[4] && pegs[4] == pegs[7]) //column 2 win
        ||
        (pegs[2] != " " && pegs[2] == pegs[5] && pegs[5] == pegs[8]) //column 3 win
        )
    {
        win = true;
    }
    return win;
}

bool TicTacToe::check_row_win()
{
    bool win = false;
    if(
        (pegs[0] != " " && pegs[0] == pegs[1] && pegs[1] == pegs[2]) //row 1 win
        ||
        (pegs[3] != " " && pegs[3] == pegs[4] && pegs[4] == pegs[5]) //row 2 win
        ||
        (pegs[6] != " " && pegs[6] == pegs[7] && pegs[7] == pegs[8]) //row 3 win
        )
    {
        win = true;
    }
    return win;    
}

bool TicTacToe::check_diagonal_win()
{
    bool win = false;
    if(
        (pegs[0] != " " && pegs[0] == pegs[4] && pegs[4] == pegs[8]) //diagonal 1 win
        ||
        (pegs[6] != " " && pegs[6] == pegs[4] && pegs[4] == pegs[2]) //diagonal 2 win
        )
    {
        win = true;
    }
    return win;     
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

ostream& operator<<(ostream& out, const TicTacToe& game)
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