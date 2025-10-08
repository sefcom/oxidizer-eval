
  fn alacritty::migrate::migrate_config::heae155b6e6f7f60c(arg1: *mut i64, arg2: *mut c_void, arg3: i64, arg4: u64, arg5: i64) -> i64

{
    let mut r14: u64 = arg4;
    let mut r15: i64 = arg3;
    let mut var_228: i64 = arg3;
    let mut var_218: ();
    alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_218, arg3, arg4);
    let var_210: i64;
    let var_208: i64;
    let mut var_200: *mut *mut c_void;
    core::str::_$LT$impl$u20$str$GT$::rsplit_once::h78fdb160c70e74d6(&var_200, var_210, var_208);
    let rbp: *mut *mut c_void = var_200;
    let mut var_138: i128;
    let var_128: i64;
    let var_1f0: i64;
    let var_1e8: u64;
    
    if rbp == 0
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h4cfefc754dbf8fee(&var_138, "missing file extensionIgnoring T…", 0x16);
        arg1[3] = var_128;
        *arg1.byte_offset(8) = var_138;
        *arg1 = 1;
    }
    else
    {
        let var_1f8: i64;
        
        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8240391abffeb7c9(var_1f0, var_1e8, "ymlNo config file found; using d…", 3) != 0
        {
            alacritty::migrate::yaml::migrate::h7955a864104fb60d(&var_200, arg2, r15, r14, arg5, 
                rbp, var_1f8);
            let rax_1: i32 = var_200;
            var_138 = var_1f8;
            
            if rax_1 != 1
            {
                arg1[5] = var_1e8;
                *arg1.byte_offset(0x18) = var_138;
                arg1[1] = r15;
                arg1[2] = r14;
                *arg1 = 0;
            }
            else
            {
                arg1[3] = var_1e8;
                *arg1.byte_offset(8) = var_138;
                *arg1 = 1;
            }
        }
        else
        {
            let mut var_1e0: i64;
            
            if *arg2.byte_offset(0x1a) == 0
            {
                let rdx_4: u64 = std::fs::read_to_string::h99a142b6408e88d3(&var_138, r15);
                
                if !(0 + -(var_138))
                {
                    let mut var_68: i128 = var_138;
                    let var_58_1: i64 = var_128;
                    alacritty::migrate::migrate_toml::h20014181f4101fc3(&var_200, &var_68);
                    let rbp_1: *mut *mut c_void = var_200;
                    let mut var_248: i128 = var_1f8;
                    
                    if rbp_1 != 0xc
                    {
                        let mut var_118: ();
                        memcpy(&var_118, &var_1e0, 0xa8);
                        var_138 = var_248;
                        let var_120_1: u64 = var_1e8;
                        var_138 = rbp_1;
                        alacritty::migrate::migrate_imports::h8e2e1e348fec4079(&var_200, arg2, r15, 
                            r14, &var_138, arg5);
                        
                        if var_200 != -0x8000000000000000
                        {
                            arg1[3] = var_1f0;
                            *arg1.byte_offset(8) = var_200;
                            *arg1 = 1;
                            core::ptr::drop_in_place$LT$toml_edit..document..DocumentMut$GT$::h9bb944d092de2eb6(&var_138);
                        }
                        else
                        {
                            _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hfd01effef2c7df3f(&var_200, &var_138);
                            alacritty::migrate::write_results::h4d557a56fed75701(&var_248, 
                                *arg2.byte_offset(0x18), *arg2.byte_offset(0x1b), r15, r14, 
                                var_1f8, var_1f0);
                            
                            if var_248 != -0x8000000000000000
                            {
                                arg1[3] = var_1e8;
                                *arg1.byte_offset(8) = var_248;
                                *arg1 = 1;
                                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_200);
                                core::ptr::drop_in_place$LT$toml_edit..document..DocumentMut$GT$::h9bb944d092de2eb6(&var_138);
                            }
                            else
                            {
                                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_200);
                                arg1[1] = r15;
                                arg1[2] = r14;
                                arg1[3] = -0x8000000000000000;
                                *arg1 = 0;
                                core::ptr::drop_in_place$LT$toml_edit..document..DocumentMut$GT$::h9bb944d092de2eb6(&var_138);
                            }
                        }
                    }
                    else
                    {
                        arg1[3] = var_1e8;
                        *arg1.byte_offset(8) = var_248;
                        *arg1 = 1;
                    }
                }
                else
                {
                    alacritty::migrate::migrate_config::_$u7b$$u7b$closure$u7d$$u7d$::h27fa81f31e9c98a6(&var_200, *var_138[8], rdx_4);
                    let zmm0_1: i128 = var_200;
                    let var_48_1: i128 = zmm0_1;
                    let var_38_1: i64 = var_1f0;
                    arg1[3] = var_1f0;
                    *arg1.byte_offset(8) = zmm0_1;
                    *arg1 = 1;
                }
            }
            else
            {
                if *arg2.byte_offset(0x18) != 0
                {
                    var_138 = &var_228;
                    *var_138[8] =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::h3a6a9966801425ec;
                    var_200 = &data_c83370;
                    let var_1f8_1: i64 = 2;
                    var_1e0 = 0;
                    let var_1f0_1: *mut i128 = &var_138;
                    let var_1e8_1: i64 = 1;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_200);
                    r15 = var_228;
                    r14 = arg4;
                }
                
                arg1[1] = r15;
                arg1[2] = r14;
                arg1[3] = -0x8000000000000000;
                *arg1 = 0;
            }
        }
    }
    core::ptr::drop_in_place$LT$crossfont..Style$GT$::h2b47363f07595d0e(&var_218)
}
