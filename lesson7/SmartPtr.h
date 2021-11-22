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
	SmartPtr operator=(SmartPtr& ptr) 
	{
		if (&ptr == this) { return *this; }
		
		m_ptr = nullptr;
		m_ptr = ptr.m_ptr;
		ptr.m_ptr = nullptr;
		return *this;
	}


	bool isNullprt() const { return this->m_ptr == nullptr; }
};