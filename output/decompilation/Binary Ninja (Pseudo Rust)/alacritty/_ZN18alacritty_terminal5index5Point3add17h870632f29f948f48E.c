
  fn alacritty_terminal::index::Point::add::h870632f29f948f48(arg1: i64, arg2: i32, arg3: *mut c_void, arg4: i8, arg5: i64) -> i64

{
    let r9: i64 = *arg3.byte_offset(0xb8);
    
    if r9 == 0
    {
        core::panicking::panic_const::panic_const_div_by_zero::hc7d962fcb87948a3();
        /* no return */
    }
    
    let rax_1: i64 = arg5 + arg1;
    
    if (rax_1 | r9) >> 0x20 == 0
    {
        let temp2_1: i32 = r9;
        /* tailcall */
        return alacritty_terminal::index::Point::grid_clamp::hd0d1827dd0c9d684(
            COMBINE(0, rax_1) % temp2_1, arg2 + COMBINE(0, rax_1) / temp2_1, arg3, arg4);
    }
    
    let rdx_3: i64 = 0;
    let temp2: i32 = r9;
    /* tailcall */
    alacritty_terminal::index::Point::grid_clamp::hd0d1827dd0c9d684(COMBINE(rdx_3, rax_1) % temp2, 
        arg2 + COMBINE(rdx_3, rax_1) / temp2, arg3, arg4)
}
