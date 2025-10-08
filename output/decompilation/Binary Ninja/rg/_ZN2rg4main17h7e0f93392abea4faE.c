
  uint64_t rg::main::h7e0f93392abea4fa()

{
    int128_t var_3c8;
    rg::flags::parse::parse::hfff2c8ca8bc39d55(&var_3c8);
    char var_410;
    rg::run::h4fa263ea092112c0(&var_410, &var_3c8);
    
    if (var_410 != 1)
    {
        char var_40f;
        return var_40f;
    }
    
    int64_t var_408;
    int64_t var_420 = var_408;
    int128_t var_3e8;
    anyhow::error::_$LT$impl$u20$anyhow..Error$GT$::chain::h309703631ff77b15(&var_3e8, &var_420);
    int128_t var_3d8;
    int128_t var_3b8_1 = var_3d8;
    var_3c8 = var_3e8;
    
    while (true)
    {
        int64_t* rax_1;
        void* rdx_1;
        rax_1 = anyhow::chain::_$LT$impl$u20$core..iter..traits..iterator..Iterator$u20$for$u20$anyhow..Chain$GT$::next::hdbe11d3f3550117e(&var_3c8);
        
        if (!rax_1)
            break;
        
        *(rdx_1 + 0x38);
        
        if (_$LT$dyn$u20$core..error..Error$GT$::is::hce57dda328083154()
            && std::io::error::Error::kind::h135fe00c4e7365f3(*rax_1) == 0xb)
        {
            core::ptr::drop_in_place$LT$anyhow..Chain$GT$::h5d69fa9296ba90a7(&var_3c8);
            core::ptr::drop_in_place$LT$anyhow..Error$GT$::h25f51841f1014f37();
            return 0;
        }
    }
    
    core::ptr::drop_in_place$LT$anyhow..Chain$GT$::h5d69fa9296ba90a7(&var_3c8);
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    var_3c8 = &std::io::stdio::STDOUT::h411b213c5c9add46;
    int64_t* rax_4 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_3c8);
    var_3c8 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
    int64_t* var_418 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_3c8);
    var_3c8 = &data_7e99c8;
    *var_3c8[8] = 1;
    var_3b8_1 = 8;
    var_3b8_1 = {0};
    int64_t rbp;
    rbp = 1;
    int64_t* rax_6 = std::io::Write::write_fmt::hfeba02f6870139ed(&var_418, &var_3c8);
    int64_t* var_3f8 = rax_6;
    
    if (rax_6)
    {
        var_3c8 = rax_6;
        int32_t rdi_17;
        rdi_17 = std::io::error::Error::kind::h135fe00c4e7365f3(rax_6) != 0xb;
        std::process::exit::hcda678ff272dfed1(rdi_17 * 2);
        /* no return */
    }
    
    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h328fe786a92b7324(&var_3f8);
    var_3f8 = &var_420;
    int64_t (* var_3f0_1)(int64_t* arg1, int64_t* arg2) = anyhow::error::_$LT$impl$u20$core..fmt..Display$u20$for$u20$anyhow..Error$GT$::fmt::he8862a1212ccbd86;
    var_3c8 = &data_7ea800;
    *var_3c8[8] = 2;
    void* const var_3a8_1 = &data_487ff8;
    int64_t var_3a0_1 = 1;
    var_3b8_1 = &var_3f8;
    *var_3b8_1[8] = 1;
    int64_t rax_7 = std::io::Write::write_fmt::hfeba02f6870139ed(&var_418, &var_3c8);
    int64_t var_400 = rax_7;
    
    if (rax_7)
    {
        var_3c8 = rax_7;
        int32_t rdi_20;
        rdi_20 = std::io::error::Error::kind::h135fe00c4e7365f3(rax_7) != 0xb;
        std::process::exit::hcda678ff272dfed1(rdi_20 * 2);
        /* no return */
    }
    
    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h328fe786a92b7324(&var_400);
    core::ptr::drop_in_place$LT$std..io..stdio..StderrLock$GT$::hc9a1ca1256489ed0(rax_4);
    core::ptr::drop_in_place$LT$std..io..stdio..StderrLock$GT$::hc9a1ca1256489ed0(var_418);
    core::ptr::drop_in_place$LT$anyhow..Error$GT$::h25f51841f1014f37();
    uint64_t result;
    result = 2;
    return result;
}
