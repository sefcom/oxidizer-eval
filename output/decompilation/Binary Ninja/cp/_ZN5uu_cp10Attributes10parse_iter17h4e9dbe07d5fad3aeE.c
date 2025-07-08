
  int64_t uu_cp::Attributes::parse_iter::h4e9dbe07d5fad3ae(int64_t* arg1, int128_t* arg2)

{
    int32_t var_c8 = 0;
    int64_t result_1 = 0;
    int128_t var_88 = arg2[1];
    int128_t var_98 = *arg2;
    
    for (void* i = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h994b0ddc6629aff1(&var_98); i; i = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h994b0ddc6629aff1(&var_98))
    {
        char* rax;
        uint64_t rdx_1;
        rax = _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h889a363637bfddd1(i);
        int64_t var_70;
        uu_cp::Attributes::parse_single_string::hf0de3a52359f0529(&var_70, rax, rdx_1);
        int64_t rax_1 = var_70;
        int64_t var_68;
        int64_t var_c0 = var_68;
        
        if (rax_1 != 0xd)
        {
            int128_t var_4c;
            *(arg1 + 0x30) = var_4c;
            *(arg1 + 0x24) = var_4c;
            int128_t var_5c;
            *(arg1 + 0x14) = var_5c;
            int32_t var_60;
            arg1[2] = var_60;
            arg1[1] = var_c0;
            *arg1 = rax_1;
            return core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$alloc..string..String$GT$$GT$::hffdb868510db594f(&var_98);
        }
        
        int64_t result_2;
        uu_cp::Attributes::union::h2578ff077a39174b(&result_2, &result_1, &var_c0);
        int32_t var_9c;
        var_c8 = var_9c;
        result_1 = result_2;
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$alloc..string..String$GT$$GT$::hffdb868510db594f(&var_98);
    arg1[2] = var_c8;
    int64_t result = result_1;
    arg1[1] = result;
    *arg1 = 0xd;
    return result;
}
