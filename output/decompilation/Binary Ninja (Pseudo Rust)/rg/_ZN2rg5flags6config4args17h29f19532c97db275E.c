
  fn rg::flags::config::args::h29f19532c97db275(arg1: *mut i64) -> i64

{
    let mut var_128: *mut i64;
    std::env::var_os::hb4475f8d1a095f3c(&var_128, "RIPGREP_CONFIG_PATHcrates/core/f…");
    let rdi_1: *mut i64 = var_128;
    
    if -(rdi_1) == -0x8000000000000000
    {
        *arg1 = 0;
        arg1[1] = 8;
        arg1[2] = 0;
        return -(rdi_1);
    }
    
    let var_120: i64;
    let var_118: i64;
    
    if var_118 == 0
    {
        *arg1 = 0;
        arg1[1] = 8;
        arg1[2] = 0;
        return core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::ha1b355bbd6f8eb7b(rdi_1, 
            var_120);
    }
    
    let mut var_88: *mut i64 = rdi_1;
    let var_78_1: i64 = var_118;
    let mut var_d8: *mut *mut i64;
    rg::flags::config::parse::hc02adeccf0fa2bed(&var_d8, &var_88);
    let mut var_f8: *mut i64;
    let mut var_e8: *mut i64;
    let mut var_a8: *mut i64;
    let mut var_68: i128;
    
    if var_d8 != -0x8000000000000000
    {
        var_68 = var_d8;
        let mut var_c0: i128;
        let mut var_48: i128 = var_c0;
        let var_b0: i64;
        let mut r14_2: i64 = var_b0;
        let var_38_1: i64 = r14_2;
        let mut var_110: i128;
        
        if r14_2 != 0
        {
            let var_50_1: i64 = r14_2;
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h1f0bd36aa60f4f7a(&var_a8, &var_48);
            
            for let mut i: i64 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h86d62b8c222d52fb(&var_a8); i != 0; i = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h86d62b8c222d52fb(&var_a8)
            {
                let mut i_1: i64 = i;
                
                if rg::messages::messages::h9ee4188b23ce53b0() != 0
                {
                    std::io::stdio::stdout::hb6a8e10bcccf3287();
                    var_128 = &std::io::stdio::STDOUT::h411b213c5c9add46;
                    let rax_11: *mut i64 =
                        std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_128);
                    var_128 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
                    let mut var_f0: *mut i64 =
                        std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_128);
                    var_128 = &data_7e99c8;
                    let var_120_3: i64 = 1;
                    let var_118_3: i64 = 8;
                    var_110 = {0};
                    r14_2 = 1;
                    let rax_13: *mut *mut i64 =
                        std::io::Write::write_fmt::hfeba02f6870139ed(&var_f0, &var_128);
                    var_d8 = rax_13;
                    
                    if rax_13 != 0
                    {
                        var_128 = rax_13;
                        let mut rdi_30: i32;
                        rdi_30 = std::io::error::Error::kind::h135fe00c4e7365f3(rax_13) != 0xb;
                        std::process::exit::hcda678ff272dfed1(rdi_30 * 2);
                        /* no return */
                    }
                    
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h328fe786a92b7324(&var_d8);
                    var_e8 = var_120;
                    var_d8 = &var_e8;
                    let var_d0_1: fn(arg1: *mut i64, arg2: i64) -> u64 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
                    let var_c8_1: *mut i64 = &i_1;
                    var_c0 = anyhow::error::_$LT$impl$u20$core..fmt..Display$u20$for$u20$anyhow..Error$GT$::fmt::he8862a1212ccbd86;
                    var_128 = &data_7e99f8;
                    let var_120_4: i64 = 3;
                    *var_110[8] = 0;
                    let var_118_4: *mut *mut *mut i64 = &var_d8;
                    var_110 = 2;
                    let rax_14: *mut i64 =
                        std::io::Write::write_fmt::hfeba02f6870139ed(&var_f0, &var_128);
                    var_f8 = rax_14;
                    
                    if rax_14 != 0
                    {
                        var_128 = rax_14;
                        let mut rdi_27: i32;
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
        
        if core::sync::atomic::atomic_load::headb9992cbbd027a(
            &log::MAX_LOG_LEVEL_FILTER::hb16df1a2b362bf4c, 0) >= 4
        {
            var_e8 = var_120;
            var_a8 = &var_e8;
            let var_a0_2: fn(arg1: *mut i64, arg2: i64) -> u64 =
                _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
            let var_98_1: *mut i128 = &var_68;
            let var_90_1: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 = _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..fmt..Debug$GT$::fmt::hecb104d1c315a180;
            var_128 = &data_7e9a28;
            let var_120_5: i64 = 2;
            *var_110[8] = 0;
            let var_118_5: *mut *mut i64 = &var_a8;
            var_110 = 2;
            let rax_16: i64 = log::__private_api::loc::h53b04f6fd0066707(&data_7e9a48);
            var_d8 = "rg::flags::configafter-contextNU…";
            let var_d0_2: i64 = 0x11;
            let var_c8_2: *const i8 = "rg::flags::configafter-contextNU…";
            var_c0 = 0x11;
            *var_c0[8] = rax_16;
            log::__private_api::log::h124fdfc9e9ed7585(&var_128, 4, &var_d8);
        }
        
        let var_c8: i64;
        arg1[2] = var_c8;
        *arg1 = var_68;
        
        if r14_2 == 0
        {
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$anyhow..Error$GT$$GT$::h0158ef9d20de58a6(
                &var_48);
        }
    }
    else
    {
        let var_d0: *mut i64;
        var_f8 = var_d0;
        
        if rg::messages::messages::h9ee4188b23ce53b0() != 0
        {
            std::io::stdio::stdout::hb6a8e10bcccf3287();
            var_128 = &std::io::stdio::STDOUT::h411b213c5c9add46;
            let rax_5: *mut i64 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_128);
            var_128 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
            var_e8 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_128);
            var_128 = &data_7e99c8;
            let var_120_1: i64 = 1;
            let var_118_1: i64 = 8;
            let mut var_110_1: i128 = {0};
            let mut rbp: i64;
            rbp = 1;
            let rax_7: *mut i64 = std::io::Write::write_fmt::hfeba02f6870139ed(&var_e8, &var_128);
            var_a8 = rax_7;
            
            if rax_7 != 0
            {
                var_128 = rax_7;
                let mut rdi_33: i32;
                rdi_33 = std::io::error::Error::kind::h135fe00c4e7365f3(rax_7) != 0xb;
                std::process::exit::hcda678ff272dfed1(rdi_33 * 2);
                /* no return */
            }
            
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h328fe786a92b7324(&var_a8);
            var_a8 = &var_f8;
            let var_a0_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = anyhow::error::_$LT$impl$u20$core..fmt..Display$u20$for$u20$anyhow..Error$GT$::fmt::he8862a1212ccbd86;
            var_128 = &data_7e99d8;
            let var_120_2: i64 = 2;
            *var_110_1[8] = 0;
            let var_118_2: *mut *mut i64 = &var_a8;
            var_110_1 = 1;
            let rax_8: *mut i64 = std::io::Write::write_fmt::hfeba02f6870139ed(&var_e8, &var_128);
            var_68 = rax_8;
            
            if rax_8 != 0
            {
                var_128 = rax_8;
                let mut rdi_36: i32;
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
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hee77a3799ccd604e(&var_88)
}
