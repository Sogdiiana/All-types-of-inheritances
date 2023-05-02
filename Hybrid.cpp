#include<iostream>
using namespace std;
class Animal
{
public:
	void getSee()
	{
		cout << "They have 2 eyes and 2 ears"<< endl;
	}
	void getLegs()
	{
		cout << "Majotity of them have 4 legs" << endl;
	}
};
class DomesticAnimal : public Animal
{
public:
	void getEatD()
	{
		cout << "They eat  plants " << endl;
	}
};
class WildAnimals : public Animal
{
public:
	void getEatW()
	{
		cout << "They consume meat " << endl;
	}
};
class Pig : public WildAnimals, DomesticAnimal
{
public:
	void getName()
	{
		cout << "Pigs" << endl;
	}
	void getColor()
	{
		cout << "They are pink" << endl;
	}
	void getLive()
	{
		cout << "Mostly live in farms , with people" << endl;
	}
};


int main()
{
	Pig p;
	p.getName();
	p.getColor();
	p.getLive();
	p.getEatW();
	p.getEatD();




	return 0;
}