#include "stdafx.h"
#include "Int_num.h"
#include "CException.h"

Int_num::Int_num()
{
}


Int_num::~Int_num()
{
}
void Int_num::set()
{

	char inp[Isize]="",max_size[Isize]="2147483647";
	bool flag = true;
	bool size = true;
	bool eque = true;
	while (true) {
		printf("Enter number: ");
		gets_s(inp, Isize);
		for (int i = 0; i < strlen(inp); i++)
		{
			if(!(inp[i]>=32&& inp[i]<=127))
			{
				flag = false;
				break;
			}
			if (!isdigit(inp[i]))
					{
							flag = false;
							break;			
					}	
			
		}
		if (inp == max_size)
			{
				eque = false;
			}
		if(atol(inp)>=atoi(max_size)&&eque==true)
		{
			size = false;
		}
		if (flag == true&&size==true)
			break;
		else
		{
			if(flag == false)
			{
				char msg[Isize];
				msg[0] = 0;
				strcpy(msg, "Error! Not number! You enter: ");
				strcat(msg, inp);

				throw CException(msg);
			}
			if (size == false)
			{
				char msg[Isize];
				msg[0] = 0;
				strcpy(msg, "Error! Number isn`t int! You enter: ");
				strcat(msg, inp);

				throw CException(msg);
			}
		}
	}
	num=atoi(inp);
}
void Int_num::get()
{
	printf("num=%d",num);
}