//PROG 1 Deleting a element 
// #include<iostream>
//using namespace std;
//int main(){
//
//    int num[]={10,20,30,40,50};
//    int size=5;
//    int pos=4;
//    for(int i=pos;i<size-1;i++){
//
//        num[i]=num[i+1];
//    
//    }
//    size--;
//
//    
//    for(int i=0;i<size;i++)
//    
//        cout<<num[i]<<" ";
//    
// 
//}

//prog 2 Search element in array 
//#include<iostream>
//using namespace std;
//int main(){
//    int arr[]={10,20,50,60,30};
//    int size=5; 
//    int n;
//
//    cout<<"entr a array element:";
//    cin>>n;
//    for(int i=0;i<size;i++)
//    if(arr[i]==n)
//    cout<<"index:"<<i;
//
//    return 0;
//}
 //prog 3 Reverse array;
/*#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    int size=8;
    int i=0;
    int j=size-1;
    int c;
    while(i<j){
        c=arr[j];
        arr[j]=arr[i];
        arr[i]=c;
        i++;
        j--;
    } 
    for(int k=0;k<size;k++)
    cout<<arr[k]<<" ";
     


    int rev[size];
    for(int i=0;i<size;i++)
    rev[i]=arr[size-1-i];
}*/
//prog 4
//#include<iostream>
//using namespace std;
//int main()
//{
//    int arr[]={10,2,4,7,9};
//    int n=5;
//    int min=arr[0];
//    int max=arr[0];
//    for(int i=0;i<n;i++){
//       if (arr[i]<min)
//           min=arr[i];
//       if (arr[i]>max)
//           max=arr[i];
//    }
//    cout<<"minmum="<<min<<endl;
//    cout<<"maximum="<<max<<endl;
//}


//prog 5

//#include <iostream>
//using namespace std;
//
//int main() {
//    int A[2][2], B[2][2], C[2][2];
//
//    cout << "Enter elements of A:";
//    for(int i = 0; i < 2; i++) {
//        for(int j = 0; j < 2; j++) {
//            cin >> A[i][j];
//        }
//    }
//
//    cout << "Enter elements of B:";
//    for(int i = 0; i < 2; i++) {
//        for(int j = 0; j < 2; j++) {
//            cin >> B[i][j];
//        }
//    }
//
//    for(int i = 0; i < 2; i++) {
//        for(int j = 0; j < 2; j++) {
//            C[i][j] = A[i][j] + B[i][j];
//        }
//    }
//
//    cout << "A + B =";
//    for(int i = 0; i < 2; i++) {
//        for(int j = 0; j < 2; j++) {
//            cout << C[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//    return 0;
//}

//prog 6
//#include <iostream>
//using namespace std;
//
//int main() {
//    int A[2][2], B[2][2], C[2][2] = {0};
//
//    cout << "Enter Matrix A:\n";
//    for(int i = 0; i < 2; i++) {
//        for(int j = 0; j < 2; j++) {
//            cin >> A[i][j];
//        }
//    }
//
//    cout << "Enter Matrix B:\n";
//    for(int i = 0; i < 2; i++) {
//        for(int j = 0; j < 2; j++) {
//            cin >> B[i][j];
//        }
//    }
//
//    for(int i = 0; i < 2; i++) {
//        for(int j = 0; j < 2; j++) {
//            for(int k = 0; k < 2; k++) {
//                C[i][j] += A[i][k] * B[k][j];
//            }
//        }
//    }
//
//    cout << "A x B =\n";
//    for(int i = 0; i < 2; i++) {
//        for(int j = 0; j < 2; j++) {
//            cout << C[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//    return 0;
//}
// prog 7

//Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
/*#include<iostream>
using namespace std;
int main()
{
    int nums[]={9,2,2,3};
    int n=4;

    for(int i=0;i<n;i++){
        if (nums[i]!=2)
        cout<<nums[i]<<" ";
    }
    n--;
    //for(int k=0;k<n;k++){
    //    cout<<k;
    //}
    //    

        
}*/
 //prog 8
/*#include<iostream>
using namespace std;
class A {
public:
   int arr[100];
   int n;
   
   void array( ){
       cout<<"entre no of element";
       cin>>n;
       cout<<"entre  of element";
       for(int i=0;i<n;i++){
           cin>>arr[i];
       }
   }
   void remove(int x ){
       int j=0;
       for(int i=0;i<n;i++){
           if(arr[i]!=x){
               arr[j]=arr[i]; 
               j++;
           }
       }
       n=j;   
   };
   
   void display()
   {
       cout<<"removed array ";
       for(int i=0;i<n;i++){
           cout<<arr[i];
       }
   }
};
int main(){
    A obj;
    int x=2;
   


    //cout<<"enrt element";
    //cin>>x;
    obj.array();
    obj.remove(x);
    obj.display();
    return 0;
}*/

//input matrix using oops;
#include<iostream>
using namespace std;
class A{
    int arr[10][10];
    int row,col;
public:
    void input(){
        cout<<"enter a metrix";
        cin>>row>>col;
        for(int i=0;i<row;i++){
            for (int j=0;j<col;j++){
                cin>>arr[i][j];
            }
        }
    }
}