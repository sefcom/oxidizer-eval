
  fn metal_crusher::fun::run_in_terminal::hb55afbf220dc8f24(arg1: i64) -> i64

{
    let mut var_78: i64 = arg1;
    let rsi: i64;
    let var_70: i64 = rsi;
    let rdx: i64;
    let var_68: i64 = rdx;
    let rcx: i64;
    let var_60: i64 = rcx;
    let var_48: i64 = -0x8000000000000000;
    let mut var_58: i64 = 0;
    let var_30: i8 = 0;
    let mut var_28: ();
    std::thread::Builder::spawn_unchecked::h3f7242434e56150b(&var_28, &var_58, &var_78);
    core::result::Result$LT$T$C$E$GT$::expect::h0f618ee5425b50ac(&var_58, &var_28);
    core::ptr::drop_in_place$LT$std..thread..JoinHandle$LT$$LP$$RP$$GT$$GT$::ha4837b2075f310b9(
        &var_58);
    0
}
