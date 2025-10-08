
  int64_t uu_cp::file_mode_for_interactive_overwrite::h1fc34d69e34b5e78(int64_t* arg1, int64_t arg2)

{
    int32_t var_c0;
    int64_t rax = std::fs::metadata::h87a95e5fd9b91fc7(&var_c0, arg2);
    
    if (var_c0 == 2)
    {
        *arg1 = -0x8000000000000000;
        return core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he37bb0d8b54bbf24(&var_c0);
    }
    
    int32_t var_88;
    
    if (var_88 < 0)
    {
        *arg1 = -0x8000000000000000;
        return rax;
    }
    
    int32_t var_12c = var_88 & 0xf7f;
    int32_t* var_128 = &var_12c;
    uint64_t (* var_120)(int32_t* arg1, int64_t* arg2) =
        core::fmt::num::_$LT$impl$u20$core..fmt..Octal$u20$for$u20$i32$GT$::fmt::h84d633f3d5886597;
    void* const var_108 = &data_420910;
    int64_t var_100 = 1;
    void* const var_e8 = &data_424bf8;
    int64_t var_e0 = 1;
    int32_t** var_f8 = &var_128;
    int64_t var_f0 = 1;
    int128_t var_d8;
    core::option::Option$LT$T$GT$::map_or_else::ha891a5b84284deb4(&var_d8, &var_108);
    var_128 = var_d8;
    uucore::features::fs::display_permissions_unix::hf65510d5c6517b79(&var_d8, var_88, 0);
    int128_t zmm0_1 = var_128;
    var_108 = zmm0_1;
    var_f0 = var_d8;
    arg1[4] = var_e8;
    int64_t var_c8;
    arg1[5] = var_c8;
    arg1[2] = var_c8;
    arg1[3] = var_f0;
    *arg1 = zmm0_1;
    return var_f0;
}
