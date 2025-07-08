
  fn uu_cp::platform::linux::check_dest_is_fifo::h1ec55e7a10ac562c(arg1: i64) -> u64

{
    let mut var_b8: i64;
    std::fs::metadata::h003d8cdbffde7c56(&var_b8, arg1);
    let rdi_1: i64 = var_b8;
    let var_80: i32;
    let mut rbx: i64;
    rbx = (0xf000 & var_80) == 0x1000;
    rbx &= rdi_1 != 2;
    let var_b0: i64;
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6e54671ee6a51b2a(rdi_1, var_b0);
    rbx
}
