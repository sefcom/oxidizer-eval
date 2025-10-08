
  uint64_t uu_sort::KeyPosition::new::ha77a31f4c9c6cdf9(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, int32_t arg5)

{
    void var_68;
    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(&var_68, 
        0x2e, arg2, arg3);
    int64_t var_78 = 0;
    int64_t var_70 = arg3;
    int16_t var_38 = 1;
    char* rax;
    int64_t rdx_1;
    rax = core::str::iter::SplitInternal$LT$P$GT$::next::hcedf3ecbc5351d30(&var_78);
    uint64_t result;
    int128_t var_c8;
    
    if (!rax)
    {
        uu_sort::KeyPosition::new::_$u7b$$u7b$closure$u7d$$u7d$::h12fd537b664bec41(&var_c8);
        uint64_t result_2;
        result = result_2;
        *(arg1 + 8) = var_c8;
        arg1[3] = result;
        *arg1 = 1;
    }
    else
    {
        char* rax_1;
        int64_t rdx_2;
        rax_1 = core::str::iter::SplitInternal$LT$P$GT$::next::hcedf3ecbc5351d30(&var_78);
        char var_d8;
        core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(&var_d8, rax, 
            rdx_1);
        char var_d7;
        int64_t r13_2;
        
        if (!var_d8)
        {
            int64_t var_d0;
            r13_2 = var_d0;
            
            if (r13_2)
                goto label_4d2d95;
            
            result = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1bb0423170e7fa7c(&arg1[1], "field index can not be 0invalid …", 0x18);
            *arg1 = 1;
        }
        else
        {
            int64_t var_f8;
            
            if (var_d7 != 2)
            {
                char var_fd = var_d7;
                var_f8 = 0;
                char* var_f0 = rax;
                int64_t var_e8_1 = rdx_1;
                char var_e0_1 = 1;
                int64_t* var_98 = &var_f8;
                int64_t (* var_90_1)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                char* var_88_1 = &var_fd;
                int64_t (* var_80_1)(char* arg1, int64_t* arg2) = _$LT$core..num..error..ParseIntError$u20$as$u20$core..fmt..Display$GT$::fmt::h3e61086f3d7b9af4;
                var_c8 = &data_58d018;
                *var_c8[8] = 2;
                int64_t var_a8_1 = 0;
                int64_t** var_b8 = &var_98;
                int64_t var_b0_1 = 2;
                result = core::option::Option$LT$T$GT$::map_or_else::h9f6bdb3fe8306f69(&arg1[1], 
                    &var_c8);
                *arg1 = 1;
            }
            else
            {
                r13_2 = -1;
                label_4d2d95:
                *var_c8[8] = arg4;
                var_c8 = -0x8000000000000000;
                core::option::Option$LT$T$GT$::map_or::hb3b78d97c76e7c07(&var_f8, rax_1, rdx_2, 
                    &var_c8);
                int64_t rcx_2 = var_f8;
                uint64_t result_1;
                result = result_1;
                
                if (-(rcx_2) != -0x8000000000000000)
                {
                    arg1[1] = rcx_2;
                    arg1[2] = result;
                    int64_t var_e8;
                    arg1[3] = var_e8;
                    *arg1 = 1;
                }
                else
                {
                    arg1[1] = r13_2;
                    arg1[2] = result;
                    result = arg5;
                    arg1[3] = result;
                    *arg1 = 0;
                }
            }
        }
    }
    return result;
}
