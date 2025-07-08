
  fn uu_fmt::parasplit::WordSplit::analyze_tabs::hc55c52ed9a76e808(arg1: *mut i64, arg2: *mut c_void, arg3: i64, arg4: i64) -> i64

{
    let mut var_48: i64 = arg3;
    let var_40: i64 = arg4 + arg3;
    let var_38: i64 = 0;
    let mut rbp: i64 = 0;
    let mut r13: i64 = 1;
    
    loop
    {
        let mut r12_1: i64 = 0;
        
        loop
        {
            let mut result: i64;
            let mut rdx: i32;
            result = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&var_48);
            
            if rdx != 0x20
            {
                let mut var_58: i64;
                
                if rdx == 0x110000
                {
                    r13 = 0;
                    'label_4ba6f7:
                    *arg1 = rbp;
                    arg1[1] = var_58;
                    arg1[2] = r12_1;
                    arg1[3] = r13;
                    arg1[4] = result;
                    return result;
                }
                
                if rdx - 9 >= 5
                {
                    if rdx < 0x80
                    {
                        goto 'label_4ba6f7;
                    }
                    
                    if core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(rdx) == 0
                    {
                        goto 'label_4ba6f7;
                    }
                }
                else if rdx == 9
                {
                    if rbp == 0
                    {
                        rbp = 1;
                        var_58 = r12_1;
                        break;
                    }
                    
                    let rcx_3: i64 = *arg2.byte_offset(0x40);
                    
                    if rcx_3 == 0
                    {
                        core::panicking::panic_const::panic_const_div_by_zero::haded503194f0bf6e();
                        /* no return */
                    }
                    
                    let mut r12_2: u64;
                    
                    if (r12_1 | rcx_3) >> 0x20 == 0
                    {
                        r12_2 = COMBINE(0, r12_1) / rcx_3;
                    }
                    else
                    {
                        r12_2 = COMBINE(0, r12_1) / rcx_3;
                    }
                    
                    r12_1 = (r12_2 + 1) * rcx_3;
                    rbp = 1;
                    continue;
                }
            }
            
            r12_1 += 1;
        }
    }
}
