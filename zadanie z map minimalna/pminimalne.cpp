#include"iostream"
#include"fstream"

using namespace std;

int main(){
ifstream data("dane6.txt");

int line_caunt=2023;
int result[9]={0,0,0,0,0,0,0,0,0};
int sum_array[9]={0,0,0,0,0,0,0,0,0};


for(size_t i=0;i<line_caunt;i++)
{
    string line;
    data>>line;
    int minimal=1;
    int line_sum=0;
    for(size_t i=0;i<line.size();i++)
    {
        if(line[i]>minimal)
        minimal=int(line[i]);
        line_sum+=line[i]-48;
        }
        cout<<"p mimimal "<<line_sum<<" "<<minimal-47<<" "<<line<<endl; result[minimal-49]++;   // sum_array[minimal-49]++; if(sum_array[minimal-49]<line_sum) { sum_array[minimal-49]=line_sum; }
}
cout<<result[0];
cout<<sum_array[0];
data.close();


return 0; }
