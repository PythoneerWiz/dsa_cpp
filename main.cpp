#include<iostream>
#include<math.h>
using namespace std;
// int main(){
// //      int a,b;
//   cin>>a>>b;
//   if(a>b){
//     cout<<"A is positive";

// }
// else if(a<b){
//     cout<<"A is negative";
// }
// else{
//     cout<<"A is invalid";
// }
// char ch;
// cin>>ch;
// if(ch>='A'&&ch<='Z'){
//     cout<<"ch is uppercase";
// }
// else if(ch>='a'&&ch<='z'){
//     cout<<"ch is lowecase";

// }
// else if(ch>='0'&&ch<='9'){
//     cout<<"ch is digit";
// }
// else {
//     cout<<"invalid";
// }
// int n;
// cin>>n;
// int i=2;
// int sum=0;
// while(i<=n){
//    sum=sum+i;
//     i=i+2;
// }
// cout<<sum; 

// int n;
// cin>>n;
// int i=1;
// while(i<=n){
//     int j=1;
//     while(j<=n){
//         cout<<i;
//         j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
// int n;
// cin>>n;
// int i=1;
// while(i<=n){
//     int j=1;
//     while(j<=n){
//         cout<<n-j+1;
//         j=j+1;


//     }
//     cout<<endl;
//     i=i+1;
// }
 
// int n;
// cin>>n;
// int count=1;
// int i=1;
// while(i<=n){
//     int j=1;
//     while(j<=n){
//         cout<<count;
//         count=count+1;
//         j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
// }
 
//  int n;
//  cin>>n;
//  int row=1;
//  while(row<=n){
//     int col=1;
//     while(col<=row){
//         cout<<'*';
//         col=col+1;
//     }
//     cout<<endl;
//     row=row+1;

// int n;
// cin>>n;
// int row=1;
// while(row<=n){
//     int col=1;
//     while(col<=row){
//         cout<<row;
//         col=col+1;
//     }
//     cout<<endl;
//     row=row+1;


// }

// int n;
// cin>>n;
// int count=1;
// int row=1;
// while(row<=n){
//     int col=1;
// while(col<=row){
//     cout<<count;
//     count=count+1;
//     col=col+1;
// }
// cout<<endl;
// row=row+1;
//  int n;
// cin>>n;
// int row=1;
// // int value=row;
// while(row<=n){
//     int col=1;
//     int value=row;
// while(col<=row){
//     cout<<value;
//     value=value+1;
//     col=col+1;
// }
// cout<<endl;
// row=row+1;
// }
// int n;
// cin>>n;
// int row=1;
// while(row<=n){
//     int col=1;
//     int value=row;
//     while(col<=row){
//         cout<<value;
//         value=row-col+1;
//         col=col+1;
//     }
//     cout<<endl;  
//     row=row+1;
// }

// int n;
// cin>>n;
// int row=1;
// while(row<=n){
//   int col=1;
//   while(col<=row){
//     char ch='A'+row-1;
//     cout<<ch;
//     col=col+1;


//   }
//   cout<<endl;
//   row=row+1;

// int n;
// cin>>n;
// int row=1;
// while(row<=n){
//   int col=1;
//   char value='A';
//   while(col<=row){
//     cout<<value;
//     value=value+1;
//   }
//   cout<<endl;
//   row=row+1;
// }
// int n;
// cin>>n;
// int row=1;
// while(row<=n){
//   int col=1;
//   while(col<=row){
//     char ch='A'+row+col-2;
//     cout<<ch;
//     col=col+1;
//   }
//   cout<<endl;
//   row=row+1;
// int n;
// cout<<"enter the value of n";
// cin>>n;
// for(int i=2;i<n;i++) {
//   if(n%i==0){
//     cout<<"not prime";
//     break;

  // }
  // else{
  //   cout<<"prime number";   
  // }

// int n;
// cin>>n;
// int ans= 0;
// int i= 0;
// while(n !=0){
//   int bit = n & 1;
//   ans=(bit * pow(10,i)) + ans;
//   n=n >>  1;
//   i++;

// }
// cout<<ans;

// char ch='1';
// int num=2;
// cout<<endl;
// switch(num){
//   case 1: cout<<"first";
//             break;
//   case 2: cout<<"second"<<endl;
//             break;
//   default:cout<<"default case";

// }
// cout<<endl;
// return 0;

// int a,b;
// cout<<"enter the value of a"<<endl;
// cin>>a;
// cout<<"enter the value of b"<<endl;
// cin>>b;

// char op;
// cout<<"enter the operation"<<endl;
// cin>>op;

// switch(op){
//   case '+': cout<<(a+b)<<endl;
//             break;

//   case '-': cout<<(a-b)<<endl;
//             break;

//   case '*': cout<<(a*b)<<endl;
//             break;

//   case '/': cout<<(a/b)<<endl;
//             break;


//   default:cout<<"invalid case"<<endl;


// }
// return 0;
// int amount;
//     cout<<"Enter the Amount : "<<endl;
//     cin>>amount;

//     int num = 1;
//     int note = 0;
//     switch (num){
//         case 1: {
//             note = amount/100;
//             amount = amount - (100 * note);
//             cout<<note<<" Rs.100 note requied."<<endl;
//         }
//         case 2:{
//             note = amount/50;
//             amount = amount - (50 * note);
//             cout<<note<<" Rs.50 note requied."<<endl;
//         }
//         case 3:{
//             note = amount/20;
//             amount = amount - (20 * note);
//             cout<<note<<" Rs.20 note requied."<<endl;
//         }
//         case 4:{
//             note = amount/1;
//             amount = amount - (1 * note);
//             cout<<note<<" Rs.1 note requied."<<endl;
//         }
//     }


// }

// int sum(int a,int b){
//   int c=pow(a,b);
//   return c;

// }
// int main(){
//   int num1;
//   cout<<"enter the value of num1"<<endl;
//   cin>>num1;
//   int num2;
//   cout<<"enter the value of num2"<<endl;
//   cin>>num2;
//   cout<<pow(num1,num2)<<endl;
//   return 0;


// bool isEven(int a){
//   if(a&1){
//     return 0;
//   }
//   else{
//     return 1;
//   }


// }
 
// int main() {
//   cout<<"enter the value of num"<<endl;
//   int num;
//   cin>>num;
//   if (isEven(num)){
//     cout<<"even"<<endl;
    
//   }
//   else{
//     cout<<"odd"<<endl;
//   }
   

// }

// int factorial(int n){
//   int fact=1;
//   for(int i=1;i<=n;i++){
//     fact=fact*i;

//       }
//       return fact;

// }

// int main(){
//   cout<<"enter the value of num"<<endl;
//   int num;
//   cin>>num;
//   int ans;
//   cout<<factorial(num)<<endl;

// }
// int factorial(int n){
//   int fact=1;
//   for(int i=1;i<=n;i++){
//     fact=fact*i;

//       }
//       return fact;

// }

// int nCr(int n,int r){
//   int num=factorial(n);
//   int den=factorial(r) * factorial(n-r);
//   int ans=num/den;
//   return ans;

// }

// int main(){
//   int n;
//   cin>>n;
//   int r;
//   cin>>r;
//   cout<<nCr(n,r)<<endl;

// }








 



  

 
 
  

