#include "Date.h"

Date::Date(size_t day, size_t month, size_t year) : m_day(day), m_month(month), m_year(year) {}
Date::~Date() {};

size_t Date::GetDay() const
{
	return m_day;
}

size_t Date::GetMonth() const
{
	return m_month;
}

size_t Date::GetYear() const
{
	return m_year;
}

std::ostream& operator<<(std::ostream& os, const Date& d)
{
	os << ((d.m_day < 10)?"0":"") << d.m_day << "." << ((d.m_month < 10) ? "0" : "") << d.m_month << "." << d.m_year;
	return os;
}