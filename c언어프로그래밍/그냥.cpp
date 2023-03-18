// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
    int n,m;
    cin >> n >> m;
    
    vector<int> a(n);
    vector<int> b(m);
    
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    
    for(int i=0;i<m;i++){
        cin >> b[i];
    }
    int e=0;
    int l=0;
    int k=0;
    int r=0;
    while(e!=1)
    {
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        if(a[l]-b[k]<0){
            e=1;
        } else {
            a[l]=a[l]-b[k];
            if(k==(m-1)){
                e=1;
                r=1;
            }
            k++;
        }
        
        
    }
    
    cout << r;

    return 0;
}