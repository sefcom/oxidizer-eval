
  void* uu_dd::parseargs::get_ctable::h8e7446a764b1d972(char arg1, char arg2)

{
    if (arg1 == 3)
    {
        if (arg2 != 2)
        {
            if (!(arg2 & 1))
                return &data_422fd5[0x50];
            
            return &data_423125;
        }
        
        return 0;
    }
    
    if (arg2 == 2)
        return *(&data_423928 + (arg1 << 2)) + &data_423928;
    
    if (arg1 == 2)
    {
        if (!(arg2 & 1))
            return &data_423625;
        
        return &data_423525;
    }
    
    if (arg1 == 1)
    {
        if (!(arg2 & 1))
            return &data_423725;
        
        return &data_423825;
    }
    
    if (!(arg2 & 1))
        return &data_423525;
    
    return &data_423625;
}
