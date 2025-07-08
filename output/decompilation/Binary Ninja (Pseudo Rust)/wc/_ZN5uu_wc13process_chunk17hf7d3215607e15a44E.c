
  fn uu_wc::process_chunk::hf7d3215607e15a44(arg1: u64, arg2: i64, arg3: i64, arg4: *mut i8) -> i64

{
    let mut var_40: i64 = arg2;
    let var_38: i64 = arg2 + arg3;
    let mut rbp: i8 = *arg4;
    let mut rax: i32;
    let mut rdx: i32;
    rax = core::str::validations::next_code_point::hb01acf43b4359c77(&var_40, arg1);
    
    if rax != 0
    {
        let mut r13_1: i32 = rdx;
        let mut r14_1: i64 = *(arg1 + 0x10);
        let mut var_50_1: i64 = *(arg1 + 0x18);
        let mut i: i32;
        
        do
        {
            let mut rax_3: bool;
            
            if r13_1 - 9 >= 5 && r13_1 != 0x20 && r13_1 >= 0x80
            {
                rax_3 = core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(r13_1);
            }
            
            if r13_1 - 9 < 5 || r13_1 == 0x20 || (r13_1 >= 0x80 && rax_3 != 0)
            {
                *arg4 = 0;
                rbp = 0;
            }
            else if rbp == 0
            {
                *arg4 = 1;
                let rax_5: i64 = var_50_1 + 1;
                var_50_1 = rax_5;
                *(arg1 + 0x18) = rax_5;
                rbp = 1;
            }
            
            if r13_1 == 0xa
            {
                r14_1 += 1;
                *(arg1 + 0x10) = r14_1;
            }
            
            let mut rdx_1: i32;
            i = core::str::validations::next_code_point::hb01acf43b4359c77(&var_40, arg1);
            r13_1 = rdx_1;
        } while i != 0;
    }
    
    *arg1 += arg3;
    let result: i64 = core::cmp::max_by::h29d87775ffd58160(0, *(arg1 + 0x20));
    *(arg1 + 0x20) = result;
    result
}
