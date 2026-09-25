class Solution {
  public:
    void printPat(int n) {
        // code here
      
        for(int i=1;i<=n;i++){
            cout<<" ";
                   for(int j=1;j<=n-i;j++){
                       cout<<" ";
                       cout<<" ";
                   }
                   for(int k=1;k<=2*i-1;k++){
                       if(k==1 ||k==2*i-1 )
                       cout<<"*";
                       else
                       cout<<" ";
                       cout<<" ";
                   }
                   cout<<endl;

               }
               //  create lower part of this 

               for(int i=n-1;i>=1;i--){
                   cout<<" ";
                   for(int j=1;j<=n-i;j++){

                       cout << " ";
                       cout << " ";

                   }
                   for(int k=1;k<=2*i-1;k++){
                       if(k==1 || k==2*i-1)
                           cout << "*";
                       else
                           cout << " ";
                           cout << " ";
                   }
                   cout << endl;
               }
    }
};