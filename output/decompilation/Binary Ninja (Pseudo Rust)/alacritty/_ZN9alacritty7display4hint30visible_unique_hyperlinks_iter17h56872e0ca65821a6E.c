
  fn alacritty::display::hint::visible_unique_hyperlinks_iter::h56872e0ca65821a6(arg1: *mut i64, arg2: *mut c_void) -> i64

{
    let r15_1: i64 = *arg2.byte_offset(0xb8) - 1;
    let r12_1: i32 = !*arg2.byte_offset(0xc8);
    let rsi: i32 = *arg2.byte_offset(0xc0);
    let rax: i32 = core::cmp::Ord::min::h08e004ced85b11eb(rsi + r12_1, rsi - 1);
    let result: i64 = _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::h1264fc145c2ba3a1(&arg1[9]);
    *arg1 = 0;
    arg1[4] = arg2.byte_offset(0x28);
    arg1[5] = r15_1;
    arg1[6] = r12_1;
    arg1[7] = r15_1;
    arg1[8] = rax;
    result
}
