#include "tic_tac_toe_4.h"

bool TicTacToe4::check_column_win()
{
    bool win = false;
    if(
        (pegs[0] != " " && pegs[0] == pegs[4] && pegs[4] == pegs[8] && pegs[8] == pegs[12]) //column 1 win
        ||
        (pegs[1] != " " && pegs[1] == pegs[5] && pegs[5] == pegs[9] && pegs[9] == pegs[13]) //column 2 win
        ||
        (pegs[2] != " " && pegs[2] == pegs[6] && pegs[6] == pegs[10] && pegs[10] == pegs[14]) //column 3 win
        ||
        (pegs[3] != " " && pegs[3] == pegs[7] && pegs[7] == pegs[11] && pegs[11] == pegs[15]) //column 4 win
        )
    {
        win = true;
    }
    return win;
}

bool TicTacToe4::check_row_win()
{
    bool win = false;
    if(
        (pegs[0] != " " && pegs[0] == pegs[1] && pegs[1] == pegs[2] && pegs[2] == pegs[3]) //row 1 win
        ||
        (pegs[4] != " " && pegs[4] == pegs[5] && pegs[5] == pegs[6] && pegs[6] == pegs[7]) //row 2 win
        ||
        (pegs[8] != " " && pegs[8] == pegs[9] && pegs[9] == pegs[10] && pegs[10] == pegs[11]) //row 3 win
        ||
        (pegs[12] != " " && pegs[12] == pegs[13] && pegs[13] == pegs[14] && pegs[14] == pegs[15]) //row 4 win
        )
    {
        win = true;
    }
    return win;    
}

bool TicTacToe4::check_diagonal_win()
{
    bool win = false;
    if(
        (pegs[0] != " " && pegs[0] == pegs[5] && pegs[5] == pegs[10] && pegs[10] == pegs[15]) //diagonal 1 win
        ||
        (pegs[12] != " " && pegs[12] == pegs[9] && pegs[9] == pegs[6] && pegs[6] == pegs[3]) //diagonal 2 win
        )
    {
        win = true;
    }
    return win;     
}
