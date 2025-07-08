
  fn uu_wc::process_chunk::h254e168771af4227(arg1: u64, arg2: i64, arg3: i64, arg4: *mut i64, arg5: *mut i8) -> i64

{
    let mut var_40: i64 = arg2;
    let var_38: i64 = arg2 + arg3;
    let mut var_64: i8 = *arg5;
    let mut r13: i64 = *arg4;
    let mut rax_1: i32;
    let mut rdx: i32;
    rax_1 = core::str::validations::next_code_point::hb01acf43b4359c77(&var_40, arg1);
    let mut rbp: i64;
    
    if rax_1 == 0
    {
        rbp = *(arg1 + 0x20);
    }
    else
    {
        let mut r14_1: i32 = rdx;
        let mut var_60_1: i64 = *(arg1 + 0x18);
        rbp = *(arg1 + 0x20);
        let mut r15_1: i64 = *(arg1 + 0x10);
        let mut r12_2: i64 = *(arg1 + 8) + 1;
        let mut i: i32;
        
        do
        {
            let mut rax_8: bool;
            
            if r14_1 - 9 >= 5 && r14_1 != 0x20 && r14_1 >= 0x80
            {
                rax_8 = core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(r14_1);
            }
            
            if r14_1 - 9 < 5 || r14_1 == 0x20 || (r14_1 >= 0x80 && rax_8 != 0)
            {
                *arg5 = 0;
                var_64 = 0;
            }
            else if var_64 == 0
            {
                *arg5 = 1;
                let mut rax_11: i64 = var_60_1 + 1;
                var_60_1 = rax_11;
                *(arg1 + 0x18) = rax_11;
                rax_11 = 1;
                var_64 = rax_11;
            }
            
            if r14_1 - 0xc < 2
            {
                'label_4ba420:
                let rax_7: i64 = core::cmp::max_by::h29d87775ffd58160(r13, rbp);
                rbp = rax_7;
                *(arg1 + 0x20) = rax_7;
                r13 = 0;
                'label_4ba4b1:
                *arg4 = r13;
                
                if r14_1 == 0xa
                {
                    r15_1 += 1;
                    *(arg1 + 0x10) = r15_1;
                }
            }
            else
            {
                if r14_1 != 9
                {
                    if r14_1 == 0xa
                    {
                        goto 'label_4ba420;
                    }
                    
                    let mut rax_12: u64;
                    
                    if r14_1 < 0x7f
                    {
                        rax_12 = r14_1 >= 0x20;
                    }
                    else if r14_1 <= 0x9f
                    {
                        rax_12 = 0;
                    }
                    else
                    {
                        rax_12 = unicode_width::tables::charwidth::lookup_width::hfd0b3b0958e151ec(
                            r14_1);
                    }
                    
                    r13 += rax_12;
                    goto 'label_4ba4b1;
                }
                
                r13 = (r13 & 0xfffffffffffffff8) + 8;
                *arg4 = r13;
            }
            
            *(arg1 + 8) = r12_2;
            let mut rdx_1: i32;
            i = core::str::validations::next_code_point::hb01acf43b4359c77(&var_40, arg1);
            r14_1 = rdx_1;
            r12_2 += 1;
        } while i != 0;
    }
    
    *arg1 += arg3;
    let result: i64 = core::cmp::max_by::h29d87775ffd58160(r13, rbp);
    *(arg1 + 0x20) = result;
    result
}
