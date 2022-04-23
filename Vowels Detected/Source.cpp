#include <iostream>
#include <string>
#include <fstream>
//#include <ifstream>
//#include <ofstream>

//#include <Windows.h>
using namespace std;

3
{
	std::string text = "";
	std::ifstream f;
	f.open(_path);

	if (f.is_open())
	{
		f >> text;
	}
	else 
	{
		text = "cannot open file";
	}

	return text;
}


int main()
{
	setlocale(LC_ALL, "Russian");

	string path = "G:\myFile.txt";
	cin >> path;

	std::cout << GetFileText(path);

	ofstream fout; 
	fout.open(path) ;

	if (!fout.is_open())
	{ 
		cout << "Ошибка открытия файла!" << endl;
	}
	else
	{
		fout << "Это наши данные!";
	}
	fout.close();

	
	return 0;
}
