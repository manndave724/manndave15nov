#include<iostream>
using namespace std;

class kuldeep{
	private:
		int money;
		friend int hardik(kuldeep);
		public:
			kuldeep()
			{
				money=0;
			}
};

int hardik(kuldeep k)
{
	k.money = 3000;
	return k.money;
}

int main()
{
	kuldeep k;
	cout<<"\nhardik has given rs."<<hardik(k)<<" to kuldeep.";
}