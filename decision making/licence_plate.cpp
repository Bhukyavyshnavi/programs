#include<bits/stdc++.h>
using namespace std;
int main(){
	string plate;
	cin>>plate;
    if((plate.length() == 6 ) &&  
    (plate[0] >= 'A'  &&  plate[0]    <=  'Z' )  && 
    (plate[1] >=  'A' &&   plate[1]    <=  'Z' ) &&   
    (plate[2] >= 'A'  &&  plate[2]    <=  'Z')   && 
    (plate[3] >= '0'  &&   plate[3]    <=  '9')  &&  
    (plate[4] >= '0'  &&   plate[4]    <=  '9' )  &&   
    (plate[5] >= '0'  &&   plate[5]    <=  '9')){
		cout<<"old valid";
	}
   else if((plate.length()  == 7 )&&  
    (plate[0] >= '0'  &&  plate[0]    <=  '9'  ) &&  
    (plate[1] >= '0'    &&  plate[1]    <=  '9'  )&&   
    (plate[2] >= '0'    &&   plate[2]    <=  '9'  )&&  
    (plate[3] >= '0'   &&  plate[3]    <=  '9'  )  &&  
    (plate[4] >= 'A'    &&   plate[4]    <=  'Z'  )  && 
    (plate[5] >= 'A'    &&   plate[5]    <=  'Z'  )  &&  
    (plate[6] >= 'A'   &&   plate[6]    <=  'Z')){
		cout<<"new valid";
	}
	else{
		cout<<"not valid";
	}
}


