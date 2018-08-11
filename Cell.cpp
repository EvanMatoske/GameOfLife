//
//  Cell.cpp
//  Game of Life
//
//  Created by Evan Matoske on 9/29/15.
//  Copyright (c) 2015 Evan Matoske. All rights reserved.
//

#include "Cell.h"
#include <iostream>

Cell::Cell()
{
    state = 0;

}
/*void Cell::board()
{
    const int width = 60;
    const int height = 80;
    const int width2 = 20;
    const int height2 = 40;
    
    
    Cell cell[height][width];
    Cell cell2[height][width];
    
    for (int i = 5; i < height2; i++)
        for (int j = 4; j < width2; j++)
        {
            if(cell[i][j].state == 0)
                std::cout << " ";
            else std::cout << "* ";
        }
    
    for (int i = 5; i < height2; i++)
        for (int j = 4; j < width2; j++)
        {
            if(cell[i][j].state == 0)
                std::cout << " ";
            else std::cout << "* ";
            
            
    for ( int a = 0; a < height; a++)
        for ( int b = 0; b < width; b++)
        {
            int count = 0;
            count =cell[a + 1][b].state +
            cell[a - 1][b].state +
            cell[a][b + 1].state +
            cell[a][b - 1].state +
            cell[a + 1][b + 1].state +
            cell[a - 1][b - 1].state;
            
            if ( count < 3)
                cell[a][b].state = 0;
            if (count > 4)
                cell[a][b].state = 0;
            if ( count == 3)
                cell[a][b].state = 1;
            
        }
    // copies arrays
    for (int a = 0; a < height; a++)
        for ( int b = 0; b < width; b++)
            cell2[a][b] = cell[a][b];
    
        }
}
*/

