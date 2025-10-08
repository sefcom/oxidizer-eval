
  fn alacritty::input::Processor$LT$T$C$A$GT$::mouse_report::hed04f95cad75d625(arg1: *mut i64, arg2: i8, arg3: i8) -> i64

{
    let rbx: *mut c_void = arg1[1];
    let r12: i32 = *rbx.byte_offset(0xc8);
    let r13: *mut c_void = arg1[3];
    let mut var_58: ();
    _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::size_info::h75f6d6cd23dc8329(&var_58, arg1[6]);
    let mut result: i64;
    let mut rdx_1: i32;
    result = alacritty::event::Mouse::point::h7553a37268becc3a(*r13.byte_offset(0x20), 
        *r13.byte_offset(0x28), &var_58, r12);
    
    if rdx_1 < 0
    {
        return result;
    }
    
    let mut rbp_1: i32 = *arg1[5];
    let rcx_2: u8 = (rbp_1 >> 5 & 8) | (rbp_1 & 4);
    rbp_1 >>= 1;
    rbp_1 &= 0x10;
    rbp_1 |= rcx_2;
    
    if (*rbx.byte_offset(0x6dc) & 0x20) != 0
    {
        rbp_1 += arg2;
        /* tailcall */
        return alacritty::input::Processor$LT$T$C$A$GT$::sgr_mouse_report::h6feeb7c04a7ac1ed(*arg1, 
            result, rdx_1, rbp_1, arg3);
    }
    
    if arg3 == 0
    {
        rbp_1 += arg2;
    }
    else
    {
        rbp_1 |= 3;
    }
    
    /* tailcall */
    alacritty::input::Processor$LT$T$C$A$GT$::normal_mouse_report::hbfc2b27746782bc2(*arg1, rbx, 
        result, rdx_1, rbp_1)
}
