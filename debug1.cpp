// week 1 

// // question 1
// #include<iostream>
// using namespace std;
// int main() {
// 	char c;
//     cin>>c;
//     // use of and operator was required not the or operator
//     if('a'<=c && c<= 'z'){  
//         cout<<0;
//     }
// 	else if('A'<=c && c<= 'Z'){
//         cout<<1;
//     }
//     else{
//         cout<<-1;
//     }
// }

// question 2
/*
Pattern
1
23
345
4567
*/
// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     int i=1;
//     // the value of n was missing ,otter loop should be till i<=nsame for inner loop .
//     while(i<=n){
//         int j = i,count = 1;
//         while(count<=i){
//             cout<<j;
//             j = j + 1;
//             count = count + 1;
//         }
//         cout<<"\n";
//         i = i + 1;
//     }
// }

// qestion 3
/*
Pattern
N = 4
   *
  ***
 *****
*******
*/
// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j = i,count = 2*i-1,gaps=(n-i),k=1;
//         while(k<=gaps){
//             cout<<" ";
//             k = k + 1;
//         }
//         int m = 1,ch = count ;
//         while(m<=ch){
//             cout<<"*";
//             m = m + 1;
//         }
//         // k = 1;
//         // while(k<gaps){
//         //     cout<<" ";
//         //     k = k + 1;
//         // }
//         cout<<"\n";
//         i = i + 1;
//     }
// }

//4th question 
// /*
// Pattern
// N = 4
// 1
// 22
// 333
// 4444
// */

// #include<iostream>
// using namespace std;
// int main(){
//   int i,j,n;
//     cin>>n;
//     for(i=1;i<=n;i++){
//         for(j=1;j<=i;j++){
// 	        cout<<i;
//         }
//     cout<<endl;
//     }
// }

// question 5
// /*
// Pattern
// N = 4
// 1
// 21
// 321
// 4321
// */

// #include<iostream>
// using namespace std;
// int main(){
//   int i,j,n;
//     cin>>n;
//     for(i=1;i<=n;i++){
//        int p=i;
//         for(j=1;j<=i;j++){
//           cout<<p;
//           p--;
//         }
//         cout<<endl;
        
//     }
// }

// question 6
// /*
// Pattern
// N = 5
// E
// DE
// CDE
// BCDE
// ABCDE
// */
// #include<iostream>
// using namespace std;

// int main() {
//     int i,j,n;;
//     cin>>n;
//     for(i=1;i<=n;i++){
//         char p='A'-i+n;
//         for(j=1;j<=i;j++){
//             cout<<p;
//             p++;  
//         }
//         cout<<endl;
//     }
// }

// question 7
// /*
// Pattern
// N = 4
//    1
//   232
//  34543
// 4567654
// */
// #include<iostream>
// using namespace std;
// int main(){
//     int no;
//     cin>>no;
//     int i=1;
//     int n = no;
//     while(i<=(no)){
//         int gaps = no-i,k=1;
//         int j = i;
//         while(k<=gaps){
//             cout<<" ";
//             k = k + 1;
//         }
//         int ch = n - gaps, z = ch;
//         while(z>=1){
//             cout<<j;
//             j = j + 1;
//             z = z - 1;
//         }
//         j = j - 2;
//         z = (ch-1);
//         while(z>=1){
//             cout<<j;
//             j = j - 1;
            
//             z = z - 1;
//         }
//         // k = 1;
//         // while(k<=gaps/2){
//         //     cout<<" ";
//         //     k = k + 1;
//         // }
//         cout<<"\n";
//         i = i + 1;
//     }
// }

// // question 8
// /*
// Pattern
// N = 5
//   *
//  ***
// *****
//  ***
//   *
// */
// #include<iostream>
// using namespace std;

// // void printPatt(int n)
// int main()
// {
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=(n)){
//         int gaps = n-2*i+1,k=1;
//         if(i>(n+1)/2){
//             int no = (n+1)/2;
//             gaps = 2*(i%no);
//         }
//         while(k<=gaps/2){
//             cout<<" ";
//             k = k + 1;
//         }
//         int ch = n - gaps;
//         while(ch>=1){
//             cout<<"*";
//             ch = ch - 1;
//         }
//         // k = 1;
//         // while(k<=gaps/2){
//         //     cout<<" ";
//         //     k = k + 1;
//         // }
//         cout<<"\n";
//         i = i + 1;
//     }
// }

