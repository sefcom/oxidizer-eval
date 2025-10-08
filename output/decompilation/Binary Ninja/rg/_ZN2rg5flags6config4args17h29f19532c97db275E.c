
  int64_t rg::flags::config::args::h29f19532c97db275(int64_t* arg1)

{
    int64_t* var_128;
    std::env::var_os::hb4475f8d1a095f3c(&var_128, "RIPGREP_CONFIG_PATHcrates/core/f…");
    int64_t* rdi_1 = var_128;
    
    if (-(rdi_1) == -0x8000000000000000)
    {
        *arg1 = 0;
        arg1[1] = 8;
        arg1[2] = 0;
        return -(rdi_1);
    }
    
    int64_t var_120;
    int64_t var_118;
    
    if (!var_118)
    {
        *arg1 = 0;
        arg1[1] = 8;
        arg1[2] = 0;
        return core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::ha1b355bbd6f8eb7b(rdi_1, 
            var_120);
    }
    
    int64_t* var_88 = rdi_1;
    int64_t var_78_1 = var_118;
    int64_t** var_d8;
    rg::flags::config::parse::hc02adeccf0fa2bed(&var_d8, &var_88);
    int64_t* var_f8;
    int64_t* var_e8;
    int64_t* var_a8;
    int128_t var_68;
    
    if (var_d8 != -0x8000000000000000)
    {
        var_68 = var_d8;
        int128_t var_c0;
        int128_t var_48 = var_c0;
        int64_t var_b0;
        int64_t r14_2 = var_b0;
        int64_t var_38_1 = r14_2;
        int128_t var_110;
        
        if (r14_2)
        {
            int64_t var_50_1 = r14_2;
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h1f0bd36aa60f4f7a(&var_a8, &var_48);
            
            for (int64_t i = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h86d62b8c222d52fb(&var_a8); i; i = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h86d62b8c222d52fb(&var_a8))
            {
                int64_t i_1 = i;
                
                if (rg::messages::messages::h9ee4188b23ce53b0())
                {
                    std::io::stdio::stdout::hb6a8e10bcccf3287();
                    var_128 = &std::io::stdio::STDOUT::h411b213c5c9add46;
                    int64_t* rax_11 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_128);
                    var_128 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
                    int64_t* var_f0 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_128);
                    var_128 = &data_7e99c8;
                    int64_t var_120_3 = 1;
                    int64_t var_118_3 = 8;
                    var_110 = {0};
                    r14_2 = 1;
                    int64_t** rax_13 =
                        std::io::Write::write_fmt::hfeba02f6870139ed(&var_f0, &var_128);
                    var_d8 = rax_13;
                    
                    if (rax_13)
                    {
                        var_128 = rax_13;
                        int32_t rdi_30;
                        rdi_30 = std::io::error::Error::kind::h135fe00c4e7365f3(rax_13) != 0xb;
                        std::process::exit::hcda678ff272dfed1(rdi_30 * 2);
                        /* no return */
                    }
                    
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h328fe786a92b7324(&var_d8);
                    var_e8 = var_120;
                    var_d8 = &var_e8;
                    uint64_t (* var_d0_1)(int64_t* arg1, int64_t arg2) = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
                    int64_t* var_c8_1 = &i_1;
                    var_c0 = anyhow::error::_$LT$impl$u20$core..fmt..Display$u20$for$u20$anyhow..Error$GT$::fmt::he8862a1212ccbd86;
                    var_128 = &data_7e99f8;
                    int64_t var_120_4 = 3;
                    *var_110[8] = 0;
                    int64_t*** var_118_4 = &var_d8;
                    var_110 = 2;
                    int64_t* rax_14 =
                        std::io::Write::write_fmt::hfeba02f6870139ed(&var_f0, &var_128);
                    var_f8 = rax_14;
                    
                    if (rax_14)
                    {
                        var_128 = rax_14;
                        int32_t rdi_27;
                        rdi_27 = std::io::error::Error::kind::h135fe00c4e7365f3(rax_14) != 0xb;
                        std::process::exit::hcda678ff272dfed1(rdi_27 * 2);
                        /* no return */
                    }
                    
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h328fe786a92b7324(&var_f8);
                    core::ptr::drop_in_place$LT$std..io..stdio..StderrLock$GT$::hc9a1ca1256489ed0(
                        rax_11);
                    core::ptr::drop_in_place$LT$std..io..stdio..StderrLock$GT$::hc9a1ca1256489ed0(
                        var_f0);
                }
                
                core::ptr::drop_in_place$LT$anyhow..Error$GT$::h25f51841f1014f37();
            }
            
            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$anyhow..Error$GT$$GT$::he21bfa65696d9979(&var_a8);
            r14_2 = var_50_1;
        }
        
        if (core::sync::atomic::atomic_load::headb9992cbbd027a(
            &log::MAX_LOG_LEVEL_FILTER::hb16df1a2b362bf4c, 0) >= 4)
        {
            var_e8 = var_120;
            var_a8 = &var_e8;
            uint64_t (* var_a0_2)(int64_t* arg1, int64_t arg2) =
                _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
            int128_t* var_98_1 = &var_68;
            int64_t (* var_90_1)(void* arg1, int64_t* arg2) = _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..fmt..Debug$GT$::fmt::hecb104d1c315a180;
            var_128 = &data_7e9a28;
            int64_t var_120_5 = 2;
            *var_110[8] = 0;
            int64_t** var_118_5 = &var_a8;
            var_110 = 2;
            int64_t rax_16 = log::__private_api::loc::h53b04f6fd0066707(&data_7e9a48);
            var_d8 = "rg::flags::configafter-contextNU…";
            int64_t var_d0_2 = 0x11;
            char const* const var_c8_2 = "rg::flags::configafter-contextNU…";
            var_c0 = 0x11;
            *var_c0[8] = rax_16;
            log::__private_api::log::h124fdfc9e9ed7585(&var_128, 4, &var_d8);
        }
        
        int64_t var_c8;
        arg1[2] = var_c8;
        *arg1 = var_68;
        
        if (!r14_2)
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$anyhow..Error$GT$$GT$::h0158ef9d20de58a6(
                &var_48);
    }
    else
    {
        int64_t* var_d0;
        var_f8 = var_d0;
        
        if (rg::messages::messages::h9ee4188b23ce53b0())
        {
            std::io::stdio::stdout::hb6a8e10bcccf3287();
            var_128 = &std::io::stdio::STDOUT::h411b213c5c9add46;
            int64_t* rax_5 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_128);
            var_128 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
            var_e8 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_128);
            var_128 = &data_7e99c8;
            int64_t var_120_1 = 1;
            int64_t var_118_1 = 8;
            int128_t var_110_1 = {0};
            int64_t rbp;
            rbp = 1;
            int64_t* rax_7 = std::io::Write::write_fmt::hfeba02f6870139ed(&var_e8, &var_128);
            var_a8 = rax_7;
            
            if (rax_7)
            {
                var_128 = rax_7;
                int32_t rdi_33;
                rdi_33 = std::io::error::Error::kind::h135fe00c4e7365f3(rax_7) != 0xb;
                std::process::exit::hcda678ff272dfed1(rdi_33 * 2);
                /* no return */
            }
            
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h328fe786a92b7324(&var_a8);
            var_a8 = &var_f8;
            int64_t (* var_a0_1)(int64_t* arg1, int64_t* arg2) = anyhow::error::_$LT$impl$u20$core..fmt..Display$u20$for$u20$anyhow..Error$GT$::fmt::he8862a1212ccbd86;
            var_128 = &data_7e99d8;
            int64_t var_120_2 = 2;
            *var_110_1[8] = 0;
            int64_t** var_118_2 = &var_a8;
            var_110_1 = 1;
            int64_t* rax_8 = std::io::Write::write_fmt::hfeba02f6870139ed(&var_e8, &var_128);
            var_68 = rax_8;
            
            if (rax_8)
            {
                var_128 = rax_8;
                int32_t rdi_36;
                rdi_36 = std::io::error::Error::kind::h135fe00c4e7365f3(rax_8) != 0xb;
                std::process::exit::hcda678ff272dfed1(rdi_36 * 2);
                /* no return */
            }
            
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h328fe786a92b7324(&var_68);
            core::ptr::drop_in_place$LT$std..io..stdio..StderrLock$GT$::hc9a1ca1256489ed0(rax_5);
            core::ptr::drop_in_place$LT$std..io..stdio..StderrLock$GT$::hc9a1ca1256489ed0(var_e8);
        }
        
        *arg1 = 0;
        arg1[1] = 8;
        arg1[2] = 0;
        core::ptr::drop_in_place$LT$anyhow..Error$GT$::h25f51841f1014f37();
    }
    return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hee77a3799ccd604e(&var_88);
}
