
  int64_t uu_dd::parseargs::conversion_mode::he1b2907b7b2f438d(char* arg1, int64_t arg2, int64_t arg3, int64_t arg4, char arg5, char arg6)

{
    if (!arg2)
    {
        if (arg3 == 2)
        {
            *arg1 = 7;
            return;
        }
        
        if (arg3 & 1)
        {
            *arg1 = 2;
            *(arg1 + 8) = arg4;
            return;
        }
        
        *arg1 = 1;
        arg1[1] = arg6;
        *(arg1 + 8) = arg4;
        return;
    }
    
    if (arg3 == 2)
    {
        *arg1 = 0;
        *(arg1 + 8) = arg2;
        return;
    }
    
    if (arg3 & 1)
    {
        if (!arg5)
        {
            *arg1 = 5;
            *(arg1 + 8) = arg4;
            *(arg1 + 0x10) = arg2;
            return;
        }
        
        *arg1 = 6;
        *(arg1 + 8) = arg4;
        *(arg1 + 0x10) = arg2;
        return;
    }
    
    if (arg5)
    {
        *arg1 = 4;
        arg1[1] = arg6;
        *(arg1 + 8) = arg4;
        *(arg1 + 0x10) = arg2;
        return;
    }
    
    *arg1 = 3;
    arg1[1] = arg6;
    *(arg1 + 8) = arg4;
    *(arg1 + 0x10) = arg2;
}
