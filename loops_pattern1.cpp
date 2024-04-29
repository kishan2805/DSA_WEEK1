#include<iostream>
using namespace std;
int main()
{
    // int balance=1;
    // if (balance>=10)
    // {
    //     cout<<"ammer";
    // }
    // else{
    //     cout<<"na hopayega ";
    //     };
    // int side=5;

    // if (side==3)
    // {
    //     cout<<"triangle";
    // }
    // else if(side==4)
    // {
    //     cout<<"rectangle";
    // }
    // else if (side ==5)
    // {
    //     cout<<"pentagon";
    // }
    // else 
    // {
    //     cout<<"polygon with side more than 5";
    // }
    // cout<<endl;
    // for (int i=1;i<=5;i+=1)
    // {
    //     cout<<endl<<"outer loop "<<i<<endl<<endl;
    //     for(int j=1;j<=3;j+=1)
    //     {
    //         cout<<"inner loop"<<j<<endl;
    //     }
    // }

// infinite loop 
    // int i=1;
    // for(;;)
    // {
    //     cout<<"the value of i is "<<i<<endl;
    //     if(i<=5)
    //     {
    //         cout<<"kishan"<<i;
    //         i+=1;
    //     }
    //     i+=1;
    // }

    // for (int i=1;i<11;i+=1)
    // {
    //     cout<<"19 * "<<i <<" = "<< 19*i<<endl;
    // }
// pattern printing starts 

// rectangular pattern
    // for (int i=0;i<3;i++)
    // {
    //     for (int j=0;j<5;j++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

// hollow square
//     for (int row =0;row<5;row++)
//     {
//         for (int col=0;col<5;col++)
//         {
//             if (row==0||row==4)
//             {
//                 cout<<"* ";
//             }
//             else 
//             {
//                 if(col==0||col==4)
//                 {
//                     cout<<"* ";
//                 }
//                 else
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }



// half pyramid
    // for (int i=0;i<5;i++)
    // {
    //     for (int j=0;j<=i;j++)
    //     {
    //         cout<<"* ";

    //     }
    //     cout<<endl;
    // }

// reverse half pyramid
    // int n=5;
    // for (int row=0;row<5;row++)
    // {
    //     for (int col=0;col<n-row;col++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

// reverse numeric pyramid
    // int n=5;
    // for (int row =0;row<n;row++)
    // {
    //     for (int col=0;col<n-row;col++)
    //     {
    //         cout<<col+1<<" ";
    //     }
    //     cout<<endl;
    // }


// Bonus Question 
    // int n=10;
    // if(cin>>n)
    // {
    //     cout<<"jjj";
    // }
    // int n=10;
    // if(cout<<n)
    // {
    //     cout<<"kishan";
    // }

// asignment problem (hollow inverted pattern )
    // int n=6;
    // for (int row =0;row<n;row++)
    // {
    //     for (int col=0;col<n-row;col++)
    //     {
    //         // if (row == 0&&col!=0&&col!=n-row-1)
    //         // {
    //         //     cout<<"* ";
    //         // }
    //         if (col==0 || col==n-row-1)
    //         {
    //             cout<<"* ";
    //         }
    //         else
    //         {
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // int n=6;
    // for (int row =0 ;row<n;row++)
    // {
    //     for (int col=0;col<=n-row-1;col++)
    //     {
    //         if (row==0)
    //         {
    //             cout<<"* ";
    //         }
    //         else
    //         {
    //             if (col==0||col==n-row-1)
    //             {
    //                 cout<<"* ";
    //             }
    //             else 
    //             {
    //                 cout<<"  ";
    //             }
    //         }
    //     }
    //     cout<<endl;
    // }

//  full pyramid
    
    // int n=5;
    // for (int row=0;row<n;row++)
    // {
    //     for (int col =0;col<=n+row;col++)
    //     {
    //         if (col<=n-row-1)
    //         {
    //             cout<<"  ";
    //         }
    //         else{
    //             cout<<"* ";
    //         }
    //     }
    //     cout<<endl;
    // }

// full hollow pyramid 

    // int n= 5;
    // for (int row =0;row<n;row++)
    // {
    //     for (int col=0;col<=n+row;col++)
    //     {
    //         if (row==n-1&&col!=0)
    //         {
    //             cout<<"* ";
    //         }
    //         else
    //         {
    //             if(col<=n-row-1)
    //             {
    //                 cout<<"  ";
    //             }
    //             else if (col==n-row)
    //             {
    //                 cout<<"* ";
    //             }
    //             else if (col>n-row && col<n+row)
    //             {
    //                 cout<<"  "; 
    //             }
            
    //             else if(col==n+row)
    //             {
    //                 cout<<"* ";
    //             }
                
    //         }

    //     }
    //     cout<<endl;
    // }

}
