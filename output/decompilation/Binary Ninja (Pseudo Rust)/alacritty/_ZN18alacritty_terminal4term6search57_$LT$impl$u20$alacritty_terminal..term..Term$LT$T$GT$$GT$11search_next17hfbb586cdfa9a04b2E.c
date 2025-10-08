
  fn alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::search_next::hfbb586cdfa9a04b2(arg1: *mut i128, arg2: *mut c_void, arg3: i64, arg4: i64, arg5: i32, arg6: i32, arg7: i8, arg8: i8, arg9: i64) -> i64

{
    let rax: i64;
    let var_38: i64 = rax;
    let mut rax_1: i64;
    let mut rdx_1: i32;
    rax_1 = alacritty_terminal::term::Term$LT$T$GT$::expand_wide::h832c6afc1f08b7ff(arg2, arg4, 
        arg5, arg6);
    let mut rax_2: i8;
    let mut rdx_3: i32;
    rax_2 = core::option::Option$LT$T$GT$::filter::h5e6e15b0378eaa93(arg8, arg9, 
        *arg2.byte_offset(0x50));
    
    if arg6 == 0
    {
        return alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::next_match_left::h616e5d17b4241fb0(arg1, arg2, arg3, rax_1, rdx_1, arg7, rax_2, rdx_3);
    }
    
    alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::next_match_right::h82c3562c445bfed2(arg1, arg2, arg3, rax_1, rdx_1, arg7, rax_2, rdx_3)
}
