
  int128_t* uu_tail::args::Settings::from_obsolete_args::hfeff493f00111f18(int128_t* arg1, int64_t* arg2, void* arg3)

{
    uint64_t var_98;
    _$LT$uu_tail..args..Settings$u20$as$u20$core..default..Default$GT$::default::hab317295196880fb(
        &var_98);
    
    if (*(arg2 + 0xa))
        bool var_4c_1 = arg3;
    
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
    
    var_98 = rsi;
    uint64_t var_90 = rcx;
    void var_48;
    
    if (!arg3)
        _$LT$uu_tail..paths..Input$u20$as$u20$core..default..Default$GT$::default::h20cf20ae0b612e7e(&var_48);
    else
        uu_tail::paths::Input::from::hacbfb0c241154464(&var_48, arg3);
    
    void var_80;
    alloc::vec::Vec$LT$T$C$A$GT$::push::h0d41b2d489ee0555(&var_80, &var_48);
    int128_t var_58;
    arg1[4] = var_58;
    int128_t zmm0 = var_98;
    int128_t var_68;
    arg1[3] = var_68;
    int128_t var_78;
    arg1[2] = var_78;
    arg1[1] = rdx;
    *arg1 = zmm0;
    return arg1;
}
