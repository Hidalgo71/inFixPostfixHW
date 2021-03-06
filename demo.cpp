//include the libraries!

int main()
{
   infixToPostfix  InfixExp;
   string infix;
   
   ifstream infile;
   
   infile.open("infixData.txt");
   
   if (!infile)
   {
       cout << "Cannot open input file. Program terminates!!!" << endl;
       return 1;
   }
   
   getline(infile, infix);
   
   while (infile)
   {
       InfixExp.setInfix(infix);
       InfixExp.showInfix();
       InfixExp.showPostfix();
       cout << endl;
   
       getline(infile, infix);
   }
   
   infile.close();
   
   return 0;
}

