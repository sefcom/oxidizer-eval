
  int64_t rg::haystack::HaystackBuilder::build_from_result::h50c99e9ab523ff54(int64_t* arg1, char arg2, int32_t* arg3)

{
    if (*arg3 != 3)
        /* tailcall */
        return rg::haystack::HaystackBuilder::build::hbf10e93e3f18e435(arg1, arg2, arg3);
    
    int64_t var_28 = *(arg3 + 0x38);
    int128_t var_38 = *(arg3 + 0x28);
    int128_t var_48 = *(arg3 + 0x18);
    int128_t var_58 = *(arg3 + 8);
    rg::messages::set_errored::h9a7e7dff7c3f4854();
    
    if (rg::messages::messages::h9ee4188b23ce53b0())
    {
        std::io::stdio::stdout::hb6a8e10bcccf3287();
        int64_t* var_a0 = &std::io::stdio::STDOUT::h411b213c5c9add46;
        int64_t* rax_2 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_a0);
        var_a0 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
        int64_t* var_a8 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_a0);
        var_a0 = &data_7e99c8;
        int64_t var_98_1 = 1;
        int64_t var_90_1 = 8;
        int128_t var_88_1 = {0};
        int64_t rbp;
        rbp = 1;
        int128_t* rax_4 = std::io::Write::write_fmt::hfeba02f6870139ed(&var_a8, &var_a0);
        int128_t* var_68 = rax_4;
        
        if (rax_4)
        {
            var_a0 = rax_4;
            int32_t rdi_12;
            rdi_12 = std::io::error::Error::kind::h135fe00c4e7365f3(rax_4) != 0xb;
            std::process::exit::hcda678ff272dfed1(rdi_12 * 2);
            /* no return */
        }
        
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h328fe786a92b7324(&var_68);
        var_68 = &var_58;
        uint64_t (* var_60_1)(int64_t* arg1, int64_t* arg2) =
            _$LT$ignore..Error$u20$as$u20$core..fmt..Display$GT$::fmt::heee24f66390ed69b;
        var_a0 = &data_7ea800;
        int64_t var_98_2 = 2;
        *var_88_1[8] = 0;
        int128_t** var_90_2 = &var_68;
        var_88_1 = 1;
        int64_t* rax_5 = std::io::Write::write_fmt::hfeba02f6870139ed(&var_a8, &var_a0);
        int64_t* var_70 = rax_5;
        
        if (rax_5)
        {
            var_a0 = rax_5;
            int32_t rdi_15;
            rdi_15 = std::io::error::Error::kind::h135fe00c4e7365f3(rax_5) != 0xb;
            std::process::exit::hcda678ff272dfed1(rdi_15 * 2);
            /* no return */
        }
        
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h328fe786a92b7324(&var_70);
        core::ptr::drop_in_place$LT$std..io..stdio..StderrLock$GT$::hc9a1ca1256489ed0(rax_2);
        core::ptr::drop_in_place$LT$std..io..stdio..StderrLock$GT$::hc9a1ca1256489ed0(var_a8);
    }
    
    *arg1 = 3;
    return core::ptr::drop_in_place$LT$ignore..Error$GT$::h648dc1fae12db6ab(&var_58);
}
