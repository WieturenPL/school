/* wyszukiwanie wyr�nionego elementu

wczytaj dane z pliku liczby5000.txt, znajd� min i max matod� jednoczesn�
1. podziel zbi�r na dwu elementowe grupy i ustaw w tych grupach lczby w kolejno�ci min max
wyszukuj min spo�r�d pierwszych liczb w parze, i max w drugich*/

#include <iostream>
#include <fstream>

using namespace std;


int main(){
	
ifstream plik;
plik.open("liczby5000.txt");
int t[2500][2];
int min=99999999, max=-1;
for (int i=0;i<2500;i++){
	for (int j=0;j<2;j++){
		plik>>t[i][j];
	}
}
for (int i=0;i<2500;i++){
	int tmp;
	if (t[i][0]>t[i][1]){
		tmp=t[i][1];
		t[i][1]=t[i][0];
		t[i][0]=tmp;
	}
}
for (int i=0;i<2500;i++){
	if (min>t[i][0]){
		min=t[i][0];
}}
for (int i=0;i<2500;i++){
	if (max<t[i][1]){
		max=t[i][1];
}
}
cout<<"Min="<<min<<endl<<"Max="<<max;
}
