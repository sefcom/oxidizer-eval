
  fn uu_fmt::parasplit::FileLines::match_prefix_generic::hd0d8d5b446adcff4(arg1: i64, arg2: u64, arg3: *mut i8, arg4: i64, arg5: i8) -> u64

{
    let rax: i32 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hb830fba2111df73f(arg3, 
        arg4, arg1, arg2);
    let mut rbp_1: i32;
    
    if (arg5 | rax) == 0
    {
        let mut var_48: *mut i8 = arg3;
        let var_40_1: *mut c_void = &arg3[arg4];
        let var_38_1: i64 = 0;
        let mut rax_2: i64;
        let mut i_2: i32;
        rax_2 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(&var_48);
        
        if i_2 != 0x110000
        {
            let mut r13_1: i64 = rax_2;
            let mut i_1: i32 = i_2;
            let mut i: i32;
            
            do
            {
                let mut rax_5: *mut c_void;
                let mut rdx_3: i64;
                rax_5 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(r13_1, arg3, arg4);
                
                if rax_5 == 0
                {
                    core::str::slice_error_fail::h1a2885084e28d077(arg3, arg4, r13_1, arg4);
                    /* no return */
                }
                
                let rax_6: i32 =
                    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hb830fba2111df73f(
                    rax_5, rdx_3, arg1, arg2);
                rbp_1 = rax_6;
                
                if rax_6 != 0
                {
                    break;
                }
                
                if i_1 - 9 >= 5 && i_1 != 0x20
                {
                    if i_1 < 0x80
                    {
                        break;
                    }
                    
                    if core::unicode::unicode_data::white_space::lookup::hae563f9e204d99ae(i_1) == 0
                    {
                        break;
                    }
                }
                
                let mut rax_4: i64;
                rax_4 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(&var_48);
                r13_1 = rax_4;
                i_1 = i;
            } while i != 0x110000;
        }
        else
        {
            rbp_1 = 0;
        }
    }
    else
    {
        rbp_1 = rax;
    }
    
    rbp_1
}
