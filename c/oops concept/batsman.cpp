#include<iostream>
using namespace std;
class cricket
{
	public:
		char name[20];
		int run,ini,best;
		void input_data()
		{
			cout<<"\n batsman name : ";
			cin>>name;
			
			cout<<"\n enter run : ";
			cin>>run;
			
			cout<<"\n total inings : ";
			cin>>ini;
			
			cout<<"\n best performance : ";
			cin>>best;			
		}
};
class batsman : public cricket
{
	public:
	int avg;
	void get_data()
	{
		avg= run/ini;
		 
		 cout<<"\n batsman name : "<<name;
		 cout<<"\n batsman runs : "<<run;
		 cout<<"\n total inings : "<<ini;
		 cout<<"\n best performance : "<<best;
		 cout<<"\n average runs : "<<avg;
	}
};
main()
{
	batsman b;
	
	b.input_data();
	b.get_data();

}
