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
	
	return (0);
}