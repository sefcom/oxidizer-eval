
  fn uu_wc::compute_number_width::h0dc7206969488842(arg1: *mut i64, arg2: *mut c_void) -> i64

{
    let rax: i64 = *arg1;
    let mut result: i64;
    
    if rax == 0
    {
        result = 7;
        
        if uu_wc::Settings::number_enabled::he133dd856851d2dc(arg2) == 1
        {
            return 1;
        }
    }
    else
    {
        result = 1;
        
        if rax == 1
        {
            let rax_1: i32 = uu_wc::Settings::number_enabled::he133dd856851d2dc(arg2);
            let rdx_1: i64 = arg1[3];
            
            if rax_1 != 1 || rdx_1 != 1
            {
                let rax_2: i64 = arg1[2];
                let mut var_f0: i64 = rax_2;
                let var_e8_1: i64 = rax_2 + rdx_1 * 0x18;
                let mut i: *mut i64 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h04bf2145419757f2(&var_f0);
                
                if i != 0
                {
                    result = 1;
                    let mut r14_2: u64 = 0;
                    
                    do
                    {
                        if *i == -0x7fffffffffffffff
                        {
                            result = 7;
                        }
                        else
                        {
                            let mut var_e0: i64;
                            std::fs::metadata::ha24470e461e4d7b2(&var_e0, i);
                            let rdi_4: i64 = var_e0;
                            
                            if rdi_4 != 2
                            {
                                let var_a8: i32;
                                let rax_4: i32 = var_a8 & 0xf000;
                                
                                if rax_4 != 0x8000
                                {
                                    result = 7;
                                }
                                
                                let var_90: i64;
                                let mut rax_5: i64 = var_90;
                                
                                if rax_4 != 0x8000
                                {
                                    rax_5 = 0;
                                }
                                
                                r14_2 += rax_5;
                            }
                            
                            let var_d8: i64;
                            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hc7378430642e479d(rdi_4, var_d8);
                        }
                        
                        i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h04bf2145419757f2(&var_f0);
                    } while i != 0;
                    
                    if r14_2 != 0
                    {
                        /* tailcall */
                        return core::cmp::max_by::h29d87775ffd58160(
                            core::num::int_log10::u64::hf5cf0ae12f20d199(r14_2) + 1, result);
                    }
                }
            }
        }
    }
    
    result
}
