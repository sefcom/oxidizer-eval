
  fn alacritty::string::StrShortener::new::hcb4d209a7d9df863(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i64, arg5: i32)

{
    let mut r14: u64 = 0x2026;
    
    if arg3 == 0
    {
        r14 = 0x110000;
    }
    
    if arg5 != 0
    {
        *arg1 = arg2;
        arg1[1] = arg3 + arg2;
        *arg1.byte_offset(0x10) = {0};
        arg1[4] = arg4;
        *arg1.byte_offset(0x2c) = arg5;
        arg1[5] = r14;
        *arg1.byte_offset(0x2d) = 3;
        return;
    }
    
    let rdx_1: i64 = arg3 + arg2;
    let mut var_78: i64 = arg2;
    let var_68_1: i64 = 0;
    let mut rax_1: u64;
    let mut i: i32;
    rax_1 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf0ee1104036c3094(&var_78);
    let mut r13_1: i64;
    let mut r15_1: i64;
    
    if i != 0x110000
    {
        let mut rbp_1: u64 = rax_1;
        r13_1 = 0;
        let mut r12_1: i32 = r14;
        r15_1 = 0;
        
        do
        {
            let mut rax_2: u64 = 1;
            
            if i >= 0xa0
            {
                rax_2 = unicode_width::tables::lookup_width::hf99baf8c7b02f1d5(i);
            }
            
            r15_1 += rax_2;
            let c_1: bool = r15_1 < arg4;
            rax_2 = r15_1 != arg4 && !c_1;
            rax_2 = rax_2 - 0;
            
            if rax_2 == 0
            {
                r14 = 0x110000;
                
                if r12_1 != 0x110000
                {
                    let mut var_48: i128 = var_78;
                    let var_38_1: i64 = var_68_1;
                    
                    if _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf0ee1104036c3094(&var_48) != 0x110000
                    {
                        r14 = r12_1;
                        break;
                    }
                }
            }
            else
            {
                r14 = r12_1;
                
                if rax_2 != 0xff
                {
                    r14 = r12_1;
                    break;
                }
            }
            
            r13_1 = rbp_1 + 1;
            let mut rax_4: u64;
            rax_4 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf0ee1104036c3094(&var_78);
            rbp_1 = rax_4;
            r12_1 = r14;
        } while i != 0x110000;
    }
    else
    {
        r13_1 = 0;
        r15_1 = 0;
    }
    
    let mut rax_7: i64;
    let mut rdx_4: i32;
    rax_7 = core::iter::traits::double_ended::DoubleEndedIterator::rfold::h1ee18d0034f37744(var_78, 
        rdx_1, var_68_1, r14);
    let rax_9: i64 =
        core::option::Option$LT$T$GT$::map_or::h0c0d9c4c1c9ad238(rax_7, rdx_4, r13_1) - r13_1;
    let mut rdx_5: i64;
    rdx_5 = r14 == 0x110000;
    rdx_5 |= r15_1 < arg4;
    rdx_5 |= 2;
    *arg1 = arg2;
    arg1[1] = rdx_1;
    arg1[2] = rax_9;
    arg1[3] = 0;
    arg1[4] = arg4;
    *arg1.byte_offset(0x2c) = arg5;
    arg1[5] = r14;
    *arg1.byte_offset(0x2d) = rdx_5;
}
