#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	int inum[45];
	for (int i = 0; i < 45; i++)
	{
		inum[i] = i + 1;
	}

	srand((unsigned int)time(0)); // time seed

	int itemp, ix, iy;
	for (int i = 0; i < 45; i++)
	{
		ix = rand() % 45;
		iy = rand() % 45;

		// swap
		itemp = inum[ix];
		inum[ix] = inum[iy];
		inum[iy] = itemp;
	}

	cout << "----------�ζ� ��ȣ ������---------" << endl;
	cout << "\n";

		for (int i = 0; i < 6; i++)
		{
			cout << "          "<<(i + 1) << " ��° ��ȣ : " << inum[i] << endl;
		}

	cout << "\n";
	cout << "----------��÷�� ����մϴ�---------" << endl;

	return 0;
	
	// ���� ������ ������ �����....................................
}