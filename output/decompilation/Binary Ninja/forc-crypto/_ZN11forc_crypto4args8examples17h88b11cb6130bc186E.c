
  int64_t forc_crypto::args::examples::h88b11cb6130bc186()

{
    char const (** const var_118)[0xd9] = &data_a2f258;
    int64_t var_110 = 1;
    void var_120;
    void* var_108 = &var_120;
    int128_t var_100 = {0};
    int128_t var_58;
    core::option::Option$LT$T$GT$::map_or_else::h34f6eea6daa701c2(&var_58, 
        "    # Hashes an argument with SH…", 0x42, &var_118);
    var_118 = &data_a2f268;
    int64_t var_110_1 = 1;
    void* var_108_1 = &var_120;
    int128_t var_100_1 = {0};
    int128_t var_b0;
    core::option::Option$LT$T$GT$::map_or_else::h34f6eea6daa701c2(&var_b0, 
        "    # Hashes an argument with Ke…", 0x48, &var_118);
    int128_t zmm0 = var_b0;
    var_118 = &data_a2f278;
    int64_t var_110_2 = 1;
    void* var_108_2 = &var_120;
    int128_t var_100_2 = {0};
    core::option::Option$LT$T$GT$::map_or_else::h34f6eea6daa701c2(&var_b0, 
        "    # Hashes a file path with SH…", 0x44, &var_118);
    int128_t zmm0_1 = var_b0;
    var_118 = &data_a2f288;
    int64_t var_110_3 = 1;
    void* var_108_3 = &var_120;
    int128_t var_100_3 = {0};
    int128_t var_40;
    core::option::Option$LT$T$GT$::map_or_else::h34f6eea6daa701c2(&var_40, 
        "    # Hashes a file path with Ke…", 0x4a, &var_118);
    var_118 = var_58;
    int64_t var_48;
    int64_t var_108_4 = var_48;
    int128_t var_100_4 = zmm0;
    int64_t var_a0;
    int64_t var_f0 = var_a0;
    int128_t var_e8 = zmm0_1;
    int64_t var_d8 = var_a0;
    int128_t var_d0 = var_40;
    int64_t var_30;
    int64_t var_c0 = var_30;
    void var_28;
    alloc::str::join_generic_copy::hb36460053a1e0f5c(&var_28, &var_118, 4);
    int64_t result;
    int64_t rdx;
    result = alloc::vec::Vec$LT$T$C$A$GT$::into_boxed_slice::hf05f49726fdee3c0(&var_28);
    core::ptr::drop_in_place$LT$$u5b$alloc..string..String$u3b$$u20$4$u5d$$GT$::h7bab920fcd67c50d(
        &var_118);
    return result;
}
