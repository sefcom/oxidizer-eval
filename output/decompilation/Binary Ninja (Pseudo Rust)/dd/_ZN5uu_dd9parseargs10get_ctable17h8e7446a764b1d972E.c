
  fn uu_dd::parseargs::get_ctable::h8e7446a764b1d972(arg1: i8, arg2: i8) -> *mut c_void

{
    if arg1 == 3
    {
        if arg2 != 2
        {
            if (arg2 & 1) == 0
            {
                return &data_422fd5[0x50];
            }
            
            return &data_423125;
        }
        
        return 0;
    }
    
    if arg2 == 2
    {
        return *(&data_423928).byte_offset(arg1 << 2) + &data_423928;
    }
    
    if arg1 == 2
    {
        if (arg2 & 1) == 0
        {
            return &data_423625;
        }
        
        return &data_423525;
    }
    
    if arg1 == 1
    {
        if (arg2 & 1) == 0
        {
            return &data_423725;
        }
        
        return &data_423825;
    }
    
    if (arg2 & 1) == 0
    {
        return &data_423525;
    }
    
    &data_423625
}
