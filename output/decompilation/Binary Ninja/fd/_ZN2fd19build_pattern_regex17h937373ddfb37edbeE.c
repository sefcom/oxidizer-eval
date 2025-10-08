
  uint64_t fd::build_pattern_regex::h937373ddfb37edbe(int128_t* arg1, int64_t arg2, uint64_t arg3, char arg4, char arg5)

{
    int128_t var_f8;
    int128_t var_e8;
    
    if (!(arg3 & arg4))
    {
        int128_t* rdi_3 = &var_f8;
        
        if (!(arg5 & 1))
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hc59efc0c75b13120(rdi_3, arg2, arg3);
        else
            regex::escape::ha1711af57c30542e(rdi_3, arg2, arg3);
    }
    else
    {
        int64_t var_78 = arg2;
        uint64_t var_70_1 = arg3;
        int32_t var_68_1 = 0x10100;
        int64_t var_c8;
        globset::glob::GlobBuilder::build::h0c1fa9f366774a6d(&var_c8, &var_78);
        int64_t rax_1 = var_c8;
        int128_t var_c0;
        var_f8 = var_c0;
        int128_t var_b0;
        int128_t var_a0;
        
        if (-(rax_1) == -0x8000000000000000)
        {
            int128_t zmm1_1 = var_b0;
            var_b0 = var_a0;
            var_c0 = zmm1_1;
            var_c8 = var_f8;
            uint64_t rax_4 = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h0a3f7d9fbbc01c83(&var_c8);
            *(arg1 + 8) = rax_4;
            *arg1 = -0x8000000000000000;
            return rax_4;
        }
        
        int64_t var_80;
        int64_t var_18_1 = var_80;
        int128_t var_90;
        int128_t var_28_1 = var_90;
        int128_t var_58_1 = var_f8;
        uint64_t var_38_1 = var_a0;
        int64_t var_60 = rax_1;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hc59efc0c75b13120(&var_c8, *var_b0[8], var_38_1);
        var_e8 = *var_c0[8];
        var_f8 = var_c8;
        core::ptr::drop_in_place$LT$globset..glob..Glob$GT$::h2ed343c1b1664c8f(&var_60);
    }
    
    int64_t rax_3 = var_e8;
    arg1[1] = rax_3;
    *arg1 = var_f8;
    return rax_3;
}
