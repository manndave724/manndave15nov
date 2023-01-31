#include<iostream>
using namespace std;

class address{
	public:
		string street,city,state;
		
		address(string street,string city,string state)
		{
			this->street = street;
			this->city = city;
			this->state = state;
		}
};

class employee{
	private:
		address*address
		public:
			Address*adress;
			public:
				int id;
				string name;
				
				employee(int id,string name,adress*adress)
				{
					this->id = id;
					this->name = name;
					this->address = address;
				}
				
				void display()
				{
					cout<<"\nId : "<<id;
					cout<<"\nName : "<<name;
					cout<<"\nAddress Line : "<<address->street;
					cout<<"\nCity : "<<address->city;
					cout<<"\nState : "<<address->state;
				}
							
};
int main()
{
	address a1 ("190 CG Road, Opp. GLS","Ahmedabad","Gujarat");
	Employee e1(101,"Rakesh",&a1);
	e1.display();
	return 0;
}