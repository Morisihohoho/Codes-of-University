#include<iostream>
using namespace std;
class Box 
{
public:
	double length;
	double width;
	double height;
	double volume(double len, double wid, double he);
	double facet(double len, double wid, double he);
};
double Box::volume(double len, double wid, double he)
{
	return len * wid * he;
}
	double Box::facet(double len,double wid,double he)
	{
		return 2 * len * wid + 2 * len * he + 2 * wid * he;
	}
	int main()
	{
		Box box1;
		double volume, facet;
		cin >> box1.length;
		cin >> box1.width;
		cin >> box1.height;
		volume=box1.volume(box1.length, box1.width, box1.height);
		facet = box1.facet(box1.length, box1.width, box1.height);
		printf("����߷ֱ�Ϊ��%lf��%lf��%lf\n", box1.length, box1.width, box1.height);
		printf("���Ϊ:%lf\n", volume);
		printf("�����Ϊ:%lf\n", facet);
		return 0;
	}