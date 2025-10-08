
  fn uu_fmt::parasplit::WordSplit::analyze_tabs::h5937186af9af362e(arg1: *mut i64, arg2: *mut c_void, arg3: i64, arg4: i64) -> i64

{
    let mut var_48: i64 = arg3;
    let var_40: i64 = arg4 + arg3;
    let var_38: i64 = 0;
    let mut rbp: i64 = 0;
    
    loop
    {
        let mut r15_1: i64 = 0;
        let mut result: i64;
        let mut rdx: i32;
        result = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(&var_48);
        
        if rdx == 0x20
        {
            break;
        }
        
        loop
        {
            let mut var_50: i64;
            let mut rcx_3: i64;
            
            if rdx == 0x110000
            {
                rcx_3 = 0;
            }
            else
            {
                if rdx - 9 < 5
                {
                    if rdx == 9
                    {
                        if rbp == 0
                        {
                            rbp = 1;
                            var_50 = r15_1;
                            break;
                        }
                        
                        let rcx_2: i64 = *arg2.byte_offset(0x40);
                        
                        if rcx_2 == 0
                        {
                            core::panicking::panic_const::panic_const_div_by_zero::hc7d962fcb87948a3();
                            /* no return */
                        }
                        
                        let mut r15_2: u64;
                        
                        if (r15_1 | rcx_2) >> 0x20 == 0
                        {
                            r15_2 = COMBINE(0, r15_1) / rcx_2;
                        }
                        else
                        {
                            r15_2 = COMBINE(0, r15_1) / rcx_2;
                        }
                        
                        r15_1 = (r15_2 + 1) * rcx_2;
                        rbp = 1;
                        result = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(&var_48);
                        
                        if rdx != 0x20
                        {
                            continue;
                        }
                    }
                    
                    goto 'label_4638d5;
                }
                
                let mut rax_1: u8;
                
                if rdx >= 0x80
                {
                    rax_1 =
                        core::unicode::unicode_data::white_space::lookup::hae563f9e204d99ae(rdx);
                }
                
                if rdx >= 0x80 && rax_1 != 0
                {
                    'label_4638d5:
                    r15_1 += 1;
                    result = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(&var_48);
                    
                    if rdx == 0x20
                    {
                        break;
                    }
                    
                    continue;
                }
                else
                {
                    rcx_3 = 1;
                }
            }
            
            *arg1 = rbp;
            arg1[1] = var_50;
            arg1[2] = r15_1;
            arg1[3] = rcx_3;
            arg1[4] = result;
            return result;
        }
    }
    
    goto 'label_4638d5;
}
