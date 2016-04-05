#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<fstream>

using namespace std;

int main()
{
	ifstream infile("file.in",ios::in);
	ofstream outfile("stdout",ios::out);

	if(!infile||!outfile){
		cerr<<"Failed opening"<<endl;
		exit(1);
	}
	int n = 9;
	int x[n];
	for(int i = 0;i < n;i++){
		infile >> x[i];
}
	sort(x,x+n);
	for(int i = 0;i < n;i++){
			}
	reverse(x,x+n);
	for(int i = 0;i < n;i++){
	}
	for(int i = 0;i < 5;i++){
	}
	int total = x[0]+x[1]+x[2]+x[3]+x[4];
	
	outfile << total << endl;
	return 0;
	system("PAUSE");
}
