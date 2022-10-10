 /*#include <iostream>
#include<array>
#include <vector>
using namespace std;  // array
 

 int main (){

  array<int, 4> a= {1,2 ,33,4};
 int size = a.size();
 for (int i = 0; i < size; i++)
 {
    cout<< a[i] <<" ";
 }cout << endl;
  
  cout << "element at index  n :"<< a.at(2) << endl;
 cout << "Empty or not " << a.empty() << endl;

 cout << " at the first index : " << a.front() <<endl;
 cout << " at the last index : " << a.back() <<endl;
    return 0;
 }*/


 // vector 
 /*
#include <iostream>
#include<array>
#include <vector>
using namespace std;  // array
 

 int main (){

  vector<int> v;
  cout << "capacity : " << v.capacity() << endl;
  v.push_back(2);
  cout << "capacity : " << v.capacity() << endl;
  v.push_back(2);
  cout << "capacity : " << v.capacity() << endl;
  v.push_back(5);
  cout << "capacity : " << v.capacity() << endl;

   vector <int> a(5,1);
   for(int i : a ){
      cout << i << " ";
   } cout << endl;

  cout << "size : " << v.size() << endl;
  
  cout << "element at index n : " << v.at(2) << endl;

// font and back operation 

  cout << "element at front  : " << v.front() << endl;
  cout << "element at back : " << v.back() << endl;
     
  // pop back 
  // before po the element 
   cout << " before pop " <<endl;
  for(int i : v){
   cout << i << " ";
  } cout << endl;


  v.pop_back();
  // after the po the element 
 cout <<"After pop "<< endl;
  for( int i : v ){
   cout << i << " ";
  } cout << endl;


 // clear element 
  cout << " vector size (before use the clear keyword ) :  " << v.size()<< endl;

v.clear();

cout << " vector size (After  use the clear keyword ) :  " << v.size()<< endl;

 
    return 0;
 }*/


/*
 // dequeue

#include <iostream>
#include<array>
#include <vector>
#include <deque>

using namespace std;  // array
 

 int main (){
deque <int> d;

d.push_back(5);
d.push_front(4);

for(int i : d){
   cout  << i <<" ";
} 

cout << endl;
//d.pop_front();
//d.pop_back();

//for(int i : d){
 //  cout  << i <<" ";
//} 

      cout << " First element of the vector is : " << d.at(1) << endl;

      cout << " Front : " << d.front() << endl;
      cout << " Back : " << d.back() << endl;

      cout << "Empty or Not " << d.empty() << endl;

      cout << "Before Erase the element " << endl;

      for (int i : d ){
         cout << i << " ";
      }cout << endl;

      d.erase(d.begin() , d .begin() + 1);
      
      cout << "After Erase the element " << endl;

      for (int i : d ){
         cout << i << " ";
      }cout << endl;
      
  




    return 0;

 }*/



 // list
/*
#include <iostream>
#include<array>
#include <vector>
#include <deque>
#include <list>

using namespace std;  // array
  int main(){
  list <int> l;

  // list <int> n(l); this is the process of copy list  in another list 
  list <int> n(5 ,100);
  for (int i : n)
  {
   cout  << i << " " ; 
  } cout << endl;
   
     
l.push_back(2);
l.push_back(25);
l.push_back(25);
l.push_front(25);
l.pop_back();


 for (int i : l){
   cout << i << " ";

 }cout << endl;
    

cout << "After erase the element " << endl;

l.erase(l.begin());
for (int i : l){
   cout << i << " ";

 }cout << endl;
   

 return 0;

 }

*/
 // stack 
/*
#include <iostream>
#include<array>
#include <vector>
#include <deque>
#include <list>
#include<stack>
using namespace std;  // array
  int main(){
 
   stack<string> s ;
   s.push("love");
   s.push("babbar");
   s.push("kumar");
   
   cout << "Top most element is that : " << s.top()  << endl;

   s.pop();

cout << "Top most element is that : " << s.top() << endl;
cout << " size of stack is : " << s.size() << endl;
cout << "Empty or Not : " << s.empty() << endl;

 return 0;

 }

*/
// Queue
/*
#include <iostream>
#include<array>
#include <vector>
#include <deque>
#include <list>
#include<stack>
#include<queue>
using namespace std;  // array
  int main(){
  queue <string> q;

  q.push("love");
  q.push("Babbar");
  q.push("kumar");

cout << " Top Most element is : " << q.front() << endl;

cout << "Before queue size is : " << q.size() << endl;
q.pop();

cout << " Top Most element is : " << q.front() << endl;
cout << " The size of element : " << q.size() << endl;
 return 0;

 }
*/
// priority Queue
/*
#include <iostream>
#include<array>
#include <vector>
#include <deque>
#include <list>
#include<stack>
#include<queue>

using namespace std;  // array
  int main(){
// max heap 
  priority_queue<int> maxi;
// min heap 

 priority_queue<int , vector <int> , greater<int> > mini;

//  max priority queue 
maxi.push(1);
maxi.push(80);
maxi.push(8);
maxi.push(7);

int max_size = maxi.size();

 for ( int i =0 ; i < max_size; i ++){
   cout << maxi.top() << " ";
   maxi.pop();
 } cout << endl;

 // min priority queue

mini.push(1);
mini.push(80);
mini.push(8);
mini.push(7);

int mini_size = mini.size();

 for ( int i =0 ; i < mini_size; i ++){
   cout << mini.top() << " ";
   mini.pop();
 } cout << endl;

cout << "Empty or Not" << mini.empty() << endl;
cout << "Empty or Not" << maxi.empty() << endl;
 return 0;

 }
*/

//  set 
/*
#include <iostream>
#include<array>
#include <vector>
#include <deque>
#include <list>
#include<stack>
#include<queue>
#include<set>
using namespace std;  // array
  int main(){
 set <int> s;

 s.insert(6);
 s.insert(2);
 s.insert(1);
 s.insert(9);
 s.insert(5);
 s.insert(5);

for(int i : s){
   cout << i << " ";
} cout << endl;

s.find(3);
auto it = s.find(6);
if ( it != s.end()){
  cout << "Here" << endl;
} else {
  cout << " Not Here" << endl;
}


auto itr = s.erase(2);
 for ( auto itr : s){
   cout << itr << " ";
 }
 return 0;

 }

*/

//algorithm
 #include <bits/stdc++.h>
 using namespace std;
 int main (){

vector<int> vec(5 ,0);
for (int i = 0 ; i < 5; i++ )
{
  cin >> vec[i];
} cout << endl;
//sort(vec.begin()  , vec.end()); it use for whole sorting 
sort(vec.begin() +1   , vec.begin() + 4);// it use for only a index to another index



 for (auto i : vec)
 {
   cout << i << " " ;
 }
cout << endl;
// reverse 
   

    reverse(vec.begin() , vec.end()); //its use for whole reverse 
   // reverse(vec.begin() + 1 , vec.end() + 4); //its use for a particular index to another  reverse 

 cout << " Reverse array : " << endl;

for (auto i : vec)
 {
   cout << i << " " ;
 } 
 cout << endl;



 /// i want to fin the maximum element 

 int ele = * max_element(vec.begin() , vec.end());
  cout << "maximum element of the vector : " <<ele << endl;
  
int ele1 = *min_element( vec.begin() , vec.end());

cout << " Minimum element of the vector is : "<< ele1 << endl;

// i give a range sum all the element 

int sum = accumulate (vec.begin() , vec.end() , 0 );
  
cout << " The sum is : " << sum << endl;

int cnt = count ( vec.begin() , vec.end(), 1 );
 cout << " NO of ineger : " << cnt << endl;

// arr[] = {1,2 ,43 , 4 ,55} , occurence 

 auto it = find ( vec.begin() , vec.end() , 2);
 int inx = it - vec.begin();


 if ( it == vec.end())
cout << "The element is not presemt  " << endl;


else
cout << " the in dex of 2 is that : " << inx  << endl;

// binary search 

//only work on sorted array
 ///return true or false 

bool res = binary_search(vec.begin() , vec.end() , 3);

cout << res << endl;



// lower bound function 
// it denote the closest greater element .
 // 
   auto itr = lower_bound(vec.begin() , vec.end() , )

    inx1 = itr - vec.begin();
    
    if(itr == vec.end())
    cout << " The vector is Not present" << endl;
     


     else 
     cout << "The lower bound is : " << inx1 << endl;

  // upper bound 

  //which jut greater than x which is none as upper bound 

   // x = 7 
   // int arr = { 3,6,7,87,8,98,9}  ; 8  is the upper bound 

 auto itr1 = upper_bound(vec.begin() , vec.end() , )

    inx2 = itr1 - vec.begin();
    
    if(itr1 == vec.end())
    cout << " The vector is Not present" << endl;
     


     else 
     cout << "The lower bound is : " << inx2 << endl;

  













  return 0;
 }