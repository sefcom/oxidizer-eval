
  int64_t uu_true::uumain::uumain::h1ac4820c23372174(int64_t arg1)

{
    void var_2e0;
    uu_true::uu_app::he71b321b5ffe34f5(&var_2e0);
    void var_330;
    core::iter::traits::iterator::Iterator::collect::ha293f08bc5bc55ee(&var_330, arg1);
    int64_t var_320;
    
    if (var_320 <= 2)
    {
        int64_t var_318;
        clap_builder::builder::command::Command::try_get_matches_from_mut::hdaf210862eb072ad(
            &var_318, &var_2e0, &var_330);
        
        if (!(0 + -(var_318)))
            core::ptr::drop_in_place$LT$core..result..Result$LT$clap_builder..parser..matches..arg_matches..ArgMatches$C$clap_builder..error..Error$GT$$GT$::h1cf9977cd34d6cd1(&var_318);
        else
        {
            int32_t* var_310;
            uint32_t rax_1 = *(var_310 + 0xdd);
            int64_t* var_398;
            int64_t* var_390;
            int64_t** var_380;
            void* const var_360;
            void* r14_1;
            
            if (rax_1 == 0xc)
            {
                r14_1 = clap_builder::builder::command::Command::print_help::h99ccf3e1a23a10fd(
                    &var_2e0);
                
                if (r14_1)
                {
                    label_448a28:
                    void* var_3a0 = r14_1;
                    var_398 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
                    int64_t* rax_4;
                    int64_t rdx_2;
                    rax_4 = uucore::util_name::h074417a1e6395129();
                    var_390 = rax_4;
                    int64_t var_388_2 = rdx_2;
                    var_380 = &var_390;
                    int64_t (* var_378_1)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha6a01a1905737bf0;
                    void** var_370_1 = &var_3a0;
                    int64_t (* var_368_1)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
                    var_360 = &data_4caec8;
                    int64_t var_358_2 = 3;
                    int64_t var_340_2 = 0;
                    int64_t*** var_350_2 = &var_380;
                    int64_t var_348_2 = 2;
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h35e30d163df09f4e(_$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::hebff3e936d8559e8(&var_398, &var_360));
                    uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hfd78d465c09203b8(
                        var_3a0);
                }
            }
            else if (rax_1 == 0xe)
            {
                std::io::stdio::stdout::hb6a8e10bcccf3287();
                var_398 = &std::io::stdio::STDOUT::h411b213c5c9add46;
                clap_builder::builder::command::Command::render_version::heecbe8fc335d188f(
                    &var_380, &var_2e0);
                var_390 = &var_380;
                int64_t (* var_388_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                var_360 = &data_4158e0;
                int64_t var_358_1 = 1;
                int64_t var_340_1 = 0;
                int64_t** var_350_1 = &var_390;
                int64_t var_348_1 = 1;
                r14_1 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_fmt::h3907d576e608aa2a(&var_398, &var_360);
                int64_t var_378;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h9866ecd7c985cfe3(var_380, 
                    var_378);
                
                if (r14_1)
                    goto label_448a28;
            }
            core::ptr::drop_in_place$LT$clap_builder..error..Error$GT$::hce86cde2ca383935(var_310);
            
            if (var_318 != -0x8000000000000000)
                core::ptr::drop_in_place$LT$core..result..Result$LT$clap_builder..parser..matches..arg_matches..ArgMatches$C$clap_builder..error..Error$GT$$GT$::h1cf9977cd34d6cd1(&var_318);
        }
    }
    else
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::hfb85af52743ad284(&var_330);
    
    return 
        core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::hc1179e0f6e485db8(
        &var_2e0);
}
