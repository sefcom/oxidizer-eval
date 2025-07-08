
  int64_t* uu_shuf::parse_head_count::h8e9cdbfd7a5f28a8(int64_t* arg1, int64_t* arg2)

{
    void var_b8;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hce8092579b78d193(&var_b8, arg2);
    int64_t i;
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h500d15644f3f8d52(&i, &var_b8);
    int64_t r14 = -1;
    
    while (i != -0x8000000000000000)
    {
        int64_t var_e0;
        int64_t var_f8_1 = var_e0;
        int128_t var_108 = i;
        char var_d8;
        core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&var_d8, *var_108[8], var_e0);
        
        if (var_d8)
        {
            int128_t zmm0_2 = var_108;
            int64_t var_50 = 0;
            int128_t var_48_1 = zmm0_2;
            char var_38_1 = 1;
            int64_t* var_c8 = &var_50;
            int64_t (* var_c0_1)(void* arg1, void* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            void** const var_80 = &data_537d48;
            int64_t var_78_1 = 1;
            int64_t var_60_1 = 0;
            int64_t** var_70_1 = &var_c8;
            int64_t var_68_1 = 1;
            int128_t var_98;
            core::option::Option$LT$T$GT$::map_or_else::h7c94a57f03ee0317(&var_98, &var_80);
            int64_t var_88;
            arg1[2] = var_88;
            *arg1 = var_98;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::heff478339c936245(&var_108);
            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::hd4042d487b460da7(&var_b8);
            return arg1;
        }
        
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::heff478339c936245(&var_108);
        int64_t var_d0;
        r14 = core::cmp::min_by::h9901c89ba00e38af(r14, var_d0);
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h500d15644f3f8d52(&i, &var_b8);
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::hd4042d487b460da7(&var_b8);
    arg1[1] = r14;
    *arg1 = -0x8000000000000000;
    return arg1;
}
