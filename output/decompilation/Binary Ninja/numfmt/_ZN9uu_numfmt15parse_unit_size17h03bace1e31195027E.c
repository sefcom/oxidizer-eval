
  int64_t uu_numfmt::parse_unit_size::h03bace1e31195027(int64_t* arg1, char* arg2, int64_t arg3)

{
    char* var_c8 = arg2;
    char var_b8 = 0;
    void var_70;
    core::iter::traits::iterator::Iterator::collect::h967ab1cd420e9d0a(&var_70, &var_c8);
    uint64_t var_60;
    void* rax_1;
    int64_t rdx_1;
    rax_1 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(var_60, arg2, arg3);
    
    if (!rax_1)
    {
        core::str::slice_error_fail::h1a2885084e28d077(arg2, arg3, var_60, arg3);
        /* no return */
    }
    
    char* var_68;
    
    if (!var_60)
    {
        label_46c5dd:
        char rax_3;
        int64_t rdx_3;
        rax_3 = uu_numfmt::parse_unit_size_suffix::hdf13b6214e4b882f(rax_1, rdx_1);
        
        if (!(rax_3 & 1))
            goto label_46c60c;
        
        if (!var_60)
        {
            arg1[1] = rdx_3;
            *arg1 = -0x8000000000000000;
        }
        else
        {
            core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(&var_c8, 
                var_68, var_60);
            
            if (var_c8 == 1)
                goto label_46c60c;
            
            arg1[1] = rdx_3 * &arg2[arg3];
            *arg1 = -0x8000000000000000;
        }
    }
    else
    {
        alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::repeat::h65bc8cec15465d63(&var_c8, var_60);
        uint64_t rsi_3 = var_b8;
        uint64_t var_88_1 = rsi_3;
        int128_t var_98 = var_c8;
        char rax_2 = alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::h57e8dd7d227d19fb(*var_98[8], rsi_3, var_68, var_60);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h34fbae09aa78bed8(&var_98);
        
        if (!rax_2)
            goto label_46c5dd;
        
        label_46c60c:
        var_98 = 0;
        *var_98[8] = arg2;
        int64_t var_88_2 = arg3;
        char var_80_1 = 1;
        int128_t* var_58 = &var_98;
        int64_t (* var_50_1)(int32_t* arg1, int64_t* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
        var_c8 = &data_502800;
        int64_t var_c0_1 = 1;
        int64_t var_a8_1 = 0;
        var_b8 = &var_58;
        int64_t var_b0_1 = 1;
        int128_t var_48;
        core::option::Option$LT$T$GT$::map_or_else::h6181b64f68c0f373(&var_48, &var_c8);
        int64_t var_38;
        arg1[2] = var_38;
        *arg1 = var_48;
    }
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h34fbae09aa78bed8(&var_70);
}
