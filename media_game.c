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
	
	printf("����������������������������������������������������������������������������������������������������������������\n");
	printf("����������������������������������������������������������������������������������������������������������������\n");
	printf("����������������������������������������������������������������������������������������������������������������\n");
	printf("����������������������������������������������������������������������������������������������������������������\n");
	printf("����������������������������������������������������������������������������������������������������������������\n");
	printf("����������������������������������������������������������������������������������������������������������������\n");
	printf("����������������������������������������������������������������������������������������������������������������\n");
	printf("����������������������������������������������������������������������������������������������������������������\n");
	printf("����������������������������������������������������������������������������������������������������������������\n");
	printf("����������������������������������������������������������������������������������������������������������������\n");
	printf("����������������������������������������������������������������������������������������������������������������\n");
	printf("����������������������������������������������������������������������������������������������������������������\n");
	printf("����������������������������������������������������������������������������������������������������������������\n");
	printf("����������������������������������������������������������������������������������������������������������������\n");
	printf("����������������������������������������������������������������������������������������������������������������\n");
	printf("����������������������������������������������������������������������������������������������������������������\n");
	printf("����������������������������������������������������������������������������������������������������������������\n");
	printf("����������������������������������������������������������������������������������������������������������������\n");
	printf("����������������������������������������������������������������������������������������������������������������\n");
	printf("����������������������������������������������������������������������������������������������������������������\n");
	printf("����������������������������������������������������������������������������������������������������������������\n");
	printf("����������������������������������������������������������������������������������������������������������������\n");
	
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
	
	printf("�����̍�i�̓t�B�N�V�����ł���A\n");
	printf("���݂���A�l���E�Q�[���ȂǂƂ͊֌W����܂���");
	gotoxy(x1, y1);
	printf("�@�@�@�@�@  ���P�P�P�P�P�P��				\n");
	printf("�@�@�@�@�@�@��                �_			\n");
	printf("�@�@�@�@ ��     /�_____ �Q__�^� l			\n");
	printf("�@�@�@�@�@ ��  /       �|      ll			\n");
	printf("   �� �� ��   l  ���܁R   /�܁�j|			\n");
	printf(" ��|| || ||�__� {�Mij�N �Nij�L}|�			\n");
	printf(" | |� || ||| {�|{ �[       �[}|�}			\n");
	printf(" l         |/ �r!     {|     |�m			\n");
	printf(" l  l    �^ /   �_�L�[__��   �^				\n");
	printf(" l�@�@�R/�@�^  �^l�_�Q�Q___�^l�_			\n");
	printf(" �R�@�@�@ /�Q�^/�@ �_�@  �^�R�_�Q			\n");
	printf("|�P�P�P�P|�@ /�@ �Q_ �_�^ �Q_�@�R �_		\n");
	printf("|�B   �@ |�@ |�^| �L      | �_|     �_		\n");
	printf("|�B   �@ |�@/�@ |         | �@�_     �b		\n");
	printf("|�@   �@ |�@�_/�b         |�_/        |		\n");
	
	printf("-----------------------------------------\n");
	printf("|					|\n");
	printf("|					|\n");
	printf("|					|\n");
	printf("-----------------------------------------\n");
	
	y1 = 19;
	y2 = 20;
	y3 = 21;
	
	gotoxy(x1, y1);
	printf("�͂��߂܂���!");
	gotoxy(x1, y2);
	printf("�{�P�b�g �����X�^�[�� ���E��!");
	getch();
	
	gotoxy(x1, y1);
	printf("					");
	gotoxy(x1, y2);
	printf("					");
	
	
	gotoxy(x1, y1);
	printf("�킽���� �Ȃ܂��� ���ؓ{");
	gotoxy(x1, y2);
	printf("�݂�Ȃ���� �{�P���� �͂�����\n");
	gotoxy(x1, y3);
	printf("��΂�Ă��邼!");
	getch();
	
	gotoxy(x1, y1);
	printf("					");
	gotoxy(x1, y2);
	printf("					");
	gotoxy(x1, y3);
	printf("					");
	
	
	gotoxy(x1, y1);
	printf("��̂Ȃ��ɂ� �{�P�����Ƃ��� �������̂�");
	gotoxy(x1, y2);
	printf("�������� �����������Ă���̂�");
	
	gotoxy(x1, y1);
	printf("					");
	gotoxy(x1, y2);
	printf("					");
	
	
	gotoxy(x1, y1);
	printf("���݂� �Ȃ܂���...");
	getch();
	
	gotoxy(x1, y1);
	printf("					");
	
	
	gotoxy(x1, y1);
	printf("���Ȃ肩�������� ����ȁH");
	getch();
	
	gotoxy(x1, y1);
	printf("					");
	
	gotoxy(x1, y1);
	printf("���ꂶ�Ⴀ!");
	getch();
	
	
	gotoxy(x1, y1);
	printf("					");
	
	gotoxy(x1, y1);
	printf("��߂� �ڂ�����ƁI");
	gotoxy(x1, y2);
	printf("�{�P�b�g �����X�^�[�� �������ցI");
	gotoxy(x1, y3);
	printf("���b�c �S�[!");
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
	printf("���[�ނ��[�΁[�I�I\n");
	printf("   ������x��蒼���܂���?\n");
	printf("   ��蒼���Ȃ�Yes���A�Q�[�����I������Ȃ�No����͂��Ă��������F");
	scanf("%s",YesNo);
	
	if (strcmp(YesNo,"Yes")==0){
		clrscr();
		main();
	}
	
	else if (strcmp(YesNo,"No")==0){
		printf("     �V��ł����������肪�Ƃ��������܂����I\n\n\n\n\n\n");
		sleep(second);
		exit(0);
	}
	
	else {
		printf("    Yes��No����͂��Ă�������\n");
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
	printf("�N���A���߂łƂ��I�I\n");
	printf("�v���C���Ă����������肪�Ƃ��������܂����I\n");

	getch();
	exit(0);
		
	return (0);
}

int Kusa(void)
{
	printf("	w:��   \n");
	printf("	s:��   \n\n");

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
	/*�Z�I���̃J�[�\����\�������邽�߂̊֐�*/
	int x;
	int y;
	/*�o�����Z����\����������W���w�肷��֐�*/
	int xx;
	int yy;
	/*�퓬��ʂ̈ʒu���Œ肳���邽�߂̊֐�*/
	int xxx;
	int yyy;
	int xxxx;
	int yyyy;
	/*HP*/
	int hpe;/*�G�̌���HP*/
	int hpme;/*�G�̍ő�HP*/
	int hpp;/*Player�̌���HP*/
	int hpmp;/*Player�̍ő�HP*/
	/*�G�̍s�������߂闐��*/
	int rannsuu;
	int b;
	int rannsuu2;
	int d;
	char c;/*�L�[�{�[�h���͂͂��̕ϐ��ɓ���*/
	char a;/*�Z�����肷��Ƃ��Ƀ��[�v���甲���o�����߂̊֐�*/

	xxx = 70;
	yyy = 3;
	gotoxy(xxx,yyy);
	printf("w:��   p:����\n");
	yyy += 1;
	gotoxy(xxx,yyy);
	printf("s:��");
	/*�퓬��ʂ̏ꏊ�Œ�*/
	xxx = 1;
	yyy = 1;
	/*HP�ݒ�*/
	hpme = 110;
	hpe = 110;
	hpmp = 120;
	hpp = 120;
	rannsuu = 1;
	rannsuu2 = 5;
	
	gotoxy(xxx,yyy);
	printf("-----------------------------------------------\n");
	printf("�I�l���l	|		|�s�Z�`���E		\n");
	printf("HP %d/%d	|		|HP %d/%d		\n", hpe, hpme, hpp, hpmp);
	printf("-----------------		---------------\n");
	printf("   �I�l���l�I\n");
	printf("      O,,O\n");
	printf("    ( >o'��'o\n");
	printf("  �Q|  ���^(�Q�Q_\n");
	printf(" �^  ��-(�Q�Q�Q_�^\n");
	printf("				      �^) �^)\n");
	printf("				     /  ��  �R\n");
	printf("				    �b��_ �� |/�_\n");
	printf("				    (�Z �` �Z| �^\n");
	printf("				    /        |<\n");
	printf("				   �b     L/ |/\n");
	printf("-----------------------------------------------\n");
	printf("| *�ł񂱂�������|����:100	 �З�:10 |\n");
	printf("| *�ł񂫃V���b�N|����:50 	 �З�:30 |\n");
	printf("| *�L�Y������	 |����:100	 HP20��|\n");
	printf("| *���݂Ȃ� 	 |����:30  	 �З�:40 |\n");
	printf("-----------------------------------------------\n");
	
	while (hpe > 0){
		/*char�֐���a,c�̃��Z�b�g*/
		a = 0;
		c = 0;
		
		/*�Z�I���J�[�\���̈ʒu�ݒ�*/
		x = 2;
		y = 17;
		
		/*�Z�I���J�[�\���̕\��*/
		gotoxy(x,y);
		printf(">");
		
		/*�Z�I���J�[�\���̈ړ��ƋZ�����肷��v���O����*/
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
		/*���肵���Z����\������ꏊ�̎w��*/
		xx = 40;
		yy = 9;
		
		/*���肵���Z�ɂ���Ă̌��ʂ̔��f*/
		d = 0;
		rannsuu2 = (rannsuu2 * 12869 + 6925) % 32768;
		d = rannsuu2 % 10;
		gotoxy(xx,yy);
		switch (y){
		  case 17:
			printf("�ł񂱂�������!\n");
			hpe -= 10;
			break;
			
		  case 18:
			if (d == 4 || d == 8 || d == 9 || d ==2 || d == 6){
				printf("�ł񂫃V���b�N!\n");
				hpe -= 30;
			}
			else {
				printf("miss!          \n");
			}
			break;
			
		  case 19:
		  	printf("�L�Y������!     \n");
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
			  	printf("���݂Ȃ�!       \n");
				hpe -= 40;
		  	}
			else {
				printf("miss!           \n");
			}
			break;
		}
		/*�G�̋Z�I��*/
		rannsuu = (rannsuu * 12869 + 6925) % 32768;
		b = rannsuu % 4;
		xx = 25;
		yy = 8;
		gotoxy (xx,yy);
		switch (b){
		  case 0:
		  	printf("�ł񂱂�������!");
		  	hpp -= 20;
			break;
			
		  case 1:
		  	printf("�L�Y������!     ");
		  	hpe += 10;
			break;
			
		  case 2:
		  	printf("����������!    ");
		  	hpp -= 30;
			break;
			
		  case 3:
		  	printf("���݂Ȃ�!      ");
		  	hpp -= 50;
			break;
		}
		/*�Z�I�����ʂ���ʂɔ��f*/
		gotoxy(xxx,yyy);
		printf("-----------------------------------------------\n");
		printf("�I�l���l	|		|�s�Z�`���E		\n");
		printf("HP %d/%d	|		|HP %d/%d		\n", hpe, hpme, hpp, hpmp);
		printf("-----------------		---------------\n");
		printf("   �I�l���l�I\n");
		printf("      O,,O\n");
		printf("    ( >o'��'o\n");
		printf("  �Q|  ���^(�Q�Q_\n");
		printf(" �^  ��-(�Q�Q�Q_�^\n");
		printf("				      �^) �^)\n");
		printf("				     /  ��  �R\n");
		printf("				    �b��_ �� |/�_\n");
		printf("				    (�Z �` �Z| �^\n");
		printf("				    /        |<\n");
		printf("				   �b     L/ |/\n");
		printf("-----------------------------------------------\n");
		printf("| *�ł񂱂�������|����:100	 �З�:10 |\n");
		printf("| *�ł񂫃V���b�N|����:50 	 �З�:30 |\n");
		printf("| *�L�Y������	 |����:100	 HP20��|\n");
		printf("| *���݂Ȃ� 	 |����:30 	 �З�:40 |\n");
		printf("-----------------------------------------------\n");
		if (hpp <= 0){/*Player��HP��0�ɂȂ����Ƃ��ɒE�o����Ƃ��p*/
			break;
		}
	}
	
	/*�����܂��͔s�k�̕\��*/
	if (hpe <= 0){
		printf("YOU WIN!\n");
		printf("���x�������������I\n");
		printf("HP��30���������I\n");
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
	/*�Z�I���̃J�[�\����\�������邽�߂̊֐�*/
	int x;
	int y;
	/*�o�����Z����\����������W���w�肷��֐�*/
	int xx;
	int yy;
	/*�퓬��ʂ̈ʒu���Œ肳���邽�߂̊֐�*/
	int xxx;
	int yyy;
	int xxxx;
	int yyyy;
	/*HP*/
	int hpe;/*�G�̌���HP*/
	int hpme;/*�G�̍ő�HP*/
	int hpp;/*Player�̌���HP*/
	int hpmp;/*Player�̍ő�HP*/
	/*�G�̍s�������߂闐��*/
	int rannsuu;
	int b;
	int rannsuu2;
	int d;
	char c;/*�L�[�{�[�h���͂͂��̕ϐ��ɓ���*/
	char a;/*�Z�����肷��Ƃ��Ƀ��[�v���甲���o�����߂̊֐�*/
	
	xxx = 70;
	yyy = 3;
	gotoxy(xxx,yyy);
	printf("w:��   p:����\n");
	yyy += 1;
	gotoxy(xxx,yyy);
	printf("s:��");
	/*�퓬��ʂ̏ꏊ�Œ�*/
	xxx = 1;
	yyy = 1;
	/*HP�ݒ�*/
	hpme = 150;
	hpe = 150;
	hpmp = 150;
	hpp = 150;
	rannsuu = 3;
	rannsuu2 = 7;
	
	gotoxy(xxx,yyy);
	printf("-----------------------------------------------\n");
	printf("�f�B�O�_	|		|�s�Z�`���E		\n");
	printf("HP %d/%d	|		|HP %d/%d		\n", hpe, hpme, hpp, hpmp);
	printf("-----------------		---------------\n");
	printf("  �@ �@  �@ ,.�E'�f�P�P�M`�E�\n");
	printf("  �@ �@  �@ /:::'�@,�A�@  ,�A�R\n");
	printf(" �@ �@  �@ /:::�@�@0!�@�@ 0!�@`�A\n");
	printf("�@�@�@�@�@i::::�@�@ ,.-==-�A�@ l\n");
	printf("�@�@�@�@�@l:::�@�@ `�[-�|�f  .:l\n");
	printf("�@�@�@�@�@l:::.�@�@�@�@    .:::l\n");
	printf("�@�@�@�@�@l;;;,,_...._,,,,,;;;;l\n");
	printf("�@�@ r=,'�L��y��'�C_r=-�/`���_,i�^�_\n");
	printf("�f���� i;:.-�=~-��������-i����`����������\n");
	printf("				      �^) �^)\n");
	printf("				     /  ��  �R\n");
	printf("				    �b��_ �� |/�_\n");
	printf("				    (�Z �` �Z| �^\n");
	printf("				    /        |<\n");
	printf("				   �b     L/ |/\n");
	printf("-----------------------------------------------\n");
	printf("| *�ł񂱂�������|����:100	�З�:10 |\n");
	printf("| *�ł񂫃V���b�N|����:50  	�З�:30 |\n");
	printf("| *�L�Y������	 |����:100 	HP20��|\n");
	printf("| *���݂Ȃ� 	 |����:30  	�З�:40 |\n");
	printf("-----------------------------------------------\n");
	
	while (hpe > 0){
		/*char�֐���a,c�̃��Z�b�g*/
		a = 0;
		c = 0;
		
		/*�Z�I���J�[�\���̈ʒu�ݒ�*/
		x = 2;
		y = 21;
		
		/*�Z�I���J�[�\���̕\��*/
		gotoxy(x,y);
		printf(">");
		
		/*�Z�I���J�[�\���̈ړ��ƋZ�����肷��v���O����*/
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
		/*���肵���Z����\������ꏊ�̎w��*/
		xx = 40;
		yy = 13;
		
		/*���肵���Z�ɂ���Ă̌��ʂ̔��f*/
		d = 0;
		rannsuu2 = (rannsuu2 * 12869 + 6925) % 32768;
		d = rannsuu2 % 10;
		gotoxy(xx,yy);
		switch (y){
		  case 21:
			printf("�ł񂱂�������!\n");
			hpe -= 10;
			break;
			
		  case 22:
			if (d == 4 || d == 8 || d == 9 || d ==2 || d == 6){
				printf("�ł񂫃V���b�N!     \n");
				hpe -= 30;
			}
			else {
				printf("miss!         \n");
			}
			break;
			
		  case 23:
		  	printf("�L�Y������!        \n");
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
			  	printf("���݂Ȃ�!       \n");
				hpe -= 40;
		  	}
			else {
				printf("miss!           \n");
			}
			break;
		}
		/*�G�̋Z�I��*/
		rannsuu = (rannsuu * 12869 + 6925) % 32768;
		b = rannsuu % 4;
		xx = 35;
		yy = 10;
		gotoxy (xx,yy);
		switch (b){
		  case 0:
		  	printf("����������!	 ");
		  	hpp -= 10;
			break;
			
		  case 1:
		  	printf("�L�Y������!	 ");
		  	hpe += 10;
			break;
			
		  case 2:
		  	printf("�}�b�h�V���b�g!	");
		  	hpp -= 30;
			break;
			
		  case 3:
		  	printf("������!	 ");
		  	hpp -= 40;
			break;
		}
		/*�Z�I�����ʂ���ʂɔ��f*/
		gotoxy(xxx,yyy);
		printf("-----------------------------------------------\n");
		printf("�f�B�O�_	|		|�s�Z�`���E		\n");
		printf("HP %d/%d	|		|HP %d/%d		\n", hpe, hpme, hpp, hpmp);
		printf("-----------------		---------------\n");
		printf("  �@ �@  �@ ,.�E'�f�P�P�M`�E�\n");
		printf("  �@ �@  �@ /:::'�@,�A�@  ,�A�R\n");
		printf(" �@ �@  �@ /:::�@�@0!�@�@ 0!�@`�A\n");
		printf("�@�@�@�@�@i::::�@�@ ,.-==-�A�@ l\n");
		printf("�@�@�@�@�@l:::�@�@ `�[-�|�f  .:l\n");
		printf("�@�@�@�@�@l:::.�@�@�@�@    .:::l\n");
		printf("�@�@�@�@�@l;;;,,_...._,,,,,;;;;l\n");
		printf("�@�@ r=,'�L��y��'�C_r=-�/`���_,i�^�_\n");
		printf("�f���� i;:.-�=~-��������-i����`����������\n");
		printf("				      �^) �^)\n");
		printf("				     /  ��  �R\n");
		printf("				    �b��_ �� |/�_\n");
		printf("				    (�Z �` �Z| �^\n");
		printf("				    /        |<\n");
		printf("				   �b     L/ |/\n");
		printf("-----------------------------------------------\n");
		printf("| *�ł񂱂�������|����:100 	�З�:10 |\n");
		printf("| *�ł񂫃V���b�N|����:50  	�З�:30 |\n");
		printf("| *�L�Y������	 |����:100 	HP20��|\n");
		printf("| *���݂Ȃ� 	 |����:30  	�З�:40 |\n");
		printf("-----------------------------------------------\n");
		if (hpp <= 0){/*Player��HP��0�ɂȂ����Ƃ��ɒE�o����Ƃ��p*/
			break;
		}
	}
	
	/*�����܂��͔s�k�̕\��*/
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
	printf("�g�c���ۗ�	 |        |    \n");
	printf(" HP	��/��    |        |      \n");
	printf("-------------------------------------\n");
	printf("        �Q�^�P�_        \n");
	printf("      �^ (    � �_		\n");
	printf("     /  �^�P�P�_  �R	\n");
	printf("    �� /��    �܁R �	\n");
	printf("    | / -� /  �- �u�b	\n");
	printf("    |�b   /      �b�b	\n");
	printf("    |��  (._.)   / �b	\n");
	printf("    | ��  �Q�Q  /  �b	\n");
	printf("    |  ��  �[  /|  �b	\n");
	printf(" `�^�R�b �_�Q�^ �R /�_  \n");
	printf(" �b  |/�_�Q�Q�Q�^|/  �b \n");
	printf(" �b /             �R �b \n");
	printf(" �b�b  �`�k�r�n�j  | �b \n");
	printf("                      \n");
	printf("                      \n");
	printf("                      \n");
	printf("                      \n");
	printf("                      \n");
	printf("                      \n");
	printf(" ------------------------------------\n");
	printf("|�쐶�̋g�c���ۗ������ꂽ!!!!!!!!!!!!|\n");
	printf("|!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf("|!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf(" ------------------------------------\n");
	
    getch();
	clrscr();

	printf("-------------------------------------\n");
	printf("�g�c���ۗ�	 |        |�s���`���E    \n");
	printf(" HP	��/��    |        |HP 150/150      \n");
	printf("-------------------------------------\n");
	printf("        �Q�^�P�_        \n");
	printf("      �^ (    � �_		\n");
	printf("     /  �^�P�P�_  �R	\n");
	printf("    �� /��    �܁R �	\n");
	printf("    | / -� /  �- �u�b	\n");
	printf("    |�b   /      �b�b	\n");
	printf("    |��  (._.)   / �b	\n");
	printf("    | ��  �Q�Q  /  �b	\n");
	printf("    |  ��  �[  /|  �b	\n");
	printf(" `�^�R�b �_�Q�^ �R /�_  \n");
	printf(" �b  |/�_�Q�Q�Q�^|/  �b \n");
	printf(" �b /             �R �b \n");
	printf(" �b�b  �`�k�r�n�j  | �b \n");
	printf("                        �^) �^) \n");
	printf("                       /  ��  �R\n");
	printf("                      �b��_ �� |/�_ \n");
	printf("                      (�Z �` �Z| �^\n");
	printf("                      /        |< \n");
	printf("                     �b     L/ |/ \n");
	printf(" ------------------------------------\n");
	printf("|�s����!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf("|�s���`���E!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf("|!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf(" ------------------------------------\n");
	
    getch();
	clrscr();
	
	printf("-------------------------------------\n");
	printf("�g�c���ۗ�	 |        |�s���`���E    \n");
	printf(" HP	��/��    |        |HP 150/150      \n");
	printf("-------------------------------------\n");
	printf("        �Q�^�P�_        \n");
	printf("      �^ (    � �_		\n");
	printf("     /  �^�P�P�_  �R	\n");
	printf("    �� /��    �܁R �	\n");
	printf("    | / -� /  �- �u�b	\n");
	printf("    |�b   /      �b�b	\n");
	printf("    |��  (._.)   / �b	\n");
	printf("    | ��  �Q�Q  /  �b	\n");
	printf("    |  ��  �[  /|  �b	\n");
	printf(" `�^�R�b �_�Q�^ �R /�_  \n");
	printf(" �b  |/�_�Q�Q�Q�^|/  �b \n");
	printf(" �b /             �R �b \n");
	printf(" �b�b  �`�k�r�n�j  | �b \n");
	printf("                        �^) �^) \n");
	printf("                       /  ��  �R\n");
	printf("                      �b��_ �� |/�_ \n");
	printf("                      (�Z �` �Z| �^\n");
	printf("                      /        |< \n");
	printf("                     �b     L/ |/ \n");
	printf(" ------------------------------------\n");
	printf("|�s���`���E�͓����悤�Ƃ���!!!!!!!|\n");
	printf("|!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf("|!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf("|!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf(" ------------------------------------\n");
	
    getch();
	clrscr();
	
	printf("-------------------------------------\n");
	printf("�g�c���ۗ�	 |        |�s���`���E    \n");
	printf(" HP	��/��    |        |HP 150/150      \n");
	printf("-------------------------------------\n");
	printf("        �Q�^�P�_        \n");
	printf("      �^ (    � �_		\n");
	printf("     /  �^�P�P�_  �R	\n");
	printf("    �� /��    �܁R �	\n");
	printf("    | / -� /  �- �u�b	\n");
	printf("    |�b   /      �b�b	\n");
	printf("    |��  (._.)   / �b	\n");
	printf("    | ��  �Q�Q  /  �b	\n");
	printf("    |  ��  �[  /|  �b	\n");
	printf(" `�^�R�b �_�Q�^ �R /�_  \n");
	printf(" �b  |/�_�Q�Q�Q�^|/  �b \n");
	printf(" �b /             �R �b \n");
	printf(" �b�b  �`�k�r�n�j  | �b \n");
	printf("                        �^) �^) \n");
	printf("                       /  ��  �R\n");
	printf("                      �b��_ �� |/�_ \n");
	printf("                      (�Z �` �Z| �^\n");
	printf("                      /        |< \n");
	printf("                     �b     L/ |/ \n");
	printf(" ------------------------------------\n");
	printf("|�s���`���E�͓�����Ȃ�����!!!!!!!|\n");
	printf("|!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf("|!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf("|!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf(" ------------------------------------\n");
	
    getchar();
	clrscr();
	
	printf("-------------------------------------\n");
	printf("�g�c���ۗ�	 |        |�s���`���E    \n");
	printf(" HP	��/��    |        |HP 150/150      \n");
	printf("-------------------------------------\n");
	printf("        �Q�^�P�_        \n");
	printf("      �^ (    � �_		\n");
	printf("     /  �^�P�P�_  �R	\n");
	printf("    �� /��    �܁R �	\n");
	printf("    | / ���/ ��Z �u�b	\n");
	printf("    |�b   /      �b�b	\n");
	printf("    |��  (._.)   / �b	\n");
	printf("    | ��  �Q�Q  /  �b	\n");
	printf("    |  ��  �[  /|  �b	\n");
	printf(" `�^�R�b �_�Q�^ �R /�_  \n");
	printf(" �b  |/�_�Q�Q�Q�^|/  �b \n");
	printf(" �b /             �R �b \n");
	printf(" �b�b  �`�k�r�n�j  | �b \n");
	printf("                        �^) �^) \n");
	printf("                       /  ��  �R\n");
	printf("                      �b��_ �� |/�_ \n");
	printf("                      (�Z �` �Z| �^\n");
	printf("                      /        |< \n");
	printf("                     �b     L/ |/ \n");
	printf(" ------------------------------------\n");
	printf("|�g�c���ۗ����N����!!!!!!!!!!!!!!!!!|\n");
	printf("|!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf("|!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf("|!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf(" ------------------------------------\n");
	
    getch();
	clrscr();
	
	printf("-------------------------------------\n");
	printf("�g�c���ۗ�	 |        |�s���`���E    \n");
	printf(" HP	��/��    |        |HP 150/150      \n");
	printf("-------------------------------------\n");
	printf("        �Q�^�P�_        \n");
	printf("      �^ (    � �_		\n");
	printf("     /  �^�P�P�_  �R	\n");
	printf("    �� /��    �܁R �	\n");
	printf("    | / ���/ ��Z �u�b	\n");
	printf("    |�b   /      �b�b	\n");
	printf("    |��  (._.)   / �b	\n");
	printf("    | ��  �Q�Q  /  �b	\n");
	printf("    |  ��  �[  /|  �b	\n");
	printf(" `�^�R�b �_�Q�^ �R /�_  \n");
	printf(" �b  |/�_�Q�Q�Q�^|/  �b \n");
	printf(" �b /             �R �b \n");
	printf(" �b�b  �`�k�r�n�j  | �b \n");
	printf("                        �^) �^) \n");
	printf("                       /  ��  �R\n");
	printf("                      �b��_ �� |/�_ \n");
	printf("                      (�Z �` �Z| �^\n");
	printf("                      /        |< \n");
	printf("                     �b     L/ |/ \n");
	printf(" ------------------------------------\n");
	printf("|�g�c���ۗ��͖����Ă����悤��!!!!!!!|\n");
	printf("|!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf("|!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf("|!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf(" ------------------------------------\n");
	
    getch();
	clrscr();
	
	printf("-------------------------------------\n");
	printf("�g�c���ۗ�	 |        |�s���`���E    \n");
	printf(" HP	��/��    |        |HP 150/150      \n");
	printf("-------------------------------------\n");
	printf("        �Q�^�P�_        \n");
	printf("      �^ (    � �_		\n");
	printf("     /  �^�P�P�_  �R	\n");
	printf("    �� /��    �܁R �	\n");
	printf("    | / �[�/ ��[ �u�b	\n");
	printf("    |�b   /      �b�b	\n");
	printf("    |��  (._.)   / �b	\n");
	printf("    | ��        /  �b	\n");
	printf("    |  �� (�[) /|  �b	\n");
	printf(" `�^�R�b �_�Q�^ �R /�_  \n");
	printf(" �b  |/�_�Q�Q�Q�^|/  �b \n");
	printf(" �b /             �R �b \n");
	printf(" �b�b  �`�k�r�n�j  | �b \n");
	printf("                        �^) �^) \n");
	printf("                       /  ��  �R\n");
	printf("                      �b��_ �� |/�_ \n");
	printf("                      (�Z �` �Z| �^\n");
	printf("                      /        |< \n");
	printf("                     �b     L/ |/ \n");
	printf(" ------------------------------------\n");
	printf("|�g�c���ۗ��̂�����!!!!!!!!!!!!!!!!!|\n");
	printf("|!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf("|!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf("|!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n");
	printf(" ------------------------------------\n");
	
    getch();
	clrscr();
	
    printf("-------------------------------------\n");
	printf("�g�c���ۗ�	 |           \n");
	printf(" HP	��/��    |              \n");
	printf("-------------------------------------\n");
	printf("        �Q�^�P�_        \n");
	printf("      �^ (    � �_		\n");
	printf("     /  �^�P�P�_  �R	\n");
	printf("    �� /��    �܁R �	\n");
	printf("    | / �Z�/ ��Z �u�b	\n");
	printf("    |�b   /      �b�b	\n");
	printf("    |��  (._.)   / �b	\n");
	printf("    | ��  �Q�Q  /  �b	\n");
	printf("    |  ��  �[  /|  �b	\n");
	printf(" `�^�R�b �_�Q�^ �R /�_  \n");
	printf(" �b  |/�_�Q�Q�Q�^|/  �b \n");
	printf(" �b /             �R �b \n");
	printf(" �b�b  �`�k�r�n�j  | �b \n");
	printf("                        \n");
	printf("                       \n");
	printf("                      \n");
	printf("                     \n");
	printf("                       \n");
	printf("                     \n");
	printf(" ------------------------------------\n");
	printf("|���̐��E�͏����Ă��܂���!!!!!!!!!!!|\n");
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
				printf("������艺�ɂ͐i�߂܂���!\n");
				gotoxy(x,y);
			}
			
			if (y == 40){
				gotoxy(10,40);
				printf("�x���F����ȏ�i�܂Ȃ��ł�������\n");
				gotoxy(x,y);
			}
			
			if (y == 42){
				clrscr();
				gotoxy(10,42);
				printf("�Ȃ�Ői�ނ�ł���");
			}
			
			if (y == 45){
				clrscr();
				gotoxy(10,45);
				printf("����҂̘b�������ƕ����I�I�I�I");
			}
			
			if (y == 48){
				clrscr();
				gotoxy(10,48);
				printf(".........");
			}
			
			if (y == 51){
				clrscr();
				gotoxy(10,51);
				printf("�Q�[���I�[�o�[�ł�");
			}
			
			if (y == 55){
				clrscr();
				gotoxy(10,55);
				printf("�Ƃ݂�������...");
			}
			
			if (y == 60){
				clrscr();
				gotoxy(10,60);
				printf("�Q�[���N���A�ł��I���߂łƂ�");
				getch();
				Win();
				
			}
			
			if (y == 21){
				int second = 2;
    			gotoxy(x, y - 1);
    			printf("!");
				clrscr();
				sleep(second);
				// �����Ő퓬��ʂɂ��肩������ //
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
				// �����Ő퓬��ʂɂ��肩������ //
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
				// �����Ő퓬��ʂɂ��肩������ //
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