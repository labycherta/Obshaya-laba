#include <iostream>
#include <string>
using namespace std;
void rush(short x,short y){
	string nachalo,seredina,konec;
	short n=0,s=0,c=0;

	for (int i=0;i<x;i++)nachalo+='B';
	for (int i=0;i<x;i++)seredina+=' ';
	for (int i=0;i<x;i++)konec+='B';
	nachalo[0]='A';if(x!=1)nachalo[x-1]='C';
	seredina[0]='B';seredina[x-1]='B';
	konec[0]='C';if(x!=1)konec[x-1]='A';
	while (y!=0){
		if (n==0){n++;y--;continue;}
		if (c==0){c++;y--;continue;}
		s++;y--;
	
	}
	while (n!=0){
	cout<<nachalo<<'\n';n--;
	}
	while (s!=0){
	cout<<seredina<<'\n';s--;
	}
	while (c!=0){
	cout<<konec<<'\n';c--;
	}
}