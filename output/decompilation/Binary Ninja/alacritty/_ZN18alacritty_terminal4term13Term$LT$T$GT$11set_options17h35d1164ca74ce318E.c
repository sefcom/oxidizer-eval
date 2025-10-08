
  int64_t alacritty_terminal::term::Term$LT$T$GT$::set_options::h35d1164ca74ce318(int32_t* arg1, int128_t* arg2)

{
    int40_t rax = *(arg1 + 0x238);
    int128_t var_28 = *(arg1 + 0x228);
    int128_t var_38 = *(arg1 + 0x218);
    int128_t zmm1 = arg2[1];
    *(arg1 + 0x218) = *arg2;
    *(arg1 + 0x228) = zmm1;
    *(arg1 + 0x238) = arg2[2];
    int128_t var_78;
    int128_t var_58;
    int64_t var_48;
    int64_t r14;
    
    if (!(0 + -(*(arg1 + 0x240))))
    {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
            &var_78, &arg1[0x90]);
        int64_t var_68;
        var_48 = var_68;
        var_58 = var_78;
        r14 = -0x7fffffffffffffff;
    }
    else
        r14 = -0x7ffffffffffffffe;
    
    var_78 = r14;
    var_78 = var_58;
    int64_t var_60 = var_48;
    _$LT$alacritty..event..EventProxy$u20$as$u20$alacritty_terminal..event..EventListener$GT$::send_event::hcb980e74e667f924(arg1, &var_78);
    void* rdi_2 = &arg1[0x36];
    
    if (!(arg1[0x1b7] & 0x1000))
        rdi_2 = &arg1[0xa];
    
    alacritty_terminal::grid::Grid$LT$T$GT$::update_history::hf3d18eb057d90925(rdi_2, 
        *(arg1 + 0x230));
    
    if (arg1[0x8f] != *rax[4])
    {
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$bool$GT$$GT$::h853d54bae12860f6(
            *(arg1 + 0x1b8), *(arg1 + 0x1c0));
        *(arg1 + 0x1b8) = 0;
        *(arg1 + 0x1c0) = 1;
        *(arg1 + 0x1c8) = 0;
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$bool$GT$$GT$::h853d54bae12860f6(
            *(arg1 + 0x1d0), *(arg1 + 0x1d8));
        *(arg1 + 0x1d0) = 0;
        *(arg1 + 0x1d8) = 1;
        *(arg1 + 0x1e0) = 0;
        *(arg1 + 0x6de) &= 0x83;
    }
    
    arg1[0x84] = 1;
    return core::ptr::drop_in_place$LT$alacritty_terminal..term..Config$GT$::h06543dc3aca77dce(
        &var_38);
}
