//Версия от codik754
//Это про вектор

#include <iostream>
#include <vector>

using namespace std;

//Это комментарий


int main()
{
	vector<int> v;
   v.push_back(5);
   v.push_back(8);
   v.push_back(3);
   v.push_back(4);
   v.push_back(9);

   for(size_t i = 0; i < v.size(); ++i){
      cout << v[i] << endl;
   }
   
   cout << endl << "This is vector with 99: " << endl;
   v.push_back(99); 
   for(auto &it : v){
      cout << it << endl;
   }

	return 0;
}
