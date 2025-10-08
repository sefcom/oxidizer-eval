
  fn alacritty::display::hint::visible_regex_match_iter::h3b713c9c9910fb82(arg1: *mut i64, arg2: *mut c_void, arg3: i64) -> i64

{
    let rax: i32 = *arg2.byte_offset(0xc0);
    let rbp: i32 = *arg2.byte_offset(0xc8);
    let r12_1: i32 = -(rbp);
    let r15_1: i32 = !rbp;
    let result: i32 = rax + r15_1;
    let rax_1: i32 = alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::line_search_left::h51103e5e6ff36c7a(arg2, r12_1);
    let mut rax_2: i64;
    let mut rdx: i32;
    rax_2 = alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::line_search_right::h7ee6c3b77284b281(arg2, result);
    let rax_3: i32 = core::cmp::Ord::max::h3396bb7148673668(rax_1, 0xffffff9c - rbp);
    let rax_5: i32 = core::cmp::Ord::min::h08e004ced85b11eb(rdx, rax + r15_1 + 0x64);
    *arg1 = 0;
    arg1[1] = rax_3;
    arg1[2] = rax_2;
    arg1[3] = rax_5;
    arg1[4] = arg3;
    arg1[5] = arg2;
    arg1[6] = 1;
    arg1[7] = r12_1;
    *arg1.byte_offset(0x3c) = 0;
    *arg1.byte_offset(0x44) = 0;
    arg1[8] = result;
    result
}
