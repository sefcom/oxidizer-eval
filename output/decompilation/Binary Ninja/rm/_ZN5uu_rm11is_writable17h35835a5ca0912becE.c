
  uint8_t uu_rm::is_writable::h35835a5ca0912bec(int64_t arg1)

{
    int32_t var_b0;
    std::fs::metadata::h578d377c5d8d0272(&var_b0, arg1);
    uint8_t var_78;
    
    if (var_b0 != 2)
        return var_78 >> 7;
    int64_t var_a8;
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h33062896cdc75427(2, var_a8);
    return 0;
}
