#pragma once

template<typename T>
class SmartPtr
{
	T* m_ptr;
public:
	SmartPtr(T* ptr = nullptr):m_ptr(ptr)
	{
	}
	~SmartPtr()
	{
		delete m_ptr;
	}

	//перегрузка операторов разыменования и доступа к членам
	T& operator*()  const { return *m_ptr; }
	T* operator->() const { return m_ptr; }

	//перегрузка оператора присватвания
	SmartPtr& operator=(SmartPtr& ptr) 
	{
		if (&ptr == this) { return *this; }
		
		m_ptr = nullptr;
		m_ptr = ptr.m_ptr;
		ptr.m_ptr = nullptr;
		return *this;
	}

	bool isNullprt() const { return this->m_ptr == nullptr; }

	
};

const SmartPtr<Date>& compare(const SmartPtr<Date>& d1, const SmartPtr<Date>& d2)
{
	if (d1->GetYear() > d2->GetYear())   { return d1; } else { return d2;}
	if (d1->GetMonth() > d2->GetMonth()) { return d1; } else { return d2;}
	if (d1->GetDay() > d2->GetDay())     { return d1; } else { return d2;}
};

void exchange(SmartPtr<Date>& d1, SmartPtr<Date>& d2)
{
	SmartPtr<Date> temp;

	temp = d1;
	d1 = d2;
	d2 = temp;
};
