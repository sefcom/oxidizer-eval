
  fn bat::controller::Controller::print_file::hf96ad44d7a2ebb76(arg1: *mut i8, arg2: *mut *mut c_void, arg3: i64, arg4: *mut c_void, arg5: i64, arg6: *mut c_void, arg7: i8, arg8: *mut i64) -> *mut i8

{
    let mut rax_1: i8;
    
    if *arg6.byte_offset(0x38) == 0
    {
        rax_1 = bat::style::StyleComponents::header::hf7c3a1f0ba3f090b(0xc0 + *arg2);
    }
    
    let mut var_f0: i8;
    
    if *arg6.byte_offset(0x38) != 0 || rax_1 != 0
    {
        (*arg4.byte_offset(0x18))(&var_f0, arg3, arg5, arg6, arg7);
    }
    
    let var_e0: i128;
    let var_d0: i128;
    let var_c0: i128;
    let var_b0: i128;
    
    if (*arg6.byte_offset(0x38) != 0 || rax_1 != 0) && var_f0 != 0xd
    {
        'label_83820e:
        *arg1.byte_offset(0x40) = var_b0;
        let zmm0_1: i128 = var_f0;
        *arg1.byte_offset(0x30) = var_c0;
        *arg1.byte_offset(0x20) = var_d0;
        *arg1.byte_offset(0x10) = var_e0;
        *arg1 = zmm0_1;
    }
    else
    {
        if *arg6.byte_offset(0x38) == 0
        {
            goto 'label_8381f9;
        }
        
        let r12_1: *mut c_void = *arg2;
        let mut var_80: i64;
        
        if !(0 + -(*r12_1.byte_offset(0x90)))
        {
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hc377ab5fa0151b10(&var_80, *r12_1.byte_offset(0x98), *r12_1.byte_offset(0xa0));
            let var_68_1: i128 = *r12_1.byte_offset(0xa8);
            let var_58_1: i64 = *r12_1.byte_offset(0xb8);
        }
        else
        {
            let r12_2: i64 = *r12_1.byte_offset(0x98);
            let mut var_108: i64 = 0;
            let var_100_1: i64 = 8;
            let var_f8_1: i64 = 0;
            
            if *arg8 != 0
            {
                hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::iter::h0b41fddabc84cd4c(&var_f0, 
                    arg8);
                
                for let mut i: *mut i32 = _$LT$hashbrown..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h55f28d1a37c5a9fe(&var_f0); i != 0; i = _$LT$hashbrown..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h55f28d1a37c5a9fe(&var_f0)
                {
                    let rax_2: u64 = *i;
                    let mut rax_3: i64 = rax_2 - r12_2;
                    
                    if rax_2 < r12_2
                    {
                        rax_3 = 0;
                    }
                    
                    let mut var_50: i64 = 0;
                    let var_48_1: i64 = rax_3;
                    let var_40_1: i64 = 0;
                    let var_38_1: i64 = r12_2 + rax_2;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hf3617d4a656b50d0(&var_108, &var_50);
                }
            }
            
            bat::line_range::LineRanges::from::h4ce85643fa8989ac(&var_80, &var_108);
        }
        
        bat::controller::Controller::print_file_ranges::h7b39e9e16e4bf9c7(&var_f0, r12_1, arg3, 
            *arg4.byte_offset(0x28), *arg4.byte_offset(0x30), arg5, arg5, arg6.byte_offset(0x28), 
            &var_80);
        let var_78: i64;
        
        if var_f0 != 0xd
        {
            *arg1.byte_offset(0x40) = var_b0;
            let zmm0_3: i128 = var_f0;
            *arg1.byte_offset(0x30) = var_c0;
            *arg1.byte_offset(0x20) = var_d0;
            *arg1.byte_offset(0x10) = var_e0;
            *arg1 = zmm0_3;
            core::ptr::drop_in_place$LT$bat..line_range..LineRanges$GT$::h7115aa6cfb62384c(var_80, 
                var_78);
        }
        else
        {
            core::ptr::drop_in_place$LT$bat..line_range..LineRanges$GT$::h7115aa6cfb62384c(var_80, 
                var_78);
            'label_8381f9:
            (*arg4.byte_offset(0x20))(&var_f0, arg3, arg5, arg6);
            
            if var_f0 != 0xd
            {
                goto 'label_83820e;
            }
            
            *arg1 = 0xd;
        }
    }
    arg1
}
