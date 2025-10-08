
  fn uu_sort::Line::create::hc44816c329afe8e3(arg1: *mut i64, arg2: *mut i8, arg3: u64, arg4: i64, arg5: *mut i64, arg6: *mut i64, arg7: *mut c_void) -> i64

{
    let mut rcx: u64 = arg3;
    arg6[2] = 0;
    
    if *arg7.byte_offset(0x60) == 0
    {
        if *arg7.byte_offset(0x98) == 0
        {
            goto 'label_4d0b0a;
        }
        
        goto 'label_4d0ad4;
    }
    
    uu_sort::tokenize::h1a0db68099bd818a(arg2, rcx, *arg7.byte_offset(0x78), arg6);
    let mut var_80: *mut i8;
    let mut var_50: i8;
    let var_48: i64;
    let mut rax: i64;
    
    if *arg7.byte_offset(0x98) != 0
    {
        'label_4d0ad4:
        var_80 = arg2;
        rax = *arg7.byte_offset(0x10);
        
        if rax != 0
        {
            'label_4d0b5f:
            let mut rbp_1: *mut i64 = *arg7.byte_offset(8);
            let rdx_2: *mut i64 = arg6[1];
            let r12_1: i64 = arg6[2];
            let mut i_1: i64 = rax * 0x38;
            let mut i: i64;
            
            do
            {
                uu_sort::FieldSelector::get_selection::hf6d6b91f1121e5fa(&var_50, rbp_1, var_80, 
                    rcx, rdx_2, r12_1);
                let r15_1: i64 = var_50;
                let var_38: i8;
                let mut rcx_3: i8 = var_38 - 2;
                
                if var_38 - 2 >= 3
                {
                    rcx_3 = 1;
                }
                
                if rcx_3 == 0
                {
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hc482587e95ace0db(&arg5[6], r15_1, var_48);
                }
                else if rcx_3 == 1
                {
                    let var_40: i64;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hc71adfe4ca61889a(&arg5[3], var_40, var_38);
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h0603c4e988c7cc61(arg5, r15_1, var_48);
                }
                else if *rbp_1.byte_offset(0x37) != 0
                {
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h0603c4e988c7cc61(arg5, r15_1, var_48);
                }
                
                rbp_1 = &rbp_1[7];
                i = i_1;
                i_1 -= 0x38;
            } while i != 0x38;
        }
    }
    else
    {
        'label_4d0b0a:
        let r14_2: *mut i64 = rcx;
        let mut rax_1: i8;
        let mut zmm0_1: i64;
        rax_1 = core::str::pattern::Pattern::is_contained_in::h69d69b5be5063faf(arg2, rcx);
        let mut rsi_2: i64;
        
        if rax_1 == 0
        {
            core::num::dec2flt::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$f64$GT$::from_str::h05023748d9faa6d2(&var_50, arg2, r14_2);
            zmm0_1 = var_48;
            rsi_2 = var_50 ^ 1;
        }
        else
        {
            rsi_2 = 0;
        }
        
        alloc::vec::Vec$LT$T$C$A$GT$::push::h50aa9f54e4d3c0c5(&arg5[9], rsi_2, zmm0_1);
        rcx = r14_2;
        var_80 = arg2;
        rax = *arg7.byte_offset(0x10);
        
        if rax != 0
        {
            goto 'label_4d0b5f;
        }
    }
    *arg1 = var_80;
    arg1[1] = rcx;
    arg1[2] = arg4;
    arg4
}
