
  int128_t* alacritty::config::serde_utils::merge_tables::h62792841f9a2f486(int128_t* arg1, int64_t* arg2, int64_t* arg3)

{
    void var_98;
    _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h3660a1ff1c76042d(&var_98, arg3);
    
    while (true)
    {
        int64_t var_130;
        _$LT$alloc..collections..btree..map..IntoIter$LT$K$C$V$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h26fba69c3db90331(&var_130, &var_98);
        
        if (0 + -(var_130))
            break;
        
        int128_t var_108;
        int128_t var_e8_1 = var_108;
        int128_t var_118;
        int128_t var_f8_1 = var_118;
        int64_t var_128;
        uint64_t var_120;
        void var_b8;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::remove::hef2b787fcb76ca87(
            &var_b8, arg2, var_128, var_120);
        int128_t var_d8;
        char var_9e;
        
        if (var_9e != 8)
            alacritty::config::serde_utils::merge::h0b6a4a70fea81bc1(&var_d8, &var_b8, &var_118);
        else
        {
            int128_t var_c8_1 = var_108;
            var_d8 = var_118;
        }
        
        void var_50;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hdc2767978468d877(
            &var_50, arg2, &var_130, &var_d8);
        core::ptr::drop_in_place$LT$core..option..Option$LT$toml..value..Value$GT$$GT$::he5352179733f92bc(&var_50);
    }
    
    core::ptr::drop_in_place$LT$toml..map..IntoIter$LT$alloc..string..String$C$toml..value..Value$GT$$GT$::h8ef1736ec8838e4c(&var_98);
    int128_t zmm0_3 = *arg2;
    arg1[1] = *(arg2 + 0x10);
    *arg1 = zmm0_3;
    return arg1;
}
