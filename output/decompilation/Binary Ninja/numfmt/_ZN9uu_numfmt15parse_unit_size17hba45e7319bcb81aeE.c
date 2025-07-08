
  int64_t uu_numfmt::parse_unit_size::hba45e7319bcb81ae(int64_t* arg1, void** arg2, void* arg3)

{
    void* rax = arg2 + arg3;
    void** const var_c0 = arg2;
    char var_b0 = 0;
    void var_90;
    _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$char$GT$$GT$::from_iter::h1d245a97348b10d3(&var_90, &var_c0);
    uint64_t var_80;
    void* rax_1;
    int64_t rdx_1;
    rax_1 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(var_80, arg2, arg3);
    
    if (!rax_1)
    {
        core::str::slice_error_fail::h5dbb61534404fe7e(arg2, arg3, var_80, arg3);
        /* no return */
    }
    
    if (!var_80)
        goto label_4c01b6;
    
    alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(&var_c0, "0K", 1, var_80);
    char* var_88;
    
    if (!alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::hf0c8d218e68d96bc(rax, var_b0, var_88, var_80))
    {
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb0bde7aa45c92349(&var_c0);
        label_4c01b6:
        int64_t rax_3;
        int64_t rdx_3;
        rax_3 = uu_numfmt::parse_unit_size_suffix::h0d4904f7b87ea86b(rax_1, rdx_1);
        
        if (rax_3 != 1)
            goto label_4c01f3;
        
        if (!var_80)
        {
            arg1[1] = rdx_3;
            *arg1 = -0x8000000000000000;
        }
        else
        {
            core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&var_c0, var_88, var_80);
            
            if (var_c0)
                goto label_4c01f3;
            
            arg1[1] = rdx_3 * rax;
            *arg1 = -0x8000000000000000;
        }
    }
    else
    {
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb0bde7aa45c92349(&var_c0);
        label_4c01f3:
        int64_t var_68 = 0;
        void** var_60_1 = arg2;
        void* var_58_1 = arg3;
        char var_50_1 = 1;
        int64_t* var_78 = &var_68;
        int64_t (* var_70_1)(void* arg1, void* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        var_c0 = &data_535880;
        int64_t var_b8_1 = 1;
        int64_t var_a0_1 = 0;
        var_b0 = &var_78;
        int64_t var_a8_1 = 1;
        int128_t var_48;
        core::option::Option$LT$T$GT$::map_or_else::hab58af973b71ab82(&var_48, &var_c0);
        int64_t var_38;
        arg1[2] = var_38;
        *arg1 = var_48;
    }
    
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb0bde7aa45c92349(&var_90);
}
