
  fn uu_fmt::parasplit::FileLines::compute_indent::h06632d0fc188be5a(arg1: *mut i64, arg2: *mut c_void, arg3: i64, arg4: i64, arg5: i64) -> i64

{
    let mut var_48: i64 = arg3;
    let var_40: i64 = arg4 + arg3;
    let var_38: i64 = 0;
    let mut result: i64;
    let mut rdx: i32;
    result = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(&var_48);
    let mut rbx: i64;
    let mut r12: i64;
    
    if rdx != 0x110000
    {
        let mut rbp_1: i32 = rdx;
        rbx = 0;
        r12 = 0;
        let mut r15_1: *mut c_void = arg2;
        
        loop
        {
            if result == arg5
            {
                rbx = r12;
            }
            
            if result >= arg5
            {
                if rbp_1 == 0x20
                {
                    r12 += uu_fmt::parasplit::char_width::h3a45ed9208a3863c(0x20);
                }
                else
                {
                    if rbp_1 - 9 < 5
                    {
                        goto 'label_462be7;
                    }
                    
                    if rbp_1 < 0x80
                    {
                        break;
                    }
                    
                    r15_1 = arg2;
                    
                    if core::unicode::unicode_data::white_space::lookup::hae563f9e204d99ae(rbp_1)
                        == 0
                    {
                        break;
                    }
                    
                    r12 += uu_fmt::parasplit::char_width::h3a45ed9208a3863c(rbp_1);
                }
            }
            else
            {
                'label_462be7:
                
                if rbp_1 != 9
                {
                    r12 += uu_fmt::parasplit::char_width::h3a45ed9208a3863c(rbp_1);
                }
                else
                {
                    let rcx_1: i64 = *r15_1.byte_offset(0x40);
                    
                    if rcx_1 == 0
                    {
                        core::panicking::panic_const::panic_const_div_by_zero::hc7d962fcb87948a3();
                        /* no return */
                    }
                    
                    let mut r12_1: u64;
                    
                    if (r12 | rcx_1) >> 0x20 == 0
                    {
                        r12_1 = COMBINE(0, r12) / rcx_1;
                    }
                    else
                    {
                        r12_1 = COMBINE(0, r12) / rcx_1;
                    }
                    
                    r12 = (r12_1 + 1) * rcx_1;
                }
            }
            
            let mut rdx_1: i32;
            result = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(&var_48);
            rbp_1 = rdx_1;
            
            if rdx_1 == 0x110000
            {
                result = 0;
                break;
            }
        }
    }
    else
    {
        r12 = 0;
        result = 0;
        rbx = 0;
    }
    
    *arg1 = result;
    arg1[1] = rbx;
    arg1[2] = r12;
    result
}
