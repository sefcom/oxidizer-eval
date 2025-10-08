
  fn uu_dd::parseargs::conversion_mode::he1b2907b7b2f438d(arg1: *mut i8, arg2: i64, arg3: i64, arg4: i64, arg5: i8, arg6: i8) -> i64

{
    if arg2 == 0
    {
        if arg3 == 2
        {
            *arg1 = 7;
            return;
        }
        
        if (arg3 & 1) != 0
        {
            *arg1 = 2;
            *arg1.byte_offset(8) = arg4;
            return;
        }
        
        *arg1 = 1;
        arg1[1] = arg6;
        *arg1.byte_offset(8) = arg4;
        return;
    }
    
    if arg3 == 2
    {
        *arg1 = 0;
        *arg1.byte_offset(8) = arg2;
        return;
    }
    
    if (arg3 & 1) != 0
    {
        if arg5 == 0
        {
            *arg1 = 5;
            *arg1.byte_offset(8) = arg4;
            *arg1.byte_offset(0x10) = arg2;
            return;
        }
        
        *arg1 = 6;
        *arg1.byte_offset(8) = arg4;
        *arg1.byte_offset(0x10) = arg2;
        return;
    }
    
    if arg5 != 0
    {
        *arg1 = 4;
        arg1[1] = arg6;
        *arg1.byte_offset(8) = arg4;
        *arg1.byte_offset(0x10) = arg2;
        return;
    }
    
    *arg1 = 3;
    arg1[1] = arg6;
    *arg1.byte_offset(8) = arg4;
    *arg1.byte_offset(0x10) = arg2;
}
