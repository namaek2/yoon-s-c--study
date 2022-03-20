//main.cpp

#include"헤더.h"

int main(void)
{
	BestComImp1::SimpleFunc();
	ProgComImp1::SimpleFunc();

	return 0;
}


//second.cpp

#include<iostream>
#include"헤더.h"

void BestComImp1::SimpleFunc(void)
{
	std::cout << "BestCom이 정의한 함수" << std::endl;
}

void ProgComImp1::SimpleFunc(void)
{
	std::cout << "ProgCom이 정의한 함수" << std::endl;
}


//헤더.h

namespace BestComImp1
{
	void SimpleFunc(void);
}

namespace ProgComImp1
{
	void SimpleFunc(void);
}
