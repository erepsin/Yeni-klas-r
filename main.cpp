#include <iostream>
using namespace std;
float Fnet();
float sigmoid();
int main() {
	int k, j, m; 
	cout << "katmanlardaki proses elemanlarinin sayilarini giriniz" << endl; 
	cout << "giris katmani : "; cin >> k;  //her katmanda kaçar tane proses elemani olduðunun bilgisinin istenmesi
	cout << "ara katman : "; cin >> j;
	cout << "cikis katmani : "; cin >> m;
	float A1[k][j], A2[j][m], G[k], C1[k][j],C; 
	cout << "girdileri giriniz" << endl;
	for (int a =1; a <=k; a++)
	{
		cout << "G["<<a<<"]:" ; cin >> G[a];
	}
	cout << "agirlikleri giriniz" << endl;
	for (int a = 1; a <= k; a++) //giris ile ara katman arasi agirliklarin kullaniciden istenmesi
	{
		for (int b = 1; b <= j; b++)
		{
			cout << "A["<<a<<b<<"]:" ; cin >> A1[a][b];
		} 
		
    }
    for (int a = 1; a <= j; a++) //ara katman ile cikis katmani arasindaki agirliklarin kullaniciden istenmesi
	{
		for (int b = 1; b <= m; b++)
		{
			cout << "A["<<a<<b<<"]:" ; cin >> A2[a][b];
		}
		
    }
	
	return 0;
}
/*double Fnet(float A1[][], float G[])
{
	float toplam_net=0;
	for(int a=1;a<=k;a++)
	{
		for(int b=1;b<=j;b++)
		{
			net=A1[a][b] * G[b] ;
		}
	}
}*/
