#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int b , n;
    int cb=0;
    cin>>b>>n;
    vector<int> t;
    vector<int> cs= {b};

    for (int i=0;i<n;i++){
        string operation;
        cin>>operation;
        
        if(operation == "read"){
            cout<<cs[cb]<<endl;

        }else if(operation =="credit" || operation =="debit"){
            int x;
            cin>>x;
            if(operation=="credit") cs[cb]+= x;
            else cs[cb]-=x;
            t.push_back(operation=="credit" ?x : -x);
        }else if(operation =="abort"){
            int x;
            cin>>x;
            if(x<=t.size()) cs[cb]-= t[x-1],t[x-1]=0;

        }else if(operation == "rollback"){
            int x;
            cin>>x;
            cb = x-1;
            cs.resize(cb+1);


        }else if (operation =="commit"){
            cs.push_back(cs[cb]);
            cb++;

        }
    }
    return 0;
}





    


