
  fn uu_cp::file_or_link_exists::h0326283b1ad33442(arg1: i64) -> u64

{
    let mut var_c0: i32;
    std::fs::symlink_metadata::h8589e79b0a107dee(&var_c0, arg1);
    let mut rbp: i64;
    rbp = var_c0 != 2;
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6e54671ee6a51b2a(&var_c0);
    rbp
}
