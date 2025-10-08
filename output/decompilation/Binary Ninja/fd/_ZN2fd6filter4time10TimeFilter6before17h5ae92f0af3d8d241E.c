
  char* fd::filter::time::TimeFilter::before::h5ae92f0af3d8d241(int64_t* arg1, char* arg2, int64_t arg3)

{
    char* result;
    int32_t rdx;
    result = fd::filter::time::TimeFilter::from_str::h9f09e78d43e167d9(arg2, arg3);
    int64_t rcx = 2;
    
    if (rdx != 0x3b9aca00)
    {
        arg1[1] = result;
        arg1[2] = rdx;
        rcx = 0;
    }
    
    *arg1 = rcx;
    return result;
}
