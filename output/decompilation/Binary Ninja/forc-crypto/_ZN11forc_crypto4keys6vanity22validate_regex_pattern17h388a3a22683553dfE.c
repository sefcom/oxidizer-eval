
  int64_t forc_crypto::keys::vanity::validate_regex_pattern::h388a3a22683553df(int64_t* arg1, int64_t arg2, uint64_t arg3)

{
    int64_t var_c8 = arg2;
    
    if (arg3 > 0x80)
    {
        int64_t rax = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd37f91379d22554a(&arg1[1], "Regex pattern too long: max 128 …", 0x2a);
        *arg1 = 1;
        return rax;
    }
    
    int64_t* var_b8 = &var_c8;
    int64_t (* var_b0)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h30043921d5c5f2d0;
    char const (** const var_68)[0xa] = &data_a2f008;
    int64_t var_60 = 1;
    int64_t var_48 = 0;
    int64_t** var_58 = &var_b8;
    int64_t var_50 = 1;
    void var_80;
    core::option::Option$LT$T$GT$::map_or_else::h34f6eea6daa701c2(&var_80, 0, arg3, &var_68);
    int64_t var_a0;
    int64_t var_78;
    uint64_t rdx = regex::regex::string::Regex::new::h92399a8041d2121d(&var_a0, var_78);
    
    if (var_a0)
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$regex..regex..string..Regex$C$regex..error..Error$GT$$GT$::hd7374fd7dca9b727(&var_a0);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h223631e41b095cf4(&var_80);
        int64_t rax_1 = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd37f91379d22554a(&arg1[1], var_c8, arg3);
        *arg1 = 0;
        return rax_1;
    }
    
    int64_t var_88;
    int64_t var_a8 = var_88;
    int128_t var_98;
    var_b8 = var_98;
    int64_t** var_38 = &var_b8;
    int64_t (* var_30)(int64_t* arg1, int64_t* arg2) =
        _$LT$regex..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h73feb9b51bd9b12e;
    var_68 = &data_a2f018;
    int64_t var_60_1 = 1;
    int64_t var_48_1 = 0;
    int64_t*** var_58_1 = &var_38;
    int64_t var_50_1 = 1;
    int128_t var_28;
    core::option::Option$LT$T$GT$::map_or_else::h34f6eea6daa701c2(&var_28, 0, rdx, &var_68);
    int64_t var_18;
    arg1[3] = var_18;
    *(arg1 + 8) = var_28;
    *arg1 = 1;
    core::ptr::drop_in_place$LT$regex..error..Error$GT$::h8cd765a8894c774f(&var_b8);
    
    if (var_a0)
        core::ptr::drop_in_place$LT$core..result..Result$LT$regex..regex..string..Regex$C$regex..error..Error$GT$$GT$::hd7374fd7dca9b727(&var_a0);
    
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h223631e41b095cf4(&var_80);
}
