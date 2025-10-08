
  int32_t* zoxide::util::Fzf::spawn::hfa36335aedf1d058(int32_t* arg1, void* arg2)

{
    int32_t var_30;
    int32_t* result = std::process::Command::spawn::haea730ea7b05a977(&var_30, arg2);
    int128_t var_2c;
    
    if (var_30 != 1)
    {
        *(arg1 + 0x10) = var_2c;
        *(arg1 + 4) = var_2c;
        *arg1 = 0;
        return result;
    }
    
    int64_t r14 = *var_2c[4];
    int64_t var_50;
    
    if (std::io::error::Error::kind::h135fe00c4e7365f3(r14))
    {
        int64_t var_48 = r14;
        var_50 = 1;
        return anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$E$GT$$u20$for$u20$core..result..Result$LT$T$C$E$GT$$GT$::context::h90a67f2b84aeb721(arg1, &var_50);
    }
    
    var_50 = r14;
    *(arg1 + 8) = anyhow::kind::Adhoc::new::h431080fddafce1a4();
    *arg1 = 1;
    return core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hc0a90eb9fb31b0c2(&var_50);
}
