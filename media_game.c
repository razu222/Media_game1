#include <stdio.h>
#include <conio.h>
#include <io.h>
#include <string.h>
#include <stdlib.h>

int Opening(void)
{
	int i;
	int j;
	int second = 2;
	
	printf("■■■■■■■□■□■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	printf("■■■■□■■□■□■■■■■□■■■■■■■■■■■■■■■■■■■■■■■■■□■■■■■■■■■■■■■■\n");
	printf("■■■■□■■■■■■■■■■□■■■■■■■■■■■■■■■■■■■■■■■■■□■■■■■■■■■■■■■■\n");
	printf("□□□□□□□□□■■■■■□□□□□□□□□■■■■■■■■■■■■■■■■■■□■■■■■■■■■■■■■■\n");
	printf("■■■■□■■■■■■■■■□■■■□□■■■■■■■□■□□■■□■■■■■■■□■■■■■■■■■■■■■■\n");
	printf("■■■■□■■■■■■■■□■■■■□■■■■■■■■□■■□■■□■■■■■■■□□□■■■■■■■■■■■■\n");
	printf("■□■■□■■□■■■■□□■■■■□■■■■■■■■□■■■■□□■■■■■■■□■□□□■■■■■■■■■■\n");
	printf("□□■■□■■■□■■■■■■■■■□■■■■■■■■■■■■■□■■■■■■■■□■■■□■■■■■■■■■■\n");
	printf("□■■■□■■■□□■■■■■■■□■■■■■■■■■■■■■□■■■■■■■■■□■■■■■■■■■■■■■■\n");
	printf("■■■■□■■■■■■■■■■■□□■■■■■■■■■■■■□□■■■■■■■■■□■■■■■■■■■■■■■■\n");
	printf("■■□□□■■■■■■■■■■□□■■■■■■■■■■■□□■■■■■■■■■■■□■■■■■■■■■■■■■■\n");
	printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■□□■■■■■■■■■■■■■■■\n");
	printf("■■□□□□□□□□□■■■□□■■■■■■■■■□□□□□□□■■■■■■■□□□□□□■■■■■■■■■■■\n");
	printf("■■■■■□■■■■■■■■■□□■■■■■■■■■■■■■■□■■■■■■□□■■■□□■■■■■■■■■■■\n");
	printf("■■■■■□■■■■■■■■■■□■■■■■□■■■■■■■■□■■■■■□□■■■■□■■■■■■■■■■■■\n");
	printf("■□□□□□□□□□□□■■■■■■■■■□□■■■■■■■□■■■■■□□■□■■□□■■■■■■■■■■■■\n");
	printf("■■■■■□■■■■■■■■■■■■■■□□■■■■■■■□□■■■■■□■■■□□□■■■■□□□□□□□□□\n");
	printf("■■■■■□■■■■■■■■■■■■■□□■■■■■■■□□□■■■■■■■■■■□■■■■■■■■■■■■■■\n");
	printf("■■■■■□■■■■■■■■■■■■□□■■■■■■■□□■■□□■■■■■■■□□■■■■■■■■■■■■■■\n");
	printf("■■■■■□■■■■■■■■■■□□□■■■■■■■□□■■■■□□■■■■■□□■■■■■■■■■■■■■■■\n");
	printf("■■■■■■□□□□□■■■■□■■■■■■■■■□■■■■■■■□■■■□□■■■■■■■■■■■■■■■■■\n");
	
	sleep(second);
	getch();
	clrscr();	
	
	return(0);
}

int Okido(void)
{
	int x1;
	int y1;
	int y2;
	int y3;
	int i;
	int j;
	int k;
	
	x1 = 3;
	y1 = 3;
	
	printf("※この作品はフィクションであり、\n");
	printf("実在する、人物・ゲームなどとは関係ありません");
	gotoxy(x1, y1);
	printf("　　　　　  ＞￣￣￣￣￣￣丶				\n");
	printf("　　　　　　＞                ＼			\n");
	printf("　　　　 ＜     /＼____ ＿__／ﾍ l			\n");
	printf("　　　　　 ＞  /       ﾚ|      ll			\n");
	printf("   ｎ ∩ ｎ   l  ＜⌒ヽ   /⌒＞j|			\n");
	printf(" ∩|| || ||＼_｣ {｀ij¨ ¨ij´}|｣			\n");
	printf(" | |｣ || ||| {ﾍ|{ ー       ー}|ﾍ}			\n");
	printf(" l         |/ 〉!     {|     |ノ			\n");
	printf(" l  l    ／ /   ＼´ー__一   ／				\n");
	printf(" l　　ヽ/　／  ／l＼＿＿___／l＼			\n");
	printf(" ヽ　　　 /＿／/　 ＼　  ／ヽ＼＿			\n");
	printf("|￣￣￣￣|　 /　 ＿_ ＼／ ＿_　ヽ ＼		\n");
	printf("|。   　 |　 |／| ´      | ＼|     ＼		\n");
	printf("|。   　 |　/　 |         | 　＼     ｜		\n");
	printf("|　   　 |　＼/｜         |＼/        |		\n");
	
	printf("-----------------------------------------\n");
	printf("|					|\n");
	printf("|					|\n");
	printf("|					|\n");
	printf("-----------------------------------------\n");
	
	y1 = 19;
	y2 = 20;
	y3 = 21;
	
	gotoxy(x1, y1);
	printf("はじめまして!");
	gotoxy(x1, y2);
	printf("ボケット モンスターの 世界へ!");
	getch();
	
	gotoxy(x1, y1);
	printf("					");
	gotoxy(x1, y2);
	printf("					");
	
	
	gotoxy(x1, y1);
	printf("わたしの なまえは 多木怒");
	gotoxy(x1, y2);
	printf("みんなからは ボケモン はかせと\n");
	gotoxy(x1, y3);
	printf("よばれているぞ!");
	getch();
	
	gotoxy(x1, y1);
	printf("					");
	gotoxy(x1, y2);
	printf("					");
	gotoxy(x1, y3);
	printf("					");
	
	
	gotoxy(x1, y1);
	printf("よのなかには ボケモンという いきものが");
	gotoxy(x1, y2);
	printf("たくさん せいそくしているのだ");
	
	gotoxy(x1, y1);
	printf("					");
	gotoxy(x1, y2);
	printf("					");
	
	
	gotoxy(x1, y1);
	printf("きみの なまえは...");
	getch();
	
	gotoxy(x1, y1);
	printf("					");
	
	
	gotoxy(x1, y1);
	printf("えなりかずきくん じゃな？");
	getch();
	
	gotoxy(x1, y1);
	printf("					");
	
	gotoxy(x1, y1);
	printf("それじゃあ!");
	getch();
	
	
	gotoxy(x1, y1);
	printf("					");
	
	gotoxy(x1, y1);
	printf("ゆめと ぼうけんと！");
	gotoxy(x1, y2);
	printf("ボケット モンスターの せかいへ！");
	gotoxy(x1, y3);
	printf("レッツ ゴー!");
	getch();
	
	for(i = 1; i <= 22; i++){
		for (j = 1; j <= 43; j++){
			for (k = 0; k <= 1000000; k++){
			}
			gotoxy(j, i);
			printf(" ");
		}
	}
	
	getch();
	clrscr();
	
	return (0);
}

int Lose1()
{
	int second = 3;
	int x = 10;
	int y = 10;
	char YesNo[10];
	
	clrscr();
	gotoxy(x,y);
	printf("げーむおーばー！！\n");
	printf("   もう一度やり直しますか?\n");
	printf("   やり直すならYesを、ゲームを終了するならNoを入力してください：");
	scanf("%s",YesNo);
	
	if (strcmp(YesNo,"Yes")==0){
		clrscr();
		main();
	}
	
	else if (strcmp(YesNo,"No")==0){
		printf("     遊んでいただきありがとうございました！\n\n\n\n\n\n");
		sleep(second);
		exit(0);
	}
	
	else {
		printf("    YesかNoを入力してください\n");
		getch();
		clrscr();
		Lose1();
	}
		
	return (0);
}

int Win(void)
{
	int x = 10;
	int y = 10;
	
	clrscr();
	gotoxy(x,y);
	printf("クリアおめでとう！！\n");
	printf("プレイしていただきありがとうございました！\n");

	getch();
	exit(0);
		
	return (0);
}

int Kusa(void)
{
	printf("	w:↑   \n");
	printf("	s:↓   \n\n");

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
	printf("				    (〇 〜 〇| ／\n");
	printf("				    /        |<\n");
	printf("				   ｜     L/ |/\n");
	printf("-----------------------------------------------\n");
	printf("| *でんこうせっか|命中:100	 威力:10 |\n");
	printf("| *でんきショック|命中:50 	 威力:30 |\n");
	printf("| *キズぐすり	 |命中:100	 HP20回復|\n");
	printf("| *かみなり 	 |命中:30  	 威力:40 |\n");
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
			printf("でんこうせっか!\n");
			hpe -= 10;
			break;
			
		  case 18:
			if (d == 4 || d == 8 || d == 9 || d ==2 || d == 6){
				printf("でんきショック!\n");
				hpe -= 30;
			}
			else {
				printf("miss!          \n");
			}
			break;
			
		  case 19:
		  	printf("キズぐすり!     \n");
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
			break;
			
		  case 20:
		  	if (d == 0 || d == 5 || d == 8){
			  	printf("かみなり!       \n");
				hpe -= 40;
		  	}
			else {
				printf("miss!           \n");
			}
			break;
		}
		/*敵の技選択*/
		rannsuu = (rannsuu * 12869 + 6925) % 32768;
		b = rannsuu % 4;
		xx = 25;
		yy = 8;
		gotoxy (xx,yy);
		switch (b){
		  case 0:
		  	printf("でんこうせっか!");
		  	hpp -= 20;
			break;
			
		  case 1:
		  	printf("キズぐすり!     ");
		  	hpe += 10;
			break;
			
		  case 2:
		  	printf("たいあたり!    ");
		  	hpp -= 30;
			break;
			
		  case 3:
		  	printf("かみなり!      ");
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
		printf("				    (〇 〜 〇| ／\n");
		printf("				    /        |<\n");
		printf("				   ｜     L/ |/\n");
		printf("-----------------------------------------------\n");
		printf("| *でんこうせっか|命中:100	 威力:10 |\n");
		printf("| *でんきショック|命中:50 	 威力:30 |\n");
		printf("| *キズぐすり	 |命中:100	 HP20回復|\n");
		printf("| *かみなり 	 |命中:30 	 威力:40 |\n");
		printf("-----------------------------------------------\n");
		if (hpp <= 0){/*PlayerのHPが0になったときに脱出するとき用*/
			break;
		}
	}
	
	/*勝利または敗北の表示*/
	if (hpe <= 0){
		printf("YOU WIN!\n");
		printf("レベルがあがった！\n");
		printf("HPが30あがった！\n");
		getch();
	}
	else {
		printf("YOU LOSE!\n");
		Lose1();
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
	hpmp = 150;
	hpp = 150;
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
	printf("　　　　　l:::　　 `ー-−’  .:l\n");
	printf("　　　　　l:::.　　　　    .:::l\n");
	printf("　　　　　l;;;,,_...._,,,,,;;;;l\n");
	printf("　　 r=,'´⌒y⌒'，_r=-､/`ｰｧ､_,i／＼\n");
	printf("’── i;:.-､=~-────-i──`━━━━━\n");
	printf("				      ／) ／)\n");
	printf("				     /  ⌒  ヽ\n");
	printf("				    ｜●_ ● |/＼\n");
	printf("				    (〇 〜 〇| ／\n");
	printf("				    /        |<\n");
	printf("				   ｜     L/ |/\n");
	printf("-----------------------------------------------\n");
	printf("| *でんこうせっか|命中:100	威力:10 |\n");
	printf("| *でんきショック|命中:50  	威力:30 |\n");
	printf("| *キズぐすり	 |命中:100 	HP20回復|\n");
	printf("| *かみなり 	 |命中:30  	威力:40 |\n");
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
			printf("でんこうせっか!\n");
			hpe -= 10;
			break;
			
		  case 22:
			if (d == 4 || d == 8 || d == 9 || d ==2 || d == 6){
				printf("でんきショック!     \n");
				hpe -= 30;
			}
			else {
				printf("miss!         \n");
			}
			break;
			
		  case 23:
		  	printf("キズぐすり!        \n");
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
		  	
			break;
			
		  case 24:
		  	if (d == 0 || d == 5 || d == 8){
			  	printf("かみなり!       \n");
				hpe -= 40;
		  	}
			else {
				printf("miss!           \n");
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
		  	printf("たいあたり!	 ");
		  	hpp -= 10;
			break;
			
		  case 1:
		  	printf("キズぐすり!	 ");
		  	hpe += 10;
			break;
			
		  case 2:
		  	printf("マッドショット!	");
		  	hpp -= 30;
			break;
			
		  case 3:
		  	printf("じしん!	 ");
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
		printf("　　　　　l:::　　 `ー-−’  .:l\n");
		printf("　　　　　l:::.　　　　    .:::l\n");
		printf("　　　　　l;;;,,_...._,,,,,;;;;l\n");
		printf("　　 r=,'´⌒y⌒'，_r=-､/`ｰｧ､_,i／＼\n");
		printf("’── i;:.-､=~-────-i──`━━━━━\n");
		printf("				      ／) ／)\n");
		printf("				     /  ⌒  ヽ\n");
		printf("				    ｜●_ ● |/＼\n");
		printf("				    (〇 〜 〇| ／\n");
		printf("				    /        |<\n");
		printf("				   ｜     L/ |/\n");
		printf("-----------------------------------------------\n");
		printf("| *でんこうせっか|命中:100 	威力:10 |\n");
		printf("| *でんきショック|命中:50  	威力:30 |\n");
		printf("| *キズぐすり	 |命中:100 	HP20回復|\n");
		printf("| *かみなり 	 |命中:30  	威力:40 |\n");
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
		Lose1();
		getch();
	}
	
	clrscr();
	
	return (0);
}

int Battle3(void)
{
	
	 clrscr();
	
	printf("-------------------------------------\n");
	printf("吉田沙保里	 |        |    \n");
	printf(" HP	∞/∞    |        |      \n");
	printf("-------------------------------------\n");
	printf("        ＿／￣＼        \n");
	printf("      ／ (    ｸ ＼		\n");
	printf("     /  ／￣￣＼  ヽ	\n");
	printf("    丿 /⌒    ⌒ヽ ﾊ	\n");
	printf("    | / -･ /  ･- Ｖ｜	\n");
	printf("    |｜   /      ｜｜	\n");
	printf("    |∧  (._.)   / ｜	\n");
	printf("    | ∧  ＿＿  /  ｜	\n");
	printf("    |  ∧  ー  /|  ｜	\n");
	printf(" `／ヽ｜ ＼＿／ ヽ /＼  \n");
	printf(" ｜  |/＼＿＿＿／|/  ｜ \n");
	printf(" ｜ /             ヽ ｜ \n");
	printf(" ｜｜  ＡＬＳＯＫ  | ｜ \n");
	printf("                      \n");
	printf("                      \n");
	printf("                      \n");
	printf("                      \n");
	printf("                      \n");
	printf("                      \n");
	printf(" ------------------------------------\n");
	printf("|野生の吉田沙保里が現れた!!!!!!!!!!!!|\n");
	printf("|!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf("|!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf(" ------------------------------------\n");
	
    getch();
	clrscr();

	printf("-------------------------------------\n");
	printf("吉田沙保里	 |        |ピ○チュウ    \n");
	printf(" HP	∞/∞    |        |HP 150/150      \n");
	printf("-------------------------------------\n");
	printf("        ＿／￣＼        \n");
	printf("      ／ (    ｸ ＼		\n");
	printf("     /  ／￣￣＼  ヽ	\n");
	printf("    丿 /⌒    ⌒ヽ ﾊ	\n");
	printf("    | / -･ /  ･- Ｖ｜	\n");
	printf("    |｜   /      ｜｜	\n");
	printf("    |∧  (._.)   / ｜	\n");
	printf("    | ∧  ＿＿  /  ｜	\n");
	printf("    |  ∧  ー  /|  ｜	\n");
	printf(" `／ヽ｜ ＼＿／ ヽ /＼  \n");
	printf(" ｜  |/＼＿＿＿／|/  ｜ \n");
	printf(" ｜ /             ヽ ｜ \n");
	printf(" ｜｜  ＡＬＳＯＫ  | ｜ \n");
	printf("                        ／) ／) \n");
	printf("                       /  ⌒  ヽ\n");
	printf("                      ｜●_ ● |/＼ \n");
	printf("                      (〇 〜 〇| ／\n");
	printf("                      /        |< \n");
	printf("                     ｜     L/ |/ \n");
	printf(" ------------------------------------\n");
	printf("|行けっ!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf("|ピ○チュウ!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf("|!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf(" ------------------------------------\n");
	
    getch();
	clrscr();
	
	printf("-------------------------------------\n");
	printf("吉田沙保里	 |        |ピ○チュウ    \n");
	printf(" HP	∞/∞    |        |HP 150/150      \n");
	printf("-------------------------------------\n");
	printf("        ＿／￣＼        \n");
	printf("      ／ (    ｸ ＼		\n");
	printf("     /  ／￣￣＼  ヽ	\n");
	printf("    丿 /⌒    ⌒ヽ ﾊ	\n");
	printf("    | / -･ /  ･- Ｖ｜	\n");
	printf("    |｜   /      ｜｜	\n");
	printf("    |∧  (._.)   / ｜	\n");
	printf("    | ∧  ＿＿  /  ｜	\n");
	printf("    |  ∧  ー  /|  ｜	\n");
	printf(" `／ヽ｜ ＼＿／ ヽ /＼  \n");
	printf(" ｜  |/＼＿＿＿／|/  ｜ \n");
	printf(" ｜ /             ヽ ｜ \n");
	printf(" ｜｜  ＡＬＳＯＫ  | ｜ \n");
	printf("                        ／) ／) \n");
	printf("                       /  ⌒  ヽ\n");
	printf("                      ｜●_ ● |/＼ \n");
	printf("                      (〇 〜 〇| ／\n");
	printf("                      /        |< \n");
	printf("                     ｜     L/ |/ \n");
	printf(" ------------------------------------\n");
	printf("|ピ○チュウは逃げようとした!!!!!!!|\n");
	printf("|!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf("|!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf("|!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf(" ------------------------------------\n");
	
    getch();
	clrscr();
	
	printf("-------------------------------------\n");
	printf("吉田沙保里	 |        |ピ○チュウ    \n");
	printf(" HP	∞/∞    |        |HP 150/150      \n");
	printf("-------------------------------------\n");
	printf("        ＿／￣＼        \n");
	printf("      ／ (    ｸ ＼		\n");
	printf("     /  ／￣￣＼  ヽ	\n");
	printf("    丿 /⌒    ⌒ヽ ﾊ	\n");
	printf("    | / -･ /  ･- Ｖ｜	\n");
	printf("    |｜   /      ｜｜	\n");
	printf("    |∧  (._.)   / ｜	\n");
	printf("    | ∧  ＿＿  /  ｜	\n");
	printf("    |  ∧  ー  /|  ｜	\n");
	printf(" `／ヽ｜ ＼＿／ ヽ /＼  \n");
	printf(" ｜  |/＼＿＿＿／|/  ｜ \n");
	printf(" ｜ /             ヽ ｜ \n");
	printf(" ｜｜  ＡＬＳＯＫ  | ｜ \n");
	printf("                        ／) ／) \n");
	printf("                       /  ⌒  ヽ\n");
	printf("                      ｜●_ ● |/＼ \n");
	printf("                      (〇 〜 〇| ／\n");
	printf("                      /        |< \n");
	printf("                     ｜     L/ |/ \n");
	printf(" ------------------------------------\n");
	printf("|ピ○チュウは逃げれなかった!!!!!!!|\n");
	printf("|!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf("|!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf("|!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf(" ------------------------------------\n");
	
    getchar();
	clrscr();
	
	printf("-------------------------------------\n");
	printf("吉田沙保里	 |        |ピ○チュウ    \n");
	printf(" HP	∞/∞    |        |HP 150/150      \n");
	printf("-------------------------------------\n");
	printf("        ＿／￣＼        \n");
	printf("      ／ (    ｸ ＼		\n");
	printf("     /  ／￣￣＼  ヽ	\n");
	printf("    丿 /⌒    ⌒ヽ ﾊ	\n");
	printf("    | / ○･/ ･〇 Ｖ｜	\n");
	printf("    |｜   /      ｜｜	\n");
	printf("    |∧  (._.)   / ｜	\n");
	printf("    | ∧  ＿＿  /  ｜	\n");
	printf("    |  ∧  ー  /|  ｜	\n");
	printf(" `／ヽ｜ ＼＿／ ヽ /＼  \n");
	printf(" ｜  |/＼＿＿＿／|/  ｜ \n");
	printf(" ｜ /             ヽ ｜ \n");
	printf(" ｜｜  ＡＬＳＯＫ  | ｜ \n");
	printf("                        ／) ／) \n");
	printf("                       /  ⌒  ヽ\n");
	printf("                      ｜●_ ● |/＼ \n");
	printf("                      (〇 〜 〇| ／\n");
	printf("                      /        |< \n");
	printf("                     ｜     L/ |/ \n");
	printf(" ------------------------------------\n");
	printf("|吉田沙保里が起きた!!!!!!!!!!!!!!!!!|\n");
	printf("|!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf("|!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf("|!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf(" ------------------------------------\n");
	
    getch();
	clrscr();
	
	printf("-------------------------------------\n");
	printf("吉田沙保里	 |        |ピ○チュウ    \n");
	printf(" HP	∞/∞    |        |HP 150/150      \n");
	printf("-------------------------------------\n");
	printf("        ＿／￣＼        \n");
	printf("      ／ (    ｸ ＼		\n");
	printf("     /  ／￣￣＼  ヽ	\n");
	printf("    丿 /⌒    ⌒ヽ ﾊ	\n");
	printf("    | / ○･/ ･〇 Ｖ｜	\n");
	printf("    |｜   /      ｜｜	\n");
	printf("    |∧  (._.)   / ｜	\n");
	printf("    | ∧  ＿＿  /  ｜	\n");
	printf("    |  ∧  ー  /|  ｜	\n");
	printf(" `／ヽ｜ ＼＿／ ヽ /＼  \n");
	printf(" ｜  |/＼＿＿＿／|/  ｜ \n");
	printf(" ｜ /             ヽ ｜ \n");
	printf(" ｜｜  ＡＬＳＯＫ  | ｜ \n");
	printf("                        ／) ／) \n");
	printf("                       /  ⌒  ヽ\n");
	printf("                      ｜●_ ● |/＼ \n");
	printf("                      (〇 〜 〇| ／\n");
	printf("                      /        |< \n");
	printf("                     ｜     L/ |/ \n");
	printf(" ------------------------------------\n");
	printf("|吉田沙保里は眠っていたようだ!!!!!!!|\n");
	printf("|!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf("|!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf("|!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf(" ------------------------------------\n");
	
    getch();
	clrscr();
	
	printf("-------------------------------------\n");
	printf("吉田沙保里	 |        |ピ○チュウ    \n");
	printf(" HP	∞/∞    |        |HP 150/150      \n");
	printf("-------------------------------------\n");
	printf("        ＿／￣＼        \n");
	printf("      ／ (    ｸ ＼		\n");
	printf("     /  ／￣￣＼  ヽ	\n");
	printf("    丿 /⌒    ⌒ヽ ﾊ	\n");
	printf("    | / ー･/ ･ー Ｖ｜	\n");
	printf("    |｜   /      ｜｜	\n");
	printf("    |∧  (._.)   / ｜	\n");
	printf("    | ∧        /  ｜	\n");
	printf("    |  ∧ (ー) /|  ｜	\n");
	printf(" `／ヽ｜ ＼＿／ ヽ /＼  \n");
	printf(" ｜  |/＼＿＿＿／|/  ｜ \n");
	printf(" ｜ /             ヽ ｜ \n");
	printf(" ｜｜  ＡＬＳＯＫ  | ｜ \n");
	printf("                        ／) ／) \n");
	printf("                       /  ⌒  ヽ\n");
	printf("                      ｜●_ ● |/＼ \n");
	printf("                      (〇 〜 〇| ／\n");
	printf("                      /        |< \n");
	printf("                     ｜     L/ |/ \n");
	printf(" ------------------------------------\n");
	printf("|吉田沙保里のあくび!!!!!!!!!!!!!!!!!|\n");
	printf("|!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf("|!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf("|!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf(" ------------------------------------\n");
	
    getch();
	clrscr();
	
    printf("-------------------------------------\n");
	printf("吉田沙保里	 |           \n");
	printf(" HP	∞/∞    |              \n");
	printf("-------------------------------------\n");
	printf("        ＿／￣＼        \n");
	printf("      ／ (    ｸ ＼		\n");
	printf("     /  ／￣￣＼  ヽ	\n");
	printf("    丿 /⌒    ⌒ヽ ﾊ	\n");
	printf("    | / 〇･/ ･〇 Ｖ｜	\n");
	printf("    |｜   /      ｜｜	\n");
	printf("    |∧  (._.)   / ｜	\n");
	printf("    | ∧  ＿＿  /  ｜	\n");
	printf("    |  ∧  ー  /|  ｜	\n");
	printf(" `／ヽ｜ ＼＿／ ヽ /＼  \n");
	printf(" ｜  |/＼＿＿＿／|/  ｜ \n");
	printf(" ｜ /             ヽ ｜ \n");
	printf(" ｜｜  ＡＬＳＯＫ  | ｜ \n");
	printf("                        \n");
	printf("                       \n");
	printf("                      \n");
	printf("                     \n");
	printf("                       \n");
	printf("                     \n");
	printf(" ------------------------------------\n");
	printf("|この世界は消えてしまった!!!!!!!!!!!|\n");
	printf("|!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf("|!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf("|!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf(" ------------------------------------\n");
	
	getch();
	
	}
	
int Field1(void)
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
			
            if (y <= 41){
			gotoxy(x, y);
            printf("o");
            }
			
			if (y == 33){
				gotoxy(10,33);
				printf("そこより下には進めません!\n");
				gotoxy(x,y);
			}
			
			if (y == 40){
				gotoxy(10,40);
				printf("警告：これ以上進まないでください\n");
				gotoxy(x,y);
			}
			
			if (y == 42){
				clrscr();
				gotoxy(10,42);
				printf("なんで進むんですか");
			}
			
			if (y == 45){
				clrscr();
				gotoxy(10,45);
				printf("製作者の話をちゃんと聞け！！！！");
			}
			
			if (y == 48){
				clrscr();
				gotoxy(10,48);
				printf(".........");
			}
			
			if (y == 51){
				clrscr();
				gotoxy(10,51);
				printf("ゲームオーバーです");
			}
			
			if (y == 55){
				clrscr();
				gotoxy(10,55);
				printf("とみせかけて...");
			}
			
			if (y == 60){
				clrscr();
				gotoxy(10,60);
				printf("ゲームクリアです！おめでとう");
				getch();
				Win();
				
			}
			
			if (y == 21){
				int second = 2;
    			gotoxy(x, y - 1);
    			printf("!");
				clrscr();
				sleep(second);
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
				Battle3();
				Lose1();
				y = 9;
			}
        }
    }
}
	
int main(void){
	Opening();
	Okido();
	Kusa();
	Field1();
	
	return (0);
}