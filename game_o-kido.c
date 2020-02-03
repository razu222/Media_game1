#include <stdio.h>
#include <conio.h>

int main(void)
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
	
	return (0);
}