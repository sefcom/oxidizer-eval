
  fn uu_wc::process_chunk::h568cd2adea1b4e66(arg1: u64, arg2: i64, arg3: i64, arg4: *mut i64) -> i64

{
    let mut var_40: i64 = arg2;
    let var_38: i64 = arg2 + arg3;
    let mut r12: i64 = *arg4;
    let mut rax: i32;
    let mut rdx: i32;
    rax = core::str::validations::next_code_point::hb01acf43b4359c77(&var_40, arg1);
    let mut r13: i64;
    
    if rax == 0
    {
        r13 = *(arg1 + 0x20);
    }
    else
    {
        let mut r14_1: i32 = rdx;
        r13 = *(arg1 + 0x20);
        let mut r15_1: i64 = *(arg1 + 0x10);
        let mut rbp_2: i64 = *(arg1 + 8) + 1;
        let mut i: i32;
        
        do
        {
            if r14_1 - 0xc < 2
            {
                'label_4ba693:
                let rax_3: i64 = core::cmp::max_by::h29d87775ffd58160(r12, r13);
                r13 = rax_3;
                *(arg1 + 0x20) = rax_3;
                r12 = 0;
                'label_4ba6d2:
                *arg4 = r12;
                
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
                        goto 'label_4ba693;
                    }
                    
                    let mut rax_4: u64;
                    
                    if r14_1 < 0x7f
                    {
                        rax_4 = r14_1 >= 0x20;
                    }
                    else if r14_1 <= 0x9f
                    {
                        rax_4 = 0;
                    }
                    else
                    {
                        rax_4 = unicode_width::tables::charwidth::lookup_width::hfd0b3b0958e151ec(
                            r14_1);
                    }
                    
                    r12 += rax_4;
                    goto 'label_4ba6d2;
                }
                
                r12 = (r12 & 0xfffffffffffffff8) + 8;
                *arg4 = r12;
            }
            
            *(arg1 + 8) = rbp_2;
            let mut rdx_1: i32;
            i = core::str::validations::next_code_point::hb01acf43b4359c77(&var_40, arg1);
            r14_1 = rdx_1;
            rbp_2 += 1;
        } while i != 0;
    }
    
    *arg1 += arg3;
    let result: i64 = core::cmp::max_by::h29d87775ffd58160(r12, r13);
    *(arg1 + 0x20) = result;
    result
}
