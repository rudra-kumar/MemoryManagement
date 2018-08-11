#include <iostream>

class SlaveA
{
public:
	SlaveA()
	{
		std::cout << "Slave A Default Constructor called" << std::endl;
	}
	// copy constructor
	SlaveA(const SlaveA& source)
	{
		std::cout << "Slave A copy constructor called: " << std::endl;
	}
	~SlaveA()
	{
		std::cout << "Slave A Default Destructor called" << std::endl;
	}
};
class SlaveB
{
public:
	SlaveB()
	{
		std::cout << "Slave B Default Constructor called" << std::endl;
	}
	//Copy constructor
	SlaveB(const SlaveB& source)
	{
		std::cout << "Slave B Copy Constructor called" << std::endl;
	}
	~SlaveB()
	{
		std::cout << "Slave B Default Destructor called" << std::endl;
	}
};
class SlaveC
{
public:
	SlaveC()
	{
		std::cout << "Slave C Default Constructor called" << std::endl;
	}
	SlaveC(const SlaveC& source)
	{
		std::cout << "Slave C Copy Constructor called" << std::endl;
	}
	~SlaveC()
	{
		std::cout << "Slave C Default Destructor called" << std::endl;
	}
};

class Master
{
public:
	Master(int x)
		:m_X(x)
	{
		std::cout << "Master Default Constructor called" << std::endl;
	}
	//Copy constructor
	Master(const Master& source)
		:a(source.a), b(source.b), c(source.c), m_X(source.m_X)
	{
		std::cout << "Master Copy Constructor Called" << std::endl;
	}
	~Master()
	{
		std::cout << "Master Default Destructor called" << std::endl;
	}

private:
	SlaveA a;
	SlaveB b;
	SlaveC c; 
	int m_X;
};





int main()
{
	{
		Master master(2);
		Master n(master);
		Master c = master;
	}
	std::cin.get();
	return 0;
}