#include<iostream>
using namespace std;
class Animals
{
public:
	void eat()
	{
		cout << "We eat insects ! "<< endl;
	}
	
};
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
class Venus_flytrap : public Plants , public Animals
{
public :
	
	void getName()
	{
		cout << "Name - Venus flytrap"  << endl;
	}
};




int main()
{
	Venus_flytrap vf;
	vf.getName();
	cout << "Color ~ ";
	vf.getColor();
	vf.eat();
	cout << "Weakness ~ ";
	vf.getWeakness();
	cout << endl;




	return 0;
}