Последняя цифра

Дано натуральное число, выведите его последнюю цифру.

Формат входных данных

На вход дается натуральное число N, не превосходящее 10000.

Формат выходных данных

Выведите одно целое число - ответ на задачу.

Sample Input:

753

Sample Output:

3

#include <iostream>
using namespace std;
int main() {
  // put your code here
  int N;
  cin>>N;
  cout<< N % 10;
  return 0;
}
