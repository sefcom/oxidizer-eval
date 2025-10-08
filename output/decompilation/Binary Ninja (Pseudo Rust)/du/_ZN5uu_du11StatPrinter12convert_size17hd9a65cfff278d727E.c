
  fn uu_du::StatPrinter::convert_size::hd9a65cfff278d727(arg1: *mut i128, arg2: *mut c_void, arg3: u64) -> i64

{
    let mut rax: u64 = arg3;
    let rcx: i64 = *arg2.byte_offset(0x20);
    
    if rcx == 0
    {
        /* tailcall */
        return uucore::features::format::human::human_readable::h3f1a583a2a5b554e(arg1, rax, 2);
    }
    
    if rcx == 1
    {
        /* tailcall */
        return uucore::features::format::human::human_readable::h3f1a583a2a5b554e(arg1, rax, 1);
    }
    
    let mut rbx: *mut i128;
    let mut rsi_4: *mut c_void;
    let mut var_1c: ();
    
    if *arg2.byte_offset(0x49) == 0
    {
        let rcx_3: i64 = *arg2.byte_offset(0x28);
        
        if rcx_3 == 0
        {
            core::panicking::panic_const::panic_const_div_by_zero::hc7d962fcb87948a3();
            /* no return */
        }
        
        rbx = arg1;
        let mut rax_3: u64;
        let mut rdx_6: u64;
        
        if (rax | rcx_3) >> 0x20 == 0
        {
            let temp2_2: i32 = rcx_3;
            rax_3 = COMBINE(0, rax) / temp2_2;
            rdx_6 = COMBINE(0, rax) % temp2_2;
        }
        else
        {
            let rdx_5: i64 = 0;
            let temp2_1: i32 = rcx_3;
            rax_3 = COMBINE(rdx_5, rax) / temp2_1;
            rdx_6 = COMBINE(rdx_5, rax) % temp2_1;
        }
        
        rax = rax_3 + 1;
        rsi_4 = &var_1c;
    }
    else
    {
        rsi_4 = &var_1c;
        rbx = arg1;
    }
    let mut rax_4: i64;
    let mut rdx_7: u64;
    rax_4 = core::fmt::num::imp::_$LT$impl$u20$u64$GT$::_fmt::h284f18664830c6dd(rax, rsi_4, 0x14);
    let mut var_38: i128;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hac1b67b8d5e5f2cf(&var_38, rax_4, rdx_7);
    let result: i64;
    rbx[1] = result;
    *rbx = var_38;
    result
}
