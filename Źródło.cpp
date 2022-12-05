#include<iostream>
#include<chrono>
#include<iomanip>
#include<random>

using namespace std;
const int N = 10;

int main()
{
	std::default_random_engine silnik(std::chrono::system_clock::now().time_since_epoch().count());
	std::uniform_int_distribution<int>rozklad(50, 100);
	int tab[N];
	for (int i=0; i < N; i++)
	{
		tab[i] = rozklad(silnik);
		cout << tab[i]<<" ";

	}
	cout << endl;

	cout << "Menu:" << endl << "1-nowa tablica" << endl << "2-wypisz" << endl << "3-min" << endl << "4-max" << endl << "5-suma" << endl;
	int wybor;
	do{
	cin >> wybor;
	while (!cin)
	{
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "blad! Wybor?";
		cin >> wybor;
	}
	switch (wybor)
	{
	case 1:
		for (int i = 0; i < N; i++)
		{
			tab[i] = rozklad(silnik);
			cout << tab[i] << " ";

		}
		break;
	case 2:
		break;
	case 3:
	{	int min = 1000;//tab[0];
	for (int i = 0; i < N; i++)
	{
		if (tab[i] < min)
			min = tab[i];
	}
	cout << "min=" << min;
	}	break;
	case 4:
	{	int max = tab[0];//-10;
	for (int i = 0; i < N; i++)
	{
		if (tab[i] > max)
			max = tab[i];
	}
	cout << "max=" << max;
	}	break;
	case 5:
	{	int suma = 0;
	for (int i = 0; i < N; i++)
	{
		suma += tab[i];//suma=suma+tab[i];
	}
	cout << "suma=" << suma;
	}	break;
	}
	}while (wybor < 6);

		cout << "tab2";
		int tab2[N][N];
	for (int i = 0; i < N; i++)
	
		for(int j=0;j<N;j++)
		{
		tab2[i][j] = rozklad(silnik);
		cout << tab2[i][j] << "  ";

	    }
	cout << endl;
	




	return 0;
}