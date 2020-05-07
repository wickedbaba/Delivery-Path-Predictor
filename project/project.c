void assign_priority(int price,int code)
{
    int priority=0;
    if(price>10000)
        priority++;
    if(code==1)
        priority=priority+2;
}
