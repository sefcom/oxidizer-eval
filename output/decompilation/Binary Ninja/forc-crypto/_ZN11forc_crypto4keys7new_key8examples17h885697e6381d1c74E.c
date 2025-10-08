
  int64_t forc_crypto::keys::new_key::examples::h885697e6381d1c74()

{
    void** const var_d8 = &data_a2f2a8;
    int64_t var_d0 = 1;
    void var_e0;
    void* var_c8 = &var_e0;
    int128_t var_c0 = {0};
    int128_t var_70;
    core::option::Option$LT$T$GT$::map_or_else::h34f6eea6daa701c2(&var_70, 
        "    # Creates a new key default …", 0x4e, &var_d8);
    var_d8 = &data_a2f2b8;
    int64_t var_d0_1 = 1;
    void* var_c8_1 = &var_e0;
    int128_t var_c0_1 = {0};
    int128_t var_58;
    core::option::Option$LT$T$GT$::map_or_else::h34f6eea6daa701c2(&var_58, 
        "    # Creates a new key for peer…", 0x48, &var_d8);
    int128_t zmm0 = var_58;
    var_d8 = &data_a2f2c8;
    int64_t var_d0_2 = 1;
    void* var_c8_2 = &var_e0;
    int128_t var_c0_2 = {0};
    int128_t var_40;
    core::option::Option$LT$T$GT$::map_or_else::h34f6eea6daa701c2(&var_40, 
        "    # Creates a new key for bloc…", 0x5a, &var_d8);
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
    alloc::str::join_generic_copy::hb36460053a1e0f5c(&var_28, &var_d8, 3);
    int64_t result;
    int64_t rdx;
    result = alloc::vec::Vec$LT$T$C$A$GT$::into_boxed_slice::hf05f49726fdee3c0(&var_28);
    core::ptr::drop_in_place$LT$$u5b$alloc..string..String$u3b$$u20$3$u5d$$GT$::hac1f933aff3df9e0(
        &var_d8);
    return result;
}
