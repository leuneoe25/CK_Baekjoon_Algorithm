//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int binarySearch(vector<int> arr, int value, int low, int high)
//{
//	if (low > high)
//		return 0;
//
//	int mid = (high + low) / 2;
//
//	if (arr[mid] > value)
//		return binarySearch(arr, value, low, mid - 1);
//	else if (arr[mid] < value)
//		return binarySearch(arr, value, mid + 1, high);
//	else
//		return 1;
//}
//
//int main()
//{
//	int N;
//	cin >> N;
//	vector<int> A;
//	for (int i = 0; i < N; i++)
//	{
//		int n;
//		cin >> n;
//		A.push_back(n);
//	}
//
//	sort(A.begin(), A.end());
//
//	int M;
//	cin >> M;
//	int* answer = new int[M];
//	for (int i = 0; i < M; i++)
//	{
//		int temp;
//		cin >> temp;
//
//		answer[i] = (binarySearch(A, temp, 0, A.size() - 1));
//	}
//
//	for (int i = 0; i < M; i++)
//	{
//		cout << answer[i] << endl;
//	}
//}
//
