
  uint64_t* forc_crypto::keys::vanity::find_vanity_address_with_timeout::hda53e568c7769d8c(uint64_t* arg1, int128_t* arg2, char arg3, char arg4, int64_t arg5)

{
    int64_t var_168 = 1;
    int64_t var_160 = 1;
    char var_158 = 0;
    uint64_t rax = alloc::boxed::Box$LT$T$GT$::new::h489983783fd8428c(&var_168);
    int64_t temp0 = *rax;
    *rax += 1;
    
    if (temp0 <= -1)
        trap(6);
    
    uint64_t var_208 = rax;
    char var_1c0 = arg3;
    int128_t zmm1 = arg2[1];
    int128_t zmm2 = arg2[2];
    int128_t var_1f8 = *arg2;
    
    if (!(arg4 & 1))
    {
        forc_crypto::keys::vanity::find_vanity_address_with_timeout::_$u7b$$u7b$closure$u7d$$u7d$::h1a6c6fc763535fc1(arg1, &var_1f8);
        core::ptr::drop_in_place$LT$forc_crypto..keys..vanity..find_vanity_address_with_timeout..$u7b$$u7b$closure$u7d$$u7d$$GT$::h298b7ac34438445a(&var_1f8);
        core::ptr::drop_in_place$LT$alloc..sync..Arc$LT$core..sync..atomic..AtomicBool$GT$$GT$::h857db8784fc23113(&var_208);
    }
    else
    {
        int64_t var_200 = arg5;
        tokio::runtime::runtime::Runtime::new::hd49dd2b0b53a5a7a(&var_168);
        int64_t rax_1 = var_168;
        
        if (rax_1 != 2)
        {
            int128_t var_128;
            int128_t var_178_1 = var_128;
            int128_t var_138;
            int128_t var_188_1 = var_138;
            int128_t var_148;
            int128_t var_198_1 = var_148;
            int128_t var_1a8_1 = var_158;
            int64_t var_1b8 = rax_1;
            int64_t var_1b0_1 = var_160;
            int128_t var_138_1 = rax;
            int128_t var_148_1 = zmm2;
            var_158 = zmm1;
            var_168 = var_1f8;
            var_128 = &var_200;
            *var_128[8] = &var_208;
            char var_c0_1 = 0;
            tokio::runtime::runtime::Runtime::block_on::hb7bf6f4de204da21(arg1, &var_1b8, &var_168);
            core::ptr::drop_in_place$LT$alloc..sync..Arc$LT$core..sync..atomic..AtomicBool$GT$$GT$::h857db8784fc23113(&var_208);
            core::ptr::drop_in_place$LT$tokio..runtime..runtime..Runtime$GT$::h3587b7cd99d49c29(
                &var_1b8);
        }
        else
        {
            *arg1 = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h12fd0a7a4d9bffcb(var_160);
            arg1[8] = -0x7fffffffffffffff;
            core::ptr::drop_in_place$LT$forc_crypto..keys..vanity..find_vanity_address_with_timeout..$u7b$$u7b$closure$u7d$$u7d$$GT$::h298b7ac34438445a(&var_1f8);
            core::ptr::drop_in_place$LT$alloc..sync..Arc$LT$core..sync..atomic..AtomicBool$GT$$GT$::h857db8784fc23113(&var_208);
        }
    }
    
    return arg1;
}
