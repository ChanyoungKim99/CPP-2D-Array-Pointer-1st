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

	// 그림으로 2차 배열을 2층처럼 표현했지만,
	// 위의 출력으로 보듯이,
	// 메모리 상으로는 일렬로 배열이 붙어있다.


	array; // 0번 원소의 주소

	// 그러나, int *p = array; 같은 형태는 안된다.

	int* p = array; // 0번 원소의 주소 =  &array[0]
					// array[0]은 {1, 2, 3}의 원소를 가진 배열
					// 그래서 타입은 int[]

	int(*p)[3] = array; //int를 3개 가진 배열의 포인터 p

	int* p[3] = array; // int 포인터 p 가 3개 있다는 뜻
}