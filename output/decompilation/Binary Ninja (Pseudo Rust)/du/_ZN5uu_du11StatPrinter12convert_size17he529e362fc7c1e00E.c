
  fn uu_du::StatPrinter::convert_size::he529e362fc7c1e00(arg1: *mut i128, arg2: *mut c_void, arg3: i64) -> i64

{
    let mut var_10: i64 = arg3;
    let rax: i64 = *arg2.byte_offset(0x20);
    
    if rax == 0
    {
        /* tailcall */
        return uucore::features::format::human::human_readable::h9f8a5d008cf29026(arg1, arg3, 2);
    }
    
    if rax == 1
    {
        /* tailcall */
        return uucore::features::format::human::human_readable::h9f8a5d008cf29026(arg1, arg3, 1);
    }
    
    let mut rsi_4: *mut i64;
    
    if *arg2.byte_offset(0x49) == 0
    {
        let rcx_3: i64 = *arg2.byte_offset(0x28);
        
        if rcx_3 == 0
        {
            core::panicking::panic_const::panic_const_div_by_zero::haded503194f0bf6e();
            /* no return */
        }
        
        let mut rax_7: u64;
        let mut rdx_3: u64;
        
        if (arg3 | rcx_3) >> 0x20 == 0
        {
            let rax_8: i32 = arg3;
            let temp2_2: i32 = rcx_3;
            rax_7 = COMBINE(0, rax_8) / temp2_2;
            rdx_3 = COMBINE(0, rax_8) % temp2_2;
        }
        else
        {
            let rdx_2: i64 = 0;
            let temp2_1: i32 = rcx_3;
            rax_7 = COMBINE(rdx_2, arg3) / temp2_1;
            rdx_3 = COMBINE(rdx_2, arg3) % temp2_1;
        }
        
        let mut var_8: i64 = rax_7 + 1;
        rsi_4 = &var_8;
    }
    else
    {
        rsi_4 = &var_10;
    }
    
    _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h2f753f516b2c872e(arg1, rsi_4)
}
