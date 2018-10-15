//Menu based Array implementation
#include<iostream>
using namespace std;
int a[20];
int n,val,i,j,pos,temp;

void insert()
{
    cout<<"Enter the position for the new element: "<<endl;
    cin>>pos;
    cout<<"Enter the element to be inserted: "<<endl;
    cin>>val;
    for(i=n-1;i>=pos;i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=val;
    n=n+1;
}

void del(){
	cout<<"Enter the position of the element to be deleted: ";
	cin>>pos;
    val=a[pos];
	for(i=pos;i<n-1;i++){
            a[i]=a[i+1];
    }
    n=n-1;
    cout<<("The deleted element is =%d",val);
}

void loc(){
	int e,c=0;
	cin>>e;
	for(int i=0;i<n;i++){
		if(a[i]==e){
			c++;
			cout<<"Element found at index "<<i<<endl;
			break;
		}
	}
	if(c==0)
		cout<<"Element not present"<<endl;
}

void display(){
        int i;
        cout<<"The array elements are:"<<endl;
        for(i=0;i<n;i++){
             cout<<a[i]<<" ";
        }
}

int main(){
    cout<<"Enter the size of the array elements: ";
    cin>>n;
    cout<<"Enter the elements for the array: "<<endl;
	for(i=0;i<n;i++){
               cin>>a[i];
	}
	cout<<"Enter 'a' for insertion, 'b' for deletion, 'c' to locate, 'd' to display & 'x' to exit the menu"<<endl;
        char ch;
	cin>>ch;
       	while(ch!='x'){
            switch(ch){
                case 'a':
                	insert();
            	    break;
                case 'b':
        	        del();
    	            break;
                case 'c':
	                loc();
                	break;
				case 'd':
					display();
					break;
            }
	    cout<<"Enter your choice"<<endl;
	    cin>>ch;
        }
	return 0;
}
