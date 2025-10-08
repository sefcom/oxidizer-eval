
  fn uu_stty::apply_setting::h519146f657897442(arg1: *mut i128, arg2: i64, arg3: u64) -> i64

{
    let mut rbx: i64 = arg2;
    let mut result: i8 = 1;
    
    if uu_stty::apply_baud_rate_flag::he6909650e23d0221(arg1, arg2, arg3) == 2
    {
        let mut var_2c: i32 = 0;
        let mut rax_1: i64;
        let mut rdx_1: u64;
        rax_1 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hd66f2c78bdb8496c(core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(&var_2c), rbx, arg3);
        let mut r15_1: u64 = rdx_1;
        
        if rax_1 != 0
        {
            rbx = rax_1;
        }
        
        if rax_1 == 0
        {
            r15_1 = arg3;
        }
        
        result = uu_stty::apply_flag::he0c99d1085d1e908(arg1, rbx, r15_1, rax_1 != 0);
        
        if result == 2
        {
            result = uu_stty::apply_flag::h3592b40468ad7979(arg1, rbx, r15_1, rax_1 != 0);
            
            if result == 2
            {
                result = uu_stty::apply_flag::ha0fffc5722e8937c(arg1, rbx, r15_1, rax_1 != 0);
                
                if result == 2
                {
                    return uu_stty::apply_flag::h86b64710a2727951(arg1, rbx, r15_1, rax_1 != 0) & 1;
                }
            }
        }
    }
    
    result
}
