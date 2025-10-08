
  fn uu_wc::compute_number_width::h8118755960c57c57(arg1: *mut i64, arg2: *mut c_void) -> i64

{
    let rax: i64 = *arg1;
    let mut result: i64;
    
    if rax == 0
    {
        result = 7;
        
        if uu_wc::Settings::number_enabled::h3b82edec78a8e904(arg2) == 1
        {
            return 1;
        }
    }
    else
    {
        result = 1;
        
        if rax == 1
        {
            let rax_1: i32 = uu_wc::Settings::number_enabled::h3b82edec78a8e904(arg2);
            let rdx_1: i64 = arg1[3];
            
            if (rax_1 != 1 || rdx_1 != 1) && rdx_1 != 0
            {
                let mut r14_2: *mut i64 = arg1[2];
                let mut r13_1: i64 = rdx_1 * 0x18;
                result = 1;
                let mut r15_1: u64 = 0;
                
                loop
                {
                    if *r14_2 == -0x7fffffffffffffff
                    {
                        result = 7;
                        r14_2 = &r14_2[3];
                        let temp0_1: i64 = r13_1;
                        r13_1 -= 0x18;
                        
                        if temp0_1 == 0x18
                        {
                            break;
                        }
                    }
                    else
                    {
                        let mut var_e0: i64;
                        std::fs::metadata::hbb43a01f12775689(&var_e0, r14_2);
                        let mut rdi_2: i64 = var_e0;
                        
                        if rdi_2 != 2
                        {
                            let var_a8: i32;
                            let rax_3: i32 = var_a8 & 0xf000;
                            let var_90: i64;
                            let mut rax_4: i64 = var_90;
                            
                            if rax_3 != 0x8000
                            {
                                rax_4 = 0;
                            }
                            
                            if rax_3 != 0x8000
                            {
                                result = 7;
                            }
                            
                            r15_1 += rax_4;
                        }
                        else
                        {
                            rdi_2 = 2;
                        }
                        
                        let var_d8: i64;
                        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h92f497ce60e154e1(rdi_2, var_d8);
                        r14_2 = &r14_2[3];
                        let temp1_1: i64 = r13_1;
                        r13_1 -= 0x18;
                        
                        if temp1_1 == 0x18
                        {
                            break;
                        }
                    }
                }
                
                if r15_1 != 0
                {
                    /* tailcall */
                    return core::cmp::Ord::max::hb785ffe4e6194aaf(
                        core::num::int_log10::u64::h30869b009e92f931(r15_1) + 1, result);
                }
            }
        }
    }
    
    result
}
