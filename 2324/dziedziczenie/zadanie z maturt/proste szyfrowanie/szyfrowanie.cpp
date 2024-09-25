#include"iostream"
#include"fstream"

using namespace std;


int main(){
ifstream data("szyfrogram.txt");

int line_caunt=28;
int czestosc_w_tekscie[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int czestosc_wystepowania[26]={98,16,44,39,91,2,17,7,92,15,42,41,36,60,86,34,0,38,50,32,18,0,43,0,31,68};
char tainna_czestosc_wystepowania[26]={};
string zaszyfrowany_tekst="CAIMURJH";
string odzaszyfrowany_tekst="";


for(size_t i=0;i<line_caunt;i++)
{
    string line;
    data>>line;
        for (size_t i = 0; i < line.size(); i++)
        {
            int litera = line[i]-65;
            czestosc_w_tekscie[litera]++;
        }

}
for (int i = 0; i < 26; i++)
{
    cout<<endl<<char(i+65)<<": ";

    for (size_t j = 0; j < 26; j++)
    {
        //cout<<char(j+65)<<" ";

        if(czestosc_w_tekscie[j] == czestosc_wystepowania[i]){
        //cout<<"<-to ta ";

        tainna_czestosc_wystepowania[j]=i+65;}
    }
}
for (size_t i = 0; i < zaszyfrowany_tekst.size(); i++)
{
        int litera = zaszyfrowany_tekst[i]; // A = 65
        odzaszyfrowany_tekst+=tainna_czestosc_wystepowania[litera-65];
        //cout<<char(i+65)<<" "<<czestosc_w_tekscie[i]<<endl;
}
cout << odzaszyfrowany_tekst;

data.close();


return 0; }

