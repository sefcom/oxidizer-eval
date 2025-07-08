
  int64_t* uu_cp::file_mode_for_interactive_overwrite::h819430914012e276(int64_t* arg1)

{
    int32_t var_c0;
    int64_t rsi;
    int64_t* result = std::fs::metadata::h003d8cdbffde7c56(&var_c0, rsi);
    
    if (var_c0 == 2)
    {
        *arg1 = -0x8000000000000000;
        return core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6e54671ee6a51b2a(&var_c0);
    }
    
    int32_t var_88;
    
    if (var_88 < 0)
        *arg1 = -0x8000000000000000;
    else
    {
        int32_t var_16c = var_88 & 0xf7f;
        int32_t* var_168 = &var_16c;
        uint64_t (* var_160_1)(int32_t* arg1, int64_t* arg2) = core::fmt::num::_$LT$impl$u20$core..fmt..Octal$u20$for$u20$i32$GT$::fmt::hf46ebcb02778fa65;
        int64_t var_148 = 2;
        int64_t var_138_1 = 0;
        int64_t* result_1 = 4;
        int64_t var_128_1 = 0;
        int64_t var_120_1 = 0x800000020;
        char var_118_1 = 3;
        void* const var_108 = &data_41e7f0;
        int64_t var_100_1 = 1;
        int64_t* var_e8_1 = &var_148;
        int64_t var_e0_1 = 1;
        int32_t** var_f8_1 = &var_168;
        int64_t var_f0_1 = 1;
        int128_t var_d8;
        core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&var_d8, &var_108);
        var_168 = var_d8;
        uucore::features::fs::display_permissions_unix::ha124e9a87900f11e(&var_108, var_88, 0);
        int128_t zmm0_2 = var_168;
        var_148 = zmm0_2;
        result_1 = var_108;
        arg1[4] = var_128_1;
        arg1[5] = var_f8_1;
        int64_t var_c8;
        arg1[2] = var_c8;
        result = result_1;
        arg1[3] = result;
        *arg1 = zmm0_2;
    }
    
    return result;
}
