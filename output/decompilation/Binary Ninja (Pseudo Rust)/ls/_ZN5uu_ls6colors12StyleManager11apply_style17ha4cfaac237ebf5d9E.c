
  fn uu_ls::colors::StyleManager::apply_style::ha4cfaac237ebf5d9(arg1: *mut i128, arg2: *mut i64, arg3: *mut i128, arg4: *mut i64, arg5: i8) -> i64

{
    let mut var_88: i64 = 0;
    let var_80: i64 = 1;
    let result: i64 = 0;
    let mut var_a8: i128;
    let var_98: i64;
    
    if arg2[1] == 2
    {
        let rax_1: *mut i8 =
            uu_ls::colors::StyleManager::get_normal_style::h68940fba9ff7dfe3(*arg2);
        
        if rax_1 != 0
        {
            let rcx: i8 = *rax_1;
            let rdx: i32 = *rax_1.byte_offset(0x11);
            let zmm0: i128 = *rax_1.byte_offset(1);
            
            if rcx != 2
            {
                let mut var_45: i8 = rcx;
                let var_44_1: i128 = zmm0;
                let var_34_1: i32 = rdx;
                uu_ls::colors::StyleManager::get_style_code::hd26268f81da97ace(&var_a8, arg2, 
                    &var_45);
                let rsi_1: i64 = *var_a8[8];
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_88, rsi_1, var_98 + rsi_1);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_a8);
            }
        }
    }
    
    let mut rbx: i64;
    
    if arg3 == 0
    {
        let rax_4: *mut i128 =
            uu_ls::colors::StyleManager::get_normal_style::h68940fba9ff7dfe3(*arg2);
        
        if rax_4 == 0
        {
            rbx = 0;
        }
        else
        {
            var_a8 = *rax_4;
            *var_a8[0xd] = *rax_4.byte_offset(0xd);
            
            if var_a8 == 2
            {
                rbx = 0;
            }
            else if uu_ls::colors::StyleManager::is_current_style::haceb8fa00830989f(arg2, &var_a8)
                == 0
            {
                rbx = 0;
            }
            else
            {
                let mut rdx_5: *mut c_void;
                let mut rsi_5: *const i8;
                
                if arg2[1] != 2
                {
                    *arg2.byte_offset(0x1d) = 1;
                    arg2[1] = 2;
                    rsi_5 = "\x1b[0mnameSJMTYDDTACDTBDSTCyanW…";
                    rdx_5 = 4;
                }
                else
                {
                    rsi_5 = 1;
                    rdx_5 = nullptr;
                }
                
                rbx = 1;
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_88, rsi_5, rdx_5.byte_offset(rsi_5));
            }
        }
    }
    else
    {
        if uu_ls::colors::StyleManager::is_current_style::haceb8fa00830989f(arg2, arg3) == 0
        {
            let mut rdx_4: *mut c_void;
            let mut rsi_3: *const i8;
            
            if arg2[1] != 2 || *arg2.byte_offset(0x1d) == 0
            {
                *arg2.byte_offset(0x1d) = 1;
                arg2[1] = 2;
                rsi_3 = "\x1b[0mnameSJMTYDDTACDTBDSTCyanW…";
                rdx_4 = 4;
            }
            else
            {
                rdx_4 = nullptr;
                rsi_3 = 1;
            }
            
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_88, rsi_3, rdx_4.byte_offset(rsi_3));
            uu_ls::colors::StyleManager::get_style_code::hd26268f81da97ace(&var_a8, arg2, arg3);
            let rsi_7: i64 = *var_a8[8];
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_88, rsi_7, var_98 + rsi_7);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_a8);
        }
        
        rbx = 0;
    }
    
    let mut r13: *mut c_void = "\x1b[Kprint any security context…";
    let mut r14_1: *const i8 = 1;
    
    if arg5 == 0
    {
        r13 = 1;
    }
    
    var_a8 = var_88;
    std::ffi::os_str::OsString::push::h7ae4c515aa982082(&var_a8, arg4);
    rbx = !rbx;
    let mut rdx_10: i64;
    
    if (rbx & arg2[1] == 2) != 0
    {
        rdx_10 = 0;
    }
    else
    {
        *arg2.byte_offset(0x1d) = 1;
        arg2[1] = 2;
        r14_1 = "\x1b[0mnameSJMTYDDTACDTBDSTCyanW…";
        rdx_10 = 4;
    }
    
    std::ffi::os_str::OsString::push::h8d27602952d812af(&var_a8, r14_1, rdx_10);
    std::ffi::os_str::OsString::push::h8d27602952d812af(&var_a8, r13, arg5 * 3);
    arg1[1] = result;
    *arg1 = var_a8;
    result
}
