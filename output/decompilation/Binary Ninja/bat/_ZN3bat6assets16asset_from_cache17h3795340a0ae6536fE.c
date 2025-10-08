
  int64_t bat::assets::asset_from_cache::h3795340a0ae6536f(char* arg1, int64_t arg2)

{
    char const* const var_f8 = "theme setsyntax setacknowledgeme…";
    int64_t var_f0 = 9;
    int64_t var_e8;
    std::fs::read::h93dd606058041d1c(&var_e8, arg2);
    int64_t var_d0 = arg2;
    int64_t rdx;
    int64_t var_c8 = rdx;
    char const* const* var_c0 = &var_f8;
    int64_t r15_1 = var_e8;
    int64_t var_e0;
    int128_t var_b8;
    int64_t result;
    
    if (-(r15_1) == -0x8000000000000000)
    {
        bat::assets::asset_from_cache::_$u7b$$u7b$closure$u7d$$u7d$::h8a94705fbd0f6edf(&var_b8, 
            &var_d0, var_e0);
        int128_t zmm0 = var_b8;
        *arg1 = 0xb;
        *(arg1 + 8) = zmm0;
        *(arg1 + 0x18) = result;
        return result;
    }
    
    int64_t var_d8;
    char var_68;
    bat::assets::asset_from_contents::h9aebca1bb60e2b9a(&var_68, var_e0, var_d8, 
        "theme setsyntax setacknowledgeme…");
    int128_t zmm0_1;
    int128_t zmm1_1;
    int128_t zmm2_1;
    int128_t zmm3_1;
    
    if (var_68 != 0xd)
    {
        bat::assets::asset_from_cache::_$u7b$$u7b$closure$u7d$$u7d$::h324a9a628ccba514(&var_b8, 
            &var_f8, &var_68);
        int128_t var_78;
        *(arg1 + 0x40) = var_78;
        zmm0_1 = var_b8;
        zmm1_1 = result;
        int128_t var_98;
        zmm2_1 = var_98;
        int128_t var_88;
        zmm3_1 = var_88;
    }
    else
    {
        int128_t var_28;
        *(arg1 + 0x40) = var_28;
        zmm0_1 = var_68;
        int128_t var_58;
        zmm1_1 = var_58;
        int128_t var_48;
        zmm2_1 = var_48;
        int128_t var_38;
        zmm3_1 = var_38;
    }
    
    *(arg1 + 0x30) = zmm3_1;
    *(arg1 + 0x20) = zmm2_1;
    *(arg1 + 0x10) = zmm1_1;
    *arg1 = zmm0_1;
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h1e41457799ed3462(r15_1, 
        var_e0);
}
