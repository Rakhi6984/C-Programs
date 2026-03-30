#include<iostream>
using namespace std;
class student
{
	protected:
		int roll_no;
		public:
			void getno(int r)
			{
				roll_no=r;
			}
			void putno()
			{
				cout<<"roll no:"<<roll_no<<endl;
			}
};
class test: virtual public student
{
	protected:
		int part1,part2;
		public:
			void getmarks(int p1,int p2)
			{
				part1=p1;
				part2=p2;
		}
			void putmarks()
			{
				cout<<"marks:"<<part1<<" "<<part2<<endl;
			}
};
class sports: virtual public student
{
	protected:
		int score;
		public:
			void getscore(int s)
			{
				score=s;
			}
			void putscore()
			{
				cout<<"score:"<<score<<endl;
			}
};
class result:public test,public sports
{
	private:
		int total;
		public:
			void display()
			{
				total=part1+part2+score;
				putno();
				putmarks();
				putscore();
				cout<<"total:"<<total<<endl;
			}
};
int main()
{
	result r;
	r.getno(101);
	r.getmarks(70,80);
	r.getscore(470);
	r.display();
	return 0;
}