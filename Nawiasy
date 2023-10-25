#include"iostream" 
#include"fstream"
using namespace std;
int main(){
    
ifstream data("dane2_4.txt");
int line_caunt=30;

for(size_t i=0;i<line_caunt;i++) { 
    string line;
    data>>line;
    int depth=0;
    int max_depth=0;
    bool correct=1;
for(size_t i=0;i<line.size();i++) {
    if(line[0]==']' || line[line.size()-1]=='[')
    correct=0; 
    if(line[i]=='[')
    {
    depth++;
    if(depth>max_depth)
        max_depth=depth; 
    }
    if(line[i]==']')
    { depth--; } 
    } 
    if(depth!=0)
    correct=0;   
    cout<<"Corect:"<<correct<<" Max depth:"<<max_depth<<""<<line<<endl;

  } data.close();


return 0; }      
