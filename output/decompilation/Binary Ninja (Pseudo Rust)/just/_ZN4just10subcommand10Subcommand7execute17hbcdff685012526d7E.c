
  fn just::subcommand::Subcommand::execute::hbcdff685012526d7(arg1: *mut i8, arg2: *mut i64, arg3: *mut c_void, arg4: *mut i64) -> *mut i8

{
    let r14: i64 = *arg2;
    let rbp_1: i64 = r14 ^ 0x8000000000000000;
    
    if rbp_1 > 0xc
    {
        'label_68bd15:
        let mut rsi: i64;
        let mut r13_1: *mut i64;
        let mut r15_1: *mut i64;
        
        if *arg3.byte_offset(0x78) == -0x8000000000000000
        {
            r15_1 = arg4;
            r13_1 = arg2;
            rsi = 0;
        }
        else
        {
            r15_1 = arg4;
            r13_1 = arg2;
            rsi = *arg3.byte_offset(0x80);
        }
        
        let mut var_6f0: i64;
        just::search::Search::find::h1e33858e96fbd947(&var_6f0, rsi, *arg3.byte_offset(0x88), 
            *arg3.byte_offset(0x20), *arg3.byte_offset(0x28), arg3.byte_offset(0x108));
        let rax_2: i64 = var_6f0;
        let var_6e8: i128;
        let var_6d8: i128;
        
        if rax_2 != -0x8000000000000000
        {
            let mut var_778: i64 = rax_2;
            let var_6c8: i64;
            let var_750_1: i64 = var_6c8;
            
            if r14 == -0x7ffffffffffffffb
            {
                let mut rcx_2: i64;
                let mut rdx_1: i64;
                let mut rsi_2: i64;
                let mut rdi_4: i64;
                let mut r8_2: i64;
                let mut r9_2: i64;
                rcx_2 = just::subcommand::Subcommand::edit::h78df30ddd5b0fe41(arg1, &var_778);
                /* tailcall */
                return sub_68c327(arg1, rdi_4, rsi_2, rdx_1, rcx_2, r8_2, r9_2);
            }
            
            let mut rcx_5: i64;
            let mut rdx_4: i64;
            let mut rsi_5: i64;
            let mut rdi_7: i64;
            let mut r8_5: i64;
            let mut r9_4: i64;
            rcx_5 = just::subcommand::Subcommand::compile::hd4ddb48c754af338(&var_6f0, arg3, r15_1, 
                var_6e8, *var_6e8[8]);
            let r14_1: i64 = var_6f0;
            let mut var_7e8: i128 = var_6e8;
            let var_7c8_1: i128 = var_6c8;
            let var_6b8: i128;
            let var_6a8: i128;
            let var_698: i128;
            let var_688: i64;
            
            if r14_1 == -0x8000000000000000
            {
                *arg1.byte_offset(0x60) = var_688;
                *arg1.byte_offset(0x50) = var_698;
                *arg1.byte_offset(0x40) = var_6a8;
                let zmm0_3: i128 = var_7e8;
                *arg1.byte_offset(0x30) = var_6b8;
                *arg1.byte_offset(0x20) = var_7c8_1;
                *arg1.byte_offset(0x10) = var_6d8;
                *arg1 = zmm0_3;
                /* tailcall */
                return sub_68c327(arg1, rdi_7, rsi_5, rdx_4, rcx_5, r8_5, r9_4);
            }
            
            let mut var_680: ();
            let mut var_320: ();
            memcpy(&var_320, &var_680, 0x2f0);
            let var_388_1: i128 = var_7e8;
            let var_378_1: i128 = var_6d8;
            let var_368_1: i128 = var_7c8_1;
            let var_358_1: i128 = var_6b8;
            let var_348_1: i128 = var_6a8;
            let var_338_1: i128 = var_698;
            let var_328_1: i64 = var_688;
            let mut rax_9: i64 = 2;
            
            if rbp_1 < 0x11
            {
                rax_9 = rbp_1;
            }
            
            let mut var_390: i64 = r14_1;
            let mut rax_18: i64;
            
            match rax_9
            {
                0 | 3 | 5 | 9 | 0xb | 0xc =>
                {
                    core::panicking::panic::h85d6dd562679980c("internal error: entered unreacha…");
                    /* no return */
                }
                1 =>
                {
                    let mut r9_6: i64;
                    
                    if r13_1[1] == -0x8000000000000000
                    {
                        r9_6 = 0;
                    }
                    else
                    {
                        r9_6 = r13_1[2];
                    }
                    
                    just::subcommand::Subcommand::choose::h70c66fd2ffcf2f5e(&var_6f0, arg3, 
                        &var_390, &var_778, &r13_1[4], r9_6, r13_1[3]);
                    goto 'label_68c2a6;
                }
                2 =>
                {
                    rax_18 = 0x30;
                    goto 'label_68c192;
                }
                4 =>
                {
                    memcpy(&var_6f0, &var_390, 0x360);
                    just::subcommand::Subcommand::dump::h35772f52367b2bf4(&var_7e8, 
                        *arg3.byte_offset(0x199), &var_6f0);
                    /* tailcall */
                    return sub_68c147();
                }
                6 =>
                {
                    rax_18 = 0x20;
                    'label_68c192:
                    just::justfile::Justfile::run::h44a153d0be889dd4(&var_6f0, &var_390, arg3, 
                        &var_778, r13_1.byte_offset(rax_18), 8, 0);
                    goto 'label_68c2a6;
                }
                7 =>
                {
                    memcpy(&var_6f0, &var_390, 0x360);
                    just::subcommand::Subcommand::format::heea1de6da7464e03(&var_7e8, arg3, 
                        &var_778, &var_6f0);
                    /* tailcall */
                    return sub_68c147();
                }
                8 =>
                {
                    just::subcommand::Subcommand::groups::h91135709a9d2e1de(arg3, &var_390);
                    /* tailcall */
                    return sub_68c2b2(arg1);
                }
                0xa =>
                {
                    just::subcommand::Subcommand::list::h279afbbedddd5378(&var_6f0, arg3, &var_390, 
                        &r13_1[1]);
                    goto 'label_68c2a6;
                }
                0xd =>
                {
                    let var_708_1: i128 = var_6d8;
                    let var_718_1: i128 = var_6e8;
                    let mut var_728: i128 = var_778;
                    memcpy(&var_6f0, &var_390, 0x360);
                    just::subcommand::Subcommand::run::h0caeb55d50695da5(&var_7e8, arg3, r15_1, 
                        &var_728, &var_6f0, r13_1[2], r13_1[3], &r13_1[4]);
                    let rax_16: i8 = var_7e8;
                    
                    if rax_16 != 0x38
                    {
                        *arg1.byte_offset(0x60) = var_688;
                        *arg1.byte_offset(0x51) = var_698;
                        *arg1.byte_offset(0x41) = var_6a8;
                        let zmm0_8: i128 = var_7e8;
                        *arg1.byte_offset(0x31) = var_6b8;
                        *arg1.byte_offset(0x21) = var_7c8_1;
                        *arg1.byte_offset(0x11) = var_6d8;
                        *arg1.byte_offset(1) = zmm0_8;
                        *arg1 = rax_16;
                    }
                    else
                    {
                        *arg1 = 0x38;
                    }
                }
                0xe =>
                {
                    just::subcommand::Subcommand::show::h0bdf6b2545355152(&var_6f0, arg3, &var_390, 
                        &r13_1[1]);
                    'label_68c2a6:
                    let rax_23: i8 = var_6f0;
                    
                    if rax_23 == 0x38
                    {
                        /* tailcall */
                        return sub_68c2b2(arg1);
                    }
                    
                    *arg1.byte_offset(0x60) = *var_698[8];
                    *arg1.byte_offset(0x51) = var_6a8;
                    *arg1.byte_offset(0x41) = var_6b8;
                    let zmm0_6: i128 = *var_6f0[1];
                    let var_6bf: i128;
                    *arg1.byte_offset(0x31) = var_6bf;
                    *arg1.byte_offset(0x21) = var_6d8;
                    *arg1.byte_offset(0x11) = var_6e8;
                    *arg1.byte_offset(1) = zmm0_6;
                    *arg1 = rax_23;
                    let mut rcx_23: i64;
                    let mut rdx_20: i64;
                    let mut rsi_26: i64;
                    let mut rdi_30: i64;
                    let mut r8_17: i64;
                    let mut r9_14: i64;
                    rcx_23 = core::ptr::drop_in_place$LT$just..compilation..Compilation$GT$::hcea2292c76e0cd86(&var_390);
                    /* tailcall */
                    return sub_68c327(arg1, rdi_30, rsi_26, rdx_20, rcx_23, r8_17, r9_14);
                }
                0xf =>
                {
                    just::subcommand::Subcommand::summary::hf6e7b6af0c5cf7fd(
                        *arg3.byte_offset(0x1a3), *arg3.byte_offset(0x1a7), &var_390);
                    /* tailcall */
                    return sub_68c2b2(arg1);
                }
                0x10 =>
                {
                    just::subcommand::Subcommand::variables::hc98f87f2340c147d(&var_390);
                    /* tailcall */
                    return sub_68c2b2(arg1);
                }
            }
        }
        else
        {
            *var_6f0[7] = var_6e8;
            *arg1 = 0x2a;
            *arg1.byte_offset(1) = var_6f0;
            *arg1.byte_offset(0x11) = var_6d8;
            *arg1.byte_offset(0x20) = *var_6d8[7];
        }
    }
    else
    {
        match rbp_1
        {
            0 =>
            {
                just::subcommand::Subcommand::changelog::h6283720f5077d0b0();
                *arg1 = 0x38;
            }
            1 =>
            {
                goto 'label_68bd15;
            }
        }
    }
    
    arg1
}
