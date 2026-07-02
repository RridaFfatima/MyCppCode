# include<iostream>
# include<string>
# include<cmath>
using namespace std;
int main(){
	int n, c, f, r, l, p;
	r = -1;
	n = 3;
	p = 0;
	while(p < 10){
	    l  = sqrt(n);
		f = 0;
		c = 2;
		while(c <= l){
			r = n % c;
			if(r == 0){
				f = 1;
			}
		c++;
		}

		if(f == 0){
			cout<<n<<" ";
		p++;
		}	n++;	
	}
return 0;}