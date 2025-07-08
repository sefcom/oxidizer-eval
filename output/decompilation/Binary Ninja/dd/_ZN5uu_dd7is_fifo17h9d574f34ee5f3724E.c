
  int64_t uu_dd::is_fifo::h9d574f34ee5f3724(int64_t arg1)

{
    int32_t var_b0;
    std::fs::metadata::he5d63b9e36b09796(&var_b0, arg1);
    int32_t var_78;
    
    if (var_b0 == 2 || (0xf000 & var_78) != 0x1000)
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he8a2e51a512ba290(&var_b0);
        return 0;
    }
    
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he8a2e51a512ba290(&var_b0);
    int64_t result;
    result = 1;
    return result;
}
