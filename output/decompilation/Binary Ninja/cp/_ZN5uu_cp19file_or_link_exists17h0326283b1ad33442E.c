
  uint64_t uu_cp::file_or_link_exists::h0326283b1ad33442(int64_t arg1)

{
    int32_t var_c0;
    std::fs::symlink_metadata::h8589e79b0a107dee(&var_c0, arg1);
    int64_t rbp;
    rbp = var_c0 != 2;
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6e54671ee6a51b2a(&var_c0);
    return rbp;
}
