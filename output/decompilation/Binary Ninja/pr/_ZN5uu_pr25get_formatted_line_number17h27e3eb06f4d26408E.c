
  bool uu_pr::get_formatted_line_number::h27e3eb06f4d26408(int64_t* arg1, void* arg2, uint64_t arg3, int64_t arg4)

{
    bool result = false;
    
    if (!(0 + -(*(arg2 + 0xd8))))
    {
        if (*(arg2 + 0x10))
        {
            result = arg4;
            arg4 = !arg3;
            arg4 |= result;
            
            if (!arg4)
                goto label_537d41;
        }
        else if (arg3)
        {
            label_537d41:
            char const* const var_a8;
            int64_t rax;
            uint64_t rdx;
            rax = core::fmt::num::imp::_$LT$impl$u20$u64$GT$::_fmt::h284f18664830c6dd(arg3, 
                &var_a8, 0x14);
            int128_t var_d8;
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h23093dee60541fbc(&var_d8, rax, rdx);
            int64_t var_c8;
            int64_t var_68_1 = var_c8;
            int128_t var_78 = var_d8;
            int64_t rbp_1 = *(arg2 + 0xf0);
            void* var_e0 = arg2 + 0xd8;
            int64_t r15_3 = var_c8 - rbp_1;
            int128_t var_58;
            
            if (var_c8 >= rbp_1)
            {
                char* r12_2 = *var_78[8];
                void* rax_1;
                int64_t rdx_2;
                rax_1 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(r15_3, r12_2, var_c8);
                
                if (!rax_1)
                {
                    core::str::slice_error_fail::h1a2885084e28d077(r12_2, var_c8, r15_3, var_c8);
                    /* no return */
                }
                
                void* var_40 = rax_1;
                int64_t var_38_1 = rdx_2;
                
                if (rbp_1 <= 0xffff)
                {
                    var_d8 = &var_40;
                    *var_d8[8] =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h6be8972569da11d7;
                    void** var_c8_2 = &var_e0;
                    int64_t (* var_c0_2)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hdf43014d0105ab1f;
                    int64_t var_b8_2 = 0;
                    int16_t var_b0_2 = rbp_1;
                    var_a8 = &data_456960;
                    int64_t var_a0_2 = 2;
                    void* const var_88_2 = &data_458388;
                    int64_t var_80_2 = 2;
                    int128_t* var_98_2 = &var_d8;
                    int64_t var_90_2 = 3;
                    core::option::Option$LT$T$GT$::map_or_else::ha768742fd52e18ba(&var_58, &var_a8);
                    goto label_537eea;
                }
            }
            else if (rbp_1 <= 0xffff)
            {
                var_d8 = &var_78;
                *var_d8[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                void** var_c8_1 = &var_e0;
                int64_t (* var_c0_1)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hdf43014d0105ab1f;
                int64_t var_b8_1 = 0;
                int16_t var_b0_1 = rbp_1;
                var_a8 = &data_456960;
                int64_t var_a0_1 = 2;
                void* const var_88_1 = &data_458388;
                int64_t var_80_1 = 2;
                int128_t* var_98_1 = &var_d8;
                int64_t var_90_1 = 3;
                core::option::Option$LT$T$GT$::map_or_else::ha768742fd52e18ba(&var_58, &var_a8);
                label_537eea:
                int64_t var_48;
                arg1[2] = var_48;
                *arg1 = var_58;
                return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5b204ce323401e77(
                    &var_78);
            }
            var_d8 = &data_668f50;
            *var_d8[8] = 1;
            int64_t var_c8_3 = 8;
            int64_t var_c0;
            var_c0 = {0};
            core::panicking::panic_fmt::h96f341d36638c225(&var_d8);
            /* no return */
        }
    }
    
    *arg1 = 0;
    arg1[1] = 1;
    arg1[2] = 0;
    return result;
}
