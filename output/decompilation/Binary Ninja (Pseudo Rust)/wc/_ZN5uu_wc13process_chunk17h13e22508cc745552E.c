
  fn uu_wc::process_chunk::h13e22508cc745552(arg1: u64, arg2: i64, arg3: i64, arg4: i64, arg5: *mut i8) -> i64

{
    let mut var_40: i64 = arg2;
    let var_38: i64 = arg2 + arg3;
    let mut r14: i8 = *arg5;
    let mut rax: i8;
    let mut rdx: i32;
    rax = core::str::validations::next_code_point::haf09daf254e30070(&var_40, arg1);
    
    if (rax & 1) != 0
    {
        let mut rbp_1: i32 = rdx;
        let mut r12_1: i64 = *(arg1 + 0x10);
        let mut var_58_1: i64 = *(arg1 + 0x18);
        let mut rax_2: i8;
        
        do
        {
            let mut rax_4: u8;
            
            if rbp_1 - 9 >= 5 && rbp_1 != 0x20 && rbp_1 >= 0x80
            {
                rax_4 = core::unicode::unicode_data::white_space::lookup::hae563f9e204d99ae(rbp_1);
            }
            
            if rbp_1 - 9 < 5 || rbp_1 == 0x20 || (rbp_1 >= 0x80 && rax_4 != 0)
            {
                *arg5 = 0;
                r14 = 0;
            }
            else if (r14 & 1) == 0
            {
                *arg5 = 1;
                let rax_6: i64 = var_58_1 + 1;
                var_58_1 = rax_6;
                *(arg1 + 0x18) = rax_6;
                r14 = 1;
            }
            
            if rbp_1 == 0xa
            {
                r12_1 += 1;
                *(arg1 + 0x10) = r12_1;
            }
            
            let mut rdx_1: i32;
            rax_2 = core::str::validations::next_code_point::haf09daf254e30070(&var_40, arg1);
            rbp_1 = rdx_1;
        } while (rax_2 & 1) != 0;
    }
    
    *arg1 += arg3;
    let result: i64 = core::cmp::Ord::max::hb785ffe4e6194aaf(arg4, *(arg1 + 0x20));
    *(arg1 + 0x20) = result;
    result
}
