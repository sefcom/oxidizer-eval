
  fn just::lexer::Lexer::skip::h5c5c7013f42a4f08(arg1: *mut i128, arg2: *mut c_void) -> i64

{
    let mut var_60: i128;
    let mut result: i64 = just::lexer::Lexer::advance::hab928493b22c646a(&var_60, arg2);
    let var_18: i8;
    
    if var_18 == 0x25
    {
        result = just::lexer::Lexer::advance::hab928493b22c646a(&var_60, arg2);
        
        if var_18 == 0x25
        {
            result = just::lexer::Lexer::advance::hab928493b22c646a(&var_60, arg2);
            
            if var_18 == 0x25
            {
                result = just::lexer::Lexer::advance::hab928493b22c646a(&var_60, arg2);
                
                if var_18 == 0x25
                {
                    *arg1.byte_offset(0x48) = 0x25;
                    return result;
                }
            }
        }
    }
    
    let var_20: i128;
    arg1[4] = var_20;
    let zmm0: i128 = var_60;
    let var_30: i128;
    arg1[3] = var_30;
    let var_40: i128;
    arg1[2] = var_40;
    let var_50: i128;
    arg1[1] = var_50;
    *arg1 = zmm0;
    result
}
