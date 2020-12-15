//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，所有偶数位于数组的后半部分。
//以指针的形式访问数组
#include<stdio.h>
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ",arr[i]);
	}
}
void move(int *p, int sz)
{
	int left=0;
	int right=sz-1;
	while (left < right)
	{//找偶数
		while (*(p+left) % 2 == 1)
		{
			left++;
		}
		//找奇数
		while (*(p+right)% 2 == 0)
		{
			right--;
		}
		int tem = *(p + left);//以指针的形式访问数组
		*(p + left) = *(p + right);
		*(p + right) = tem;
	}
}
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr,sz);
	print(arr,sz);
	return 0;
}