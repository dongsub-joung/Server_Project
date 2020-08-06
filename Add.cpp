#include "Add.h"

class Adding
{
public:
	Adding();
	//virtual ~Adding();

	void Add_X_Y(int x, int y);
	void Print(int* sum);

private:
	int x;
	int y;
	int m_sum;
};

Adding::Adding()
	:x(),
	y(),
	m_sum()
{}

void Adding::Add_X_Y(int x, int y)
{
	m_sum = x + y;
}

void Adding::Print(int* sum)
{
	sum = &m_sum;
	std::cout << sum;
}