/*
  字符迷阵
  2019/8/6
*/
int T,M,N;
char str[100][100];
string name;
int namesize;
int numword(int x,int y,int size,int L,int M)
{
    int N=0;
    bool is=true;
    for(int i=0;i<size;++i)             
    {
        if(y+i == M)
        {
            is=false;
            break;
        }

        if(str[x][y+i] != name.at(i))
        {
            is=false;
            break;
        }
    }
    if(is)
        N++;
    
    is=true;
    for(int i=0;i<size;++i)             
    {
        if(x+i == L)
        {
            is=false;
            break;
        }
        if(str[x+i][y] != name.at(i))
        {
            is=false;
            break;
        }
    }
    if(is)
        N++;

    is=true;
    for(int i=0;i<size;++i)             
    {
        if(y+i == M || x+i == L)
        {
            is=false;
            break;
        }
        if(str[x+i][y+i] != name.at(i))
        {
            is=false;
            break;
        }
    }
    if(is)
        N++;
    return N;
}

int main()
{
    cin >> T;
    for(int i=0;i<T;++i)
    {
        int sum=0;
        cin >> M >> N;
        for(int j=0;j<M;++j)
        {
              cin >> str[j];
        }
        cin >> name;
        namesize=name.size();
        for(int j=0;j<M;++j)
        {
            for(int k=0;k<N;++k)
            {
                if(str[j][k] == name.at(0))
                   sum=sum+numword(j,k,namesize,M,N);
            }
        }
        cout << sum << endl;
    }
}