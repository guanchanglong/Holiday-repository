#include <stdio.h>
#include <stdlib.h>

#include "Queries_Menu.h"
#include "Schedule_UI.h"
#include "Studio_UI.h"
#include "Play_UI.h"
#include "conio.h"

void Queries_Menu(void){
	char choice;
	do {
		system("cls");
		printf("\n\n\t\t\t                        信息查询\n");
		printf("\t\t\t******************************************************\n");
		printf("\t\t\t[1]\t演出厅查询\n\n");
		printf("\t\t\t[2]\t剧目查询\n\n");
		printf("\t\t\t[3]\t演出计划查询\n\n");
		printf("\t\t\t[4]\t退出\n\n");
		printf("\n\t\t\t******************************************************\n");
		printf("\n\t\t\t:");
		fflush(stdin);
		choice = getche();
		switch (choice) {
		case '1':
			Studio_UI_MgtEntry(2);
			break;
		case '2':
			Play_UI_MgtEntry(1);
			break;
		case '3':
			Schedule_UI_ListAll();
			break;
		}
	} while ('4' != choice);
	}
