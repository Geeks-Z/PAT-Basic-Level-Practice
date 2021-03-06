/*
 * @Descripttion: 完美数列--参考https://www.liuchuo.net/archives/500
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-04-28 20:31:42
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-07 22:08:15
 */
#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
const int maxn = 100010;

int main()
{
  freopen("input.txt", "r", stdin);
  int n, arr[maxn];
  long long p;
  scanf("%d%lld", &n, &p);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  sort(arr, arr + n);
  //最大值 最大序列长度
  int maxValue = 0, temp = 0;
  for (int left = 0; left < n; left++)
  {
    for (int right = left + temp; right < n; right++)
    {
      if (arr[right] <= arr[left] * p)
      {
        temp = right - left + 1;
        if (temp > maxValue)
        {
          maxValue = temp;
        }
      }
      else
      {
        break;
      }
    }
  }
  cout << maxValue;
  return 0;
}