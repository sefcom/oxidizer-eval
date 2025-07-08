
  int64_t uu_false::uumain::uumain::h682a05038129c9ec(int64_t arg1)

{
    void var_2e0;
    uu_false::uu_app::he23c4502b9c9f7a3(&var_2e0);
    uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
    int128_t var_330;
    core::iter::traits::iterator::Iterator::collect::h9b9ce22406bfecc3(&var_330, arg1);
    int64_t var_320;
    
    if (var_320 <= 2)
    {
        int64_t var_378_1 = var_320;
        int128_t var_388 = var_330;
        int64_t var_318;
        clap_builder::builder::command::Command::try_get_matches_from_mut::h75727dabc051cc1a(
            &var_318, &var_2e0, &var_388);
        
        if (var_318 != -0x8000000000000000)
            core::ptr::drop_in_place$LT$core..result..Result$LT$clap_builder..parser..matches..arg_matches..ArgMatches$C$clap_builder..error..Error$GT$$GT$::h0569a97e1311b44d(&var_318);
        else
        {
            int32_t* var_310;
            uint32_t rax_2 = *(var_310 + 0xd5);
            int64_t* var_3a0;
            int64_t* var_398;
            int64_t** var_350;
            int64_t r14_1;
            
            if (rax_2 == 0xc)
            {
                r14_1 = clap_builder::builder::command::Command::print_help::ha75f02ad65e70b14(
                    &var_2e0);
                
                if (r14_1)
                {
                    label_459243:
                    int64_t var_3a8 = r14_1;
                    var_3a0 = &std::io::stdio::stderr::INSTANCE::ha28648ccba9ff424;
                    int64_t* rax_5;
                    int64_t rdx_2;
                    rax_5 = uucore::util_name::h60d842bf27b05e82();
                    var_398 = rax_5;
                    int64_t var_390_2 = rdx_2;
                    var_350 = &var_398;
                    int64_t (* var_348_1)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0080870d4dd86d34;
                    int64_t* var_340_1 = &var_3a8;
                    int64_t (* var_338_1)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                    var_388 = &data_4f6870;
                    *var_388[8] = 3;
                    int64_t var_368_2 = 0;
                    int64_t*** var_378_3 = &var_350;
                    int64_t var_370_2 = 2;
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h83941425b2f571b0(_$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::h82787f8382d2102c(&var_3a0, &var_388));
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hba36a569e01be34c(
                        var_3a8);
                }
            }
            else if (rax_2 == 0xe)
            {
                std::io::stdio::stdout::h077da66234850927();
                var_3a0 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
                clap_builder::builder::command::Command::render_version::h6726fbcc2d48ef38(
                    &var_350, &var_2e0);
                var_398 = &var_350;
                int64_t (* var_390_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                var_388 = &data_4f6838;
                *var_388[8] = 2;
                int64_t var_368_1 = 0;
                int64_t** var_378_2 = &var_398;
                int64_t var_370_1 = 1;
                r14_1 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_fmt::h0f6acf0ef7a6b873(&var_3a0, &var_388);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h27e7d2eb95319d2d(&var_350);
                
                if (r14_1)
                    goto label_459243;
            }
            core::ptr::drop_in_place$LT$clap_builder..error..Error$GT$::hd4fa2428a646d037(var_310);
            
            if (var_318 != -0x8000000000000000)
                core::ptr::drop_in_place$LT$core..result..Result$LT$clap_builder..parser..matches..arg_matches..ArgMatches$C$clap_builder..error..Error$GT$$GT$::h0569a97e1311b44d(&var_318);
        }
    }
    else
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h514a86a3e4597d5f(&var_330);
    
    return 
        core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::h3e277424525feb1a(
        &var_2e0);
}
