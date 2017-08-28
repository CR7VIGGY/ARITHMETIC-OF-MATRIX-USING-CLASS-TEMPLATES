//Write a program in C++ using function/class template to read two matrices of  
//different data types such as integers and floating point values and perform simple  
//arithmetic operations on these matrices separately and display it.

#include<iostream> 
using namespace std;

template <class t> 
class Arithmetic   
{ 
    int i,j; 
    t m[10][10];
	 
    public: 
    
    void getdata(int,int); 
    void putdata(int,int); 
    void add(Arithmetic&,Arithmetic&,int,int);
    void sub(Arithmetic&,Arithmetic&,int,int);  
    void mul(Arithmetic&,Arithmetic&,int,int); 
     
}; 

template <class t> 
void Arithmetic <t> :: getdata(int r,int c) 
{ 
    
    int i=0,j=0; 
   
    for(i=0;i<r;i++) 
    { 
        for(j=0;j<c;j++) 
        {  
            cin>>m[i][j]; 
        } 
    } 
} 
 
template <class t> void Arithmetic <t> :: add(Arithmetic<t> &a1,Arithmetic<t>&a2,int r,int c) 
{ 
    int i=0,j=0; 
    for(i=0;i<r;i++) 
    { 
        for(j=0;j<c;j++) 
        { 
            
            m[i][j]=a1.m[i][j]+a2.m[i][j]; 
        } 
    } 
}  
template <class t> void Arithmetic <t> :: sub(Arithmetic<t> &a1,Arithmetic<t>&a2,int r,int c) 
{ 
    int i=0,j=0; 
    for(i=0;i<r;i++) 
    { 
        for(j=0;j<c;j++) 
        { 
             
            m[i][j]=a1.m[i][j]-a2.m[i][j]; 
        } 
    } 
} 

template <class t> void Arithmetic <t> :: mul(Arithmetic<t> &a1,Arithmetic<t>&a2,int r,int c) 
{ 
    int i=0,j=0,k=0;
    for(i=0;i<r;i++) 
    for(j=0;j<c;j++) 
    m[i][j]=0; 
    for(i=0;i<r;i++) 
    { 
        for(j=0;j<c;j++) 
        { 
            for(k=0;k<r;k++) 
            m[i][j]=m[i][j]+(a1.m[i][k]*a2.m[k][j]); 
        } 
    } 
}  
template <class t> void Arithmetic <t> :: putdata(int r,int c) 
{ 
    int i=0,j=0; 
    for(i=0;i<r;i++) 
    { 
        cout<<"\n"; 
        for(j=0;j<c;j++) 
        { 
            cout<<"\t"; 
            cout<<m[i][j]; 
        } 
    } 
} 
int main() 
{ 
    int ch,a,b,x,y,sel,flag=0;  
    Arithmetic<int> p,q,s; 
    Arithmetic<float> u,o,d; 
    cout<<"PRESS 1 : INT TYPE\nPRESS 2 : FLOAT TYPE";
	cin>>sel;
	
    if(sel==1)
	{
	    cout<<"Enter rows & columns of matrix A"; 
	    cin>>a>>b;
	    cout<<"\n Enter matrix A\n"; 
	    p.getdata(a,b);
		cout<<"Enter rows and columns of matrix B"; 
	    cin>>x>>y ;  
	    cout<<"\n Enter matrix B\n"; 
	    q.getdata(x,y); 
	    
	do 
    { 
         
        cout<<"\nMenu" 
        <<"\n1.addition for int" 
        <<"\n2.substraction for int"  
        <<"\n3.Multiplication for int" 
        <<"\n 4.Exit" 
        <<"\n Enter Your Choice:"; 
        cin>>ch; 
        
        switch(ch) 
        { 
            case 1: 
                if(a==x && b==y) 
            { 
                cout<<"ADDITION : \n"; 
                s.add(p,q,a,b); 
                s.putdata(a,b); 
            } 
            else 
            { 
                cout<<"Wrong Row Column Size Enetered"; 
            } 
        break; 
          
            case 2: 
                if(a==x && b==y)    
            { 
                cout<<"SUBTRACTION :\n"; 
                s.sub(p,q,a,b); 
                s.putdata(a,b); 
            } 
            else 
            { 
                cout<<"Wrong Row Column Size Enetered"; 
            } 
        break; 
            case 3: 
                if (b==x)  
            { 
                cout<<"MULTIPLICATION :\n"; 
                s.mul(p,q,a,b); 
                s.putdata(a,b); 
            } 
            else 
            { 
                cout<<"Wrong Row Column Size Enetered"; 
            } 
        break;  
            case 4: break; 
        }
    }
	while(ch!=4);
    
    return 0;   
	}
	
	else if(sel == 2)
	{
	cout<<"Enter rows & columns of matrix A"; 
    cin>>a>>b;
		cout<<"\n Enter matrix A\n"; 
    u.getdata(a,b);
    cout<<"Enter rows and columns of matrix B"; 
    cin>>x>>y ;  
    cout<<"\n Enter matrix B\n"; 
    o.getdata(x,y); 
    do 
    { 
         
        cout<<"\nMenu" 
		<<"\n1.addition for float" 
        <<"\n2.substraction for float" 
        <<"\n3.Multiplication for float" 
        <<"\n 4.Exit" 
        <<"\n Enter Your Choice:" ; 
        cin>>ch; 
        switch(ch) 
        { 

             case 1: 
         
                if(a==x && b==y) 
            { 
                cout<<"addition is"; 
                d.add(u,o,a,b); 
                d.putdata(a,b); 
            } 
            else 
            { 
                cout<<"Wrong Row or Column Size entered"; 
            } 
        break;
        case 2: 
                if(a==x && b==y)    
            { 
                cout<<"sunstraction is"; 
                d.sub(u,o,a,b); 
                d.putdata(a,b); 
            } 
            else 
            { 
                cout<<"Wrong Row or Column Size entered"; 
            } 
        break;
        case 3: 
                if (b==x)  
            { 
                cout<<"Multiplication is"; 
                d.mul(u,o,a,b); 
                d.putdata(a,b); 
            } 
            else 
            { 
                cout<<"Wrong Row or Column Size entered"; 
            } 
        break; 
            case 4: break; 
        }
    }while(ch!=4);
    return 0; 
	}
	
return 0;  
}
