/*
Nama: Mohammad Dhikri
npm: 140810180075
tanggal pembuatan: 19 Maret 2019
Deskripsi: Exercise-04
no :1
Kelas: A
*/
#include <iostream>
using namespace std;
struct data{
	string nama;
	string bidang;
	char gaji[20];
	data* next;
};
typedef data* pointer;
typedef pointer list;
void createList(list& first){
	first=NULL;
}
void createElmt(pointer p){
	cout<<"Nama : "; cin>>p->nama;
	cout<<"Bidang : "; cin>>p->bidang;
	cout<<"gaji : "; cin>>p->gaji;
	p->next=NULL;
}
void insertFirst(list& first, pointer p){
	if (first==NULL) {
		first=p;
	}
	else { 
		p->next=first; 
		first=p; 
	}
}
void traversal(list first){
	pointer pBantu;
	if (first==NULL) {
		cout << "List kosong" <<endl;
	}
	else {
		pBantu=first; 
	do {
	cout<<"\t"<<pBantu->nama;
	cout<<"\t\t"<<pBantu->bidang;
	cout<<"\t\t"<<pBantu->gaji;
	pBantu->next=NULL;
	} 
	while(pBantu != NULL);
	}
}
void deleteFirst(list& first, pointer& pHapus){ 

	if (first==NULL){            
		pHapus=NULL; 
		cout<<"List kosong, tidak ada yang dihapus"<<endl; 
	} 
	else if (first->next==NULL){  
		pHapus=first; 
		first=NULL; 
	} 
	else {             
		pHapus=first; 
		first=first->next;               
		pHapus->next=NULL;                
	} 
}
void insertLast(list& first, pointer p){  
	pointer last;    
	cout<<"Insert Last"<<endl;
	p= new data;
	cout<<"Nama : "; cin>>p->nama;
	cout<<"Bidang : "; cin>>p->bidang;
	cout<<"gaji : "; cin>>p->gaji;
	p->next=NULL;
	if (first==NULL){  
		first=p; 
	}	 
	else {          
		last=first;   
		while (last->next!=NULL){   
			last=last->next; 
		} 
		last->next=p;  
	} 
}

void deleteLast(list& first, pointer& pHapus){
	pointer last,precLast; 
	cout<<"Delete Last"<<endl; 
	if (first==NULL){               
		pHapus=NULL; 
		cout<<"List kosong, tidak ada yang dihapus" <<endl; 
	} 
	else if (first->next==NULL){   
		pHapus=first; 
		first=NULL;                
	} 
	else {                         
		last=first;            
		precLast=NULL; 
		while (last->next!=NULL){    
			precLast=last;        
			last=last->next;      
		} 
	pHapus=last;
	precLast->next=NULL; 
	} 
}

main() {
	pointer p, ph, pCari;
	list first;
	
	createList(first); 
	
	createElmt(p); 
	insertFirst(first,p);
	cout<<endl;
	
	createElmt(p); 
	insertFirst(first,p);
	cout<<endl;
	
	createElmt(p); 
	insertFirst(first,p);
	cout<<endl;
	
	cout<<"No.\tNama\t\tBidang\t\tGaji"<<endl;
	traversal(first); 
	
	deleteFirst(first, ph);
	insertLast(first, p);
	deleteLast(first, ph);
	
}
