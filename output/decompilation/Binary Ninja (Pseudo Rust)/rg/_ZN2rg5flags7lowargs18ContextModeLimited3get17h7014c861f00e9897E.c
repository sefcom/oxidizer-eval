
  fn rg::flags::lowargs::ContextModeLimited::get::h7014c861f00e9897(arg1: *mut c_void) -> i64

{
    let mut result: i64;
    
    if *arg1.byte_offset(0x20) == 0
    {
        result = 0;
        
        if *arg1 != 0
        {
            result = *arg1.byte_offset(8);
        }
    }
    else
    {
        result = *arg1.byte_offset(0x28);
        
        if *arg1 != 0
        {
            result = *arg1.byte_offset(8);
        }
    }
    
    if *arg1.byte_offset(0x10) == 0
    {
        return result;
    }
    
    *arg1.byte_offset(0x18);
    result
}
