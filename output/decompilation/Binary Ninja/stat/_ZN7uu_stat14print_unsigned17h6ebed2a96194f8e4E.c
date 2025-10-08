
  int64_t uu_stat::print_unsigned::h6ebed2a96194f8e4(uint64_t arg1, char arg2, char arg3, int64_t arg4, int64_t arg5, int64_t arg6, char arg7)

{
    void* const var_b0;
    int64_t rax;
    uint64_t rdx;
    rax = core::fmt::num::imp::_$LT$impl$u20$u64$GT$::_fmt::h284f18664830c6dd(arg1, &var_b0, 0x14);
    void var_80;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1259f2eee6e0998a(&var_80, rax, rdx);
    int64_t var_c8;
    void* var_78;
    int64_t var_70;
    char r12_1;
    
    if (arg3 & 1)
    {
        uu_stat::group_num::hf49c8796a9e1a06a(&var_c8, var_78, var_70);
        r12_1 = arg7;
        
        if (!arg5)
            goto label_474bc2;
        
        goto label_474b5e;
    }
    
    void* var_c0_1 = var_78;
    int64_t var_b8 = var_70;
    var_c8 = -0x8000000000000000;
    r12_1 = arg7;
    int128_t var_e8;
    int64_t var_d8;
    int64_t r14;
    
    if (arg5)
    {
        label_474b5e:
        
        if (arg5 != 1)
        {
            if (arg6 > 0xffff)
            {
                var_b0 = &data_519960;
                int64_t var_a8_2 = 1;
                int64_t var_a0_2 = 8;
                int128_t var_98_1 = {0};
                core::panicking::panic_fmt::h96f341d36638c225(&var_b0);
                /* no return */
            }
            
            int64_t* var_68 = &var_c8;
            int64_t (* var_60_1)(int64_t* arg1, int64_t arg2) = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h622952c97c82feb9;
            int64_t var_58_1 = 0;
            int16_t var_50_1 = arg6;
            var_b0 = &data_41ab40;
            int64_t var_a8_1 = 1;
            int128_t var_98;
            *var_98[8] = &data_41d388;
            int64_t var_88_1 = 1;
            int64_t** var_a0_1 = &var_68;
            var_98 = 2;
            int128_t var_48;
            core::option::Option$LT$T$GT$::map_or_else::h722d45d5108b1d7d(&var_48, &var_b0);
            var_e8 = var_48;
            int64_t var_38;
            var_d8 = var_38;
            r14 = 1;
            goto label_474cbe;
        }
        
        var_e8 = var_c8;
        var_d8 = var_b8;
        
        if (var_e8 != -0x8000000000000000)
            goto label_474bf5;
        
        uu_stat::pad_and_print::h4c659c1797f3ded6(*var_e8[8], var_d8, arg2, arg4, r12_1);
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::ha7af664bba1b7bff(&var_c8);
    }
    else
    {
        label_474bc2:
        var_e8 = var_c8;
        var_d8 = var_b8;
        
        if (var_e8 != -0x8000000000000000)
        {
            label_474bf5:
            r14 = 0;
            label_474cbe:
            uu_stat::pad_and_print::h4c659c1797f3ded6(*var_e8[8], var_d8, arg2, arg4, r12_1);
            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::ha7af664bba1b7bff(
                &var_e8);
            
            if (r14)
                core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::ha7af664bba1b7bff(
                    &var_c8);
        }
        else
        {
            uu_stat::pad_and_print::h4c659c1797f3ded6(*var_e8[8], var_d8, arg2, arg4, r12_1);
            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::ha7af664bba1b7bff(
                &var_c8);
        }
    }
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44f04a5137e020d4(&var_80);
}
