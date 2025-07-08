
  fn uu_env::string_parser::StringParser::get_chunk_with_length_at::h8f36f3de6fe605ad(arg1: *mut i64, arg2: *mut i64, arg3: i64) -> i64

{
    let rdx: i64 = arg2[1];
    
    if rdx < arg3
    {
        let mut var_78: *mut *mut [i8; 0xcd] = &data_548e80;
        let var_70: i64 = 1;
        let var_68: i64 = 8;
        let var_60: i128 = {0};
        core::panicking::panic_fmt::he12d0d7468628bb4(&var_78);
        /* no return */
    }
    
    let mut var_48: ();
    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::split_at_unchecked::ha4016ee41c394a20(&var_48, 
        *arg2, rdx, arg3);
    let var_30: i64;
    let mut result: i64;
    
    if var_30 == 0
    {
        arg1[1] = arg2[4];
        arg1[2] = 0;
        result = 1;
    }
    else
    {
        let var_38: *mut i8;
        let mut rax: i32;
        let mut rdx_1: i8;
        rax = uu_env::native_int_str::get_char_from_native_int::hd9478fe3e880cfe1(*var_38);
        
        if rax != 0x110000
        {
            arg1[1] = 0;
            arg1[2] = rax;
            *arg1.byte_offset(0x14) = rdx_1;
            arg1[3] = 1;
        }
        else
        {
            let mut r12_1: i64 = 1;
            
            if var_30 != 1
            {
                while uu_env::native_int_str::get_char_from_native_int::hd9478fe3e880cfe1(var_38[
                    r12_1]) == 0x110000
                {
                    r12_1 += 1;
                    
                    if var_30 == r12_1
                    {
                        r12_1 = var_30;
                        break;
                    }
                }
            }
            
            let mut rax_2: i64;
            let mut rdx_3: i64;
            rax_2 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hd44f9eb63a52136c(r12_1, var_38, var_30);
            arg1[1] = rax_2;
            arg1[2] = rdx_3;
            arg1[3] = rdx_3;
        }
        
        result = 0;
    }
    
    *arg1 = result;
    result
}
