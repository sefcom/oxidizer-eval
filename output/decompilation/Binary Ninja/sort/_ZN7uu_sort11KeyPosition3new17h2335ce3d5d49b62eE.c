
  uint64_t uu_sort::KeyPosition::new::h2335ce3d5d49b62e(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, int32_t arg5)

{
    void var_68;
    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h77b0cfb9226a3587(&var_68, 
        0x2e, arg2, arg3);
    int64_t var_78 = 0;
    int64_t var_70 = arg3;
    int16_t var_38 = 1;
    char* rax;
    int64_t rdx_1;
    rax = core::str::iter::SplitInternal$LT$P$GT$::next::h1ca17ad8b676764c(&var_78);
    uint64_t result;
    int128_t var_a8;
    uint64_t result_1;
    int128_t zmm0_1;
    
    if (!rax)
    {
        uu_sort::KeyPosition::new::_$u7b$$u7b$closure$u7d$$u7d$::h1dd1921a886552ee(&var_a8);
        zmm0_1 = var_a8;
        result = result_1;
        label_520e57:
        *(arg1 + 8) = zmm0_1;
        arg1[3] = result;
        *arg1 = 1;
    }
    else
    {
        char* rax_1;
        int64_t rdx_2;
        rax_1 = core::str::iter::SplitInternal$LT$P$GT$::next::h1ca17ad8b676764c(&var_78);
        char var_90;
        core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&var_90, rax, rdx_1);
        
        if (var_90)
        {
            char var_8f;
            uu_sort::KeyPosition::new::_$u7b$$u7b$closure$u7d$$u7d$::h01ea5a1ee9d844f2(&var_a8, 
                rax, rdx_1, var_8f);
            result = result_1;
            zmm0_1 = var_a8;
            goto label_520e57;
        }
        
        uint64_t result_2;
        
        if (!result_2)
        {
            result =
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h1d4334c76f34ab0e(
                &arg1[1], "field index can not be 0invalid …", 0x18);
            *arg1 = 1;
        }
        else
        {
            *var_a8[8] = arg4;
            var_a8 = -0x8000000000000000;
            core::option::Option$LT$T$GT$::map_or::h5a5be3661124d534(&var_90, rax_1, rdx_2, 
                &var_a8);
            int64_t rcx_3 = var_90;
            result = result_2;
            
            if (rcx_3 != -0x8000000000000000)
            {
                arg1[1] = rcx_3;
                arg1[2] = result;
                int64_t var_80;
                arg1[3] = var_80;
                *arg1 = 1;
            }
            else
            {
                arg1[1] = result_2;
                arg1[2] = result;
                result = arg5;
                arg1[3] = result;
                *arg1 = 0;
            }
        }
    }
    return result;
}
