*************************************************************
 *                     BOX CATCHING GAME                     *
 *************************************************************
 * This program is a simple box catching game implemented in C.
 * The player controls a box at the bottom of the screen and
 * tries to catch falling boxes with a symbol represented by '*'.
 * The player moves the box left ('a' or 'A') or right ('d' or 'D')
 * using keyboard input. The player earns points for catching
 * the falling boxes within a certain range. The game ends when
 * the player misses a box and loses all their lives.
 ************************************************************

Uploading CandyGame.mp4…

 Functionality:
 
The program implements a simple box catching game.
The player controls a box at the bottom of the screen and tries to catch falling boxes represented by a symbol '*'.
The player earns points for catching the falling boxes within a certain range.
The game ends when the player misses a box and loses all their lives.

Controls:

The player can move the box to the left by pressing 'a' or 'A' on the keyboard.
The player can move the box to the right by pressing 'd' or 'D' on the keyboard.
The player can exit the game by pressing 'x' or 'X' on the keyboard.

Game Flow:

1. The game starts by initializing the variables and setting the console text background.
2. The screen is cleared, and the score and life are displayed.
3. The player symbol and the falling box are displayed on the screen.
4. If a key is pressed, the box is moved accordingly (left or right).
5. The player symbol is moved down one row.
6. If the player symbol reaches the bottom of the screen:
  A sound effect is played.
  The difference between playerX and boxX is calculated.
  If the difference is within the acceptable range, the player earns a point.
  Otherwise, the player loses a life.
  If the player has no lives left, the game ends.
  The box's position is randomized, and the player symbol is reset to the starting position.
7. The game continues by delaying for a short period and jumping back to the start label.

