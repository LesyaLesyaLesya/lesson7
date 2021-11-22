#pragma once
#include <cstdint>
#include <iostream>

class Date
{
	size_t m_day;
	size_t m_month;
	size_t m_year;
public:
	Date(size_t day = 1, size_t month = 1, size_t year = 1990);
	~Date();

	size_t GetDay() const;
	size_t GetMonth() const;
	size_t GetYear() const;

	friend std::ostream& operator<< (std::ostream& op, const Date& d);
};
