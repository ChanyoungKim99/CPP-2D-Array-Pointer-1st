#include <iostream>

int main()
{
	int array[2][3]{1, 2, 3, 4, 5, 6};

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << &array[i][j] << " ";
		}
		std::cout << std::endl;
	}

	// �׸����� 2�� �迭�� 2��ó�� ǥ��������,
	// ���� ������� ������,
	// �޸� �����δ� �Ϸķ� �迭�� �پ��ִ�.


	array; // 0�� ������ �ּ�

	// �׷���, int *p = array; ���� ���´� �ȵȴ�.

	int* p = array; // 0�� ������ �ּ� =  &array[0]
					// array[0]�� {1, 2, 3}�� ���Ҹ� ���� �迭
					// �׷��� Ÿ���� int[]

	int(*p)[3] = array; //int�� 3�� ���� �迭�� ������ p

	int* p[3] = array; // int ������ p �� 3�� �ִٴ� ��
}