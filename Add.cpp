#include "Add.h"

Adding::Adding()
	:x(),
	y(),
	m_sum()
{}

void Adding::Add_X_Y(int x, int y)
{
	m_sum = x + y;
}

void Adding::Print(int sum)
{
	sum = m_sum;
	std::cout << sum;
}