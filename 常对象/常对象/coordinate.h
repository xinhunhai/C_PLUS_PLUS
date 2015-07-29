#pragma once
class coordinate
{
public:
	coordinate(void);
	~coordinate(void);
	int get_x();
	int get_y(int y) const;
	void set_x(int x);
	void set_y(int y);
private:
	int m_x;
	int m_y;
};

