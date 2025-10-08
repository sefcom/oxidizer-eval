
  fn alacritty_terminal::vi_mode::last::h2430a0d27a863faf(arg1: *mut c_void, arg2: i64, arg3: i32) -> i64

{
    let mut rax: i64;
    let mut rdx: i32;
    rax = alacritty_terminal::term::Term$LT$T$GT$::expand_wide::h832c6afc1f08b7ff(arg1, arg2, arg3, 
        1);
    let mut rbx: i32 = rdx;
    let mut var_30: i8;
    alacritty_terminal::vi_mode::last_occupied_in_line::h9d6671481df7c379(&var_30, arg1, rdx);
    let var_28: i64;
    
    if (var_30 & 1) != 0 && rax < var_28
    {
        return var_28;
    }
    
    if alacritty_terminal::vi_mode::is_wrap::h0d49787c150cddfa(arg1, rax, rbx) == 0
    {
        return *arg1.byte_offset(0xb8) - 1;
    }
    
    let mut i: u8;
    
    do
    {
        i = alacritty_terminal::vi_mode::is_wrap::h0d49787c150cddfa(arg1, rax, rbx);
        rbx += 1;
    } while i != 0;
    alacritty_terminal::vi_mode::last_occupied_in_line::h9d6671481df7c379(&var_30, arg1, rbx - 1);
    
    if var_30 == 0
    {
        return rax;
    }
    
    var_28
}
