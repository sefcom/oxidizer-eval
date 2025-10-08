
  fn uu_ls::parse_width::h699105a2614aa38f(arg1: *mut i64, arg2: *mut c_void) -> u16

{
    let mut result: u16;
    
    if arg2 == 0
    {
        let mut var_28: i64;
        std::env::var_os::h584be2191f4a6db4(&var_28, "COLUMNS: ignoring invalid width …");
        
        if var_28 != -0x8000000000000000
        {
            result = uu_ls::parse_width::_$u7b$$u7b$closure$u7d$$u7d$::h834e84f58277f74a(&var_28);
        }
        else
        {
            let rax_1: i32 = terminal_size::unix::terminal_size::h0533c5cb6376a2e5();
            result = 0x50;
            
            if (rax_1 & 1) != 0
            {
                result = rax_1 >> 0x10;
            }
        }
    }
    else
    {
        let mut var_58: i64;
        uu_ls::parse_width::_$u7b$$u7b$closure$u7d$$u7d$::hbcfe9c82ddd5108a(&var_58, 
            *arg2.byte_offset(8), *arg2.byte_offset(0x10));
        let rcx_1: i64 = var_58;
        let result_1: u16;
        result = result_1;
        
        if rcx_1 != -0x7ffffffffffffffa
        {
            let var_30: i64;
            arg1[5] = var_30;
            let var_3e: i128;
            *arg1.byte_offset(0x1a) = var_3e;
            let var_4e: i128;
            *arg1.byte_offset(0xa) = var_4e;
            *arg1 = rcx_1;
            arg1[1] = result;
            return result;
        }
    }
    
    arg1[1] = result;
    *arg1 = -0x7ffffffffffffffa;
    result
}
