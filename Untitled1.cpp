#include <iostream>
using namespace std;
struct data{
	int info;
	data* next;
};
typedef data* pointer;
int main(){
	pointer p1, p2, p3;
	cout<<"Input : "<<endl;
	p1=new data;
	cout<<"Info p1 : "; cin>>p1->info;
	
	p2= new data;
	cout<<"Info p2 : "; cin>>p2->info;
	
	p3=new data;
	cout<<"Info p3 : "; cin>>p3->info;
	p3->next=0;
	
	p1->next=p2;
	p2->next=p3;
	
	cout<<endl<<"output : "<<endl;
	cout<<"Info p1 : "<<p1->info<<endl;
	cout<<"Info p2 : "<<p1->next->info<<endl;
	cout<<"Info p3 : "<<p3->info<<endl;
}

