
  fn uu_false::uumain::uumain::h682a05038129c9ec(arg1: i64) -> i64

{
    let mut var_2e0: ();
    uu_false::uu_app::he23c4502b9c9f7a3(&var_2e0);
    uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
    let mut var_330: i128;
    core::iter::traits::iterator::Iterator::collect::h9b9ce22406bfecc3(&var_330, arg1);
    let var_320: i64;
    
    if var_320 <= 2
    {
        let var_378_1: i64 = var_320;
        let mut var_388: i128 = var_330;
        let mut var_318: i64;
        clap_builder::builder::command::Command::try_get_matches_from_mut::h75727dabc051cc1a(
            &var_318, &var_2e0, &var_388);
        
        if var_318 != -0x8000000000000000
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$clap_builder..parser..matches..arg_matches..ArgMatches$C$clap_builder..error..Error$GT$$GT$::h0569a97e1311b44d(&var_318);
        }
        else
        {
            let var_310: *mut i32;
            let rax_2: u32 = *var_310.byte_offset(0xd5);
            let mut var_3a0: *mut i64;
            let mut var_398: *mut i64;
            let mut var_350: *mut *mut i64;
            let mut r14_1: i64;
            
            if rax_2 == 0xc
            {
                r14_1 = clap_builder::builder::command::Command::print_help::ha75f02ad65e70b14(
                    &var_2e0);
                
                if r14_1 != 0
                {
                    'label_459243:
                    let mut var_3a8: i64 = r14_1;
                    var_3a0 = &std::io::stdio::stderr::INSTANCE::ha28648ccba9ff424;
                    let mut rax_5: *mut i64;
                    let mut rdx_2: i64;
                    rax_5 = uucore::util_name::h60d842bf27b05e82();
                    var_398 = rax_5;
                    let var_390_2: i64 = rdx_2;
                    var_350 = &var_398;
                    let var_348_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0080870d4dd86d34;
                    let var_340_1: *mut i64 = &var_3a8;
                    let var_338_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                    var_388 = &data_4f6870;
                    *var_388[8] = 3;
                    let var_368_2: i64 = 0;
                    let var_378_3: *mut *mut *mut i64 = &var_350;
                    let var_370_2: i64 = 2;
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h83941425b2f571b0(_$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::h82787f8382d2102c(&var_3a0, &var_388));
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hba36a569e01be34c(
                        var_3a8);
                }
            }
            else if rax_2 == 0xe
            {
                std::io::stdio::stdout::h077da66234850927();
                var_3a0 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
                clap_builder::builder::command::Command::render_version::h6726fbcc2d48ef38(
                    &var_350, &var_2e0);
                var_398 = &var_350;
                let var_390_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                var_388 = &data_4f6838;
                *var_388[8] = 2;
                let var_368_1: i64 = 0;
                let var_378_2: *mut *mut i64 = &var_398;
                let var_370_1: i64 = 1;
                r14_1 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_fmt::h0f6acf0ef7a6b873(&var_3a0, &var_388);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h27e7d2eb95319d2d(&var_350);
                
                if r14_1 != 0
                {
                    goto 'label_459243;
                }
            }
            core::ptr::drop_in_place$LT$clap_builder..error..Error$GT$::hd4fa2428a646d037(var_310);
            
            if var_318 != -0x8000000000000000
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$clap_builder..parser..matches..arg_matches..ArgMatches$C$clap_builder..error..Error$GT$$GT$::h0569a97e1311b44d(&var_318);
            }
        }
    }
    else
    {
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h514a86a3e4597d5f(&var_330);
    }
    
    core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::h3e277424525feb1a(
        &var_2e0)
}
