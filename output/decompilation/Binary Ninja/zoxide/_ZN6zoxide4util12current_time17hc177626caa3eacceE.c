
  int64_t zoxide::util::current_time::hc177626caa3eacce()

{
    int64_t rax;
    int32_t rdx;
    rax = std::time::SystemTime::now::h4fbc1302a9c481f4();
    int64_t var_30 = rax;
    int32_t var_28 = rdx;
    void var_20;
    std::time::SystemTime::duration_since::h5eaa6a008fb4c137(&var_20, &var_30, 0);
    int64_t var_40;
    anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$E$GT$$u20$for$u20$core..result..Result$LT$T$C$E$GT$$GT$::context::hc4dc3457e2a22d9b(&var_40, &var_20);
    int32_t var_38;
    
    if (var_38 != 0x3b9aca00)
        return 0;
    
    return 1;
}
