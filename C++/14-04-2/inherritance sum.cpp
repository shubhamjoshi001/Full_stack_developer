 #include<iostream>
 using namespace std;
 class A
 {
 	public:
	int a,b;
	int sum()
	{
		a=2;
		b=3;
		return(a+b);
	}
};
class B:public A
 {
 	
 };
main()
 {
 	B obj;
 cout<<"total is :"<<obj.sum();
 }
