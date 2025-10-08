
  int64_t uu_rm::is_readable::h11778c167935ca98(int64_t arg1)

{
    int32_t var_b0;
    std::fs::metadata::h578d377c5d8d0272(&var_b0, arg1);
    char var_77;
    
    if (var_b0 != 2)
        return var_77 & 1;
    int64_t var_a8;
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h33062896cdc75427(2, var_a8);
    return 0;
}
