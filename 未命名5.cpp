#include <bits/stdc++.h>
using namespace std;
const int MAX = 26;
string gen_random(int n){
   char alphabet[MAX] = {
      'a', 'b', 'c', 'd', 'e', 'f', 'g',
      'h', 'i', 'j', 'k', 'l', 'm', 'n',
      'o', 'p', 'q', 'r', 's', 't', 'u',
      'v', 'w', 'x', 'y', 'z'
   };
   string res = "";
   for (int i = 0; i < n; i++)
      res = res + alphabet[rand() % MAX];
   return res;
}
int main()
		{
			int q;
			for(q=0;q<300;q++)
			{
			printf("xbox clean 4 letter gamer tag finder");
			printf("      by kalimao");
			printf("      stop trying so silly LOLUÎï");
			printf("\n");
			}
			int b;
			for(b=0;b<10000;b++)
			{
				printf("¡á");
			}
			int i;
			for(i=0;0<10;i++)
			{
	 	 	int n = 4;
	  	  	cout << gen_random(n) << "    " ;	  	 	
			}
			return 0;
    	}



