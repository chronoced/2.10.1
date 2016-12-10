#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	srand(time(NULL));
	int m = rand()%5+3;
	int n = rand()%5+3;
	int *st1= new int [n];
	int *st2= new int [n];
	int **a = new int *[n];
	int **b = new int *[n];

	for (int i = 0; i < n; i++) {  
    
		a[i] = new int [m];     
    
	}
	
	for (int i = 0; i < n; i++) {  
    
		b[i] = new int [m];     
    
	}

	for(int j = 0; j < n; j++){
		for(int i = 0; i < m; i++){
	
			a[j][i] = rand()%5+3;
			cout<<a[j][i]<<" ";	
		}
		cout<<endl;
	}

	
	for(int i = 0,j = m-1; i < m; i++, j--){
		
		swap(st1[i],a[0][j]);
		swap(st2[i],a[n-1][j]);
		

	
	}

	for(int i = 0 ; i < m; i++){
		
		a[0][i]=st2[i];
		a[n-1][i]=st1[i];

	}

	cout<<endl<<endl;

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
		
			cout << a[i][j] << " ";
		
		}
		cout<<endl;
	}
	int mi=1000,x=0,y=0;
	for(int i = 0; i < n; i++){ 
		 for(int j = 0; j < m; j++){ 
			if(mi > a[i][j]){ 
				mi = a[i][j]; 
				x = i; 
				y = j; 
			}  
		}		 
	}
	cout<<endl<<mi<<" "<<x+1<<" "<<y+1<<endl;
	int z=0, f=0;

	for(int i = 0; i < n; i++){ 
		 if( i != x ){
			 for(int j = 0; j < m; j++){ 
				 if( j != y ){
					b[z][f] = a[i][j];
					cout<<b[z][f]<<" ";
					f++;
				 }
			 }  
		}		 
		 z++;
		cout<<endl;
	}

/*   
   char t,q,i1=0,j1=0;
   int h[1000][1000],i=0,j=0,c[1000][1000];
   
   do{
	   do{
		   cin>>h[i1][j1];
			cin>>q;
			j1++;
	   }while(q!=',');
	   cin>>t;
	   i1++;
   }while(t!='.');
   	
   for(int i = 0; i < n; i++){
		for(int j = 0; i < m; j++){
		cout<<c[i][j]<<" ";
		}	
		cout<<endl;
	}

for(i = 0; i < n; i++){
        for(j = 0; j < m; j++)
        {
            c[i][j] = 0;
            for(int k = 0; k < m; k++)
                c[i][j] += a[i][k] * h[k][j];
		}
   }
	for(int i = 0; i < n; i++){
		for(int j = 0; i < m; j++){
		cout<<c[i][j]<<" ";
		}	
		cout<<endl;
	}
   */
   return 0;
}