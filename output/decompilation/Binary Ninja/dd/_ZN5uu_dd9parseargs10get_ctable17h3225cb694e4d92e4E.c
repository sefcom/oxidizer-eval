
  void* uu_dd::parseargs::get_ctable::h3225cb694e4d92e4(char arg1, char arg2)

{
    if (arg1 == 3)
    {
        if (arg2 != 2)
        {
            if (arg2 & 1)
                return &data_4213c2;
            
            return &data_4212a7[0x1b];
        }
        
        return 0;
    }
    
    if (arg2 == 2)
        return *(&data_4234c4 + (arg1 << 2)) + &data_4234c4;
    
    if (!arg1)
    {
        if (arg2 & 1)
            return &data_4218c2;
        
        return &data_4217c2;
    }
    
    if (arg1 == 1)
    {
        if (arg2 & 1)
            return &data_421ac2;
        
        return &data_4219c2;
    }
    
    if (arg2 & 1)
        return &data_4217c2;
    
    return &data_4218c2;
}
