#include "tic_tac_toe_3.h"

bool TicTacToe3::check_column_win()
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

bool TicTacToe3::check_row_win()
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

bool TicTacToe3::check_diagonal_win()
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
