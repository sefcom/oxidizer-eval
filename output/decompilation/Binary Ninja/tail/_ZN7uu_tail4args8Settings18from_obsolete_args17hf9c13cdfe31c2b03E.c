
  int128_t* uu_tail::args::Settings::from_obsolete_args::hf9c13cdfe31c2b03(int128_t* arg1, int64_t* arg2, void* arg3)

{
    uint64_t var_c8;
    _$LT$uu_tail..args..Settings$u20$as$u20$core..default..Default$GT$::default::hfebeb1c4deedc4af(
        &var_c8);
    
    if (*(arg2 + 0xa))
        bool var_7c_1 = arg3;
    
    uint64_t rax = arg2[1];
    uint64_t rcx = *arg2;
    char temp0 = *(arg2 + 9);
    uint64_t rdx = 0xa;
    
    if (!temp0)
        rdx = rcx;
    
    if (!temp0)
        rcx = rax;
    
    uint64_t rsi = 4;
    
    if (temp0)
        rsi = rax;
    
    var_c8 = rsi;
    uint64_t var_c0 = rcx;
    int128_t var_78;
    
    if (!arg3)
        _$LT$uu_tail..paths..Input$u20$as$u20$core..default..Default$GT$::default::hd997c7035054d831(&var_78);
    else
        uu_tail::paths::Input::from::h6db62654b008023a(&var_78, arg3);
    
    int128_t var_58;
    int128_t var_28 = var_58;
    int128_t var_68;
    int128_t var_38 = var_68;
    int128_t var_48 = var_78;
    void var_b0;
    alloc::vec::Vec$LT$T$C$A$GT$::push::h8fc9b727b1446556(&var_b0, &var_48);
    int128_t var_88;
    arg1[4] = var_88;
    int128_t zmm0_1 = var_c8;
    int128_t var_98;
    arg1[3] = var_98;
    int128_t var_a8;
    arg1[2] = var_a8;
    arg1[1] = rdx;
    *arg1 = zmm0_1;
    return arg1;
}
