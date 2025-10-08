
  fn uu_rmdir::uumain::uumain::hca85f7b438ec45e9(arg1: i64) -> u64

{
    let mut var_2f8: *mut c_void;
    uu_rmdir::uu_app::h41f54c0a55596ebe(&var_2f8);
    let mut var_3e0: *mut c_void;
    clap_builder::builder::command::Command::try_get_matches_from::h5515b7eebfb7e895(&var_3e0, 
        &var_2f8, arg1);
    let rax: *mut c_void = var_3e0;
    let mut var_3d8: *mut i8;
    
    if -(rax) == -0x8000000000000000
    {
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_3d8);
    }
    
    let var_3b0: *mut i8;
    let var_318_1: *mut i8 = var_3b0;
    let mut var_3c0: i128;
    let var_328_1: i128 = var_3c0;
    let mut var_3d0: u128;
    let var_338_1: u128 = var_3d0;
    let mut var_348: *mut c_void = rax;
    let var_340_1: *mut i8 = var_3d8;
    let rax_2: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_348, "ignore-fail-on-non-emptyparentsv…", 0x18);
    let rax_3: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_348, "parentsverbose: removing directo…", 7);
    let rax_4: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_348, "verbose: removing directory, \n(…", 7);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h324cf7d356ac5227(
        &var_2f8, &var_348, "dirs\x1b[9m <= trueTERMmainchar …", 4);
    let mut rsi_3: *const i8 = "dirs\x1b[9m <= trueTERMmainchar …";
    clap_builder::parser::error::MatchesError::unwrap::hcee8fc91d516f620(&var_3e0, 
        "dirs\x1b[9m <= trueTERMmainchar …", 4, &var_2f8);
    let mut rax_5: *mut c_void = var_3e0;
    let mut rcx_4: *const i8;
    let mut rdx_1: i64;
    let mut zmm0_2: i128;
    let mut zmm1_2: u128;
    
    if rax_5 == 0
    {
        zmm0_2 = {0};
        zmm1_2 = "/home/34r7hm4n/.cargo/registry/s…";
        rcx_4 = "/home/34r7hm4n/.cargo/registry/s…";
        rax_5 = core::ops::function::FnOnce::call_once::hb2056f08bbcc1e74;
        rdx_1 = 0;
    }
    else
    {
        rcx_4 = var_3d8;
        zmm1_2 = var_3d0;
        zmm0_2 = var_3c0;
        rsi_3 = var_3b0;
        let var_3a8: i64;
        rdx_1 = var_3a8;
    }
    
    var_2f8 = rax_5;
    let var_2f0_1: *const i8 = rcx_4;
    let var_2e8_1: u128 = zmm1_2;
    let var_2d8_1: i128 = zmm0_2;
    let var_2c8_1: *const i8 = rsi_3;
    let var_2c0_1: i64 = rdx_1;
    
    loop
    {
        let rax_7: *mut c_void = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h588e08df2d05312a(&var_2f8);
        
        if rax_7 == 0
        {
            break;
        }
        
        let mut var_310: i64;
        uu_rmdir::remove::h30d38ff9a4c5e87a(&var_310, *rax_7.byte_offset(8), 
            *rax_7.byte_offset(0x10), rax_4 << 0x10 | rax_3 << 8 | rax_2);
        let rax_8: i64 = var_310;
        
        if rax_8 == 0
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$uu_rmdir..Error$GT$$GT$::h688fabe9eba36869(0);
        }
        else
        {
            let mut var_3e8: i64 = rax_8;
            let var_308: i64;
            let mut rax_9: i8;
            
            if rax_2 != 0
            {
                rax_9 = uu_rmdir::dir_not_empty::he2b023c55fd543e8(&var_3e8, var_308);
            }
            
            if rax_2 == 0 || rax_9 == 0
            {
                uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
                std::io::error::repr_bitpacked::decode_repr::h7600fc575e512ef9(&var_3e0, var_3e8);
                let mut var_3a0: i64;
                let mut var_380: *mut i64;
                let var_300: i64;
                
                if var_3e0 != 0 || *var_3e0[4] != 0x14
                {
                    'label_452a50:
                    let mut rax_15: i64;
                    let mut rdx_6: i64;
                    rax_15 = uucore::util_name::h074417a1e6395129();
                    var_3a0 = rax_15;
                    let var_398_3: i64 = rdx_6;
                    var_380 = &var_3a0;
                    let var_378_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc8f1c785ec917b8b;
                    var_3e0 = &data_4ddd80;
                    let var_3d8_2: i64 = 2;
                    var_3c0 = 0;
                    var_3d0 = &var_380;
                    *var_3d0[8] = 1;
                    let rdx_7: i64 = std::io::stdio::_eprint::h57899770eacec2ad(&var_3e0);
                    var_3a0 = 1;
                    let var_398_4: i64 = var_308;
                    let var_390_2: i64 = var_300;
                    let var_388_2: i8 = 1;
                    let mut var_360: i64;
                    uucore::mods::error::strip_errno::hd746c42590a9db7d(&var_360, &var_3e8, rdx_7);
                    var_380 = &var_3a0;
                    let var_378_4: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    let var_370_1: *mut i64 = &var_360;
                    let var_368_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                    var_3e0 = &data_4dde18;
                    var_3d8 = 3;
                    var_3c0 = 0;
                    var_3d0 = &var_380;
                    *var_3d0[8] = 2;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_3e0);
                    let var_358: i64;
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hf46f9234ed73e85e(
                        var_360, var_358);
                }
                else
                {
                    if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h642f3f3a746ea568(
                        var_308, var_300) == 0
                    {
                        goto 'label_452a50;
                    }
                    
                    let mut rax_11: i64;
                    let mut rdx_4: u64;
                    rax_11 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h2f827d0587e08a73(var_300 - 1, var_308, var_300);
                    
                    if std::path::Path::is_symlink::h004cfac91d04dbc0(rax_11, rdx_4) == 0
                    {
                        goto 'label_452a50;
                    }
                    
                    uu_rmdir::uumain::uumain::points_to_directory::h618067cf6122ffc7(&var_3e0, 
                        rax_11);
                    let rax_13: i8 = var_3e0;
                    
                    if rax_13 != 0
                    {
                        core::ptr::drop_in_place$LT$core..result..Result$LT$bool$C$std..io..error..Error$GT$$GT$::he9c0a545c6a7252d(rax_13, var_3d8);
                    }
                    else if *var_3e0[1] == 0
                    {
                        goto 'label_452a50;
                    }
                    
                    let mut rax_14: i64;
                    let mut rdx_5: i64;
                    rax_14 = uucore::util_name::h074417a1e6395129();
                    var_3a0 = rax_14;
                    let var_398_1: i64 = rdx_5;
                    var_380 = &var_3a0;
                    let var_378_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc8f1c785ec917b8b;
                    var_3e0 = &data_4ddd80;
                    let var_3d8_1: i64 = 2;
                    var_3c0 = 0;
                    var_3d0 = &var_380;
                    *var_3d0[8] = 1;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_3e0);
                    var_3a0 = 1;
                    let var_398_2: i64 = var_308;
                    let var_390_1: i64 = var_300;
                    let var_388_1: i8 = 1;
                    var_380 = &var_3a0;
                    let var_378_2: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    var_3e0 = &data_4dddf8;
                    var_3d8 = 2;
                    var_3c0 = 0;
                    var_3d0 = &var_380;
                    *var_3d0[8] = 1;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_3e0);
                }
            }
            
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hafa725c2412b36a2(var_3e8);
        }
    }
    
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h564b4464c9f835e3(&var_348);
    0
}
