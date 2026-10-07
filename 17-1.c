int main()
{
	int* maxPtr;
	int* minPtr;
	int arr[5] = { 1, 2, 3, 4, 5 };
	Maxandmin(&arr);
	printf("최댓값: %d, 최솟값: %d", maxPtr, minPtr);
	return 0;
}

int MaxandMin(int* arr)
{
	int min = arr[0];
	int max = arr[0];

	for (int i = 0; i < 5; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	
	for (int i = 0; i < 5; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}

	**minPtr = min;
	**maxPtr = max;
}
