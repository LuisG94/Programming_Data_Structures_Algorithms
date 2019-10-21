#include <stdio.h>
#include <stdlib.h>

void counting_Sort_ex_2()
{
	const int freq_arr_size = 10;//allows for numbers from 0-100
	const int ndata = 8;
	int data[ndata] = {1,5,2,0,1,5,2,3};
	const char* data_ext = "abcdefgh";
	int sorted_data[ndata] = {0};
	char sorted_data_ext[ndata] = { 0 };
	int freq[freq_arr_size] = { 0 };

	//step 1
	for (int i = 0; i < ndata; ++i)
	{
		freq[data[i]]++;
	}
	printf("Step 1:\n");
	printf("new frequency array------\n");
	for (int i = 0; i < ndata; ++i)
	{
		printf("%d ", freq[i]);
	}
	printf("\n");

	printf("Step 2:\n");
	for (int i = 1; i < freq_arr_size; ++i)
	{
		printf("freq[%d]:%d freq[i-1]:%d\n",i, freq[i], freq[i - 1]);
		freq[i] += freq[i - 1];
		printf("freq[%d]:%d\n",i, freq[i]);

	}
	printf("new frequency array------\n");
	for (int i = 0; i < ndata; ++i)
	{
		printf("%d ", freq[i]);
	}
	printf("\n");

	printf("Step 3\n");
	for (int i = ndata - 1; i >= 0; --i)
	{
		printf("freq[data[%d]] =>%d\n", i,freq[data[i]]);
		int k = --freq[data[i]];
		printf("k = %d\n", k);
		sorted_data[k] = data[i];
		sorted_data_ext[k] = data_ext[i];
	}

	for (int i = 0; i <ndata; ++i)
	{
		printf("%c %d\n", sorted_data_ext[i], sorted_data[i]);
	}
	printf("\n");
}

int main()
{

	counting_Sort_ex_2();


	system("pause");
	return 0;
}