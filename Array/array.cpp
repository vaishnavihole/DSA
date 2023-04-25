 // Print elements in array

//   #include<iostream>
// using namespace std;

// int main()
// {
//    int marks[4];
   
//    marks[0] = 5;
//    marks[1] = 10;
//    marks[2] = 15;
//    marks[3] = 20;
   
//    cout<<marks[0]<<endl;
//    cout<<marks[1]<<endl;
//    cout<<marks[2]<<endl;
//    cout<<marks[3]<<endl;
//    return 0;
// // }


// ####### Print Given Array using loop #######

// using namespace std;

// int main()
// {
//    int students[5] = {2, 3, 14, 12, 7};
   
//    for(int i=0; i<=4; i++) {
//        cout<<students[i] << endl;
//    }
//    return 0;
    
// }



// ####### Print Given Array in reversrusing loop #######

// using namespace std;

// int main()
// {
//    int students[5] = {2, 3, 14, 12, 7};
   
//    for(int i=4; i>=0; i--) {
//        cout<<students[i] << endl;
//    }
//    return 0;  
// }



// ####### Removing array element ########

// #include<iostream>

// using namespace std;

// int main()
// {
//     int arr[50];
    
//     int size;
//     cout<<"How many element you want to store?:";
//     cin>>size;
    
//     for(int i=0;i<size; i++)
//     {
//         cout<<"Enter value for index"<<i<<": ";
//         cin>>arr[i];
//     }
    
//      cout<<"Before Delection: ";
//      for(int i=0; i<size; i++)
//      {
//          cout<<arr[i]<<",";
//      }
     
//      int index;
//      cout<<"At what position you want remove element:";
//      cin>>index;
     
//      for(int i=index; i<size-1; i++){
//          arr[i] = arr[i+1];
//      }
//      size--;
     
//      cout<<"After Delection: ";
//      for(int i=0; i<size; i++)
//      {
//          cout<<arr[i]<<",";
//      }
     
    
//     return 0;
    
// }



//######## Linear Search ########

