//
//
//
//

#include<stdio.h>
#include<stdbool.h>
bool Find(int *arr,int rows,int cols,int number)
{
	if(arr == NULL)
	{
		return false;
	}

	int row = 0;
	int col = cols - 1;
	while(row < rows && col < cols)
	{
		if(arr[row * cols + col] == number)
		{
			return true;
		}
		else
		{
			if(number < arr[row * cols + col])
			{
				col--;
			}
			else
			{
				row++;
			}
		}
	}
	return false;
}

//========test code========

void test1()
{
	int arr[][4]={{1,2,8,9},{2,4,9,12},{4,7,10,13},{6,8,11,15}};
	if(Find((int*)arr,4,4,7))
	{
		printf("find number\n");
	}
	else
	{
		printf("No find number\n");
	}
}

void test2()
{
	
	int arr[][4]={{1,2,8,9},{2,4,9,12},{4,7,10,13},{6,8,11,15}};
	if(Find((int*)arr,4,4,5))
	{
		printf("find number\n");
	}
	else
	{
		printf("No find number\n");
	}
}

void test3()
{

	int arr[][4]={{1,2,8,9},{2,4,9,12},{4,7,10,13},{6,8,11,15}};
	if(Find((int*)arr,4,4,1))
	{
		printf("find number\n");
	}
	else
	{
		printf("no find number\n");
	}
}

void test4()
{

	int arr[][4]={{1,2,8,9},{2,4,9,12},{4,7,10,13},{6,8,11,15}};
	if(Find((int*)arr,4,4,15))
	{
		printf("find number\n");
	}
	else
	{
		printf("No find number\n");
	}
}

void test5()
{

	int arr[][4]={{1,2,8,9},{2,4,9,12},{4,7,10,13},{6,8,11,15}};
	if(Find((int*)arr,4,4,0))
	{
		printf("find number\n");
	}
	else
	{
		printf("No find number\n");
	}
}

void test6()
{

	int arr[][4]={{1,2,8,9},{2,4,9,12},{4,7,10,13},{6,8,11,15}};
	if(Find((int*)arr,4,4,16))
	{
		printf("find\n");
	}
	else
	{
		printf("No find\n");
	}
}

void test7()
{
	int *arr = NULL;

	if(Find(arr,4,4,16))
	{
		printf("find\n");
	}
	else
	{
		printf("No find\n");
	}
}

int main()
{
	test1();
	test2();
	test3();
	test4();
	test5();
	test6();
	test7();
	return 0;
}

