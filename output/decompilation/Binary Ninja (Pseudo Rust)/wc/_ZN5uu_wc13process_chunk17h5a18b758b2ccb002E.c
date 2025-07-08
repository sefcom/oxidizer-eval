
  fn uu_wc::process_chunk::h5a18b758b2ccb002(arg1: *mut i64, arg2: i64, arg3: i64, arg4: *mut i64, arg5: *mut i8) -> i64

{
    let mut var_40: i64 = arg2;
    let var_38: i64 = arg2 + arg3;
    let mut rbx: u64 = *arg5;
    let mut r13: i64 = *arg4;
    let mut rax: i32;
    let mut rdx: i32;
    rax = core::str::validations::next_code_point::hb01acf43b4359c77(&var_40, rbx);
    let mut rbp_1: i64;
    
    if rax == 0
    {
        rbp_1 = arg1[4];
    }
    else
    {
        let mut r14_1: i32 = rdx;
        let mut var_50_1: i64 = arg1[3];
        rbp_1 = arg1[4];
        let mut i: i32;
        
        do
        {
            let mut rax_7: bool;
            
            if r14_1 - 9 >= 5 && r14_1 != 0x20 && r14_1 >= 0x80
            {
                rax_7 = core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(r14_1);
            }
            
            if r14_1 - 9 < 5 || r14_1 == 0x20 || (r14_1 >= 0x80 && rax_7 != 0)
            {
                *arg5 = 0;
                rbx = 0;
            }
            else if rbx == 0
            {
                *arg5 = 1;
                let rcx_1: i64 = var_50_1 + 1;
                var_50_1 = rcx_1;
                arg1[3] = rcx_1;
                rbx = 1;
            }
            
            if r14_1 - 0xc < 2
            {
                'label_4ba78b:
                rbp_1 = core::cmp::max_by::h29d87775ffd58160(r13, rbp_1);
                arg1[4] = rbp_1;
                r13 = 0;
            }
            else if r14_1 == 9
            {
                r13 = (r13 & 0xfffffffffffffff8) + 8;
            }
            else
            {
                if r14_1 == 0xa
                {
                    goto 'label_4ba78b;
                }
                
                let mut rax_6: u64;
                
                if r14_1 < 0x7f
                {
                    rax_6 = r14_1 >= 0x20;
                }
                else if r14_1 <= 0x9f
                {
                    rax_6 = 0;
                }
                else
                {
                    rax_6 =
                        unicode_width::tables::charwidth::lookup_width::hfd0b3b0958e151ec(r14_1);
                }
                
                r13 += rax_6;
            }
            
            *arg4 = r13;
            let mut rdx_1: i32;
            i = core::str::validations::next_code_point::hb01acf43b4359c77(&var_40, rbx);
            r14_1 = rdx_1;
        } while i != 0;
    }
    
    *arg1 += arg3;
    let result: i64 = core::cmp::max_by::h29d87775ffd58160(r13, rbp_1);
    arg1[4] = result;
    result
}
