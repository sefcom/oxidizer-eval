
  int64_t forc_crypto::keys::parse_secret::examples::h7f4f8a92d4b53c85()

{
    char const (** const var_88)[0xe3] = &data_a2f2d8;
    int64_t var_80 = 1;
    void var_90;
    void* var_78 = &var_90;
    int128_t var_70 = {0};
    int128_t var_58;
    core::option::Option$LT$T$GT$::map_or_else::h34f6eea6daa701c2(&var_58, 
        "    # Parses the secret of a blo…", 0x8f, &var_88);
    var_88 = &data_a2f2e8;
    int64_t var_80_1 = 1;
    void* var_78_1 = &var_90;
    int128_t var_70_1 = {0};
    int128_t var_40;
    core::option::Option$LT$T$GT$::map_or_else::h34f6eea6daa701c2(&var_40, 
        "    # Parses the secret of a pee…", 0x91, &var_88);
    var_88 = var_58;
    int64_t var_48;
    int64_t var_78_2 = var_48;
    int128_t var_70_2 = var_40;
    int64_t var_30;
    int64_t var_60 = var_30;
    void var_28;
    alloc::str::join_generic_copy::hb36460053a1e0f5c(&var_28, &var_88, 2);
    int64_t result;
    int64_t rdx;
    result = alloc::vec::Vec$LT$T$C$A$GT$::into_boxed_slice::hf05f49726fdee3c0(&var_28);
    core::ptr::drop_in_place$LT$forc_crypto..keys..vanity..HexMatcher$GT$::h90d4fc5912b41e43(
        &var_88);
    return result;
}
