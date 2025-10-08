
  uint64_t uu_dd::is_fifo::h03c77fb6372aebe6(int64_t arg1)

{
    int32_t var_c0;
    std::fs::metadata::haf79437f52961f9c(&var_c0, arg1);
    int32_t var_88;
    int64_t rbp;
    rbp = (var_88 & 0xf000) == 0x1000;
    rbp &= var_c0 != 2;
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::ha4ae1ab93a658b5b(&var_c0);
    return rbp;
}
