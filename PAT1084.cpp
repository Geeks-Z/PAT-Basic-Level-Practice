/*
 * @Descripttion: 
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-05-06 11:05:11
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-06 11:21:47
 */
#include <iostream>
using namespace std;
int main()
{
  freopen("input.txt", "r", stdin);
  string s;
  int n, j;
  cin >> s >> n;
  //用string s接收所需变幻的数字，每次遍历s，从当前位置i开始，
  //看后面有多少个与s[i]相同，设j处开始不相同，
  //那么临时字符串 t += s[i] + to_string(j – i);然后再将t赋值给s，
  //cnt只要没达到n次就继续加油循环下一次，最后输出s的值
  for (int cnt = 1; cnt < n; cnt++)
  {
    string t;
    for (int i = 0; i < s.length(); i = j)
    {
      for (j = i; j < s.length() && s[j] == s[i]; j++)
        ;
      t += s[i] + to_string(j - i);
    }
    s = t;
  }
  cout << s;
  return 0;
}