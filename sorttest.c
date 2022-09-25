#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	/*
//	* 冒泡排序
//	* 相邻两个元素比较大小，大的往后挪，从后往前依次排序
//	* 1,3,6,8,4,2,9,7,0,5从小到大排序
//	*/
//	int bub[10] = { 1,3,6,8,4,2,9,7,0,5 };
//	//外层for循环统计整体遍历次数
//	printf("冒泡排序\n");
//	for (int i = 0; i < 9; i++)
//	{
//		//内层for循环是每次遍历时内部元素交换
//		//外层i遍历过后，即数组后端已经排序，内部交换次数就可减少
//		for (int j = 0; j < 9 - i; j++)
//		{
//			if (bub[j] > bub[j + 1])
//			{
//				//创建新变量t，用于元素大小交换
//				int t = bub[j];
//				bub[j] = bub[j + 1];
//				bub[j + 1] = t;
//			}
//		}
//
//		for (int i = 0; i < 10; i++)
//		{
//			printf("%d ", bub[i]);
//		}
//		printf("\n");
//	}
//	printf("\n");

	/*
	* 选择排序
	* 拿第一个元素与后边的元素依次比较，遇到小的就放第一个，以此类推
	* 1,3,6,8,4,2,9,7,0,5从小到大排序
	*/
	/*int select[10] = { 12,3,54,2,6,7,87,9,54,23 };
	printf("选择排序\n");
	for (int i0 = 0; i0 < 9; i0++)
	{
		for (int j0 = i0 + 1; j0 < 10; j0++)
		{
			if (select[i0] > select[j0])
			{
				int t0 = select[i0];
				select[i0] = select[j0];
				select[j0] = t0;
			}
		}

		for (int i0 = 0; i0 < 10; i0++)
		{
			printf("%d ", select[i0]);
		}
		printf("\n");
	}
	printf("\n");*/


	/*插入排序*/
    //每次将后边的元素与前边已排好序的元素相比较，小的话则插入到前边，大的话则放在后边
	//int insert[10] = { 3,4,2,65,7,34,8,90,32,12 };
	//int t1 = 0;
	//printf("插入排序\n");
	//for (int i1 = 0; i1 < 9; i1++)
	//{
	//	t1 = insert[i1];
	//	if (insert[i1] < insert[i1 - 1])//比较数值大小
	//	{
	//		for (int j1 = i1 - 1; j1 >= 0 && insert[j1] > t1; j1--)
	//		{
	//			insert[j1 + 1] = insert[j1];
	//			insert[j1] = t1;//交换位置
	//		}
	//	}
	//	for (int i1 = 0; i1 < 9; i1++)
	//	{
	//		printf("%d ", insert[i1]);
	//	}
	//	printf("\n");
	//}
	//printf("\n");


	/*希尔排序*/
	/*将全部元素按一定间隔分为若干子集，各子集的对应元素进行直接插入排序，
	一轮排序完成后，改变间隔，重新划分子集，重复进行对应排序，直至最后间隔为1，排序完成*/
//	int arr2[10] = { 3,12,23,45,6,78,9,0,54,76 };
//	int i2 = 0, k = 0, d = 0;//初始化
//	printf("希尔排序\n");
//	for (i2 = 0; i2 < 10; i2++)
//	{
//		printf("%d ", arr2[i2]);
//
//	}
//	printf("\n");
//	d = 8 / 2;//以4为间隔
//	while (d >= 1)
//	{
//		int t2 = 0, j2 = 0;//初始化中间变量
//		for (i2 = d; i2 < 10; i2++)//对右边一组进行插入排序
//		{
//			t2 = arr2[i2];
//			j2 = i2 - d;//此时手里第一张牌为a[0],再下一张抽a[5]=3,
//			while (j2 >= 0 && t2 < arr2[j2])//抽的牌比手里的牌小
//			{
//				arr2[j2 + d] = arr2[j2];//从a[j]往后移动4个位置
//				j2 = j2 - d;//继续从j往左看第四个位置，若该位置没牌则继续抽
//
//			}
//			arr2[j2 + d] = t2;//a[j]已经往后移动4个位置，抽到的牌可以放在a[j]所在位置
//
//		}
//		d = d / 2;//缩小间隔，此时d为1，即为常规的插入排序
//		for (k = 0; k < 10; k++)
//		{
//			printf("%d ", arr2[k]);
//
//		}
//		printf("\n");
//	}
//	/*for (k = 0; k < 10; k++)
//	{
//		printf("%d ", arr2[k]);
//	}*/
//
//	return 0;
//	
//}


///*快速排序
//*以第一个数据为基准值，将其余数据分割为两部分，再对两部分数据分别进行分割排序
//*/
//int Partition(int* arr, int low, int high)
//{
//
//	//一次划分
//	int tmp = arr[low];//基准
//	while (low < high)
//	{
//		//（1）从后往前找比基准小的数字
//		while (low<high && arr[high]>tmp)
//		{
//			high--;
//		}
//		if (low < high)
//		{
//			arr[low] = arr[high];
//		}
//		//（2）从前往后找比基准大的数字
//		while (low < high && arr[low] <= tmp)
//		{
//			low++;
//		}
//		if (low < high)
//		{
//			arr[high] = arr[low];
//		}
//	}
//	arr[low] = tmp;
//	return low;
//}
//
//void Quick(int* arr, int low, int high)
//{
//	int par = Partition(arr, low, high);
//	if (low < par - 1)//左边数据超过一个
//	{
//		Quick(arr, low, par - 1);
//	}
//	if (par + 1 < high)//右边数据超过一个
//	{
//		Quick(arr, par + 1, high);
//	}
//}
//void QuickSort(int* arr, int len)
//{
//	Quick(arr, 0, len - 1);//参数一致
//}
//void Show(int* arr, int len)
//{
//	printf("快速排序\n");
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 34, 5, 6,22,56,88,11,2,4,0 };
//	QuickSort(arr, sizeof(arr) / sizeof(arr[0]));
//	Show(arr, sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}


///*归并排序*/
/*将元素分为若干子集，拿第一个子集的第一个元素与第二子集的元素依次进行比较，
按照从小到大的顺序，将元素放入另一数组，经过多趟归并后形成一个新的数组，即排序完成*/
//#define ArrLen 20
//void printList(int arr[], int len) {
//	int i;
//	for (i = 0; i < len; i++) {
//		printf("%d\t", arr[i]);
//	}
//}
//void merge(int arr[], int start, int mid, int end) {
//	int result[ArrLen];
//	int k = 0;
//	int i = start;
//	int j = mid + 1;
//	while (i <= mid && j <= end) {
//		if (arr[i] < arr[j]) {
//			result[k++] = arr[i++];
//		}
//		else {
//			result[k++] = arr[j++];
//		}
//	}
//	if (i == mid + 1) {
//		while (j <= end)
//			result[k++] = arr[j++];
//	}
//	if (j == end + 1) {
//		while (i <= mid)
//			result[k++] = arr[i++];
//	}
//	for (j = 0, i = start; j < k; i++, j++) {
//		arr[i] = result[j];
//	}
//}
//
//void mergeSort(int arr[], int start, int end) {
//	if (start >= end)
//		return;
//	int mid = (start + end) / 2;
//	mergeSort(arr, start, mid);
//	mergeSort(arr, mid + 1, end);
//	merge(arr, start, mid, end);
//}
//
//int main()
//{
//	int arr[] = { 4, 7, 6, 5, 2, 1, 8, 2, 9, 1 };
//	mergeSort(arr, 0, 9);
//	printList(arr, 10);
//	system("pause");
//	return 0;
//}



#define size 10
/*堆排序*/
/*
堆是具有下列性质的完全二叉树
1.每个结点的值都小于或等于其左右孩子结点的值（称为小根堆）
  或每个结点的值都大于或等于其左右孩子结点的值（称为大根堆）
2.小根堆的根结点是所有结点的最小者（大根堆同理）
3.较小（较大）结点靠近根结点，但不绝对
*/
/*排序时，将根结点与左右孩子中的最大结点进行互换位置，依次循环排序*/

void Swap(int* num, int i, int j)
{
    int temp;
    temp = num[i];
    num[i] = num[j];
    num[j] = temp;
}

// 最大堆调整
void Heapify(int* num, int len, int k)
{
    if (k < len)
    {
        int root = k;           // 根结点
        int lchild = 2 * k + 1;   // 左孩子结点
        int rchild = 2 * k + 2;   // 右孩子结点
        // 查找左右孩子结点中的最大结点
        if (lchild < len && num[root] < num[lchild])
        {
            root = lchild;
        }
        if (rchild < len && num[root] < num[rchild])
        {
            root = rchild;
        }

        // 交换最大结点到根结点
        if (root != k)
        {
            Swap(num, root, k);
            // 每次交换都可能影响到对应孩子结点子树的顺序
            // 所以需要对交换后的孩子结点子树进行最大堆调整
            Heapify(num, len, root);
        }
    }
}

// 创建最大堆
void CreateHeap(int* num, int len)
{
    int i;
    // 最后一个结点下标
    int last = len - 1;
    // 最后一个结点的父结点下标      
    int parent = (last - 1) / 2;
    // 从最后一个结点的父结点到根结点，依次进行最大堆调整
    for (i = parent; i >= 0; i--)
    {
        Heapify(num, len, i);
    }
}

void HeapSort(int* num, int len)
{
    // 创建最大堆并进行最大堆调整
    CreateHeap(num, len);
    printf("最大堆调整!\n");
    int i;
    // 依次取出根结点（最大值）
    for (i = len - 1; i >= 0; i--)
    {
        // 将最大堆的根结点（最大值）换到最后一个结点
        Swap(num, i, 0);
        // 交换后二叉树的根结点发生了改变，故还需对根结点做最大堆调整（已交换的末尾结点不参与调整）
        // 而此时根结点小于所有父结点，因而在调整时只需考虑最大孩子的分支即可
        Heapify(num, i, 0);
    }
}

int main()
{
    int i, num[size] = { 8, 4, 3, 1, 6, 9, 5, 7, 2, 0 };
    HeapSort(num, size);

    for (i = 0; i < size; i++)
    {
        printf("%d ", num[i]);
    }
    printf("\n");
    return 0;
}





