/*You are required to complete this method */
int atoi(string str)
{
    for(int i=0; i<str.length(); i++){
      
        if (str[0] == '-') {
            i++;
        }
      
        else if(int(str[i])>=48 && str[i]<= 57)
            continue;
      
        else
            return -1;
    }
    
        int x;    
        stringstream(str) >> x;
        return x;
}