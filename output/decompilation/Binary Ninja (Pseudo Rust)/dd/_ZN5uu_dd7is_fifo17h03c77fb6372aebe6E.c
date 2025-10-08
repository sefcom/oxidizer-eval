
  fn uu_dd::is_fifo::h03c77fb6372aebe6(arg1: i64) -> u64

{
    let mut var_c0: i32;
    std::fs::metadata::haf79437f52961f9c(&var_c0, arg1);
    let var_88: i32;
    let mut rbp: i64;
    rbp = (var_88 & 0xf000) == 0x1000;
    rbp &= var_c0 != 2;
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::ha4ae1ab93a658b5b(&var_c0);
    rbp
}
