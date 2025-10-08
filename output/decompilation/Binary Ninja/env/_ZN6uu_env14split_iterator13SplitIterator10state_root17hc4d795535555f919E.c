
  int64_t uu_env::split_iterator::SplitIterator::state_root::hc4d795535555f919(int32_t* arg1, int128_t* arg2)

{
    int32_t var_40;
    int32_t rax_1;
    
    while (true)
    {
        uu_env::split_iterator::SplitIterator::state_delimiter::h3f5e69fc26e62c64(&var_40, arg2);
        rax_1 = var_40;
        
        if (rax_1 != 0xa)
            break;
        
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$uu_env..EnvError$GT$$GT$::h8fbf1f0c88d0d0d5(&var_40);
    }
    
    if (rax_1 == 9)
    {
        *arg1 = 0xc;
        return core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$uu_env..EnvError$GT$$GT$::h8fbf1f0c88d0d0d5(&var_40);
    }
    
    int64_t result;
    *(arg1 + 0x20) = result;
    int128_t zmm0_1 = var_40;
    int128_t var_30;
    *(arg1 + 0x10) = var_30;
    *arg1 = zmm0_1;
    return result;
}
