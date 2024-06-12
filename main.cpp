#include<iostream>
// #include<bits/stdc++.h>
#include<vector>
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
// int main(){
//   int number[5]={5,6,7,8,9};
//   cout<<"value at 4th index"<<endl<<number[4]<<endl;

//   int second[20]={2,3,4,5};
//    int n=20;
//    int i;
//    int index;
//    cout<<"printing the array"<<endl;
//    for(i=0;i<n;i++){

//     cout<<second[i]<<endl;
//    }


//     }
// int INT_MIN;
// int INT_MAX;
// // int i;
// int getMin(int num[],int n){
//   int min = INT_MAX;
//   for(int i=0;i<n;i++){
//     if(num[i]<min){
//       min=num[i];

//     }

//   }
//   return min;


// }

// // int INT_MIN;
// // int i;
// int getMAX(int num[],int n){
//   int max = INT_MAX;
//   for(int i=0;i<n;i++){
//     if(num[i]>max){
//       max=num[i];

//     }

//   }
//   return max;


// }

// int main(){
//    int size;
//    int i;
//    cin>>size; 
//    int num[100];
//    for(i=0;i<size;i++){
//     cin>>num[i];
//     cout<<"max value is "<<getMAX(num,size)<<endl;
//     cout<<"min value is "<<getMin(num,size)<<endl;
   

//    }



// }

// int getMin(int num[],int n){
//    int min  = INT8_MAX;
//    for(int i=0;i<n;i++){
//     if(num[i]<min){
//       min=num[i];

//     }
//    }
//    return min;

// }
// int getMax(int num[],int n){
//    int max = INT8_MIN;
//    for(int i=0;i<n;i++){
//     if(num[i]>max){
//       max=num[i];

//     }
//    }
//    return max;

// }

// int main(){
//   int size;
//   cin>>size;
//   int num[100];
//   for(int i=0;i<size;i++){
//     cin>>num[i];
//     cout<<"max value is"<<getMax(num,size)<<endl;
//     cout<<"min value is"<<getMin(num,size)<<endl;

//   }
  

// }
// int ArraySum(int arr[],int n){
//   int sum=0;
//   for(int i=0;i<n;i++){
//     sum=sum+arr[i];

//   } 
//   return sum;
// }

// int main(){
//   int arr[100];
//   int size;
//   cout<<"enter the size of array"<<endl;
//   cin>>size;

//   for(int i=0;i<=size;i++){
//     cin>>arr[i];
//     cout<<"value of sum is"<<ArraySum(arr,size)<<endl;

//   }

// }
// bool search(int arr[],int n,int key){
//   for(int i=0;i<n;i++){
//     if(arr[i]==key){
//       // cout<<"key is found"<<endl;
//       return 1;

//     }

//   }
//     return 0;

// }
// int main(){
//   int arr[10]={2,3,4,5,6,7,8,9,11,22};
//   cout<<"enter the value of key"<<endl;
//   int key;
//   cin>>key;
//   bool found  = search(arr,10,key);
//   if(found){
//     cout<<"key is present"<<endl;
//   }
// else{
//   cout<<"key is not present"<<endl;
// }

// }
// bool search(int arr[],int size,int key){
//   for(int i=0;i<size;i++){
//     if(arr[i]==key){
//       return 1;
//     }

//   }
//   return 0;

// }
// int main(){
//   int arr[10]={3,4,5,6,7,8,-2,-6,-9,-7};
//   cout<<"enter the element to search"<<endl;
//   int key;
//   cin>>key;
//   bool found = search(arr,10,key);
//   if(found){
//     cout<<"key is present"<<endl;
//   }
//   else{
//     cout<<"key is not present"<<endl;
//   }
//   return 0;

// }


// int main(){
//   int arr[5]={2,3,4,5,6};

//   reverse(arr,5);
//   printArray(arr,5);
  
// }
// void printArray(int arr[],int n){
//   for(int i=0;i<n;i++){
//     cout<<arr[i]<<endl;

//   }

// }
// void SwapAlternate(int arr[],int size){
//   for(int i=0;i<size;i+2){
//     if(i+1<size){
//       swap(arr[i],arr[i+1]);
//     }
//   }
// }
// int main(){
//   int arr[6] = {1,3,2,7,11,8};
//   SwapAlternate(arr,6);
//   printArray(arr,6);
//   cout<<arr;

//   return 0;


// }
// swapping alternate.
// int swapFun(int arr[],int size,int temp){
//   temp=0;
// for(int i=0;i<size;i+2 ){
//   if(i+1<size){
//     temp=arr[i];
//     arr[i]=arr[i+1];
//     arr[i+1]=temp;

//   }
// }

// for(int i=0;i<size;i++){
//   cout<<arr[i]<<endl;
// }

// }
 

// int main(){
//   int temp;
//   int arr[6]={2,3,4,5,66,7};

//   for(int i=0;i<6;i++){
//     cout<<arr[i]<<endl;

//   }
//     swapFun(arr,6,temp);

//   return 0;
// }

// #include<iostream>
// using namespace std;

// void printArray(int arr[], int n) {

//     for(int i = 0; i<n; i++ ) {
//         cout<< arr[i] <<" ";
//     }cout<<endl;

// }

// void swapAlternate(int arr[], int size) {

//     for(int i = 0; i<size; i+=2 ) {
//         if(i+1 < size) {
//             swap(arr[i], arr[i+1]);
//         }
//     }

// }

// int main() {

//     int even[8] = {5,2,9,4,7,6,1,0};
//     int odd[5] = {11, 33, 9, 76, 43};

//     swapAlternate(even, 8);
//     printArray(even, 8);

//     cout << endl;

//     swapAlternate(odd, 5);
//     printArray(odd, 5);



//     return 0;
// int main(){
// int n=10, k=5;
// int number;
// cout<<"Enter the number of candies <<";
// cin>>number;

// if(number>1 && number<=5){
//   cout<<"candies sold"<<endl<<number<<endl;
//   cout<<"candies available"<<endl<<n-number;
// }
// else{
//   cout<<"invalid number";
//   cout<<"candies available<<";

// }
// return 0;

// }
// int main(){

  // int year;
  // cout<<"enter the year";
  // cin>>year;
  
  // if(((year%4==0)  &&(year%100!=0)) || (year%400==0)){

  // cout<<"it is a leap year";
  // }
  // else{
  //   cout<<"it is not a leap year";
  // }
  // return 0;

  // int n,i;
  // cout<<"enter the value of n";
  // cin>>n;
  // int a[n],count=0,cmp;

  // for(i=0;i<n;i++){
  //   cin>>a[i];
  // }
  // cout<<"enter the element to find the frequency";
  // cin>>cmp;
  // for(i=0;i<n;i++){
  //   if(a[i]==cmp)
  //   count++;

  // }
  // cout<<"frequency of element"<<count;
  // return 0;

// int main() {
// int n,i,ans;
// cout<<"enter the value of n";
// cin>>n;
// int a[n];
// for( i=0;i<n;i++){
//   cin>>a[i];
  
// }
// cout<<"enter the value of array to be searched";
// for(i=0;i<n;i++){
//   if(a[i]%2==0){
//     cout<<"even";

//   }
//   else{
//     cout<<"odd";
//   }

// }
// return 0;
// }


  // int n;
  // int arr[40]={1,2,3,4,50};
  // // cout<<"enter the value of n"<<endl;
  // // cin>>n;
  // // cout<<"enter the number"<<endl;
  //  for(int i=0;i<arr[i];i++){
  //  cout<<"array"<<arr[i];

  //  }
  //  cout<<"double"<<endl;
  //  for(int i=0;i<arr[i];i++){
  //   cout<<arr[i]*2<<endl;

  //  }
  int findUnique(vector<int>arr){
    int ans=0;
    for(int i=0;i<arr.size();i++){
      ans=ans^arr[i];
    }
    return ans;
  }
int main()  {
  int n;
  cout<<"enter the size of an array"<<endl;
  cin>>n;
  vector<int>arr(n);
  for(int i=0;i<arr.size();i++){
    cin>>arr[i];

  }

  int uniqueElement = findUnique(arr);
  cout<<"unique element"<<uniqueElement<<endl;
   return 0;

}
  






 



  

 
 
  

