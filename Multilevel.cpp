#include<iostream>
using namespace std;
class Plants
{
public:
	Plants(){}
	~Plants() {}
	void getColor()
	{
		cout << "green" << endl;
	}
	void getWeakness()
	{
		cout << "produce_oxygen" << endl;
	}
	void getFunction()
	{
		cout << "can't_live_without_sun_and_water" << endl;
	}
	
};
class Tree : public Plants
{
public:
	void getLength()
	{
		cout << "6-9 metres" << endl;
	}
	void getSeason()
	{
		cout << "leaves fall in summer " << endl;
	}
};
class AppleTree : public Tree
{
public:
	void getName()
	{
		cout << "Apple tree" << endl;
	}
	void getCrops()
	{
		cout << "can be green , yelllow or green " << endl;
	}
};


int main()
{
	AppleTree at;
	cout << "Plants : \nColor ~ ";
	at.getColor();
	cout << endl;
	cout << "Function ~ ";
	at.getFunction();
	cout << endl;
	cout << "Weakness ~ ";
	at.getWeakness();
	cout << endl;
	cout << "Length ~ ";
	at.getLength();
	cout << endl;
	cout << "Change ~ ";
	at.getSeason();
	cout << endl;
	cout << "Crops ~ ";
	at.getCrops();
	cout << endl;



	return 0;
}