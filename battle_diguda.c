#include <stdio.h>
#include <conio.h>

int main(void)
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
	hpmp = 120;
	hpp = 120;
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
	printf("| *�Z1			|����:100�З�:10 |\n");
	printf("| *�Z2			|����:50 �З�:30 |\n");
	printf("| *�Z3			|����:50 HP20��|\n");
	printf("| *�Z4			|����:30 �З�:40 |\n");
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
			printf("�Z1!\n");
			hpe -= 10;
			break;
			
		  case 22:
			if (d == 4 || d == 8 || d == 9 || d ==2 || d == 6){
				printf("�Z2!\n");
				hpe -= 30;
			}
			else {
				printf("miss!\n");
			}
			break;
			
		  case 23:
		  	if (d == 4 || d == 8 || d == 9 || d ==2 || d == 6){
			  	printf("�Z3!\n");
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
			  	printf("�Z4!\n");
				hpe -= 40;
		  	}
			else {
				printf("miss!\n");
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
		  	printf("�Z1!");
		  	hpp -= 10;
			break;
			
		  case 1:
		  	printf("�Z2!");
		  	hpe += 10;
			break;
			
		  case 2:
		  	printf("�Z3!");
		  	hpp -= 30;
			break;
			
		  case 3:
		  	printf("��4!");
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
		printf("| *�Z1			|����:100�З�:10 |\n");
		printf("| *�Z2			|����:50 �З�:30 |\n");
		printf("| *�Z3			|����:50 HP20��|\n");
		printf("| *�Z4			|����:30 �З�:40 |\n");
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
		getch();
	}
	
	return (0);
}