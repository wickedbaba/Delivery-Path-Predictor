void assign_priority()
{
    int priority=0;
    if(prime==1)
    {
        if(price>8000)
            priority++;
        if(code==1)
            priority=priority+2;
    }
    else
    {
        if(price>12000)
            priority++;
        if(code==1)
            priority=priority+2;
    }   
}
