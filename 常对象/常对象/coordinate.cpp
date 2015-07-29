#include "coordinate.h"


coordinate::coordinate(void):m_x(3),m_y(5)
{
}


coordinate::~coordinate(void)
{
}

int coordinate::get_x()
{
	return m_x;
}
int coordinate::get_y(int y) const
{
	//m_y = y;
	//return m_y;
	return y;
}
void coordinate::set_x(int x)
{
	m_x = x;
}
void coordinate::set_y(int y)
{
	m_y = y;
}