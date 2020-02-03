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
	
	printf("Å°Å°Å°Å°Å°Å°Å°Å†Å°Å†Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°\n");
	printf("Å°Å°Å°Å°Å†Å°Å°Å†Å°Å†Å°Å°Å°Å°Å°Å†Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å†Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°\n");
	printf("Å°Å°Å°Å°Å†Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å†Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å†Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°\n");
	printf("Å†Å†Å†Å†Å†Å†Å†Å†Å†Å°Å°Å°Å°Å°Å†Å†Å†Å†Å†Å†Å†Å†Å†Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å†Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°\n");
	printf("Å°Å°Å°Å°Å†Å°Å°Å°Å°Å°Å°Å°Å°Å°Å†Å°Å°Å°Å†Å†Å°Å°Å°Å°Å°Å°Å°Å†Å°Å†Å†Å°Å°Å†Å°Å°Å°Å°Å°Å°Å°Å†Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°\n");
	printf("Å°Å°Å°Å°Å†Å°Å°Å°Å°Å°Å°Å°Å°Å†Å°Å°Å°Å°Å†Å°Å°Å°Å°Å°Å°Å°Å°Å†Å°Å°Å†Å°Å°Å†Å°Å°Å°Å°Å°Å°Å°Å†Å†Å†Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°\n");
	printf("Å°Å†Å°Å°Å†Å°Å°Å†Å°Å°Å°Å°Å†Å†Å°Å°Å°Å°Å†Å°Å°Å°Å°Å°Å°Å°Å°Å†Å°Å°Å°Å°Å†Å†Å°Å°Å°Å°Å°Å°Å°Å†Å°Å†Å†Å†Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°\n");
	printf("Å†Å†Å°Å°Å†Å°Å°Å°Å†Å°Å°Å°Å°Å°Å°Å°Å°Å°Å†Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å†Å°Å°Å°Å°Å°Å°Å°Å°Å†Å°Å°Å°Å†Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°\n");
	printf("Å†Å°Å°Å°Å†Å°Å°Å°Å†Å†Å°Å°Å°Å°Å°Å°Å°Å†Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å†Å°Å°Å°Å°Å°Å°Å°Å°Å°Å†Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°\n");
	printf("Å°Å°Å°Å°Å†Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å†Å†Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å†Å†Å°Å°Å°Å°Å°Å°Å°Å°Å°Å†Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°\n");
	printf("Å°Å°Å†Å†Å†Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å†Å†Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å†Å†Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å†Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°\n");
	printf("Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°\n");
	printf("Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å†Å†Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°\n");
	printf("Å°Å°Å†Å†Å†Å†Å†Å†Å†Å†Å†Å°Å°Å°Å†Å†Å°Å°Å°Å°Å°Å°Å°Å°Å°Å†Å†Å†Å†Å†Å†Å†Å°Å°Å°Å°Å°Å°Å°Å†Å†Å†Å†Å†Å†Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°\n");
	printf("Å°Å°Å°Å°Å°Å†Å°Å°Å°Å°Å°Å°Å°Å°Å°Å†Å†Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å†Å°Å°Å°Å°Å°Å°Å†Å†Å°Å°Å°Å†Å†Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°\n");
	printf("Å°Å°Å°Å°Å°Å†Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å†Å°Å°Å°Å°Å°Å†Å°Å°Å°Å°Å°Å°Å°Å°Å†Å°Å°Å°Å°Å°Å†Å†Å°Å°Å°Å°Å†Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°\n");
	printf("Å°Å†Å†Å†Å†Å†Å†Å†Å†Å†Å†Å†Å°Å°Å°Å°Å°Å°Å°Å°Å°Å†Å†Å°Å°Å°Å°Å°Å°Å°Å†Å°Å°Å°Å°Å°Å†Å†Å°Å†Å°Å°Å†Å†Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°\n");
	printf("Å°Å°Å°Å°Å°Å†Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å†Å†Å°Å°Å°Å°Å°Å°Å°Å†Å†Å°Å°Å°Å°Å°Å†Å°Å°Å°Å†Å†Å†Å°Å°Å°Å°Å†Å†Å†Å†Å†Å†Å†Å†Å†\n");
	printf("Å°Å°Å°Å°Å°Å†Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å†Å†Å°Å°Å°Å°Å°Å°Å°Å†Å†Å†Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å†Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°\n");
	printf("Å°Å°Å°Å°Å°Å†Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å†Å†Å°Å°Å°Å°Å°Å°Å°Å†Å†Å°Å°Å†Å†Å°Å°Å°Å°Å°Å°Å°Å†Å†Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°\n");
	printf("Å°Å°Å°Å°Å°Å†Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å†Å†Å†Å°Å°Å°Å°Å°Å°Å°Å†Å†Å°Å°Å°Å°Å†Å†Å°Å°Å°Å°Å°Å†Å†Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°\n");
	printf("Å°Å°Å°Å°Å°Å°Å†Å†Å†Å†Å†Å°Å°Å°Å°Å†Å°Å°Å°Å°Å°Å°Å°Å°Å°Å†Å°Å°Å°Å°Å°Å°Å°Å†Å°Å°Å°Å†Å†Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°\n");
	
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
	
	printf("Å¶Ç±ÇÃçÏïiÇÕÉtÉBÉNÉVÉáÉìÇ≈Ç†ÇËÅA\n");
	printf("é¿ç›Ç∑ÇÈÅAêlï®ÅEÉQÅ[ÉÄÇ»Ç«Ç∆ÇÕä÷åWÇ†ÇËÇ‹ÇπÇÒ");
	gotoxy(x1, y1);
	printf("Å@Å@Å@Å@Å@  ÅÑÅPÅPÅPÅPÅPÅPò§				\n");
	printf("Å@Å@Å@Å@Å@Å@ÅÑ                Å_			\n");
	printf("Å@Å@Å@Å@ ÅÉ     /Å_____ ÅQ__Å^Õ l			\n");
	printf("Å@Å@Å@Å@Å@ ÅÑ  /       ⁄|      ll			\n");
	printf("   Çé Åø Çé   l  ÅÉÅ‹ÅR   /Å‹ÅÑj|			\n");
	printf(" Åø|| || ||Å__£ {ÅMijÅN ÅNijÅL}|£			\n");
	printf(" | |£ || ||| {Õ|{ Å[       Å[}|Õ}			\n");
	printf(" l         |/ År!     {|     |Ém			\n");
	printf(" l  l    Å^ /   Å_ÅLÅ[__àÍ   Å^				\n");
	printf(" lÅ@Å@ÅR/Å@Å^  Å^lÅ_ÅQÅQ___Å^lÅ_			\n");
	printf(" ÅRÅ@Å@Å@ /ÅQÅ^/Å@ Å_Å@  Å^ÅRÅ_ÅQ			\n");
	printf("|ÅPÅPÅPÅP|Å@ /Å@ ÅQ_ Å_Å^ ÅQ_Å@ÅR Å_		\n");
	printf("|ÅB   Å@ |Å@ |Å^| ÅL      | Å_|     Å_		\n");
	printf("|ÅB   Å@ |Å@/Å@ |         | Å@Å_     Åb		\n");
	printf("|Å@   Å@ |Å@Å_/Åb         |Å_/        |		\n");
	
	printf("-----------------------------------------\n");
	printf("|					|\n");
	printf("|					|\n");
	printf("|					|\n");
	printf("-----------------------------------------\n");
	
	y1 = 19;
	y2 = 20;
	y3 = 21;
	
	gotoxy(x1, y1);
	printf("ÇÕÇ∂ÇﬂÇ‹ÇµÇƒ!");
	gotoxy(x1, y2);
	printf("É{ÉPÉbÉg ÉÇÉìÉXÉ^Å[ÇÃ ê¢äEÇ÷!");
	getch();
	
	gotoxy(x1, y1);
	printf("					");
	gotoxy(x1, y2);
	printf("					");
	
	
	gotoxy(x1, y1);
	printf("ÇÌÇΩÇµÇÃ Ç»Ç‹Ç¶ÇÕ ëΩñÿì{");
	gotoxy(x1, y2);
	printf("Ç›ÇÒÇ»Ç©ÇÁÇÕ É{ÉPÉÇÉì ÇÕÇ©ÇπÇ∆\n");
	gotoxy(x1, y3);
	printf("ÇÊÇŒÇÍÇƒÇ¢ÇÈÇº!");
	getch();
	
	gotoxy(x1, y1);
	printf("					");
	gotoxy(x1, y2);
	printf("					");
	gotoxy(x1, y3);
	printf("					");
	
	
	gotoxy(x1, y1);
	printf("ÇÊÇÃÇ»Ç©Ç…ÇÕ É{ÉPÉÇÉìÇ∆Ç¢Ç§ Ç¢Ç´Ç‡ÇÃÇ™");
	gotoxy(x1, y2);
	printf("ÇΩÇ≠Ç≥ÇÒ ÇπÇ¢ÇªÇ≠ÇµÇƒÇ¢ÇÈÇÃÇæ");
	
	gotoxy(x1, y1);
	printf("					");
	gotoxy(x1, y2);
	printf("					");
	
	
	gotoxy(x1, y1);
	printf("Ç´Ç›ÇÃ Ç»Ç‹Ç¶ÇÕ...");
	getch();
	
	gotoxy(x1, y1);
	printf("					");
	
	
	gotoxy(x1, y1);
	printf("Ç¶Ç»ÇËÇ©Ç∏Ç´Ç≠ÇÒ Ç∂Ç·Ç»ÅH");
	getch();
	
	gotoxy(x1, y1);
	printf("					");
	
	gotoxy(x1, y1);
	printf("ÇªÇÍÇ∂Ç·Ç†!");
	getch();
	
	
	gotoxy(x1, y1);
	printf("					");
	
	gotoxy(x1, y1);
	printf("Ç‰ÇﬂÇ∆ Ç⁄Ç§ÇØÇÒÇ∆ÅI");
	gotoxy(x1, y2);
	printf("É{ÉPÉbÉg ÉÇÉìÉXÉ^Å[ÇÃ ÇπÇ©Ç¢Ç÷ÅI");
	gotoxy(x1, y3);
	printf("ÉåÉbÉc ÉSÅ[!");
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
	printf("Ç∞Å[ÇﬁÇ®Å[ÇŒÅ[ÅIÅI\n");
	printf("   Ç‡Ç§àÍìxÇ‚ÇËíºÇµÇ‹Ç∑Ç©?\n");
	printf("   Ç‚ÇËíºÇ∑Ç»ÇÁYesÇÅAÉQÅ[ÉÄÇèIóπÇ∑ÇÈÇ»ÇÁNoÇì¸óÕÇµÇƒÇ≠ÇæÇ≥Ç¢ÅF");
	scanf("%s",YesNo);
	
	if (strcmp(YesNo,"Yes")==0){
		clrscr();
		main();
	}
	
	else if (strcmp(YesNo,"No")==0){
		printf("     óVÇÒÇ≈Ç¢ÇΩÇæÇ´Ç†ÇËÇ™Ç∆Ç§Ç≤Ç¥Ç¢Ç‹ÇµÇΩÅI\n\n\n\n\n\n");
		sleep(second);
		exit(0);
	}
	
	else {
		printf("    YesÇ©NoÇì¸óÕÇµÇƒÇ≠ÇæÇ≥Ç¢\n");
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
	printf("ÉNÉäÉAÇ®ÇﬂÇ≈Ç∆Ç§ÅIÅI\n");
	printf("ÉvÉåÉCÇµÇƒÇ¢ÇΩÇæÇ´Ç†ÇËÇ™Ç∆Ç§Ç≤Ç¥Ç¢Ç‹ÇµÇΩÅI\n");

	getch();
	exit(0);
		
	return (0);
}

int Kusa(void)
{
	printf("	w:Å™   \n");
	printf("	s:Å´   \n\n");

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
	/*ãZëIëÇÃÉJÅ[É\ÉãÇï\é¶Ç≥ÇπÇÈÇΩÇﬂÇÃä÷êî*/
	int x;
	int y;
	/*èoÇµÇΩãZñºÇï\é¶Ç≥ÇπÇÈç¿ïWÇéwíËÇ∑ÇÈä÷êî*/
	int xx;
	int yy;
	/*êÌì¨âÊñ ÇÃà íuÇå≈íËÇ≥ÇπÇÈÇΩÇﬂÇÃä÷êî*/
	int xxx;
	int yyy;
	int xxxx;
	int yyyy;
	/*HP*/
	int hpe;/*ìGÇÃåªç›HP*/
	int hpme;/*ìGÇÃç≈ëÂHP*/
	int hpp;/*PlayerÇÃåªç›HP*/
	int hpmp;/*PlayerÇÃç≈ëÂHP*/
	/*ìGÇÃçsìÆÇåàÇﬂÇÈóêêî*/
	int rannsuu;
	int b;
	int rannsuu2;
	int d;
	char c;/*ÉLÅ[É{Å[Éhì¸óÕÇÕÇ±ÇÃïœêîÇ…ì¸ÇÈ*/
	char a;/*ãZÇåàíËÇ∑ÇÈÇ∆Ç´Ç…ÉãÅ[ÉvÇ©ÇÁî≤ÇØèoÇ∑ÇΩÇﬂÇÃä÷êî*/

	xxx = 70;
	yyy = 3;
	gotoxy(xxx,yyy);
	printf("w:Å™   p:åàíË\n");
	yyy += 1;
	gotoxy(xxx,yyy);
	printf("s:Å´");
	/*êÌì¨âÊñ ÇÃèÍèäå≈íË*/
	xxx = 1;
	yyy = 1;
	/*HPê›íË*/
	hpme = 110;
	hpe = 110;
	hpmp = 120;
	hpp = 120;
	rannsuu = 1;
	rannsuu2 = 5;
	
	gotoxy(xxx,yyy);
	printf("-----------------------------------------------\n");
	printf("ÉIÉlÉìÉl	|		|ÉsÅZÉ`ÉÖÉE		\n");
	printf("HP %d/%d	|		|HP %d/%d		\n", hpe, hpme, hpp, hpmp);
	printf("-----------------		---------------\n");
	printf("   ÉIÉlÉìÉlÅI\n");
	printf("      O,,O\n");
	printf("    ( >o'É÷'o\n");
	printf("  ÅQ|  ÅΩÅ^(ÅQÅQ_\n");
	printf(" Å^  Ñ§-(ÅQÅQÅQ_Å^\n");
	printf("				      Å^) Å^)\n");
	printf("				     /  Å‹  ÅR\n");
	printf("				    ÅbÅú_ Åú |/Å_\n");
	printf("				    (ÅZ Å` ÅZ| Å^\n");
	printf("				    /        |<\n");
	printf("				   Åb     L/ |/\n");
	printf("-----------------------------------------------\n");
	printf("| *Ç≈ÇÒÇ±Ç§ÇπÇ¡Ç©|ñΩíÜ:100	 à–óÕ:10 |\n");
	printf("| *Ç≈ÇÒÇ´ÉVÉáÉbÉN|ñΩíÜ:50 	 à–óÕ:30 |\n");
	printf("| *ÉLÉYÇÆÇ∑ÇË	 |ñΩíÜ:100	 HP20âÒïú|\n");
	printf("| *Ç©Ç›Ç»ÇË 	 |ñΩíÜ:30  	 à–óÕ:40 |\n");
	printf("-----------------------------------------------\n");
	
	while (hpe > 0){
		/*charä÷êîÇÃa,cÇÃÉäÉZÉbÉg*/
		a = 0;
		c = 0;
		
		/*ãZëIëÉJÅ[É\ÉãÇÃà íuê›íË*/
		x = 2;
		y = 17;
		
		/*ãZëIëÉJÅ[É\ÉãÇÃï\é¶*/
		gotoxy(x,y);
		printf(">");
		
		/*ãZëIëÉJÅ[É\ÉãÇÃà⁄ìÆÇ∆ãZÇåàíËÇ∑ÇÈÉvÉçÉOÉâÉÄ*/
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
		/*åàíËÇµÇΩãZñºÇï\é¶Ç∑ÇÈèÍèäÇÃéwíË*/
		xx = 40;
		yy = 9;
		
		/*åàíËÇµÇΩãZÇ…ÇÊÇ¡ÇƒÇÃåãâ ÇÃîΩâf*/
		d = 0;
		rannsuu2 = (rannsuu2 * 12869 + 6925) % 32768;
		d = rannsuu2 % 10;
		gotoxy(xx,yy);
		switch (y){
		  case 17:
			printf("Ç≈ÇÒÇ±Ç§ÇπÇ¡Ç©!\n");
			hpe -= 10;
			break;
			
		  case 18:
			if (d == 4 || d == 8 || d == 9 || d ==2 || d == 6){
				printf("Ç≈ÇÒÇ´ÉVÉáÉbÉN!\n");
				hpe -= 30;
			}
			else {
				printf("miss!          \n");
			}
			break;
			
		  case 19:
		  	printf("ÉLÉYÇÆÇ∑ÇË!     \n");
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
			  	printf("Ç©Ç›Ç»ÇË!       \n");
				hpe -= 40;
		  	}
			else {
				printf("miss!           \n");
			}
			break;
		}
		/*ìGÇÃãZëIë*/
		rannsuu = (rannsuu * 12869 + 6925) % 32768;
		b = rannsuu % 4;
		xx = 25;
		yy = 8;
		gotoxy (xx,yy);
		switch (b){
		  case 0:
		  	printf("Ç≈ÇÒÇ±Ç§ÇπÇ¡Ç©!");
		  	hpp -= 20;
			break;
			
		  case 1:
		  	printf("ÉLÉYÇÆÇ∑ÇË!     ");
		  	hpe += 10;
			break;
			
		  case 2:
		  	printf("ÇΩÇ¢Ç†ÇΩÇË!    ");
		  	hpp -= 30;
			break;
			
		  case 3:
		  	printf("Ç©Ç›Ç»ÇË!      ");
		  	hpp -= 50;
			break;
		}
		/*ãZëIëåãâ ÇâÊñ Ç…îΩâf*/
		gotoxy(xxx,yyy);
		printf("-----------------------------------------------\n");
		printf("ÉIÉlÉìÉl	|		|ÉsÅZÉ`ÉÖÉE		\n");
		printf("HP %d/%d	|		|HP %d/%d		\n", hpe, hpme, hpp, hpmp);
		printf("-----------------		---------------\n");
		printf("   ÉIÉlÉìÉlÅI\n");
		printf("      O,,O\n");
		printf("    ( >o'É÷'o\n");
		printf("  ÅQ|  ÅΩÅ^(ÅQÅQ_\n");
		printf(" Å^  Ñ§-(ÅQÅQÅQ_Å^\n");
		printf("				      Å^) Å^)\n");
		printf("				     /  Å‹  ÅR\n");
		printf("				    ÅbÅú_ Åú |/Å_\n");
		printf("				    (ÅZ Å` ÅZ| Å^\n");
		printf("				    /        |<\n");
		printf("				   Åb     L/ |/\n");
		printf("-----------------------------------------------\n");
		printf("| *Ç≈ÇÒÇ±Ç§ÇπÇ¡Ç©|ñΩíÜ:100	 à–óÕ:10 |\n");
		printf("| *Ç≈ÇÒÇ´ÉVÉáÉbÉN|ñΩíÜ:50 	 à–óÕ:30 |\n");
		printf("| *ÉLÉYÇÆÇ∑ÇË	 |ñΩíÜ:100	 HP20âÒïú|\n");
		printf("| *Ç©Ç›Ç»ÇË 	 |ñΩíÜ:30 	 à–óÕ:40 |\n");
		printf("-----------------------------------------------\n");
		if (hpp <= 0){/*PlayerÇÃHPÇ™0Ç…Ç»Ç¡ÇΩÇ∆Ç´Ç…íEèoÇ∑ÇÈÇ∆Ç´óp*/
			break;
		}
	}
	
	/*èüóòÇ‹ÇΩÇÕîsñkÇÃï\é¶*/
	if (hpe <= 0){
		printf("YOU WIN!\n");
		printf("ÉåÉxÉãÇ™Ç†Ç™Ç¡ÇΩÅI\n");
		printf("HPÇ™30Ç†Ç™Ç¡ÇΩÅI\n");
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
	/*ãZëIëÇÃÉJÅ[É\ÉãÇï\é¶Ç≥ÇπÇÈÇΩÇﬂÇÃä÷êî*/
	int x;
	int y;
	/*èoÇµÇΩãZñºÇï\é¶Ç≥ÇπÇÈç¿ïWÇéwíËÇ∑ÇÈä÷êî*/
	int xx;
	int yy;
	/*êÌì¨âÊñ ÇÃà íuÇå≈íËÇ≥ÇπÇÈÇΩÇﬂÇÃä÷êî*/
	int xxx;
	int yyy;
	int xxxx;
	int yyyy;
	/*HP*/
	int hpe;/*ìGÇÃåªç›HP*/
	int hpme;/*ìGÇÃç≈ëÂHP*/
	int hpp;/*PlayerÇÃåªç›HP*/
	int hpmp;/*PlayerÇÃç≈ëÂHP*/
	/*ìGÇÃçsìÆÇåàÇﬂÇÈóêêî*/
	int rannsuu;
	int b;
	int rannsuu2;
	int d;
	char c;/*ÉLÅ[É{Å[Éhì¸óÕÇÕÇ±ÇÃïœêîÇ…ì¸ÇÈ*/
	char a;/*ãZÇåàíËÇ∑ÇÈÇ∆Ç´Ç…ÉãÅ[ÉvÇ©ÇÁî≤ÇØèoÇ∑ÇΩÇﬂÇÃä÷êî*/
	
	xxx = 70;
	yyy = 3;
	gotoxy(xxx,yyy);
	printf("w:Å™   p:åàíË\n");
	yyy += 1;
	gotoxy(xxx,yyy);
	printf("s:Å´");
	/*êÌì¨âÊñ ÇÃèÍèäå≈íË*/
	xxx = 1;
	yyy = 1;
	/*HPê›íË*/
	hpme = 150;
	hpe = 150;
	hpmp = 150;
	hpp = 150;
	rannsuu = 3;
	rannsuu2 = 7;
	
	gotoxy(xxx,yyy);
	printf("-----------------------------------------------\n");
	printf("ÉfÉBÉOÉ_	|		|ÉsÅZÉ`ÉÖÉE		\n");
	printf("HP %d/%d	|		|HP %d/%d		\n", hpe, hpme, hpp, hpmp);
	printf("-----------------		---------------\n");
	printf("  Å@ Å@  Å@ ,.ÅE'ÅfÅPÅPÅM`ÅE§\n");
	printf("  Å@ Å@  Å@ /:::'Å@,ÅAÅ@  ,ÅAÅR\n");
	printf(" Å@ Å@  Å@ /:::Å@Å@0!Å@Å@ 0!Å@`ÅA\n");
	printf("Å@Å@Å@Å@Å@i::::Å@Å@ ,.-==-ÅAÅ@ l\n");
	printf("Å@Å@Å@Å@Å@l:::Å@Å@ `Å[-Å|Åf  .:l\n");
	printf("Å@Å@Å@Å@Å@l:::.Å@Å@Å@Å@    .:::l\n");
	printf("Å@Å@Å@Å@Å@l;;;,,_...._,,,,,;;;;l\n");
	printf("Å@Å@ r=,'ÅLÅ‹yÅ‹'ÅC_r=-§/`∞ß§_,iÅ^Å_\n");
	printf("ÅfÑüÑü i;:.-§=~-ÑüÑüÑüÑü-iÑüÑü`Ñ™Ñ™Ñ™Ñ™Ñ™\n");
	printf("				      Å^) Å^)\n");
	printf("				     /  Å‹  ÅR\n");
	printf("				    ÅbÅú_ Åú |/Å_\n");
	printf("				    (ÅZ Å` ÅZ| Å^\n");
	printf("				    /        |<\n");
	printf("				   Åb     L/ |/\n");
	printf("-----------------------------------------------\n");
	printf("| *Ç≈ÇÒÇ±Ç§ÇπÇ¡Ç©|ñΩíÜ:100	à–óÕ:10 |\n");
	printf("| *Ç≈ÇÒÇ´ÉVÉáÉbÉN|ñΩíÜ:50  	à–óÕ:30 |\n");
	printf("| *ÉLÉYÇÆÇ∑ÇË	 |ñΩíÜ:100 	HP20âÒïú|\n");
	printf("| *Ç©Ç›Ç»ÇË 	 |ñΩíÜ:30  	à–óÕ:40 |\n");
	printf("-----------------------------------------------\n");
	
	while (hpe > 0){
		/*charä÷êîÇÃa,cÇÃÉäÉZÉbÉg*/
		a = 0;
		c = 0;
		
		/*ãZëIëÉJÅ[É\ÉãÇÃà íuê›íË*/
		x = 2;
		y = 21;
		
		/*ãZëIëÉJÅ[É\ÉãÇÃï\é¶*/
		gotoxy(x,y);
		printf(">");
		
		/*ãZëIëÉJÅ[É\ÉãÇÃà⁄ìÆÇ∆ãZÇåàíËÇ∑ÇÈÉvÉçÉOÉâÉÄ*/
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
		/*åàíËÇµÇΩãZñºÇï\é¶Ç∑ÇÈèÍèäÇÃéwíË*/
		xx = 40;
		yy = 13;
		
		/*åàíËÇµÇΩãZÇ…ÇÊÇ¡ÇƒÇÃåãâ ÇÃîΩâf*/
		d = 0;
		rannsuu2 = (rannsuu2 * 12869 + 6925) % 32768;
		d = rannsuu2 % 10;
		gotoxy(xx,yy);
		switch (y){
		  case 21:
			printf("Ç≈ÇÒÇ±Ç§ÇπÇ¡Ç©!\n");
			hpe -= 10;
			break;
			
		  case 22:
			if (d == 4 || d == 8 || d == 9 || d ==2 || d == 6){
				printf("Ç≈ÇÒÇ´ÉVÉáÉbÉN!     \n");
				hpe -= 30;
			}
			else {
				printf("miss!         \n");
			}
			break;
			
		  case 23:
		  	printf("ÉLÉYÇÆÇ∑ÇË!        \n");
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
			  	printf("Ç©Ç›Ç»ÇË!       \n");
				hpe -= 40;
		  	}
			else {
				printf("miss!           \n");
			}
			break;
		}
		/*ìGÇÃãZëIë*/
		rannsuu = (rannsuu * 12869 + 6925) % 32768;
		b = rannsuu % 4;
		xx = 35;
		yy = 10;
		gotoxy (xx,yy);
		switch (b){
		  case 0:
		  	printf("ÇΩÇ¢Ç†ÇΩÇË!	 ");
		  	hpp -= 10;
			break;
			
		  case 1:
		  	printf("ÉLÉYÇÆÇ∑ÇË!	 ");
		  	hpe += 10;
			break;
			
		  case 2:
		  	printf("É}ÉbÉhÉVÉáÉbÉg!	");
		  	hpp -= 30;
			break;
			
		  case 3:
		  	printf("Ç∂ÇµÇÒ!	 ");
		  	hpp -= 40;
			break;
		}
		/*ãZëIëåãâ ÇâÊñ Ç…îΩâf*/
		gotoxy(xxx,yyy);
		printf("-----------------------------------------------\n");
		printf("ÉfÉBÉOÉ_	|		|ÉsÅZÉ`ÉÖÉE		\n");
		printf("HP %d/%d	|		|HP %d/%d		\n", hpe, hpme, hpp, hpmp);
		printf("-----------------		---------------\n");
		printf("  Å@ Å@  Å@ ,.ÅE'ÅfÅPÅPÅM`ÅE§\n");
		printf("  Å@ Å@  Å@ /:::'Å@,ÅAÅ@  ,ÅAÅR\n");
		printf(" Å@ Å@  Å@ /:::Å@Å@0!Å@Å@ 0!Å@`ÅA\n");
		printf("Å@Å@Å@Å@Å@i::::Å@Å@ ,.-==-ÅAÅ@ l\n");
		printf("Å@Å@Å@Å@Å@l:::Å@Å@ `Å[-Å|Åf  .:l\n");
		printf("Å@Å@Å@Å@Å@l:::.Å@Å@Å@Å@    .:::l\n");
		printf("Å@Å@Å@Å@Å@l;;;,,_...._,,,,,;;;;l\n");
		printf("Å@Å@ r=,'ÅLÅ‹yÅ‹'ÅC_r=-§/`∞ß§_,iÅ^Å_\n");
		printf("ÅfÑüÑü i;:.-§=~-ÑüÑüÑüÑü-iÑüÑü`Ñ™Ñ™Ñ™Ñ™Ñ™\n");
		printf("				      Å^) Å^)\n");
		printf("				     /  Å‹  ÅR\n");
		printf("				    ÅbÅú_ Åú |/Å_\n");
		printf("				    (ÅZ Å` ÅZ| Å^\n");
		printf("				    /        |<\n");
		printf("				   Åb     L/ |/\n");
		printf("-----------------------------------------------\n");
		printf("| *Ç≈ÇÒÇ±Ç§ÇπÇ¡Ç©|ñΩíÜ:100 	à–óÕ:10 |\n");
		printf("| *Ç≈ÇÒÇ´ÉVÉáÉbÉN|ñΩíÜ:50  	à–óÕ:30 |\n");
		printf("| *ÉLÉYÇÆÇ∑ÇË	 |ñΩíÜ:100 	HP20âÒïú|\n");
		printf("| *Ç©Ç›Ç»ÇË 	 |ñΩíÜ:30  	à–óÕ:40 |\n");
		printf("-----------------------------------------------\n");
		if (hpp <= 0){/*PlayerÇÃHPÇ™0Ç…Ç»Ç¡ÇΩÇ∆Ç´Ç…íEèoÇ∑ÇÈÇ∆Ç´óp*/
			break;
		}
	}
	
	/*èüóòÇ‹ÇΩÇÕîsñkÇÃï\é¶*/
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
	printf("ãgìcçπï€ó¢	 |        |    \n");
	printf(" HP	Åá/Åá    |        |      \n");
	printf("-------------------------------------\n");
	printf("        ÅQÅ^ÅPÅ_        \n");
	printf("      Å^ (    ∏ Å_		\n");
	printf("     /  Å^ÅPÅPÅ_  ÅR	\n");
	printf("    ò¶ /Å‹    Å‹ÅR  	\n");
	printf("    | / -• /  •- ÇuÅb	\n");
	printf("    |Åb   /      ÅbÅb	\n");
	printf("    |Å»  (._.)   / Åb	\n");
	printf("    | Å»  ÅQÅQ  /  Åb	\n");
	printf("    |  Å»  Å[  /|  Åb	\n");
	printf(" `Å^ÅRÅb Å_ÅQÅ^ ÅR /Å_  \n");
	printf(" Åb  |/Å_ÅQÅQÅQÅ^|/  Åb \n");
	printf(" Åb /             ÅR Åb \n");
	printf(" ÅbÅb  Ç`ÇkÇrÇnÇj  | Åb \n");
	printf("                      \n");
	printf("                      \n");
	printf("                      \n");
	printf("                      \n");
	printf("                      \n");
	printf("                      \n");
	printf(" ------------------------------------\n");
	printf("|ñÏê∂ÇÃãgìcçπï€ó¢Ç™åªÇÍÇΩ!!!!!!!!!!!!|\n");
	printf("|!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf("|!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf(" ------------------------------------\n");
	
    getch();
	clrscr();

	printf("-------------------------------------\n");
	printf("ãgìcçπï€ó¢	 |        |ÉsÅõÉ`ÉÖÉE    \n");
	printf(" HP	Åá/Åá    |        |HP 150/150      \n");
	printf("-------------------------------------\n");
	printf("        ÅQÅ^ÅPÅ_        \n");
	printf("      Å^ (    ∏ Å_		\n");
	printf("     /  Å^ÅPÅPÅ_  ÅR	\n");
	printf("    ò¶ /Å‹    Å‹ÅR  	\n");
	printf("    | / -• /  •- ÇuÅb	\n");
	printf("    |Åb   /      ÅbÅb	\n");
	printf("    |Å»  (._.)   / Åb	\n");
	printf("    | Å»  ÅQÅQ  /  Åb	\n");
	printf("    |  Å»  Å[  /|  Åb	\n");
	printf(" `Å^ÅRÅb Å_ÅQÅ^ ÅR /Å_  \n");
	printf(" Åb  |/Å_ÅQÅQÅQÅ^|/  Åb \n");
	printf(" Åb /             ÅR Åb \n");
	printf(" ÅbÅb  Ç`ÇkÇrÇnÇj  | Åb \n");
	printf("                        Å^) Å^) \n");
	printf("                       /  Å‹  ÅR\n");
	printf("                      ÅbÅú_ Åú |/Å_ \n");
	printf("                      (ÅZ Å` ÅZ| Å^\n");
	printf("                      /        |< \n");
	printf("                     Åb     L/ |/ \n");
	printf(" ------------------------------------\n");
	printf("|çsÇØÇ¡!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf("|ÉsÅõÉ`ÉÖÉE!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf("|!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf(" ------------------------------------\n");
	
    getch();
	clrscr();
	
	printf("-------------------------------------\n");
	printf("ãgìcçπï€ó¢	 |        |ÉsÅõÉ`ÉÖÉE    \n");
	printf(" HP	Åá/Åá    |        |HP 150/150      \n");
	printf("-------------------------------------\n");
	printf("        ÅQÅ^ÅPÅ_        \n");
	printf("      Å^ (    ∏ Å_		\n");
	printf("     /  Å^ÅPÅPÅ_  ÅR	\n");
	printf("    ò¶ /Å‹    Å‹ÅR  	\n");
	printf("    | / -• /  •- ÇuÅb	\n");
	printf("    |Åb   /      ÅbÅb	\n");
	printf("    |Å»  (._.)   / Åb	\n");
	printf("    | Å»  ÅQÅQ  /  Åb	\n");
	printf("    |  Å»  Å[  /|  Åb	\n");
	printf(" `Å^ÅRÅb Å_ÅQÅ^ ÅR /Å_  \n");
	printf(" Åb  |/Å_ÅQÅQÅQÅ^|/  Åb \n");
	printf(" Åb /             ÅR Åb \n");
	printf(" ÅbÅb  Ç`ÇkÇrÇnÇj  | Åb \n");
	printf("                        Å^) Å^) \n");
	printf("                       /  Å‹  ÅR\n");
	printf("                      ÅbÅú_ Åú |/Å_ \n");
	printf("                      (ÅZ Å` ÅZ| Å^\n");
	printf("                      /        |< \n");
	printf("                     Åb     L/ |/ \n");
	printf(" ------------------------------------\n");
	printf("|ÉsÅõÉ`ÉÖÉEÇÕì¶Ç∞ÇÊÇ§Ç∆ÇµÇΩ!!!!!!!|\n");
	printf("|!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf("|!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf("|!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf(" ------------------------------------\n");
	
    getch();
	clrscr();
	
	printf("-------------------------------------\n");
	printf("ãgìcçπï€ó¢	 |        |ÉsÅõÉ`ÉÖÉE    \n");
	printf(" HP	Åá/Åá    |        |HP 150/150      \n");
	printf("-------------------------------------\n");
	printf("        ÅQÅ^ÅPÅ_        \n");
	printf("      Å^ (    ∏ Å_		\n");
	printf("     /  Å^ÅPÅPÅ_  ÅR	\n");
	printf("    ò¶ /Å‹    Å‹ÅR  	\n");
	printf("    | / -• /  •- ÇuÅb	\n");
	printf("    |Åb   /      ÅbÅb	\n");
	printf("    |Å»  (._.)   / Åb	\n");
	printf("    | Å»  ÅQÅQ  /  Åb	\n");
	printf("    |  Å»  Å[  /|  Åb	\n");
	printf(" `Å^ÅRÅb Å_ÅQÅ^ ÅR /Å_  \n");
	printf(" Åb  |/Å_ÅQÅQÅQÅ^|/  Åb \n");
	printf(" Åb /             ÅR Åb \n");
	printf(" ÅbÅb  Ç`ÇkÇrÇnÇj  | Åb \n");
	printf("                        Å^) Å^) \n");
	printf("                       /  Å‹  ÅR\n");
	printf("                      ÅbÅú_ Åú |/Å_ \n");
	printf("                      (ÅZ Å` ÅZ| Å^\n");
	printf("                      /        |< \n");
	printf("                     Åb     L/ |/ \n");
	printf(" ------------------------------------\n");
	printf("|ÉsÅõÉ`ÉÖÉEÇÕì¶Ç∞ÇÍÇ»Ç©Ç¡ÇΩ!!!!!!!|\n");
	printf("|!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf("|!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf("|!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf(" ------------------------------------\n");
	
    getchar();
	clrscr();
	
	printf("-------------------------------------\n");
	printf("ãgìcçπï€ó¢	 |        |ÉsÅõÉ`ÉÖÉE    \n");
	printf(" HP	Åá/Åá    |        |HP 150/150      \n");
	printf("-------------------------------------\n");
	printf("        ÅQÅ^ÅPÅ_        \n");
	printf("      Å^ (    ∏ Å_		\n");
	printf("     /  Å^ÅPÅPÅ_  ÅR	\n");
	printf("    ò¶ /Å‹    Å‹ÅR  	\n");
	printf("    | / Åõ•/ •ÅZ ÇuÅb	\n");
	printf("    |Åb   /      ÅbÅb	\n");
	printf("    |Å»  (._.)   / Åb	\n");
	printf("    | Å»  ÅQÅQ  /  Åb	\n");
	printf("    |  Å»  Å[  /|  Åb	\n");
	printf(" `Å^ÅRÅb Å_ÅQÅ^ ÅR /Å_  \n");
	printf(" Åb  |/Å_ÅQÅQÅQÅ^|/  Åb \n");
	printf(" Åb /             ÅR Åb \n");
	printf(" ÅbÅb  Ç`ÇkÇrÇnÇj  | Åb \n");
	printf("                        Å^) Å^) \n");
	printf("                       /  Å‹  ÅR\n");
	printf("                      ÅbÅú_ Åú |/Å_ \n");
	printf("                      (ÅZ Å` ÅZ| Å^\n");
	printf("                      /        |< \n");
	printf("                     Åb     L/ |/ \n");
	printf(" ------------------------------------\n");
	printf("|ãgìcçπï€ó¢Ç™ãNÇ´ÇΩ!!!!!!!!!!!!!!!!!|\n");
	printf("|!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf("|!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf("|!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf(" ------------------------------------\n");
	
    getch();
	clrscr();
	
	printf("-------------------------------------\n");
	printf("ãgìcçπï€ó¢	 |        |ÉsÅõÉ`ÉÖÉE    \n");
	printf(" HP	Åá/Åá    |        |HP 150/150      \n");
	printf("-------------------------------------\n");
	printf("        ÅQÅ^ÅPÅ_        \n");
	printf("      Å^ (    ∏ Å_		\n");
	printf("     /  Å^ÅPÅPÅ_  ÅR	\n");
	printf("    ò¶ /Å‹    Å‹ÅR  	\n");
	printf("    | / Åõ•/ •ÅZ ÇuÅb	\n");
	printf("    |Åb   /      ÅbÅb	\n");
	printf("    |Å»  (._.)   / Åb	\n");
	printf("    | Å»  ÅQÅQ  /  Åb	\n");
	printf("    |  Å»  Å[  /|  Åb	\n");
	printf(" `Å^ÅRÅb Å_ÅQÅ^ ÅR /Å_  \n");
	printf(" Åb  |/Å_ÅQÅQÅQÅ^|/  Åb \n");
	printf(" Åb /             ÅR Åb \n");
	printf(" ÅbÅb  Ç`ÇkÇrÇnÇj  | Åb \n");
	printf("                        Å^) Å^) \n");
	printf("                       /  Å‹  ÅR\n");
	printf("                      ÅbÅú_ Åú |/Å_ \n");
	printf("                      (ÅZ Å` ÅZ| Å^\n");
	printf("                      /        |< \n");
	printf("                     Åb     L/ |/ \n");
	printf(" ------------------------------------\n");
	printf("|ãgìcçπï€ó¢ÇÕñ∞Ç¡ÇƒÇ¢ÇΩÇÊÇ§Çæ!!!!!!!|\n");
	printf("|!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf("|!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf("|!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf(" ------------------------------------\n");
	
    getch();
	clrscr();
	
	printf("-------------------------------------\n");
	printf("ãgìcçπï€ó¢	 |        |ÉsÅõÉ`ÉÖÉE    \n");
	printf(" HP	Åá/Åá    |        |HP 150/150      \n");
	printf("-------------------------------------\n");
	printf("        ÅQÅ^ÅPÅ_        \n");
	printf("      Å^ (    ∏ Å_		\n");
	printf("     /  Å^ÅPÅPÅ_  ÅR	\n");
	printf("    ò¶ /Å‹    Å‹ÅR  	\n");
	printf("    | / Å[•/ •Å[ ÇuÅb	\n");
	printf("    |Åb   /      ÅbÅb	\n");
	printf("    |Å»  (._.)   / Åb	\n");
	printf("    | Å»        /  Åb	\n");
	printf("    |  Å» (Å[) /|  Åb	\n");
	printf(" `Å^ÅRÅb Å_ÅQÅ^ ÅR /Å_  \n");
	printf(" Åb  |/Å_ÅQÅQÅQÅ^|/  Åb \n");
	printf(" Åb /             ÅR Åb \n");
	printf(" ÅbÅb  Ç`ÇkÇrÇnÇj  | Åb \n");
	printf("                        Å^) Å^) \n");
	printf("                       /  Å‹  ÅR\n");
	printf("                      ÅbÅú_ Åú |/Å_ \n");
	printf("                      (ÅZ Å` ÅZ| Å^\n");
	printf("                      /        |< \n");
	printf("                     Åb     L/ |/ \n");
	printf(" ------------------------------------\n");
	printf("|ãgìcçπï€ó¢ÇÃÇ†Ç≠Ç—!!!!!!!!!!!!!!!!!|\n");
	printf("|!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf("|!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf("|!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf(" ------------------------------------\n");
	
    getch();
	clrscr();
	
    printf("-------------------------------------\n");
	printf("ãgìcçπï€ó¢	 |           \n");
	printf(" HP	Åá/Åá    |              \n");
	printf("-------------------------------------\n");
	printf("        ÅQÅ^ÅPÅ_        \n");
	printf("      Å^ (    ∏ Å_		\n");
	printf("     /  Å^ÅPÅPÅ_  ÅR	\n");
	printf("    ò¶ /Å‹    Å‹ÅR  	\n");
	printf("    | / ÅZ•/ •ÅZ ÇuÅb	\n");
	printf("    |Åb   /      ÅbÅb	\n");
	printf("    |Å»  (._.)   / Åb	\n");
	printf("    | Å»  ÅQÅQ  /  Åb	\n");
	printf("    |  Å»  Å[  /|  Åb	\n");
	printf(" `Å^ÅRÅb Å_ÅQÅ^ ÅR /Å_  \n");
	printf(" Åb  |/Å_ÅQÅQÅQÅ^|/  Åb \n");
	printf(" Åb /             ÅR Åb \n");
	printf(" ÅbÅb  Ç`ÇkÇrÇnÇj  | Åb \n");
	printf("                        \n");
	printf("                       \n");
	printf("                      \n");
	printf("                     \n");
	printf("                       \n");
	printf("                     \n");
	printf(" ------------------------------------\n");
	printf("|Ç±ÇÃê¢äEÇÕè¡Ç¶ÇƒÇµÇ‹Ç¡ÇΩ!!!!!!!!!!!|\n");
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
				printf("ÇªÇ±ÇÊÇËâ∫Ç…ÇÕêiÇﬂÇ‹ÇπÇÒ!\n");
				gotoxy(x,y);
			}
			
			if (y == 40){
				gotoxy(10,40);
				printf("åxçêÅFÇ±ÇÍà»è„êiÇ‹Ç»Ç¢Ç≈Ç≠ÇæÇ≥Ç¢\n");
				gotoxy(x,y);
			}
			
			if (y == 42){
				clrscr();
				gotoxy(10,42);
				printf("Ç»ÇÒÇ≈êiÇﬁÇÒÇ≈Ç∑Ç©");
			}
			
			if (y == 45){
				clrscr();
				gotoxy(10,45);
				printf("êªçÏé“ÇÃòbÇÇøÇ·ÇÒÇ∆ï∑ÇØÅIÅIÅIÅI");
			}
			
			if (y == 48){
				clrscr();
				gotoxy(10,48);
				printf(".........");
			}
			
			if (y == 51){
				clrscr();
				gotoxy(10,51);
				printf("ÉQÅ[ÉÄÉIÅ[ÉoÅ[Ç≈Ç∑");
			}
			
			if (y == 55){
				clrscr();
				gotoxy(10,55);
				printf("Ç∆Ç›ÇπÇ©ÇØÇƒ...");
			}
			
			if (y == 60){
				clrscr();
				gotoxy(10,60);
				printf("ÉQÅ[ÉÄÉNÉäÉAÇ≈Ç∑ÅIÇ®ÇﬂÇ≈Ç∆Ç§");
				getch();
				Win();
				
			}
			
			if (y == 21){
				int second = 2;
    			gotoxy(x, y - 1);
    			printf("!");
				clrscr();
				sleep(second);
				// Ç±Ç±Ç≈êÌì¨âÊñ Ç…Ç´ÇËÇ©Ç¶ÇΩÇ¢ //
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
				// Ç±Ç±Ç≈êÌì¨âÊñ Ç…Ç´ÇËÇ©Ç¶ÇΩÇ¢ //
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
				// Ç±Ç±Ç≈êÌì¨âÊñ Ç…Ç´ÇËÇ©Ç¶ÇΩÇ¢ //
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