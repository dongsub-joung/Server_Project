#pragma once

#include <string>
#include <iostream>

class Adding
{
public:
	Adding();
	virtual ~Adding();
	
	void Add_X_Y(int x, int y);
	void Print(int sum);

private:
	int x;
	int y;
	int sum;
};