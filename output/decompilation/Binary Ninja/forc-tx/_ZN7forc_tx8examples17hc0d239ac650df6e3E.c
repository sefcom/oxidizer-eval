
  int64_t forc_tx::examples::hc0d239ac650df6e3()

{
    void** const var_d8 = &data_5d13a8;
    int64_t var_d0 = 1;
    void var_e0;
    void* var_c8 = &var_e0;
    int128_t var_c0 = {0};
    int128_t var_70;
    core::option::Option$LT$T$GT$::map_or_else::h2f8585fb2c8c23bc(&var_70, 
        "    # Script example\n    forc t…", 0xc6, &var_d8);
    var_d8 = &data_5d13b8;
    int64_t var_d0_1 = 1;
    void* var_c8_1 = &var_e0;
    int128_t var_c0_1 = {0};
    int128_t var_58;
    core::option::Option$LT$T$GT$::map_or_else::h2f8585fb2c8c23bc(&var_58, 
        "    # Multiple inputs\n    forc …", 0x8a5, &var_d8);
    int128_t zmm0 = var_58;
    var_d8 = &data_5d13c8;
    int64_t var_d0_2 = 1;
    void* var_c8_2 = &var_e0;
    int128_t var_c0_2 = {0};
    int128_t var_40;
    core::option::Option$LT$T$GT$::map_or_else::h2f8585fb2c8c23bc(&var_40, 
        "    # An example constructing a …", 0xa9b, &var_d8);
    var_d8 = var_70;
    int64_t var_60;
    int64_t var_c8_3 = var_60;
    int128_t var_c0_3 = zmm0;
    int64_t var_48;
    int64_t var_b0 = var_48;
    int128_t var_a8 = var_40;
    int64_t var_30;
    int64_t var_98 = var_30;
    void var_28;
    alloc::str::join_generic_copy::h36acb9419b7494de(&var_28, &var_d8);
    int64_t result;
    int64_t rdx;
    result = alloc::vec::Vec$LT$T$C$A$GT$::into_boxed_slice::h3595125297bd929d(&var_28);
    core::ptr::drop_in_place$LT$$u5b$alloc..string..String$u3b$$u20$3$u5d$$GT$::h28e83d271d4d3334(
        &var_d8);
    return result;
}
