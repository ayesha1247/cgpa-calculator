#include<iostream>
#include<cmath>
using namespace std;
class marks
{
	public:
	double a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,a1,a2,a3,a4,a5;
	void gm (void);
	void tm(void);
	void points (void);
	void grade(void);
		void weight(void);
};



void marks::weight (void)
{
		cout<<"GPA CALCULATOR for UCPIANS\n";
	cout<<"MADE BY AYESHA NAZIR CHAUDRY\n\n\n";

	cout<<"enter the weightage as asked\n\n";
	cout<<"weightage of mids=---%"<<endl;
	cin>>a;
	cout<<"w of finals=---%"<<endl;
	cin>>b;
	cout<<"w of project=---%"<<endl;
	cin>>a3;
	cout<<"w of assinmnts---%"<<endl;
	cin>>c;
	cout<<"w of quiz---%"<<endl;
	cin>>d;
	
	
}



void marks::gm (void)
{
	cout<<"enter the marks you have gained as asked\n\n\n";
	cout<<"marks in mids:"<<endl;
	cin>>e;
	cout<<endl<<"marks in finals"<<endl;
	cin>>f;
	cout<<endl<<"marks in project"<<endl;
	cin>>a1;
	cout<<endl<<"marks in a1"<<endl;
	cin>>g;
	cout<<endl<<"marks in a2"<<endl;
	cin>>h;
	cout<<endl<<"marks in q1"<<endl;
	cin>>i;
	cout<<endl<<"marks in q2"<<endl;
	cin>>j;
}
void marks::tm(void)
{
	cout<<"enter the total marks in each of the following as asked\n\n\n";
cout<<endl<<"total marks of mids=";
cin>>k;
cout<<endl<<"total marks of finals=";
cin>>l;
cout<<endl<<"total marks of project"<<endl;
	cin>>a2;
cout<<endl<<"total marks of a1=";
cin>>m;
cout<<endl<<"total marks of a2=";
cin>>n;
cout<<endl<<"total marks of q1=";
cin>>o;
cout<<endl<<"total marks of q2=";
cin>>p;


}
void marks::points(void)

{
	q=(e/k)*a ;
	r=(f/l)*b;
	v=g+h;
	w=i+j;
	s=(v*c)/(m+n);
	t=(w*d)/(o+p);
	a5=(a1/a2);
	a4=a5*a3;
		u=q+r+s+t+a4;
		cout<<"POINTS\n\n\n";
	cout<<"points for mids="<<q<<endl;
	cout<<"points for finals="<<r<<endl;
		cout<<"points for project="<<a4<<endl;
	cout<<"points for assignments="<<s<<endl;
	cout<<"points for quizes="<<t<<endl;
	cout<<"total points="<<u<<endl;
}

void marks::grade(void)
{
	cout<<"GRADE ACHEIVED\n\n\n";
	
	if (u>=90)
	{
		cout<<"A GRADE";
	}
	else if (u>=86 && u<=89)
	{
		cout<<"A- GRADE";
	}
	else if (u>=81 && u<=85)
	{
			cout<<"B+ GRADE";
	}
		else if (u>=77 && u<=80)
		{
				cout<<"B GRADE";
		}
			else if (u>=72 && u<=76)
			{
					cout<<"B- GRADE";
			}
			else if (u>=68 && u<=71)
			{
					cout<<"C+ GRADE";
			}
			
				else if (u>=63 && u<=67)
				
			{
					cout<<"C GRADE";
			}
				else if (u>=58 && u<=62)
				{
						cout<<"C- GRADE";
				}
					else if (u>=54 && u<=57)
					{
							cout<<"D+ GRADE";
					}
						else if (u>=50 && u<=53)
							{
									cout<<"D GRADE";
							}
								else if (u<=50)
								{
										cout<<"F GRADE"<<"you should be ashamed";
								}
								else 
								{
									cout<<"u have made some mistake go back";
								}
}

int main()
{
	marks x1;
	
	x1.weight();
	x1.gm();
	x1.tm();
	x1.points();
	x1.grade();
	

	return 0;
}

