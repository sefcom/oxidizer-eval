
  fn alacritty::display::hint::HintMatch::text::hf53bb1160cfc75db(arg1: *mut i64, arg2: *mut i64, arg3: *mut c_void) -> *mut *mut c_void

{
    let r13: *mut c_void = *arg2;
    let mut result: *mut *mut c_void;
    let mut var_70: *mut c_void;
    let var_68: i64;
    let var_60: i32;
    let var_58: i64;
    let result_1: i8;
    
    if r13 == 0
    {
        result = arg2[1];
        let rsi_3: *mut c_void = result[0x1a];
        
        if rsi_3 != 0
        {
            alacritty::config::ui_config::LazyRegex::with_compiled::h71053cda438c1f6a(&var_70, 
                rsi_3, arg3, arg2);
            result = result_1;
            
            if result != 3 && result != 2
            {
                let rcx_5: i32 = var_68;
                
                if rcx_5 == arg2[3]
                {
                    let rdx_3: *mut c_void = var_70;
                    
                    if rdx_3 == arg2[2]
                    {
                        let r9_1: i32 = var_58;
                        
                        if r9_1 == arg2[5]
                        {
                            let r8_1: i64 = var_60;
                            
                            if r8_1 == arg2[4]
                            {
                                result ^= arg2[6];
                                
                                if (result & 1) == 0
                                {
                                    /* tailcall */
                                    return alacritty_terminal::term::Term$LT$T$GT$::bounds_to_string::h4abdcbf42c50785a(arg1, arg3, rdx_3, rcx_5, r8_1, r9_1);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    else
    {
        let r15_1: i64 = arg2[2];
        let rbp_1: i32 = arg2[3];
        result =
            alacritty::display::hint::hyperlink_at::hdeb5cfdb298cee22(&var_70, arg3, r15_1, rbp_1);
        let var_48: i8;
        
        if var_48 != 2
        {
            let r12_1: *mut c_void = var_70;
            var_70 = r12_1;
            
            if r12_1 != r13
            {
                if alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::hca30ad5d4cfd9901(*r12_1.byte_offset(0x18), *r12_1.byte_offset(0x20), *r13.byte_offset(0x18), 
                    *r13.byte_offset(0x20)) == 0
                {
                    *arg1 = -0x7fffffffffffffff;
                }
                else
                {
                    if alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::hca30ad5d4cfd9901(*r12_1.byte_offset(0x30), *r12_1.byte_offset(0x38), *r13.byte_offset(0x30), 
                        *r13.byte_offset(0x38)) != 0 && var_60 == rbp_1 && var_68 == r15_1
                        && result_1 == arg2[5] && var_58 == arg2[4]
                        && ((var_48 ^ arg2[6]) & 1) == 0
                    {
                        goto 'label_847c89;
                    }
                    
                    *arg1 = -0x7fffffffffffffff;
                }
            }
            else if var_60 != rbp_1 || var_68 != r15_1 || result_1 != arg2[5] || var_58 != arg2[4]
                || ((var_48 ^ arg2[6]) & 1) != 0
            {
                *arg1 = -0x7fffffffffffffff;
            }
            else
            {
                'label_847c89:
                let zmm0_1: i128 = *r13.byte_offset(0x30);
                *arg1 = -0x8000000000000000;
                *arg1.byte_offset(8) = zmm0_1;
            }
            
            return core::ptr::drop_in_place$LT$alacritty_terminal..term..cell..Hyperlink$GT$::hef5f91261f2a2291(&var_70);
        }
    }
    *arg1 = -0x7fffffffffffffff;
    result
}
