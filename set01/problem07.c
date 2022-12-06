#include <stdio.h>
int input_n();
int sum_n_nos(int n);
void output(int n, int sum);
int main (){
  int n; 
  n = input_n();
  int sum;
  sum = sum_n_nos(n);
 output(n , sum );
}
int input_n(){
    int n;
    scanf("%d", &n);
    return n;
  }
int sum_n_nos(int n){
  int sum = 0;
  for (int i = 1 ; i<= n ; i ++){
    sum = sum + i;
  } 
  return sum;

}
void output(int n, int sum){
  printf("sum of %d numbers is %d", n, sum);
}