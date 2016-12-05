#include "stdafx.h"
#include "Interface.h"
#include "Int_num.h"
#include "CException.h"
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Виведення меню
bool outputMenu(void) {

	system("cls");
	printf("Menu:\n1. Start program\n2. Exit\n\nMake your choice ");

	try {
		char str[Isize];
		gets_s(str, Isize);

		if (strlen(str) != 1) throw CException("Wrong input format!!!");

		switch (str[0]) {
		case '1': {
			Int_num a;
			a.set();
			a.get();
			printf("\n");
			system("pause");
			break;
		}
		case '2': return false;
		default: throw CException("Unexpected input!");
		}

		return true;
	}
	catch (CException& excection) {
		excection.show();
		system("pause");
		return true;
	}
}