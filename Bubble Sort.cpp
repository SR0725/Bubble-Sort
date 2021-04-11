#include <iostream>
using namespace std;
int main(){
  int amount,tmp;
  cout << "Enter the sequence size" << endl;
  cin >> amount; //輸入整理數值多寡
  int * m_Sequence = new int[amount]; //動態宣告陣列m_Sequence,陣列大小為amount
  cout << "Input value" << endl;
  for(int i = 0;i < amount;i++){ //輸入數值
    cin >> m_Sequence[i];
  }

  for(int i = 0; i < (amount-1); i++){
      if( m_Sequence[i] > m_Sequence[i+1]) //如果前者比後者大，就將兩者數值對調，並重新檢測
      {
          tmp = m_Sequence[i];
          m_Sequence[i] = m_Sequence[i+1];
          m_Sequence[i+1] = tmp;
          i = -1;
      }
  }

  for(int i = 0; i < amount; i++){ //輸出整理後的數值
      cout << m_Sequence[i] << endl;
  }

  delete [] m_Sequence;//刪除陣列m_Sequence
  return 0;
}
