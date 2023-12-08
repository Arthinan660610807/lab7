//ไม่ต้องเติม function main()

char before(char x){
if(x == 65 ){
return 'Z';
}
    if( x >= 'B' && x <= 'Z'){
     x-- ;
    }
    else{
return '0';}
 return x;
}