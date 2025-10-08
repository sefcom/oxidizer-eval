
  fn alacritty_terminal::index::Point::sub::h2a90a9a53ccead04(arg1: i64, arg2: i32, arg3: *mut c_void, arg4: i64) -> i64

{
    let r10: i64 = *arg3.byte_offset(0x90);
    
    if r10 == 0
    {
        core::panicking::panic_const::panic_const_div_by_zero::hc7d962fcb87948a3();
        /* no return */
    }
    
    let mut rax: i64 = 0;
    
    if arg4 + r10 - 1 >= arg1
    {
        rax = arg4 + r10 - 1 - arg1;
    }
    
    let mut r9: u32;
    
    if (rax | r10) >> 0x20 == 0
    {
        r9 = COMBINE(0, rax) / r10;
    }
    else
    {
        r9 = COMBINE(0, rax) / r10;
    }
    
    let mut rdx_10: u64;
    
    if (arg4 | r10) >> 0x20 == 0
    {
        rdx_10 = COMBINE(0, arg4) % r10;
    }
    else
    {
        rdx_10 = COMBINE(0, arg4) % r10;
    }
    
    let rdi_1: i64 = arg1 + r10 - rdx_10;
    let rsi: i32 = arg2 - r9;
    
    if (rdi_1 | r10) >> 0x20 == 0
    {
        /* tailcall */
        return alacritty_terminal::index::Point::grid_clamp::h0af70e6c7939b3f8(
            COMBINE(0, rdi_1) % r10, rsi, arg3);
    }
    
    /* tailcall */
    alacritty_terminal::index::Point::grid_clamp::h0af70e6c7939b3f8(COMBINE(0, rdi_1) % r10, rsi, 
        arg3)
}
