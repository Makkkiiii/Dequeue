#include <iostream>
using namespace std;
#define SIZE 10
class dequeue{
	int a[20],f,r;
	public:
		dequeue();
		void insertatbeg(int);
		void insertatend(int);
		void deletefront();
		void deleterear();
		void display();
		
};
dequeue :: dequeue(){
	f=-1;
	r=-1;
}
void dequeue :: insertatend(int i){
	if(r>=SIZE-1){
		cout<<"\n Insertion is not possible";
		
	}
	else{
		if(f==-1){
			f++;
			r++;
			
		}
		else{
			r=r+1;
		}
		a[r]=i;
		cout <<"\n Inserted item is"<<a[r];
	}
	
}
void dequeue :: insertatbeg(int i){
	if(f==-1){
		f=0;
		a[++r]=i;
		cout<<"\n Inserted element is: "<<i;
		
	}
	else if (f!=0){
		a[--f]=i;
		cout<<"\n Inserted element is : "<<i;
		
	}
	else {
		cout<<"\n Insertion is not possible";
		
	}
}
void dequeue :: deletefront(){
	if(f==1){
		cout<<"Deletion is not possible";
		return;
		
	}
	else {
		cout<<"The deleted element is : "<<a[f];
		if (f==r){
			f=r=-1;
			return;
		}
		else 
		f=f+1;
	}
}
void dequeue :: deleterear(){
	if(f==-1){
		cout<<"Deletion is not possible";
		return;
	}
	else{
		cout<<"The deleted element is: "<<a[r];
		if (f=-r){
			f=r=-1;
		}
		else
		r=r-1;
	}
}
void dequeue :: display(){
	if(f==-1){
		cout<<"Dequeue is empty";
		
	}
	else {
		for(int i=f; i<r;i++){
			cout<<a[i]<<" ";
			
		}
	}
}
int main (){
	int c,i;
	dequeue d;
	cout<<"\n 1. Insert at beginning";
	cout<<"\n 2. Insert at end";
	cout<<"\n 3. Display";
	cout<<"\n 4. Delete at front";
	cout<<"\n 5. Delete at rear";
	cout<<"\n 6. Exit";
	cout<<"\n Enter your choice";
	cin >>c;
	switch(c){
		case 1:
			cout<<"Enter the element to insert";
			cin>>i;
			d.insertatbeg(i);
			break;
		case 2:
			cout<<"Enter the element to insert";
			cin>>i;
			d.insertatend(i);
			break;
		case 3:
			d.display();
			break;
		case 4:
			d.deletefront();
			break;
		case 5:
			d.deleterear();
			break;
		case 6:
			exit(1);
			break;
			default:
				cout<<"Invalid choice";
				break;
			
	}
}
