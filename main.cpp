#include <iostream>
#include <string>

/*1) Створіть клас Numbers, який містить два цілих числа. 
Цей клас повинен мати дві змінні-члени для зберігання цих двох цілих чисел. 
Ви також повинні створити два методи:
  метод set(), який дозволить присвоювати значення змінним;
  метод print(), який буде виводити значення змінних.
2) Напишіть клас Ball, який повинен мати наступні дві закриті змінні-члени зі значеннями за замовчуванням:
  m_color (Red);
  m_radius (20.0).*/

class Numbers
{
private:
	int m_FirstNum = 0;
	int m_SecondNum = 0;
public:
	void set(int FirstNum, int SecondNum);
	void print();
};

class Ball
{
private:
	std::string m_color = "Red";
	double m_radius = 20.0;
};

int main()
{
	Numbers num;

	num.set(19, 7);
	num.print();

	return 0;
}

void Numbers::set(int FirstNum, int SecondNum)
{
	m_FirstNum = FirstNum;
	m_SecondNum = SecondNum;
}

void Numbers::print()
{
	std::cout << "First number is " << m_FirstNum << ".\n" 
		<< "Second number is " << m_SecondNum << ".\n";
}