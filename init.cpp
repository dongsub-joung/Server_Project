#include "Add.h"
#include <string>
#include <iostream>

int main()
{
	Adding adding;

	adding.Add_X_Y(3, 4);
	int sum = adding.m_sum;
	adding.Print(sum);

	return 1;
}