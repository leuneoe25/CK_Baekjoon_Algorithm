#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct Point
{
	int x, y;
	Point(int _x, int _y) { x = _x; y = _y; }
	Point() {}
};
int mapSizeX, mapSizeY;
int distance(int PosX, int PosY)
{
	return (mapSizeX - PosX) + (mapSizeY - PosY);
}
bool compare(Point p1,Point p2)
{
	return distance(p1.x,p1.y) > distance(p2.x,p2.y);
}
vector<Point> bubble_sort(vector<Point> target) {
	int n = target.size();
	Point temp;
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (distance(target[j].x, target[j].y) > distance(target[j + 1].x,target[j + 1].y)) {

				temp = target[j];
				target[j] = target[j + 1];
				target[j + 1] = temp;
			}
		}
	}
	return target;
}
bool MazeSearch(int** mapArr, int mapSizeX, int mapSizeY, int PosX, int PosY, int Count)
{
	if (PosX < 0 || PosX > (mapSizeX - 1)
		|| PosY < 0 || PosY > (mapSizeY - 1))
		return false;

	if (mapArr[PosX][PosY] == 0 || mapArr[PosX][PosY] == 2)
		return false;

	cout << "[ " << PosX << " , " << PosY << " ]" << endl;
	mapArr[PosX][PosY] = 2;

	if ((mapSizeX - 1) == PosX && (mapSizeY - 1) == PosY)
	{
		cout << Count;
		return true;
	}
	vector<Point> dir = { Point(PosX, PosY + 1), Point(PosX + 1, PosY),Point(PosX - 1, PosY)  ,Point(PosX, PosY - 1) };
	
	dir = bubble_sort(dir);

	int i = 0;
	while (!MazeSearch(mapArr, mapSizeX, mapSizeY, dir[i].x, dir[i].y, Count + 1))
	{
		i++;
	}
	
	/*MazeSearch(mapArr, mapSizeX, mapSizeY, PosX + 1, PosY, Count + 1);
	MazeSearch(mapArr, mapSizeX, mapSizeY, PosX - 1, PosY, Count + 1);
	MazeSearch(mapArr, mapSizeX, mapSizeY, PosX, PosY + 1, Count + 1);
	MazeSearch(mapArr, mapSizeX, mapSizeY, PosX, PosY - 1, Count + 1);*/
}

int main()
{
	int n, m;
	cin >> n >> m;
	int** map = new int*[n];
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		map[i] = new int[m];
		for (int j = 0; j < m; j++)
		{
			map[i][j] = s[j] - '0';
		}
	}
	mapSizeX = n;
	mapSizeY = m;
	MazeSearch(map, n, m, 0, 0, 1);
}