
  fn bat::vscreen::EscapeSequenceOffsetsIterator::next_osc::hafe287645ca442b5(arg1: *mut i64, arg2: *mut c_void, arg3: i64) -> i64

{
    let mut rax: i64 = *arg2.byte_offset(0x28);
    let mut rbp: i32 = *arg2.byte_offset(0x30);
    *arg2.byte_offset(0x30) = 0x110001;
    
    if rbp == 0x110001
    {
        let mut rdx: i32;
        rax = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(arg2.byte_offset(0x10));
        rbp = rdx;
    }
    
    if rbp == 0x110000
    {
        core::option::expect_failed::h3f620cfb8545dc61("to not be finishedthis should no…");
        /* no return */
    }
    
    let mut var_70: i32;
    let mut rdi_1: *mut i32 = &var_70;
    let mut result: i64;
    let mut result_1: i64;
    
    loop
    {
        bat::vscreen::EscapeSequenceOffsetsIterator::chars_take_while::hb0c8fb03173e56da(rdi_1, 
            arg2);
        
        if var_70 != 1
        {
            result = *arg2.byte_offset(8);
            result_1 = result;
            break;
        }
        
        let result_2: i64;
        result_1 = result_2;
        let mut rax_1: i64 = *arg2.byte_offset(0x28);
        let mut rdx_1: i32 = *arg2.byte_offset(0x30);
        *arg2.byte_offset(0x30) = 0x110001;
        
        if rdx_1 == 0x110001
        {
            rax_1 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(arg2.byte_offset(0x10));
        }
        
        if rdx_1 == 0x110000
        {
            result = result_1;
            break;
        }
        
        if rdx_1 != 7
        {
            if rdx_1 != 0x1b
            {
                let mut var_8c: i32 = rdx_1;
                let mut var_40: *mut i32 = &var_8c;
                let var_38: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                    _$LT$char$u20$as$u20$core..fmt..Debug$GT$::fmt::h3216ceddb89fec0b;
                var_70 = &data_acee50;
                let var_68: i64 = 1;
                let var_50: i64 = 0;
                let var_60: *mut *mut i32 = &var_40;
                let var_58: i64 = 1;
                core::panicking::panic_fmt::h96f341d36638c225(&var_70);
                /* no return */
            }
            
            let mut rcx_1: i64 = *arg2.byte_offset(0x28);
            let mut rdx_2: i32 = *arg2.byte_offset(0x30);
            *arg2.byte_offset(0x30) = 0x110001;
            
            if rdx_2 == 0x110001
            {
                let mut rax_2: i64;
                rax_2 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(arg2.byte_offset(0x10));
                rcx_1 = rax_2;
            }
            
            if rdx_2 == 0x5c
            {
                result = rcx_1 + 1;
                break;
            }
            
            rdi_1 = &var_70;
            
            if rdx_2 != 0x110000
            {
                continue;
            }
        }
        
        result = rax_1 + 1;
        break;
    }
    
    let mut rcx_2: i64 = 1;
    
    if rbp >= 0x80
    {
        rcx_2 = 2;
        
        if rbp >= 0x800
        {
            rcx_2 = 4 - 0;
        }
    }
    
    *arg1 = 3;
    arg1[1] = arg3;
    arg1[2] = rcx_2 + rax;
    arg1[3] = result_1;
    arg1[4] = result;
    result
}
