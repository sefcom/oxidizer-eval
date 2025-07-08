
  uint64_t uu_cp::platform::linux::check_dest_is_fifo::h1ec55e7a10ac562c(int64_t arg1)

{
    int64_t var_b8;
    std::fs::metadata::h003d8cdbffde7c56(&var_b8, arg1);
    int64_t rdi_1 = var_b8;
    int32_t var_80;
    int64_t rbx;
    rbx = (0xf000 & var_80) == 0x1000;
    rbx &= rdi_1 != 2;
    int64_t var_b0;
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6e54671ee6a51b2a(rdi_1, var_b0);
    return rbx;
}
