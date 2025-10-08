
  fn uu_cp::platform::linux::check_dest_is_fifo::h6561bbf78e4b4973(arg1: i64) -> u64

{
    let mut var_c0: i32;
    std::fs::metadata::h87a95e5fd9b91fc7(&var_c0, arg1);
    let var_88: i32;
    let mut rbp: i64;
    rbp = (var_88 & 0xf000) == 0x1000;
    rbp &= var_c0 != 2;
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he37bb0d8b54bbf24(&var_c0);
    rbp
}
