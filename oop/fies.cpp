#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class fiend
{
private:
	char name1[100];
	int k,g;
	int y;
public:
	fiend(){y=0;}

	void read(char f[])

	{
		
    int io = 0;
    while (f[io]!='\0'){
       
		io++;}
	fstream obj;
	obj .open("names.txt",ios::in|ios::binary|ios::app);
	if(!obj)
	{cout<<"error";return;}
	while(!obj.eof())
	{char u[100],v[100],pp[100];
	int i=0;
	char q;
	obj>>q;
	while(q!='|')
	{u[i]=q;
	obj>>q;i++;}
	u[i]='\0';
	i=0;
	int o=0;
		while(f[o]!='\0')
		{if(f[o]==u[o]){
    name1[o]=u[o];y++;
	}
	else
	{y=0;break;}
	o++;}
	
    if(y==io){
	name1[o]='\0';
	obj>>q;
	while(q!='|')
	{v[i]=q;
	obj>>q;i++;}
	v[i]='\0';
	k=atoi(v);
	i=0;
	obj>>q;
	while(q!='|')
	{v[i]=q;
	obj>>q;i++;}
	v[i]='\0';
	g=atoi(v);
	i=0;}
	}	
	obj.close();
	}

	int exest()

	{return y;}

	void get()

	{
	cout<<"name is: "<<name1<<endl;
	cout<<"price is: "<<k<<endl;
	cout<<"number of sails is: "<<g<<endl;}
	int getprice()
	{return k;}
};
class add:public fiend
{
private:
	char name[100];
	int price,sales;
public:
	add()
	{sales=0;}

	void set(char x[],int y)

	{ int len = 0;
    int i = 0;
    while (x[i]!='\0'){
      name[i]=x[i];
        i++;}
	name[i]='\0';
	price=y;}
	void write()

	{
		
	fstream obj;
	obj.open("names.txt",ios::out|ios::binary|ios::app);
	if(!obj)
	{cout<<"error";return;}
obj<<name;
obj<<"|";
obj<<price;
obj<<"|";
obj<<sales;
obj<<"|";
	obj.close();
	}
};
class delet
{
	private:
	char name1[100];
	int k,g;
	int y;
public:
	delet(){y=0;}

    virtual	void readd(char f[100])

	{
	fstream obj;
	fstream obj1;
	obj1 .open("new.txt",ios::in|ios::binary|ios::app);
	obj .open("names.txt",ios::in|ios::binary|ios::app);
	if(!obj||!obj1)
	{cout<<"error";return;}
	while(!obj.eof())
	{char u[50],v[100];
	int i=0;
	char q;
	obj>>q;
	if(obj.eof())
	{break;}
	while(q!='|')
	{u[i]=q;
	obj>>q;i++;}
	u[i]='\0';
	i=0;
	int o;
    for(o=0;o<sizeof(f);o++)
    {if(f[o]==u[o]){
    name1[o]=u[o];y=o+1;}
	else
	{y=0;break;}
	}
    if(y==sizeof(f)){
	obj>>q;
	while(q!='|')
	{v[i]=q;
	obj>>q;i++;}
	v[i]='\0';
	k=atoi(v);
	i=0;
	obj>>q;
	while(q!='|')
	{v[i]=q;
	obj>>q;i++;}
	v[i]='\0';
	g=atoi(v);
	i=0;
}
	else {obj1<<u;

		obj1<<q;
		}
	}	
	obj.close();
	obj1.close();
	remove("names.txt");
	rename("new.txt","names.txt");
	}
	
	};
class edet:public add,public delet
{
public:

};
class sales :public delet,public fiend
{
	private:
	char name1[100];
	int k,g;
	int y;
public:
	sales(){y=0;}

	void readd(char f[100])

	{
	fstream obj;
	fstream obj1;
	obj1 .open("new.txt",ios::in|ios::binary|ios::app);
	obj .open("names.txt",ios::in|ios::binary|ios::app);
	if(!obj||!obj1)
	{cout<<"error";return;}
	while(!obj.eof())
	{char u[50],v[100];
	int i=0;
	char q;
	obj>>q;
	if(obj.eof())
	{break;}
	while(q!='|')
	{u[i]=q;
	obj>>q;i++;}
	u[i]='\0';
	i=0;
	int o;
    for(o=0;o<sizeof(f);o++)
    {if(f[o]==u[o]){
    name1[o]=u[o];y=o+1;}
	else
	{y=0;break;}
	}
    if(y==sizeof(f)){
		obj1<<u;
		obj1<<q;
	obj>>q;
	while(q!='|')
	{v[i]=q;
	obj>>q;i++;}
	v[i]='\0';
	k=atoi(v);
	obj1<<k;
	i=0;
	obj1<<q;
	obj>>q;
	while(q!='|')
	{v[i]=q;
	obj>>q;i++;}
	v[i]='\0';
	g=atoi(v);
	g++;
	obj1<<g;
	i=0;
	obj1<<q;
}
	else {obj1<<u;

		obj1<<q;
		}
	}	
	obj.close();
	obj1.close();
	remove("names.txt");
	rename("new.txt","names.txt");
	}

};

void main()
{
	int k;
	cout<<"for add new item  (1)"<<endl;
	cout<<"for delete an item (2)"<<endl;
	cout<<"for edit an item (3)"<<endl;
	cout<<"for selling (4)"<<endl;
	cout<<"for show the data of (5)"<<endl;
	cout<<"for exet (6)"<<endl;

	cin>>k;
	while (k!=6)
	{
	if(k==1)
	{
	char num[100];
	int price;
	cout<<"enter the name: ";
	cin>>num;
	cout<<"enter th price: ";
    cin>>price;
	add item;
	item.set(num,price);item.write();
	cout<<"\\\\\done\\\\"<<endl;}
	else if(k==2)
	{
	char num[100];
	cout<<"what do u wann delete?(name) ";
	cin>>num;
	delet del;
	del .readd(num);
	
	cout<<"\\\\done\\\\"<<endl;}
    if(k==3)
	{
	char num[100];
	cout<<"what do u wanna edet?(name) ";
	cin>>num;	
	edet ed;
	char newn[100];
	int newp;
	ed.readd(num);
	cout<<"enter the new data of: "<<num<<endl;
	cout<<"the new name is: ";cin>>newn;
	cout<<"the new price is: ";;cin>>newp;
	ed.set(newn,newp);
	ed.write();
	cout<<"\\\\done\\\\"<<endl;}
	if(k==4)
	{
	 int n,sum=0;
	char num[100];
	sales sel;
	cout<<"enter the number pf items: ";cin>>n;
	cout<<"enter the name of the items: "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>num;
		sel.read(num);
		int p =sel.getprice();
		sum=sum+p;
		sel.readd(num);}
	cout<<"total price is :"<<sum<<endl;
	cout<<"\\\\done\\\\"<<endl;}
	if(k==5)
	{
	char num[100];
	cout <<"what do u wanna serch for??(name) ";cin>>num;
	fiend fi;
	fi.read(num);
	fi.get();
	cout<<"\\\\done\\\\"<<endl;}
	cout<<endl<<"for add new item  (1)"<<endl;
	cout<<"for delete an item (2)"<<endl;
	cout<<"for edit an item (3)"<<endl;
	cout<<"for selling (4)"<<endl;
	cout<<"for show the data of (5)"<<endl;
	cout<<"for exet (6)"<<endl;
	cin>>k;
	}
	
	
	
system ("pause");}