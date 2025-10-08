
  fn bat::assets::HighlightingAssets::get_first_line_syntax::h6c56271b9f5531af(arg1: *mut i8, arg2: *mut i64, arg3: i64, arg4: u64) -> u64

{
    let mut result_1: i8;
    bat::assets::HighlightingAssets::get_syntax_set::h9a5acb7c2790c837(&result_1, arg2);
    let mut result: u64 = result_1;
    let mut var_a0: *mut c_void;
    let var_98: i128;
    
    if result != 0xd
    {
        let var_a7: i32;
        *arg1.byte_offset(4) = var_a7;
        *arg1.byte_offset(1) = var_a7;
        let var_88: i128;
        *arg1.byte_offset(0x20) = var_88;
        let var_78: i128;
        *arg1.byte_offset(0x30) = var_78;
        let var_68: i128;
        *arg1.byte_offset(0x40) = var_68;
        *arg1.byte_offset(0x10) = var_98;
        *arg1 = result;
        *arg1.byte_offset(8) = var_a0;
    }
    else
    {
        let r14_1: *mut c_void = var_a0;
        let mut var_40: ();
        _$LT$$RF$str$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h0eee6798dc8ee10d(
            &var_40, arg3, arg4);
        alloc::string::String::from_utf8::hcb4419710bc0e60b(&result_1, &var_40);
        
        if !(0 + -(result_1))
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$alloc..string..FromUtf8Error$GT$$GT$::h0a588ef4664a090f(&result_1);
            result = 0;
        }
        else
        {
            let rax: *mut c_void = var_a0;
            
            if rax == -0x8000000000000000
            {
                result = 0;
            }
            else
            {
                var_a0 = var_98;
                result_1 = rax;
                result = bat::assets::HighlightingAssets::get_first_line_syntax::_$u7b$$u7b$closure$u7d$$u7d$::h1202d514bb2ef4da(r14_1, &result_1);
                
                if result == 0
                {
                    result = 0;
                }
            }
        }
        
        *arg1.byte_offset(8) = result;
        *arg1.byte_offset(0x10) = r14_1;
        *arg1 = 0xd;
    }
    result
}
