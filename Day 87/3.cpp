mpics
Events
POTD

Refresh

Time (IST)	Status	Lang	Test Cases	Code
2023-07-05 19:52:49	Correct	cpp	100 / 100	View
C++ (g++ 5.4)
Average Time: 20m



    if(s.top()<=target){s.push(target); return;}



Custom Input


/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */

void insertSorted(stack<int>&s, int target){
    if(s.empty()){s.push(target);return;}
    if(s.top()<=target){s.push(target); return;}
    
    //procedure
    int topelement = s.top();
    s.pop();
    insertSorted(s,target);
    //bt
    s.push(topelement);
}

void SortStack(stack<int>&s){
    if(s.empty()){return;}
    
    int topE = s.top();
    s.pop();
    SortStack(s);
    
    //insertsorted
    insertSorted(s,topE);
}

void SortedStack :: sort()
{
    SortStack(s);
}
