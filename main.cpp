//
//  main.cpp
//  Game of Life
//
//  Created by Evan Matoske on 9/29/15.
//  Copyright (c) 2015 Evan Matoske. All rights reserved.
//
#include "Cell.h"
#include <iostream>
#include <unistd.h>
#include <stdlib.h>
#include <string>
#include <cstdlib>

int main()
{
        
    const int width = 60;
    const int height = 40;
    
    
    //Two arrays to store the positions
    Cell cell[height][width];
    Cell cell2[height][width];
    //system("clear");
    int num;
    std::cout << "How many times would you like the board to generate?"
    << std::endl;
    std::cout << "Generations : ";
    std::cin >> num;
    std::cout << std::endl;
    
    //system("clear");
    int xCoord, yCoord;
    std::cout << "What coordinates would you like to start at on 20X40 board?"
    << std::endl;
    std::cout << "X Coordinate : ";
    std::cin  >>  xCoord;
    std::cout<< "Y Coordinate : ";
    std::cin >> yCoord;
    std::cout << std::endl;
    //system("clear");
    
    
    //The 3 shapes the user can choose from
    char choice;
    //system("clear");
    std::cout << "What shape would you like to start with?" << std::endl
    << "You have the choice of"
    << std:: endl << "A.) blinker"
    << std:: endl << "B.) spaceship"
    << std:: endl << "C.) glider gun"
    << std:: endl << "Choice : ";
    std::cin >> choice;
    
    
    switch (choice)
    {
    case 'A':	
    case 'a':
            cell[xCoord + 10][yCoord + 10].state = 1;
            cell[xCoord + 10][yCoord + 11].state = 1;
            cell[xCoord + 10][yCoord + 12].state = 1;
        
            break;
    case 'B':   
    case 'b':
            cell[xCoord + 11][yCoord + 13].state = 1;
            cell[xCoord + 12][yCoord +  14].state = 1;
            cell[xCoord + 13][yCoord + 14].state = 1;
            cell[xCoord + 13][yCoord + 13].state = 1;
       	    cell[xCoord + 13][yCoord + 12].state = 1;
            
            break;
    case 'C':
    case 'c':
            cell[xCoord + 10][yCoord + 10].state = 1;
            cell[xCoord + 10][yCoord + 11].state = 1;
            cell[xCoord + 10][yCoord + 12].state = 1;
            cell[xCoord + 10][yCoord + 14].state = 1;
            cell[xCoord + 11][yCoord + 10].state = 1;
            cell[xCoord + 12][yCoord + 13].state = 1;
            cell[xCoord + 12][yCoord + 14].state = 1;
            cell[xCoord + 13][yCoord + 11].state = 1;
            cell[xCoord + 13][yCoord + 12].state = 1;
            cell[xCoord + 13][yCoord + 14].state = 1;
            cell[xCoord + 14][yCoord +10].state = 1;
            cell[xCoord + 14][yCoord + 12].state = 1;
            cell[xCoord + 14][yCoord + 14].state = 1;
            
            break;
            
           }
    
   //system("clear");
    // Prints initial shape
    for (int i = 10; i < height-10; i++)
    {
        for (int j =10; j < width-10; j++)
        {
          
            if(cell[i][j].state == 0)
            std::cout << " ";
            else std::cout << "*";
            
        }
	std::cout << std::endl;
    }
    	
    //Prints the number of generations the user inputs
    for (int p = 1; p < num; p++)
    {
    
        
    std::cout.flush();
    sleep(1);
    //system("clear");
        
    //Determines if cell should be born, die, or remain the same
    for ( int a = 0; a < height; a++)
    {
        for ( int b = 0; b < width; b++)
        {
            int count = 0;
            count = cell[a + 1][b].state +
            cell[a - 1][b].state +
            cell[a][b + 1].state +
            cell[a][b - 1].state +
            cell[a + 1][b + 1].state +
            cell[a - 1][b - 1].state +
            cell[a + 1][b - 1].state +
            cell[a - 1][b + 1].state;
            
            if (count < 2)
                cell2[a][b].state = 0;
            if (count > 3)
                cell2[a][b].state = 0;
            if (count == 2)
                cell2[a][b] = cell[a][b];
            if (count == 3)
                cell2[a][b].state = 1;
            
        }
    }
    
    for (int c  = 10; c < height-10; c++)
	{
        for (int d = 10; d < width-10; d++)
        {
            
            if(cell2[c][d].state == 0)
                std::cout << " ";
            
            else if (cell2[c][d].state == 1)
                std::cout << "*";
        }
	std::cout << std::endl;
    }
        
        
    //resets the original array to all dead
    for (int q = 0; q < height; q++)
        for (int r = 0; r < width; r++)
            cell[q][r].state = 0;
    
    
    //copies arrays
    for (int a = 0; a < height; a++)
        for ( int b = 0; b < width; b++)
            cell[a][b] = cell2[a][b];
    
	
        }

    }

