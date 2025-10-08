
  fn just::lexer::Lexer::accepted::h2b4063f26d19f617(arg1: *mut i8, arg2: *mut c_void, arg3: i32)

{
    if *arg2.byte_offset(0xc0) != arg3
    {
        *arg1 = 0;
        arg1[0x48] = 0x25;
        return;
    }
    
    let mut var_58: i128;
    just::lexer::Lexer::advance::hab928493b22c646a(&var_58, arg2);
    let var_10: i8;
    
    if var_10 == 0x25
    {
        *arg1 = 1;
        arg1[0x48] = 0x25;
        return;
    }
    
    let var_18: i128;
    *arg1.byte_offset(0x40) = var_18;
    let zmm0: i128 = var_58;
    let var_28: i128;
    *arg1.byte_offset(0x30) = var_28;
    let var_38: i128;
    *arg1.byte_offset(0x20) = var_38;
    let var_48: i128;
    *arg1.byte_offset(0x10) = var_48;
    *arg1 = zmm0;
}
