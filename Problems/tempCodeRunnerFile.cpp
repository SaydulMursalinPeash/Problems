int prime(int x,int y){
    int a=x-1;
    if(a<2){
        return 0;
    }
    else if(y%a!=0){
        prime(a,y);
    }
    else{
        return 1;
    }
}