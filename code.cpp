# include<iostream>
# include<map>
#include <ctime> 
using namespace std;
string idcounter = "A";
class node 
{
    int nodeNumber ;
     string timestramp;
     string data;
     int value;
     int  nodeId ; 
     node  *referenceNodeId;
     node * childReferenceNodeId;
     map <int, int> hashvalue;   
     public:
     void insert(node * referenceNode=NULL)
     {
         cout<<"\n data : ";
         cin>>value;
         
         if(idcounter=="A")
         {
             genesisReferenceNodeId.data = data;
         }
         else{
             if(genesisReferenceNodeId.data-data<=0)
             return 0 ;
             else{
                 genesisReferenceNodeId.data-=data;
             }
         }
         nodeID = idcounter;
         idcounter++;
         cout<<"nodeNumber : ";
         cin>>nodeNumber;
         
         childReferenceNodeId =NULL;
         referenceNodeId = referenceNode;
         tm *gmtm = gmtime(&now);
         timestramp = asctime(gmtm);
         
         
     }
     void childnode( node child)
     {
         childReferenceNodeId = child;
     }
}
node * genesisReferenceNodeId;
int main()
{
    genesisReferenceNodeId = new node;
    genesisReferenceNodeId.insert();
    node parent;
    char input;
    cout<<"i for insert\n e for exit";
    cin>>input;
    while(input=='e'){
    switch(input)
    {
        case'i':  node Obj = new node;
                Obj.insert(genesisReferenceNodeId);
                genesisReferenceNodeId.childnode(Obj);
    }
    }
    return 0 ;
}
