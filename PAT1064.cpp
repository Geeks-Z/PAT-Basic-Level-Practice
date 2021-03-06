/*
 * @Descripttion: 朋友数
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-05-03 21:04:44
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-03 21:04:44
 */
#include <iostream>
#include <set>
using namespace std;
int getFriendNum(int num)
{
  int sum = 0;
  while (num != 0)
  {
    sum += num % 10;
    num /= 10;
  }
  return sum;
}
int main()
{
  set<int> s;
  int n, num;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &num);
    s.insert(getFriendNum(num));
  }
  printf("%d\n", s.size());
  for (auto it = s.begin(); it != s.end(); it++)
  {
    if (it != s.begin())
      printf(" ");
    printf("%d", *it);
  }
  return 0;
}