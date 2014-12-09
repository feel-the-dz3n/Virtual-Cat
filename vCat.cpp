#include <iostream>
#include <time.h>
#include <windows.h>
#include <thread>
#include <conio.h>
using namespace std;
void DrawUI();
//some class declarations
class Cat
{
public:
	Cat(int age, int weight);
	~Cat();
	void SetWeight(int newWeight) { itsWeight = newWeight; };
	void SetAge(int newAge) { itsAge = newAge; };
	int GetAge() const { return itsAge; };
	int GetWeight() const { return itsWeight; };

private:
	int itsAge;
	int itsWeight;
	int age;
	int weight;
	int newAge;
	int newWeight;
};
Cat::Cat(int age, int weight)
{
	itsAge = age;
	itsWeight = weight;
}
Cat::~Cat() {}
Cat Cat1(1, 1);
int check()
{
	while (true)
	{
		Sleep(1000);
		system("cls");
		int grow;
		grow = Cat1.GetAge();
		grow++;
		Cat1.SetAge(grow);
		DrawUI();
	}
}
void DrawUI()
{
	cout << "\nCat Stats:\n" << "Age: " << Cat1.GetAge() << "\tWeight: " << Cat1.GetWeight() << "\n";
}
int main()
{
	cout << "Welcome!\n" << "Loading.";
	cout << ".creating cat..";
	cout << "done.\n";
	cout << "Virtual Cat by catnikita255, 2014.\n" << "Will start in 5 seconds...\n";
	Sleep(5000);
	system("cls");
	std::thread t(check);
	DrawUI();
	_getch();
	t.detach();
	return 0;
}