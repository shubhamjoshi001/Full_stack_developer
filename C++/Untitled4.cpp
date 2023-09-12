#include<iostream>
using namespace std;
class student{
	  public:
	  	int rollno;
	  	float per;
	  	
	  	void get_value(){
	  		
	  		cout<<"\n enter roll no";
	  		cin>>rollno;
	  		
	  		cout<<"\n enter percentage";
	  		cin>>per;
	  		
	  		
		  }
		  void print_value(){
		  	
		  	cout<<"\n rollno :"<<rollno;
		  	cout<<"\n percentage :"<<per;
		  }
class teacher{
       	int id;
	  	float slaray;
	  	
	  	void get_value(){
	  		
	  		cout<<"\n enter id no";
	  		cin>>rollno;
	  		
	  		cout<<"\n enter salary";
	  		cin>>per;
	  		
	  		
		  }
		  void print_value(){
		  	
		  	cout<<"\n id no:"<<rollno;
		  	cout<<"\n salary :"<<per;
		  }	
};
main(){

	student s1,s2;
	s1.get_value();
	s1.print_value();
	
	s2.get_value();
	s2.print_value();
}
{

	teacher s3;
	s3.get_value();
	s3.print_value();
	
}
	



