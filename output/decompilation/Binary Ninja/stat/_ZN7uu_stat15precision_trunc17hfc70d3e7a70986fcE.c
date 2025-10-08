
  int64_t uu_stat::precision_trunc::hfc70d3e7a70986fc(int128_t* arg1, int64_t arg2, uint64_t arg3, int64_t arg4 @ zmm0)

{
    int64_t var_50 = arg4;
    int128_t var_a0;
    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h60326b3cf60faea8(&var_a0, 
        &var_50);
    char* var_98;
    int64_t result;
    char rax;
    int64_t rdx;
    rax = core::str::_$LT$impl$u20$str$GT$::find::h7f8b36dc70f8d903(var_98, result);
    int128_t var_d0;
    int64_t var_c0;
    int128_t var_88;
    int128_t* var_70;
    int128_t var_48;
    
    if (rax & 1)
    {
        if (!arg2)
        {
            int64_t rax_6;
            uint64_t rdx_6;
            rax_6 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(rdx, var_98, result);
            
            if (!rax_6)
            {
                core::str::slice_error_fail::h1a2885084e28d077(var_98, result, 0, rdx);
                /* no return */
            }
            
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1259f2eee6e0998a(&var_d0, rax_6, rdx_6);
            label_474864:
            arg1[1] = var_c0;
            *arg1 = var_d0;
            return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44f04a5137e020d4(
                &var_a0);
        }
        
        if (arg2 != 1)
        {
            if (!arg3)
            {
                int64_t rax_7;
                uint64_t rdx_8;
                rax_7 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(rdx, var_98, result);
                
                if (rax_7)
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1259f2eee6e0998a(&var_d0, rax_7, rdx_8);
                    goto label_474864;
                }
                
                core::str::slice_error_fail::h1a2885084e28d077(var_98, result, 0, rdx);
                /* no return */
            }
            
            int64_t rax_2 = result - rdx;
            
            if (arg3 < rax_2)
            {
                int64_t rax_3;
                uint64_t rdx_4;
                rax_3 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(rdx + arg3 + 1, var_98, result);
                
                if (!rax_3)
                {
                    core::str::slice_error_fail::h1a2885084e28d077(var_98, result, 0, 
                        rdx + arg3 + 1);
                    /* no return */
                }
                
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1259f2eee6e0998a(&var_d0, rax_3, rdx_4);
                goto label_474864;
            }
            
            alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::repeat::ha360e6025fa3e908(&var_d0, 
                arg3 - rax_2 + 1);
            int64_t var_78_2 = var_c0;
            var_88 = var_d0;
            var_70 = &var_a0;
            int64_t (* var_68_2)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            int128_t* var_60_2 = &var_88;
            int64_t (* var_58_2)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_d0 = &data_41cfd0;
            *var_d0[8] = 2;
            int64_t var_b0_2 = 0;
            int128_t** var_c0_2 = &var_70;
            int64_t var_b8_2 = 2;
            core::option::Option$LT$T$GT$::map_or_else::h722d45d5108b1d7d(&var_48, &var_d0);
            goto label_4748fe;
        }
    }
    else if (arg2 && arg2 != 1 && arg3)
    {
        alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::repeat::ha360e6025fa3e908(&var_d0, arg3);
        int64_t var_78_1 = var_c0;
        var_88 = var_d0;
        var_70 = &var_a0;
        int64_t (* var_68_1)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        int128_t* var_60_1 = &var_88;
        int64_t (* var_58_1)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_d0 = &data_519c80;
        *var_d0[8] = 2;
        int64_t var_b0_1 = 0;
        int128_t** var_c0_1 = &var_70;
        int64_t var_b8_1 = 2;
        core::option::Option$LT$T$GT$::map_or_else::h722d45d5108b1d7d(&var_48, &var_d0);
        label_4748fe:
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44f04a5137e020d4(&var_88);
        int64_t var_38;
        arg1[1] = var_38;
        *arg1 = var_48;
        return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44f04a5137e020d4(&var_a0);
    }
    arg1[1] = result;
    *arg1 = var_a0;
    return result;
}
