
  uint64_t alacritty::display::hint::HintLabels::new::hcaae289cf8e987de(int128_t* arg1, void* arg2)

{
    void var_28;
    _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h39b6d71bf19d243a(&var_28, arg2);
    int128_t var_40;
    int64_t var_20;
    core::iter::traits::iterator::Iterator::collect::h380a1850675d8d0f(&var_40, var_20);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_28);
    uint64_t result;
    int128_t zmm0;
    result = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 8, 0);
    
    if (!result)
    {
        alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
        /* no return */
    }
    
    int64_t var_30;
    
    if (var_30 - 1 < 0)
    {
        zmm0 = ((var_30 - 1) & 1) | (var_30 - 1) >> 1;
        zmm0 = zmm0 + zmm0;
    }
    else
        zmm0 = var_30 - 1;
    
    zmm0 = zmm0 * 0.5f;
    int64_t rcx_3 = zmm0;
    int64_t rcx_4 = 0;
    
    if (zmm0 >= 0f)
        rcx_4 = ((zmm0 - 9.22337204e+18f) & rcx_3 >> 0x3f) | rcx_3;
    
    int64_t rdx_4 = -1;
    
    if (zmm0 <= 1.8446743e+19f)
        rdx_4 = rcx_4;
    
    *result = 0;
    arg1[1] = var_30;
    *arg1 = var_40;
    *(arg1 + 0x18) = 1;
    arg1[2] = result;
    *(arg1 + 0x28) = 1;
    arg1[3] = rdx_4;
    return result;
}
