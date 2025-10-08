
  fn just::lexer::Lexer::close_delimiter::ha2c6f40e739c3a44(arg1: *mut u64, arg2: *mut c_void, arg3: i8) -> i64

{
    let rax: i64 = *arg2.byte_offset(0x40);
    let mut rax_2: i64;
    
    if rax == 0
    {
        let var_60_1: i8 = arg3;
        rax_2 = -0x7fffffffffffffca;
    }
    else
    {
        *arg2.byte_offset(0x40) = rax - 1;
        let rcx_1: *mut i8 = *arg2.byte_offset(0x38);
        let result: i64 = (rax - 1) << 4;
        let r8_1: i8 = rcx_1[result];
        
        if r8_1 == arg3
        {
            arg1[9] = 0x25;
            return result;
        }
        
        let var_58_1: i8 = arg3;
        let var_57_1: i8 = r8_1;
        let mut var_60: i8;
        var_60 = *rcx_1.byte_offset(result).byte_offset(8);
        rax_2 = -0x7fffffffffffffd5;
    }
    
    let mut var_68: i64 = rax_2;
    just::lexer::Lexer::error::h92eb8a4dd6b17c78(arg1, arg2, &var_68)
}
