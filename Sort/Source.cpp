#include<iostream>
#include <cstdlib>
#include<ctime>
#include <algorithm> //����������, ����������� � ���� 
//�������� ��������� �������, ��������������� ��������� 
//������� ��������� . ��������, ������� sort

int main() {
	setlocale(LC_ALL, "rus");
	int n; 
	/*int n= 7, m = 15;
	* int tmp;
	* tmp = m
	* 
	std :: cout << n << " " << std :: endl;*/
	
	const int size = 10;
	int arr[size];
	std::cout << "����������� ������\n";
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % (10 + 1 - 1) + 1; // [1 ... 10]
		std::cout << arr[i] << " ";
		}
	std::cout << std::endl;// ������� ������ + �������� ������ ������ 

	//���������� ����������� �������
	//int tmp;
	//for (int i = size - 1; i > 0; i--)
	//for (int j = 0; j < i ; j++)
		//if (arr[j] > arr[j + 1]) {// ���� �� �������� if (arr[j] < arr[j + 1]) ������ ���� (j < j + 1)
			//tmp = arr[j];
			//arr[j] = arr[j + 1];
			//arr[j + 1] = tmp;
			//std::swap(arr[j], arr[j + 1]);}
		//������� ����������
	std::sort(arr, arr + size);
		
	// �� �������

	// ����� �������
	//std::cout << "��������������� ������: \n";
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
		
	}















	
	return 0;
}