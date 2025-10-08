
  int64_t rg::flags::defs::convert::u64::h82a0a4ffdeb985fd(char* arg1, int64_t arg2)

{
    char* var_28;
    rg::flags::defs::convert::str::hf200dae070501684(&var_28, arg1, arg2);
    char* rsi_1 = var_28;
    
    if (!rsi_1)
        return 1;
    
    int64_t var_20;
    void var_18;
    core::num::_$LT$impl$u20$u64$GT$::from_ascii_radix::h3a465e09cf2726d1(&var_18, rsi_1, var_20);
    return anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$E$GT$$u20$for$u20$core..result..Result$LT$T$C$E$GT$$GT$::context::h5182e55b4bf32348(&var_18);
}
