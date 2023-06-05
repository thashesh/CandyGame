/*
				Autor: Ashesh
				Date: May/27/2022
				Objective:Candy game
*/
#include<stdio.h>
#include<conio.h>
void main(){
	int canyX=40, candyY=3,boxX=40,boxY=23,score = 0, life =3, diff=0;
	char ch;
	textbackground(0);
	start:
	clrscr();
	gotoxy(1,1);
	textcolor(CYAN);
	cprintf("Score: %d",score);
	gotoxy(70,1);
	cprintf("Life: %d",life);
	gotoxy(canyX,candyY);
	textcolor(rand()%14+1);
	cprintf("*");

	gotoxy(boxX,boxY);
	textcolor(YELLOW);
	cprintf("|");
	gotoxy(boxX+7,boxY);
	cprintf("|");
	gotoxy(boxX,boxY+1);
	cprintf("#######");
     //	getch();

		if(kbhit())
		{
		  ch = getch();

		  switch(ch)
		  {
			case 'a':if(boxX>2) {
				  boxX=boxX-5;
				  }
				break;
			case 'A':if(boxX>2) {
				  boxX=boxX-5;
				  }
				break;
			case 'd':if(boxX<=72) {
				  boxX=boxX+5;
				  }
				break;
			case 'D':if(boxX<=72) {
				  boxX=boxX+5;
				  }
				break;
			case 'x': exit(0);
			case 'X' : exit(0);

		  }// switch
		} // if
		candyY++;
		if(candyY == 23){
			sound(250);
		       delay(100);
		       nosound();
		       diff = canyX-boxX;
		       if(diff>0 && diff<9){
			score++;

		       }
		       else{
			     life--;
			     if(life == 0 ){
				clrscr();
				textcolor(RED+BLINK);
				gotoxy(40,12);
				cprintf("Game is Over!");
				getch();
				exit(0);
			     }
		       }
		       canyX = rand()%80+1;
		       candyY =3;
		       }
			delay(100);
			goto start;

} //main close
