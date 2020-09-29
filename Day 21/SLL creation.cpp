#include<bits/stdc++.h>
using namespace std;

struct SinglyLinked{
    int data;
    SinglyLinked* next;
};
class Methods{
    public:
    SinglyLinked insertNode(SinglyLinked*);
    void printList(SinglyLinked* start){

        if (start->next == nullptr){
            cout<<"List is Empty";
        }
        else{
            while(start->next != nullptr){
                cout<<start->data;
                start=start->next;
            }
        }
    }
}obj;
SinglyLinked* insertNode(SinglyLinked* start){
    int data;
    cout<<"Enter data = ";
    cin>>data;
    if (start->next == nullptr){
            start->next=nullptr;
            start->data=data;
    }else{
        SinglyLinked* temp;
        temp->next=nullptr;
        temp->data=data;
        while(start->next!= nullptr){
            start=start->next;
        }
        start->next=temp;
    }
    return start;
}

int main(){
    struct SinglyLinked* start=NULL;
    //start =
    obj.printList(insertNode(start));
    return 0;
}
