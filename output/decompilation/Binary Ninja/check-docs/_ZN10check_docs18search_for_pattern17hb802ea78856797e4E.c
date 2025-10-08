
  int64_t* check_docs::search_for_pattern::hb802ea78856797e4(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4)

{
    int64_t var_1a8 = arg2;
    int64_t var_1a0 = arg3;
    char const (** const var_128)[0xbf];
    std::process::Command::new::h6b193cfe60369f89(&var_128, "grepb");
    std::process::Command::arg::h09db51410207777d(&var_128, "-H-n-r--binary-files=without-mat…");
    std::process::Command::arg::h09db51410207777d(&var_128, "-n-r--binary-files=without-match…");
    std::process::Command::arg::h09db51410207777d(&var_128, "-r--binary-files=without-match--…");
    std::process::Command::arg::h09db51410207777d(&var_128, "--binary-files=without-match--ex…");
    std::process::Command::arg::h09db51410207777d(&var_128, "--exclude-dir=check-docsfailed g…");
    std::process::Command::arg::h09db51410207777d(&var_128, arg2);
    std::process::Command::arg::h09db51410207777d(&var_128, arg4);
    int128_t var_198;
    std::process::Command::output::h8d3fd625d1d0bec1(&var_198);
    void var_160;
    core::result::Result$LT$T$C$E$GT$::expect::hd013351f25734c35(&var_160, &var_198, 
        "failed grep commandFailed runnin…", 0x13);
    uint64_t rdx_7 =
        core::ptr::drop_in_place$LT$std..process..Command$GT$::h13e711a87b909194(&var_128);
    int32_t var_130;
    int128_t var_120;
    
    if (!var_130)
    {
        alloc::string::String::from_utf8::hcb4419710bc0e60b(&var_128, &var_160);
        char const (** const rax_1)[0xbf] = var_128;
        var_198 = var_120;
        int64_t var_110;
        
        if (-(rax_1) != -0x8000000000000000)
        {
            int64_t var_110_2 = var_110;
            int128_t var_120_1 = var_198;
            var_128 = rax_1;
            int64_t var_108;
            int64_t var_108_2 = var_108;
            arg1[1] = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::ha48715314de132c6(&var_128);
            *arg1 = -0x8000000000000000;
        }
        else
        {
            arg1[2] = var_110;
            *arg1 = var_198;
        }
    }
    else
    {
        var_198 = &var_1a8;
        *var_198[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8c5b7927cb42b082;
        var_128 = &data_5d3688;
        var_120 = 2;
        int64_t var_108_1 = 0;
        *var_120[8] = &var_198;
        int64_t var_110_1 = 1;
        void var_48;
        core::option::Option$LT$T$GT$::map_or_else::hb92624ab2af3a182(&var_48, 0, rdx_7, &var_128);
        arg1[1] = anyhow::error::_$LT$impl$u20$anyhow..Error$GT$::msg::h1606e8560e5c3217(&var_48);
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h3b4e207945e3471f(&var_160);
    }
    void var_148;
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h3b4e207945e3471f(&var_148);
    return arg1;
}
