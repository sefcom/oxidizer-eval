
  fn uu_wc::process_chunk::h4b4640f516259e48(arg1: u64, arg2: i64, arg3: i64, arg4: *mut i64) -> i64

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
        r13 = *(arg1 + 0x20);
        let mut r14_2: i64 = *(arg1 + 8) + 1;
        let mut i: i32;
        
        do
        {
            if rdx - 0xc < 2
            {
                'label_4ba556:
                let rax_1: i64 = core::cmp::max_by::h29d87775ffd58160(r12, r13);
                r13 = rax_1;
                *(arg1 + 0x20) = rax_1;
                r12 = 0;
            }
            else if rdx == 9
            {
                r12 = (r12 & 0xfffffffffffffff8) + 8;
            }
            else
            {
                if rdx == 0xa
                {
                    goto 'label_4ba556;
                }
                
                let mut rax_3: u64;
                
                if rdx < 0x7f
                {
                    rax_3 = rdx >= 0x20;
                }
                else if rdx <= 0x9f
                {
                    rax_3 = 0;
                }
                else
                {
                    rax_3 = unicode_width::tables::charwidth::lookup_width::hfd0b3b0958e151ec(rdx);
                }
                
                r12 += rax_3;
            }
            
            *arg4 = r12;
            *(arg1 + 8) = r14_2;
            i = core::str::validations::next_code_point::hb01acf43b4359c77(&var_40, arg1);
            r14_2 += 1;
        } while i != 0;
    }
    
    *arg1 += arg3;
    let result: i64 = core::cmp::max_by::h29d87775ffd58160(r12, r13);
    *(arg1 + 0x20) = result;
    result
}
