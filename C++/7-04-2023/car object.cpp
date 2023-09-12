#include<iostream>
#include<string>
using namespace std;
class car
{
	private:
		string brand;
		string model;
		int topspeed;
		int year;
	public:
	void getinfo(string carbrand,string carmodel,int cartopspeed,int caryear)
	{
		brand=carbrand;
		model=carmodel;
		topspeed=cartopspeed;
		year=caryear;
	}
	void showinfor()
	{
		cout<<"carbrand :"<<brand<<endl;
		cout<<"carmodel :"<<model<<endl;
		cout<<"cartopspeed :"<<topspeed<<endl;
		cout<<"caryear :"<<year<<endl;
		 } 	
};
main()
{
car tata;
tata.getinfo("tata","fortuner",231,2020)
tata.showinfor();
return 0;
}
