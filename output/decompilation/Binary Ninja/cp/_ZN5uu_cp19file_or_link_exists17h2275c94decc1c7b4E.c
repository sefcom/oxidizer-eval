
  uint64_t uu_cp::file_or_link_exists::h2275c94decc1c7b4(int64_t arg1)

{
    int32_t var_c0;
    std::fs::symlink_metadata::h814bc3976f7d40c5(&var_c0, arg1);
    int64_t rbp;
    rbp = var_c0 != 2;
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he37bb0d8b54bbf24(&var_c0);
    return rbp;
}
