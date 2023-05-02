#include<iostream>
using namespace std;
class Plants
{
public:
	Plants() {}
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
class AppleTree : public Plants
{
public:
	AppleTree(){}
	~AppleTree() {}
	void getName()
	{
		cout << "Apple tree"<< endl;
	}
	void getCrops()
	{
		cout << "can be green , yelllow or green " << endl;
	}
	void getLength()
	{
		cout << "6 metres" << endl;
	}
	
};

int main()
{
	AppleTree obj;
	cout << "Name ~ ";
	obj.getName();
	cout << "Function ~ ";
	obj.getFunction();
	cout << "Weakness ~ ";
	obj.getWeakness();
	cout << "Crops ~ ";
	obj.getCrops();
	cout << "Length ~ ";
	obj.getLength();


	return 0;
}