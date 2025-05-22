string solve(string a) {
    // code here
    int n = a.length();
    int cntCon = 0;
    set<char>s;
    for(char c:a)
    {
        s.insert(c);
    }
    for(char c:s)
    {
        if(c!='a' && c!='e' && c!='i' && c!='o' && c!='u')
        {
            cntCon++;
        }
    }
    if(cntCon%2==0)
    {
        return "SHE!";
    }
    else
    {
        return "HE!";
    }
    
}