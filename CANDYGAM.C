/*
				Autor: Ashesh
				Date: May/27/2022
				Objective:Candy game
*/
#include<stdio.h>
#include<conio.h>

// Main function
void main(){
    int playerX=40, playerY=3, boxX=40, boxY=23, score=0, life=3, diff=0;
    char ch;

    textbackground(0);

start:
    // Clear the screen
    clrscr();

    // Display the score and life
    gotoxy(1,1);
    textcolor(CYAN);
    cprintf("Score: %d", score);
    gotoxy(70,1);
    cprintf("Life: %d", life);

    // Display the player symbol
    gotoxy(playerX, playerY);
    textcolor(rand()%14+1);
    cprintf("*");

    // Display the box
    gotoxy(boxX, boxY);
    textcolor(YELLOW);
    cprintf("|");
    gotoxy(boxX+7, boxY);
    cprintf("|");
    gotoxy(boxX, boxY+1);
    cprintf("#######");

    // Check for user input
    if(kbhit()){
        ch = getch();

        // Move the box left or right
        switch(ch){
            case 'a':
            case 'A':
                if(boxX > 2) {
                    boxX = boxX - 5;
                }
                break;

            case 'd':
            case 'D':
                if(boxX <= 72) {
                    boxX = boxX + 5;
                }
                break;

            // Exit the program
            case 'x':
            case 'X':
                exit(0);
        }
    }

    // Move the player symbol down
    playerY++;

    // Check if player symbol reaches the bottom
    if(playerY == 23){
        // Play a sound effect
        sound(250);
        delay(100);
        nosound();

        // Calculate the difference between playerX and boxX
        diff = playerX - boxX;

        // Check if the player caught the box
        if(diff > 0 && diff < 9){
            score++;
        }
        else{
            // Decrease life and check if game over
            life--;

            if(life == 0){
                clrscr();
                textcolor(RED+BLINK);
                gotoxy(40,12);
                cprintf("Game is Over!");
                getch();
                exit(0);
            }
        }

        // Reset player position
        playerX = rand()%80+1;
        playerY = 3;
    }

    // Delay and continue to the start label
    delay(100);
    goto start;
}
