
  fn uu_ls::parse_width::h6c0d34d7a456f903(arg1: *mut i8, arg2: *mut c_void) -> u16

{
    let mut result: u16;
    let mut result_1: i8;
    
    if arg2 == 0
    {
        let mut var_20: i64;
        std::env::var_os::h00ce706604dc1520(&var_20, "COLUMNS: ignoring invalid width …");
        
        if var_20 != -0x8000000000000000
        {
            let var_10: i64;
            let var_48_1: i64 = var_10;
            result_1 = var_20;
            result = uu_ls::parse_width::_$u7b$$u7b$closure$u7d$$u7d$::h0185f2defe4792c8(&result_1);
        }
        else
        {
            let rax_1: i32 = terminal_size::unix::terminal_size::h9cd9ea50976260ba();
            result = 0x50;
            
            if rax_1 != 0
            {
                result = rax_1 >> 0x10;
            }
        }
        
        *arg1.byte_offset(2) = result;
        *arg1 = 7;
    }
    else
    {
        uu_ls::parse_width::_$u7b$$u7b$closure$u7d$$u7d$::h592058b1caa92954(&result_1, 
            *arg2.byte_offset(8), *arg2.byte_offset(0x10));
        result = result_1;
        let result_2: u16;
        
        if result != 7
        {
            let var_24: i32;
            *arg1.byte_offset(0x34) = var_24;
            let var_34: i128;
            *arg1.byte_offset(0x24) = var_34;
            let var_48: i64;
            *arg1.byte_offset(0x14) = *var_48[4];
            let var_54: i128;
            *arg1.byte_offset(4) = var_54;
            *arg1 = result;
            let var_57: i8;
            arg1[1] = var_57;
            *arg1.byte_offset(2) = result_2;
        }
        else
        {
            result = result_2;
            *arg1.byte_offset(2) = result;
            *arg1 = 7;
        }
    }
    result
}
