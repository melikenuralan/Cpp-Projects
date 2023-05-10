-----------------------------------------------------------------------------
#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int a=10;
    int *p;
    p=&a; //storing the address of a
    
    cout<<a<<endl;
    printf("using pointer %d %d",*p,&a);//dereferencing *p
    return 0; //*p yıldızı yazmassak aadresi yazdıracak
}
----------------------------------------------------------------------------
#include <iostream>

using namespace std;

int main()
{
    int A[5]={2,4,6,8,10};
    int *p;
    p=A;//dont use when you initializing array to a pointer
    
    //or &A[0] use this one---------- &A is wrong X
    for(int i=0;i<5;i++)
    cout<<p[i]<<"\t"; //A[i]; will give you the same result p is act of an array
    
    

    return 0;
}
-----------------------------------------------------------------------------
//c language
#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int *p;
    p=(int *)malloc(5*sizeof(int));
    
    p[0]=10; p[1]=15; p[2]=14; p[3]=21;  p[4] = 31;
    
    for(int i=0;i<5;i++)
    cout<<p[i]<<endl;

    return 0;
}
-----------------------------------------------------------------------------
//c++ language
#include <iostream>

using namespace std;

int main()
{
    int *p;
    
    p=new int[5];
    
    p[0]=10; p[1]=15; p[2]=14; p[3]=21; p[4]=31;
    
    for(int i=0;i<5;i++)
    cout<<p[i]<<endl;
    
    delete [ ] p;//c++ language 
    free(p);//c language
    

    return 0;
}
-----------------------------------------------------------------------------

#include <iostream>

using namespace std;
struct Rectangle
{
  int length;
  int breadth;
};
int main()
{
    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;
    
    cout<<sizeof(p1)<<endl;
    cout<<sizeof(p2)<<endl;
    cout<<sizeof(p3)<<endl;
    cout<<sizeof(p4)<<endl;
    cout<<sizeof(p5)<<endl;
    
    //every pointers take their size is same for 64 bit machine 8 bite

    return 0;
}


-----------------------------------------------------------------------------


