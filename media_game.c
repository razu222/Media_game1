#include <stdio.h>
#include <conio.h>
#include <io.h>
#include <string.h>
#include <stdlib.h>

int Lose()
{
	int x = 10;
	int y = 10;
	char YesNo[10];
	
	clrscr();
	gotoxy(x,y);
	printf("あなたはまけてしまった！\n");
	printf("   もう一度最初からプレイしますか?\n");
	printf("   やり直すならYesを、ゲームを終了するならNoを入力してください：");
	scanf("%s",YesNo);
	
	if (strcmp(YesNo,"Yes")==0){
		clrscr();
		main();
	}
	
	else if (strcmp(YesNo,"No")==0){
		printf("     遊んでいただきありがとうございました！\n\n\n\n\n\n");
		exit(0);
	}
	
	else {
		printf("YesかNoを入力してください\n");
	}
		
	return (0);
}

int Kusa(void)
{
	printf("	w:↑   \n");
	printf("	s:↓   \n");
	printf("\n");
	printf("wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww|	|wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww\n");
	printf("wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww|	|wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww\n");
	printf("wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww|	|wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww\n");
	printf("wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww|	|wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww\n");
	printf("wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww|	|wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww\n");
	printf("wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww|	|wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww\n");
	printf("wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww|	|wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww\n");
	printf("wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww|	|wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww\n");
	printf("wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww|	|wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww\n");
	printf("wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww|	|wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww\n");
	printf("wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww|	|wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww\n");
	printf("wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww|	|wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww\n");
	printf("wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww|	|wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww\n");
	printf("wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww|	|wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww\n");
	printf("wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww|	|wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww\n");
	printf("wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww|	|wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww\n");
	printf("wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww|	|wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww\n");
	printf("wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww|	|wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww\n");
	printf("wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww|	|wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww\n");
	printf("wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww|	|wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww\n");
	printf("wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww|	|wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww\n");
	printf("wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww|	|wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww\n");
	printf("wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww|	|wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww\n");
	
	return (0);
	
}

int Battle1(void)
{
	/*技選択のカーソルを表示させるための関数*/
	int x;
	int y;
	/*出した技名を表示させる座標を指定する関数*/
	int xx;
	int yy;
	/*戦闘画面の位置を固定させるための関数*/
	int xxx;
	int yyy;
	int xxxx;
	int yyyy;
	/*HP*/
	int hpe;/*敵の現在HP*/
	int hpme;/*敵の最大HP*/
	int hpp;/*Playerの現在HP*/
	int hpmp;/*Playerの最大HP*/
	/*敵の行動を決める乱数*/
	int rannsuu;
	int b;
	int rannsuu2;
	int d;
	char c;/*キーボード入力はこの変数に入る*/
	char a;/*技を決定するときにループから抜け出すための関数*/

	xxx = 70;
	yyy = 3;
	gotoxy(xxx,yyy);
	printf("w:↑   p:決定\n");
	yyy += 1;
	gotoxy(xxx,yyy);
	printf("s:↓");
	/*戦闘画面の場所固定*/
	xxx = 1;
	yyy = 1;
	/*HP設定*/
	hpme = 110;
	hpe = 110;
	hpmp = 120;
	hpp = 120;
	rannsuu = 1;
	rannsuu2 = 5;
	
	gotoxy(xxx,yyy);
	printf("-----------------------------------------------\n");
	printf("オネンネ	|		|ピ〇チュウ		\n");
	printf("HP %d/%d	|		|HP %d/%d		\n", hpe, hpme, hpp, hpmp);
	printf("-----------------		---------------\n");
	printf("   オネンネ！\n");
	printf("      O,,O\n");
	printf("    ( >o'ω'o\n");
	printf("  ＿|  ⊃／(＿＿_\n");
	printf(" ／  └-(＿＿＿_／\n");
	printf("				      ／) ／)\n");
	printf("				     /  ⌒  ヽ\n");
	printf("				    ｜●_ ● |/＼\n");
	printf("				    (〇 ～ 〇| ／\n");
	printf("				    /        |<\n");
	printf("				   ｜     L/ |/\n");
	printf("-----------------------------------------------\n");
	printf("| *技1			|命中:100威力:10 |\n");
	printf("| *技2			|命中:50 威力:30 |\n");
	printf("| *技3			|命中:50 HP20回復|\n");
	printf("| *技4			|命中:30 威力:40 |\n");
	printf("-----------------------------------------------\n");
	
	while (hpe > 0){
		/*char関数のa,cのリセット*/
		a = 0;
		c = 0;
		
		/*技選択カーソルの位置設定*/
		x = 2;
		y = 17;
		
		/*技選択カーソルの表示*/
		gotoxy(x,y);
		printf(">");
		
		/*技選択カーソルの移動と技を決定するプログラム*/
		while (a != 'p'){
			if (kbhit() != 0){
				gotoxy(x,y);
				printf(" ");
				
				c = getch();
				switch (c){
				  case 'w':
				  	if (y > 17){
						y--;
				  	}
					break;
					
				  case 's':
				  	if (y < 20){
						y++;
				  	}
					break;
				}
				gotoxy(x, y);
				printf(">");
			}
			if (c == 'p'){
				a = 'p';
			}
		}
		/*決定した技名を表示する場所の指定*/
		xx = 40;
		yy = 9;
		
		/*決定した技によっての結果の反映*/
		d = 0;
		rannsuu2 = (rannsuu2 * 12869 + 6925) % 32768;
		d = rannsuu2 % 10;
		gotoxy(xx,yy);
		switch (y){
		  case 17:
			printf("技1!\n");
			hpe -= 10;
			break;
			
		  case 18:
			if (d == 4 || d == 8 || d == 9 || d ==2 || d == 6){
				printf("技2!\n");
				hpe -= 30;
			}
			else {
				printf("miss!\n");
			}
			break;
			
		  case 19:
		  	if (d == 4 || d == 8 || d == 9 || d ==2 || d == 6){
			  	printf("技3!\n");
				switch(hpp){
				  case 120:
				  	break;
					
				  case 110:
				  	hpp += 10;
					break;
					
				  default:
					hpp += 20;
					break;
				}
		  	}
			else {
				printf("miss!\n");
			}
			break;
			
		  case 20:
		  	if (d == 0 || d == 5 || d == 8){
			  	printf("技4!\n");
				hpe -= 40;
		  	}
			else {
				printf("miss!\n");
			}
			break;
		}
		/*敵の技選択*/
		rannsuu = (rannsuu * 12869 + 6925) % 32768;
		b = rannsuu % 4;
		xx = 25;
		gotoxy (xx,yy);
		switch (b){
		  case 0:
		  	printf("技1!");
		  	hpp -= 20;
			break;
			
		  case 1:
		  	printf("技2!");
		  	hpe += 10;
			break;
			
		  case 2:
		  	printf("技3!");
		  	hpp -= 30;
			break;
			
		  case 3:
		  	printf("業4!");
		  	hpp -= 50;
			break;
		}
		/*技選択結果を画面に反映*/
		gotoxy(xxx,yyy);
		printf("-----------------------------------------------\n");
		printf("オネンネ	|		|ピ〇チュウ		\n");
		printf("HP %d/%d	|		|HP %d/%d		\n", hpe, hpme, hpp, hpmp);
		printf("-----------------		---------------\n");
		printf("   オネンネ！\n");
		printf("      O,,O\n");
		printf("    ( >o'ω'o\n");
		printf("  ＿|  ⊃／(＿＿_\n");
		printf(" ／  └-(＿＿＿_／\n");
		printf("				      ／) ／)\n");
		printf("				     /  ⌒  ヽ\n");
		printf("				    ｜●_ ● |/＼\n");
		printf("				    (〇 ～ 〇| ／\n");
		printf("				    /        |<\n");
		printf("				   ｜     L/ |/\n");
		printf("-----------------------------------------------\n");
		printf("| *技1			|命中:100威力:10 |\n");
		printf("| *技2			|命中:50 威力:30 |\n");
		printf("| *技3			|命中:50 HP20回復|\n");
		printf("| *技4			|命中:30 威力:40 |\n");
		printf("-----------------------------------------------\n");
		if (hpp <= 0){/*PlayerのHPが0になったときに脱出するとき用*/
			break;
		}
	}
	
	/*勝利または敗北の表示*/
	if (hpe <= 0){
		printf("YOU WIN!\n");
		getch();
	}
	else {
		printf("YOU LOSE!\n");
		Lose();
		getch();
	}
	
	clrscr();
	return (0);
}

int Battle2(void)
{
	/*技選択のカーソルを表示させるための関数*/
	int x;
	int y;
	/*出した技名を表示させる座標を指定する関数*/
	int xx;
	int yy;
	/*戦闘画面の位置を固定させるための関数*/
	int xxx;
	int yyy;
	int xxxx;
	int yyyy;
	/*HP*/
	int hpe;/*敵の現在HP*/
	int hpme;/*敵の最大HP*/
	int hpp;/*Playerの現在HP*/
	int hpmp;/*Playerの最大HP*/
	/*敵の行動を決める乱数*/
	int rannsuu;
	int b;
	int rannsuu2;
	int d;
	char c;/*キーボード入力はこの変数に入る*/
	char a;/*技を決定するときにループから抜け出すための関数*/
	
	xxx = 70;
	yyy = 3;
	gotoxy(xxx,yyy);
	printf("w:↑   p:決定\n");
	yyy += 1;
	gotoxy(xxx,yyy);
	printf("s:↓");
	/*戦闘画面の場所固定*/
	xxx = 1;
	yyy = 1;
	/*HP設定*/
	hpme = 150;
	hpe = 150;
	hpmp = 120;
	hpp = 120;
	rannsuu = 3;
	rannsuu2 = 7;
	
	gotoxy(xxx,yyy);
	printf("-----------------------------------------------\n");
	printf("ディグダ	|		|ピ〇チュウ		\n");
	printf("HP %d/%d	|		|HP %d/%d		\n", hpe, hpme, hpp, hpmp);
	printf("-----------------		---------------\n");
	printf("  　 　  　 ,.・'’￣￣｀`・､\n");
	printf("  　 　  　 /:::'　,、　  ,、ヽ\n");
	printf(" 　 　  　 /:::　　0!　　 0!　`、\n");
	printf("　　　　　i::::　　 ,.-==-、　 l\n");
	printf("　　　　　l:::　　 `ー-－’  .:l\n");
	printf("　　　　　l:::.　　　　    .:::l\n");
	printf("　　　　　l;;;,,_...._,,,,,;;;;l\n");
	printf("　　 r=,'´⌒y⌒'，_r=-､/`ｰｧ､_,i／＼\n");
	printf("’── i;:.-､=~-────-i──`━━━━━\n");
	printf("				      ／) ／)\n");
	printf("				     /  ⌒  ヽ\n");
	printf("				    ｜●_ ● |/＼\n");
	printf("				    (〇 ～ 〇| ／\n");
	printf("				    /        |<\n");
	printf("				   ｜     L/ |/\n");
	printf("-----------------------------------------------\n");
	printf("| *技1			|命中:100威力:10 |\n");
	printf("| *技2			|命中:50 威力:30 |\n");
	printf("| *技3			|命中:50 HP20回復|\n");
	printf("| *技4			|命中:30 威力:40 |\n");
	printf("-----------------------------------------------\n");
	
	while (hpe > 0){
		/*char関数のa,cのリセット*/
		a = 0;
		c = 0;
		
		/*技選択カーソルの位置設定*/
		x = 2;
		y = 21;
		
		/*技選択カーソルの表示*/
		gotoxy(x,y);
		printf(">");
		
		/*技選択カーソルの移動と技を決定するプログラム*/
		while (a != 'p'){
			if (kbhit() != 0){
				gotoxy(x,y);
				printf(" ");
				
				c = getch();
				switch (c){
				  case 'w':
				  	if (y > 21){
						y--;
				  	}
					break;
					
				  case 's':
				  	if (y < 24){
						y++;
				  	}
					break;
				}
				gotoxy(x, y);
				printf(">");
			}
			if (c == 'p'){
				a = 'p';
			}
		}
		/*決定した技名を表示する場所の指定*/
		xx = 40;
		yy = 13;
		
		/*決定した技によっての結果の反映*/
		d = 0;
		rannsuu2 = (rannsuu2 * 12869 + 6925) % 32768;
		d = rannsuu2 % 10;
		gotoxy(xx,yy);
		switch (y){
		  case 21:
			printf("技1!\n");
			hpe -= 10;
			break;
			
		  case 22:
			if (d == 4 || d == 8 || d == 9 || d ==2 || d == 6){
				printf("技2!\n");
				hpe -= 30;
			}
			else {
				printf("miss!\n");
			}
			break;
			
		  case 23:
		  	if (d == 4 || d == 8 || d == 9 || d ==2 || d == 6){
			  	printf("技3!\n");
				switch(hpp){
				  case 120:
				  	break;
					
				  case 110:
				  	hpp += 10;
					break;
					
				  default:
					hpp += 20;
					break;
				}
		  	}
			else {
				printf("miss!\n");
			}
			break;
			
		  case 24:
		  	if (d == 0 || d == 5 || d == 8){
			  	printf("技4!\n");
				hpe -= 40;
		  	}
			else {
				printf("miss!\n");
			}
			break;
		}
		/*敵の技選択*/
		rannsuu = (rannsuu * 12869 + 6925) % 32768;
		b = rannsuu % 4;
		xx = 35;
		yy = 10;
		gotoxy (xx,yy);
		switch (b){
		  case 0:
		  	printf("技1!");
		  	hpp -= 10;
			break;
			
		  case 1:
		  	printf("技2!");
		  	hpe += 10;
			break;
			
		  case 2:
		  	printf("技3!");
		  	hpp -= 30;
			break;
			
		  case 3:
		  	printf("業4!");
		  	hpp -= 40;
			break;
		}
		/*技選択結果を画面に反映*/
		gotoxy(xxx,yyy);
		printf("-----------------------------------------------\n");
		printf("ディグダ	|		|ピ〇チュウ		\n");
		printf("HP %d/%d	|		|HP %d/%d		\n", hpe, hpme, hpp, hpmp);
		printf("-----------------		---------------\n");
		printf("  　 　  　 ,.・'’￣￣｀`・､\n");
		printf("  　 　  　 /:::'　,、　  ,、ヽ\n");
		printf(" 　 　  　 /:::　　0!　　 0!　`、\n");
		printf("　　　　　i::::　　 ,.-==-、　 l\n");
		printf("　　　　　l:::　　 `ー-－’  .:l\n");
		printf("　　　　　l:::.　　　　    .:::l\n");
		printf("　　　　　l;;;,,_...._,,,,,;;;;l\n");
		printf("　　 r=,'´⌒y⌒'，_r=-､/`ｰｧ､_,i／＼\n");
		printf("’── i;:.-､=~-────-i──`━━━━━\n");
		printf("				      ／) ／)\n");
		printf("				     /  ⌒  ヽ\n");
		printf("				    ｜●_ ● |/＼\n");
		printf("				    (〇 ～ 〇| ／\n");
		printf("				    /        |<\n");
		printf("				   ｜     L/ |/\n");
		printf("-----------------------------------------------\n");
		printf("| *技1			|命中:100威力:10 |\n");
		printf("| *技2			|命中:50 威力:30 |\n");
		printf("| *技3			|命中:50 HP20回復|\n");
		printf("| *技4			|命中:30 威力:40 |\n");
		printf("-----------------------------------------------\n");
		if (hpp <= 0){/*PlayerのHPが0になったときに脱出するとき用*/
			break;
		}
	}
	
	/*勝利または敗北の表示*/
	if (hpe <= 0){
		printf("YOU WIN!\n");
		getch();
	}
	else {
		printf("YOU LOSE!\n");
		getch();
	}
	
	clrscr();
	
	return (0);
}

int Field(void)
{
	int x = 54;
	int y = 27;
	char c;
	
	while (1){
        if (kbhit() != 0){
			printf("\n");
			

            gotoxy(x, y);
            printf(" ");
        
            c = getch();
            if(c == 'w') y--;
			if(c == 's') y++;
			
            gotoxy(x, y);
            printf("o");
			
			if (y == 21){
				int second = 2;
    			gotoxy(x, y - 1);
    			printf("!");
				sleep(second);
				clrscr();
				// ここで戦闘画面にきりかえたい //
				Battle1();
				
				Kusa();
				y = 20;
			}
			
			if (y == 15){
				int second = 2;
    			gotoxy(x, y - 1);
    			printf("!");
				sleep(second);
				clrscr();
				// ここで戦闘画面にきりかえたい //
				Battle2();
				Kusa();
				y = 14;
				
			}
				
			if (y == 10){
				int second = 2;
   				gotoxy(x, y - 1);
    			printf("!");
				sleep(second);
				clrscr();
				// ここで戦闘画面にきりかえたい //
				Battle1();
				Kusa();
				y = 9;
			}
        }
    }
}
	
int main(void){
	Kusa();
	Field();
	
	return (0);
}