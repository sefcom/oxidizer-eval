
  int128_t* just::scope::Scope::root::hda0e4ba20c461efb(int128_t* arg1)

{
    int64_t var_f8 = 0;
    int128_t var_e8 = {0};
    void var_58;
    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::iter::h8e7ee68ea126f0a0(&var_58, 
        just::constants::constants::h3594f93ebbf36f97());
    int64_t* i;
    int64_t* rdx;
    i = _$LT$hashbrown..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he181a059410bee19(&var_58);
    
    while (i)
    {
        int64_t r14_1 = *i;
        int64_t rbp_1 = i[1];
        int128_t var_70;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_70, *rdx, rdx[1]);
        int64_t var_60;
        int64_t var_c8_1 = var_60;
        int128_t var_d8 = var_70;
        int16_t var_74_1 = 1;
        int32_t var_78_1 = 0;
        char const* const var_c0_1 = "PRELUDEsrc/search.rs.config";
        int64_t var_b8_1 = 7;
        int64_t var_b0_1 = r14_1;
        int64_t var_a8_1 = rbp_1;
        int64_t var_a0_1 = 0;
        int64_t var_98_1 = rbp_1;
        int128_t var_90_1 = {0};
        char var_80_1 = 0x18;
        char var_72_1 = 0;
        just::scope::Scope::bind::h2017080dbe33bcde(&var_f8, &var_d8);
        i = _$LT$hashbrown..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he181a059410bee19(&var_58);
    }
    
    int128_t zmm0_1 = var_f8;
    arg1[1] = var_e8;
    *arg1 = zmm0_1;
    return arg1;
}
