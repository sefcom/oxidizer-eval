
  fn forc_crypto::keys::vanity::find_vanity_address_with_timeout::hda53e568c7769d8c(arg1: *mut u64, arg2: *mut i128, arg3: i8, arg4: i8, arg5: i64) -> *mut u64

{
    let mut var_168: i64 = 1;
    let var_160: i64 = 1;
    let mut var_158: i8 = 0;
    let rax: u64 = alloc::boxed::Box$LT$T$GT$::new::h489983783fd8428c(&var_168);
    let temp0: i64 = *rax;
    *rax += 1;
    
    if temp0 <= -1
    {
        trap(6);
    }
    
    let mut var_208: u64 = rax;
    let var_1c0: i8 = arg3;
    let zmm1: i128 = arg2[1];
    let zmm2: i128 = arg2[2];
    let mut var_1f8: i128 = *arg2;
    
    if (arg4 & 1) == 0
    {
        forc_crypto::keys::vanity::find_vanity_address_with_timeout::_$u7b$$u7b$closure$u7d$$u7d$::h1a6c6fc763535fc1(arg1, &var_1f8);
        core::ptr::drop_in_place$LT$forc_crypto..keys..vanity..find_vanity_address_with_timeout..$u7b$$u7b$closure$u7d$$u7d$$GT$::h298b7ac34438445a(&var_1f8);
        core::ptr::drop_in_place$LT$alloc..sync..Arc$LT$core..sync..atomic..AtomicBool$GT$$GT$::h857db8784fc23113(&var_208);
    }
    else
    {
        let mut var_200: i64 = arg5;
        tokio::runtime::runtime::Runtime::new::hd49dd2b0b53a5a7a(&var_168);
        let rax_1: i64 = var_168;
        
        if rax_1 != 2
        {
            let mut var_128: i128;
            let var_178_1: i128 = var_128;
            let var_138: i128;
            let var_188_1: i128 = var_138;
            let var_148: i128;
            let var_198_1: i128 = var_148;
            let var_1a8_1: i128 = var_158;
            let mut var_1b8: i64 = rax_1;
            let var_1b0_1: i64 = var_160;
            let var_138_1: i128 = rax;
            let var_148_1: i128 = zmm2;
            var_158 = zmm1;
            var_168 = var_1f8;
            var_128 = &var_200;
            *var_128[8] = &var_208;
            let var_c0_1: i8 = 0;
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
    
    arg1
}
