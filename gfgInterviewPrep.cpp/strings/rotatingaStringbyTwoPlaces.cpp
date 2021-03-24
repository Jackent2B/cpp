//to check if a string 'a' can be made eaqual to another string 'b'
//by rotating it.
bool rotateString(string a, string b) {        
        if (a.length()!=b.length())
		    return false;
        
        if (a.length() == 0)
            return true;

	 	string tempfirst=" ";
        string x=" ";
        
	 	for(int i=0;i<a.length();i++){
	 		tempfirst= a.substr(0,i);
	 
		string templast = " ";
	 	templast= a.substr(i);
	 	x = templast+tempfirst;

		if (x.compare(b)==0)
			return true;
		}
	return false;
    }
