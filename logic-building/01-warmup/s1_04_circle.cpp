#include<bits/stdc++.h>
using namespace std;
int main(){
  double r;  
  cin>>r;
  cout<<(3.14*r*r) <<endl;
  cout<<"hey inteligent kid"<<"\n";
  cout<<(2*3.14*r);
  return 0;
  /*
  here what i learn is
  1)endl and \n
  endl doesnt uses quotes but \n need quotes(single or double)
  endl is fast in short term but in overall in long run \n is faster .because as soon it sees endl in print on the screen and comes to program as it takes a lot of time in long run where as the \n stores all of it in buffer stock and it print when all program is over so it is faster in long run.

Correction/Refinement: Almost perfect. While \n does print when the program is over, it doesn't always wait until the very end. If your program generates a massive amount of text, the buffer box will get full in the middle of the program. When it gets full, the computer will automatically dump it to the screen and empty the box so it can hold more.



  std::endl is faster for instant, short-term screen updates because it forces the computer to print immediately. However, \n is much faster in the long run because it stores text in a buffer and prints it in large batches (either when the buffer gets full, when the program asks for input, or when the program ends).


  another point of view--->>>>>>>>>>>>>>>>>>
  endl vs \n (Buffer Flushing)You nailed the mental model. Here is the exact mechanics of what happens under the hood:
  
  \n (Newline character): Simply adds a line break character to the output stream. It leaves the text sitting in an internal memory area called the output buffer. The system only writes that buffer to the screen/file when it gets full or when the program exits.
  
  std::endl: Does two distinct things sequentially:Inserts \n.Calls std::cout.flush() — forcing the computer to immediately stop execution, make an Operating System system call, and dump the buffer to the screen right then and there.
  
  Why system calls slow you down: System calls require the CPU to switch context from your program to the OS kernel. Doing this inside a loop running $10^5$ times causes a massive performance bottleneck, whereas \n lets the system batch those writes together efficiently.


  2)all operation inside the bracket
  
  */

}
