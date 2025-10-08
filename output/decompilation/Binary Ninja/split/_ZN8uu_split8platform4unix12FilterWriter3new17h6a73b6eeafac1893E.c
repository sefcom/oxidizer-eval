
  int64_t uu_split::platform::unix::FilterWriter::new::h6a73b6eeafac1893(int32_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4)

{
    void var_140;
    uu_split::platform::unix::WithEnvVarSet::new::h427893530f97257f(&var_140, arg4);
    int32_t var_198;
    std::env::var::hb56eac25d1451add(&var_198, "SHELL-c/bin/shShell process retu…");
    int128_t var_158;
    int128_t var_190;
    
    if (var_198 != 1)
    {
        int64_t var_180;
        int64_t var_148_1 = var_180;
        var_158 = var_190;
    }
    else
        uu_split::platform::unix::FilterWriter::new::_$u7b$$u7b$closure$u7d$$u7d$::h1b825aae2aa074bc(&var_158, var_190, *var_190[8]);
    void var_108;
    std::process::Command::new::h9c867987cc8ecf9e(&var_108, &var_158);
    std::process::Command::arg::h01d1b9d820a6f008(&var_108, "-c/bin/shShell process returned …");
    std::process::Command::arg::h01d1b9d820a6f008(&var_108, arg2);
    std::process::Command::stdin::hf847da75d4414cb9(&var_108);
    int32_t var_178;
    std::process::Command::spawn::haea730ea7b05a977(&var_178, &var_108);
    int64_t var_170;
    
    if (var_178 != 1)
    {
        int32_t var_174;
        var_198 = var_174;
        int64_t var_194_1 = var_170;
        core::ptr::drop_in_place$LT$std..process..Command$GT$::h4a39623342789579(&var_108);
        int128_t zmm0_3 = var_198;
        int128_t var_168;
        *(arg1 + 0x10) = var_168;
        *(arg1 + 4) = zmm0_3;
        *arg1 = 0;
    }
    else
    {
        *(arg1 + 8) = var_170;
        *arg1 = 1;
        core::ptr::drop_in_place$LT$std..process..Command$GT$::h4a39623342789579(&var_108);
    }
    return 
        core::ptr::drop_in_place$LT$uu_split..platform..unix..WithEnvVarSet$GT$::h230d990f3209e038(
        &var_140);
}
