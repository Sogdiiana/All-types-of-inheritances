#include<iostream>
using namespace std;
class Plants
{
public:
	Plants() {}
	~Plants() {}
	void getColor()
	{
		cout << "Color ~ green" << endl;
	}
	void getWeakness()
	{
		cout << "Weakness ~ produce oxygen" << endl;
	}
	void getFunction()
	{
		cout << "Function ~ can't live without sun and water" << endl;
	}
};
class AppleTree : public Plants
{
public:
	void getName()
	{
		cout << "Name ~ Apple tree" << endl;
	}
	void getCrops()
	{
		cout << "Crops ~ can be green , yelllow or green " << endl;
	}
};
class Venus_flytrap : public Plants
{
public:
	
	void getName()
	{
		cout << "Name - Venus flytrap"  << endl;
	}
	void getProperty()
	{
		cout << "Property ~ consumes insects" << endl;
	}
};
class Rose : public Plants
{
public:
	void getName()
	{
		cout << "Name ~ Rose" << endl;
	}
	void getFlower()
	{
		cout << "Has flovers of different colors " << endl;
	}
	void getSpears()
	{
		cout << "It is speanescent " << endl;
	}
};


int main()
{
	AppleTree ap;
	Venus_flytrap vf;
	Rose r;
	ap.getName();
	ap.getColor();
	ap.getFunction();
	ap.getWeakness();
	ap.getCrops();
	cout << endl << endl;
	vf.getName();
	vf.getColor();
	vf.getFunction();
	vf.getWeakness();
	vf.getProperty();
	cout << endl << endl;
	r.getName();
	r.getColor();
	r.getFunction();
	r.getWeakness();
	r.getFlower();
	r.getSpears();



	return 0;
}