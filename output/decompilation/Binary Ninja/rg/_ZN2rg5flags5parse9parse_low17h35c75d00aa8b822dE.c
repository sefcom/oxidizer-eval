
  uint64_t rg::flags::parse::parse_low::h35c75d00aa8b822d(int64_t* arg1)

{
    void** const var_4d8;
    void* var_278;
    
    if (rg::logger::Logger::init::h39afe8855839179c())
    {
        void var_571;
        var_278 = &var_571;
        int64_t (* var_270_1)(int64_t arg1, int64_t* arg2) =
            _$LT$log..SetLoggerError$u20$as$u20$core..fmt..Display$GT$::fmt::h107e5ab9e1675b66;
        var_4d8 = &data_7eb4a8;
        int64_t var_4d0_3 = 1;
        int64_t var_4b8_1 = 0;
        void** var_4c8_3 = &var_278;
        int64_t var_4c0_1 = 1;
        uint64_t result = anyhow::__private::format_err::hd87f3faee3401bd9(&var_4d8);
        arg1[1] = result;
        *arg1 = 4;
        return result;
    }
    
    void* rax_1 = rg::flags::parse::Parser::new::h41a0a58eaeb94208();
    _$LT$rg..flags..lowargs..LowArgs$u20$as$u20$core..default..Default$GT$::default::hdcacbbf77242812e(&var_278);
    int128_t var_570;
    std::env::args_os::h5ff0cf6a45e392f2(&var_570);
    int128_t var_560;
    int64_t var_4c8;
    var_4c8 = var_560;
    var_4d8 = var_570;
    int64_t var_4b8 = 1;
    uint64_t rax_2 = rg::flags::parse::Parser::parse::h0488f37e65c7a097(rax_1, &var_4d8, &var_278);
    uint64_t var_548 = rax_2;
    
    if (!rax_2)
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$anyhow..Error$GT$$GT$::h7cb11f3db7529187(&var_548);
        rg::flags::parse::set_log_levels::h439e558fa954fe77(&var_278);
        char var_1d_1 = 5;
        char var_1d;
        
        if (var_1d != 5)
        {
            arg1[1] = var_1d;
            *arg1 = 2;
        }
        else
        {
            int64_t var_4c0;
            char var_3e;
            
            if (var_3e)
            {
                if (core::sync::atomic::atomic_load::headb9992cbbd027a(
                    &log::MAX_LOG_LEVEL_FILTER::hb16df1a2b362bf4c, 0) >= 4)
                {
                    var_4d8 = &data_7eb4b8;
                    int64_t var_4d0_1 = 1;
                    int64_t var_4c8_1 = 8;
                    var_4c0 = {0};
                    int64_t rax_5 = log::__private_api::loc::h53b04f6fd0066707(&data_7eb4f0);
                    var_570 = "rg::flags::parsecsisolatinhebrew…";
                    *var_570[8] = 0x10;
                    var_560 = "rg::flags::parsecsisolatinhebrew…";
                    *var_560[8] = 0x10;
                    int64_t var_550_1 = rax_5;
                    log::__private_api::log::h124fdfc9e9ed7585(&var_4d8, 4, &var_570);
                }
                
                return memcpy(arg1, &var_278, 0x260);
            }
            
            rg::flags::config::args::h29f19532c97db275(&var_548);
            int64_t var_538;
            
            if (!var_538)
            {
                if (core::sync::atomic::atomic_load::headb9992cbbd027a(
                    &log::MAX_LOG_LEVEL_FILTER::hb16df1a2b362bf4c, 0) >= 4)
                {
                    var_4d8 = &data_7eb4c8;
                    int64_t var_4d0_2 = 1;
                    int64_t var_4c8_2 = 8;
                    var_4c0 = {0};
                    int64_t rax_9 = log::__private_api::loc::h53b04f6fd0066707(&data_7eb4d8);
                    var_570 = "rg::flags::parsecsisolatinhebrew…";
                    *var_570[8] = 0x10;
                    var_560 = "rg::flags::parsecsisolatinhebrew…";
                    *var_560[8] = 0x10;
                    int64_t var_550_2 = rax_9;
                    log::__private_api::log::h124fdfc9e9ed7585(&var_4d8, 4, &var_570);
                }
                
                memcpy(arg1, &var_278, 0x260);
                return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::hdf4ecb22c21181e2(&var_548);
            }
            
            int64_t var_518_1 = var_538;
            int128_t var_528 = var_548;
            std::env::args_os::h5ff0cf6a45e392f2(&var_4d8);
            int128_t var_4f8_1 = var_4c8;
            int128_t var_508 = var_4d8;
            int64_t var_4e8_1 = 1;
            alloc::vec::Vec$LT$T$C$A$GT$::extend_desugared::he66b74d3c29a35b3(&var_528, &var_508);
            _$LT$rg..flags..lowargs..LowArgs$u20$as$u20$core..default..Default$GT$::default::hdcacbbf77242812e(&var_4d8);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h67e6255c929e4e1e(&var_570, &var_528);
            uint64_t rax_7 =
                rg::flags::parse::Parser::parse::hec8cd0d856932be5(rax_1, &var_570, &var_4d8);
            uint64_t var_530 = rax_7;
            
            if (!rax_7)
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$anyhow..Error$GT$$GT$::h7cb11f3db7529187(&var_530);
                rg::flags::parse::set_log_levels::h439e558fa954fe77(&var_4d8);
                memcpy(arg1, &var_4d8, 0x260);
            }
            else
            {
                arg1[1] = rax_7;
                *arg1 = 4;
                core::ptr::drop_in_place$LT$rg..flags..lowargs..LowArgs$GT$::h7b549ec26e82ff0b(
                    &var_4d8);
            }
        }
    }
    else
    {
        arg1[1] = rax_2;
        *arg1 = 4;
    }
    
    return core::ptr::drop_in_place$LT$rg..flags..lowargs..LowArgs$GT$::h7b549ec26e82ff0b(&var_278);
}
