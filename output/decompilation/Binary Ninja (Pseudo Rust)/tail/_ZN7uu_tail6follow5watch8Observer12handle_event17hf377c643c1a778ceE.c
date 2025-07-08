
  fn uu_tail::follow::watch::Observer::handle_event::hf377c643c1a778ce(arg1: *mut i64, arg2: *mut i32, arg3: *mut c_void, arg4: *mut c_void) -> i64

{
    let r15: i64 = *arg3.byte_offset(0x10);
    
    if r15 == 0
    {
        core::option::unwrap_failed::h0e11329e76906eaa();
        /* no return */
    }
    
    let r13: *mut c_void = *arg3.byte_offset(8);
    let mut var_1d0: i64 = 0;
    let var_1c8: i64 = 8;
    let var_1c0: i64 = 0;
    let rsi: *mut i8 = *r13.byte_offset(8);
    let rdx: size_t = *r13.byte_offset(0x10);
    let mut var_1e8: ();
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(
        &var_1e8, 
        uu_tail::follow::files::FileHandling::get::ha1f26ea8b12ea1ff(&arg2[0xe], rsi, rdx).
            byte_offset(0xb0));
    let rax_2: u32 = *arg3.byte_offset(0x20);
    let mut var_2e8: *mut i32;
    let mut var_2c8: *mut i128;
    let mut var_2b8: *mut *mut i32;
    let var_1e0: i128;
    let mut var_1b8: i32;
    
    if rax_2 == 2
    {
        if *arg3.byte_offset(0x21) != 3
        {
            'label_506125:
            std::fs::metadata::h5a76b0b01e9dc15d(&var_1b8, rsi);
            
            if var_1b8 == 2
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he6af43ab7f514533(&var_1b8);
            }
            else
            {
                let mut var_e0: ();
                memcpy(&var_e0, &var_1b8, 0xb0);
                let var_a8: i32;
                let r15_1: i32 = 0xf000 & var_a8;
                let mut var_2f8: *mut i32;
                let mut rax_17: *mut c_void;
                let mut rax_19: *mut i128;
                let mut rdx_14: *mut *mut c_void;
                
                if r15_1 == 0x2000 || r15_1 == 0x8000
                {
                    rax_17 = uu_tail::follow::files::FileHandling::get::ha1f26ea8b12ea1ff(
                        &arg2[0xe], rsi, rdx);
                    
                    if *rax_17 != 2
                    {
                        'label_506579:
                        let rcx_7: i32 = 0xf000 & *rax_17.byte_offset(0x38);
                        
                        if rcx_7 != 0x1000 && rcx_7 != 0x2000 && rcx_7 != 0x8000
                        {
                            let mut rax_41: *mut i32;
                            let mut rdx_33: i64;
                            rax_41 = uucore::util_name::h60d842bf27b05e82();
                            var_2e8 = rax_41;
                            let mut var_2e0_9: i64 = rdx_33;
                            var_2f8 = &var_2e8;
                            let var_2f0_9: fn(arg1: *mut i64, arg2: i64) -> i64 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                            var_2c8 = &data_5bbe20;
                            let var_2c0_17: i64 = 2;
                            let var_2a8_16: i64 = 0;
                            let var_2b8_17: *mut *mut i32 = &var_2f8;
                            let var_2b0_16: i64 = 1;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2c8);
                            var_2e8 = nullptr;
                            var_2e0_9 = var_1e0;
                            let var_2d0_6: i8 = 1;
                            var_2f8 = &var_2e8;
                            let var_2f0_10: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                            var_2c8 = &data_5bbf38;
                            let var_2c0_18: i64 = 2;
                            let var_2a8_17: i64 = 0;
                            var_2b8 = &var_2f8;
                            let var_2b0_17: i64 = 1;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2c8);
                            rax_19 = uu_tail::follow::files::FileHandling::update_reader::haeff66f6ffe85304(&arg2[0xe], rsi, rdx);
                            goto 'label_506a57;
                        }
                        
                        let var_b8: i64;
                        
                        if *rax_17.byte_offset(0xc8) == 0
                        {
                            let mut rax_40: *mut i32;
                            let mut rdx_31: i64;
                            rax_40 = uucore::util_name::h60d842bf27b05e82();
                            var_2e8 = rax_40;
                            let mut var_2e0_8: i64 = rdx_31;
                            var_2f8 = &var_2e8;
                            let var_2f0_7: fn(arg1: *mut i64, arg2: i64) -> i64 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                            var_2c8 = &data_5bbe20;
                            let var_2c0_15: i64 = 2;
                            let var_2a8_14: i64 = 0;
                            let var_2b8_16: *mut *mut i32 = &var_2f8;
                            let var_2b0_14: i64 = 1;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2c8);
                            var_2e8 = nullptr;
                            var_2e0_8 = var_1e0;
                            let var_2d0_5: i8 = 1;
                            var_2f8 = &var_2e8;
                            let var_2f0_8: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                            var_2c8 = &data_5bbf58;
                            let var_2c0_16: i64 = 2;
                            let var_2a8_15: i64 = 0;
                            var_2b8 = &var_2f8;
                            let var_2b0_15: i64 = 1;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2c8);
                            rax_19 = uu_tail::follow::files::FileHandling::update_reader::haeff66f6ffe85304(&arg2[0xe], rsi, rdx);
                        }
                        else if _$LT$notify..event..EventKind$u20$as$u20$core..cmp..PartialEq$GT$::eq::hdefd9549194a1b6f(arg3.byte_offset(0x20)) != 0 || (*arg2.byte_offset(0x8d) != 0
                            && *rax_17.byte_offset(0x28) != var_b8)
                        {
                            let mut rax_37: *mut i32;
                            let mut rdx_29: i64;
                            rax_37 = uucore::util_name::h60d842bf27b05e82();
                            var_2e8 = rax_37;
                            let mut var_2e0_7: i64 = rdx_29;
                            var_2f8 = &var_2e8;
                            let var_2f0_5: fn(arg1: *mut i64, arg2: i64) -> i64 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                            var_2c8 = &data_5bbe20;
                            let var_2c0_13: i64 = 2;
                            let var_2a8_12: i64 = 0;
                            let var_2b8_14: *mut *mut i32 = &var_2f8;
                            let var_2b0_12: i64 = 1;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2c8);
                            var_2e8 = nullptr;
                            var_2e0_7 = var_1e0;
                            let var_2d0_4: i8 = 1;
                            var_2f8 = &var_2e8;
                            let var_2f0_6: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                            var_2c8 = &data_5bbf78;
                            let var_2c0_14: i64 = 2;
                            let var_2a8_13: i64 = 0;
                            var_2b8 = &var_2f8;
                            let var_2b0_13: i64 = 1;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2c8);
                            rax_19 = uu_tail::follow::files::FileHandling::update_reader::haeff66f6ffe85304(&arg2[0xe], rsi, rdx);
                        }
                        else
                        {
                            _$LT$std..fs..Metadata$u20$as$u20$uu_tail..paths..MetadataExtTail$GT$::got_truncated::ha28743506d7e92e5(&var_2c8, rax_17, &var_e0);
                            rax_19 = var_2c8;
                            let var_2c0: *mut *mut c_void;
                            
                            if rax_19 != 0
                            {
                                rdx_14 = var_2c0;
                                goto 'label_506a68;
                            }
                            
                            if var_2c0 == 0
                            {
                                goto 'label_506c94;
                            }
                            
                            let mut rax_44: *mut i32;
                            let mut rdx_37: i64;
                            rax_44 = uucore::util_name::h60d842bf27b05e82();
                            var_2e8 = rax_44;
                            let var_2e0_11: i64 = rdx_37;
                            var_2f8 = &var_2e8;
                            let var_2f0_13: fn(arg1: *mut i64, arg2: i64) -> i64 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                            var_2c8 = &data_5bbe20;
                            let var_2c0_21: i64 = 2;
                            let var_2a8_20: i64 = 0;
                            let var_2b8_20: *mut *mut i32 = &var_2f8;
                            let var_2b0_20: i64 = 1;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2c8);
                            var_2e8 = &var_1e8;
                            let var_2e0_12: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                            var_2c8 = &data_5bbf98;
                            let var_2c0_22: i64 = 2;
                            let var_2a8_21: i64 = 0;
                            var_2b8 = &var_2e8;
                            let var_2b0_21: i64 = 1;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2c8);
                            rax_19 = uu_tail::follow::files::FileHandling::update_reader::haeff66f6ffe85304(&arg2[0xe], rsi, rdx);
                        }
                        'label_506a57:
                        
                        if rax_19 != 0
                        {
                            goto 'label_506a68;
                        }
                        
                        'label_506c94:
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h0bc823050694df3d(&var_2c8, r13);
                        let var_2d8_2: *mut *mut i32 = var_2b8;
                        var_2e8 = var_2c8;
                        alloc::vec::Vec$LT$T$C$A$GT$::push::h1444e8e90e3da7b6(&var_1d0, &var_2e8);
                    }
                    else
                    {
                        'label_506194:
                        let mut rax_18: *mut i32;
                        let mut rdx_12: i64;
                        rax_18 = uucore::util_name::h60d842bf27b05e82();
                        var_2e8 = rax_18;
                        let mut var_2e0_4: i64 = rdx_12;
                        var_2f8 = &var_2e8;
                        let var_2f0_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                        var_2c8 = &data_5bbe20;
                        let var_2c0_7: i64 = 2;
                        let var_2a8_6: i64 = 0;
                        let var_2b8_7: *mut *mut i32 = &var_2f8;
                        let var_2b0_6: i64 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2c8);
                        var_2e8 = nullptr;
                        var_2e0_4 = var_1e0;
                        let var_2d0_2: i8 = 1;
                        var_2f8 = &var_2e8;
                        let var_2f0_2: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                        var_2c8 = &data_5bbf58;
                        let var_2c0_8: i64 = 2;
                        let var_2a8_7: i64 = 0;
                        let var_2b8_8: *mut *mut i32 = &var_2f8;
                        let var_2b0_7: i64 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2c8);
                        rax_19 =
                            uu_tail::follow::files::FileHandling::update_reader::haeff66f6ffe85304(
                            &arg2[0xe], rsi, rdx);
                        
                        if rax_19 != 0
                        {
                            goto 'label_506a68;
                        }
                        
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h0bc823050694df3d(&var_2c8, r13);
                        let var_2d8_1: *mut *mut i32 = var_2b8_8;
                        var_2e8 = var_2c8;
                        alloc::vec::Vec$LT$T$C$A$GT$::push::h1444e8e90e3da7b6(&var_1d0, &var_2e8);
                    }
                }
                else
                {
                    rax_17 = uu_tail::follow::files::FileHandling::get::ha1f26ea8b12ea1ff(
                        &arg2[0xe], rsi, rdx);
                    
                    if *rax_17 != 2
                    {
                        if r15_1 == 0x1000
                        {
                            goto 'label_506579;
                        }
                        
                        let rcx_17: i32 = 0xf000 & *rax_17.byte_offset(0x38);
                        
                        if rcx_17 == 0x1000 || rcx_17 == 0x8000 || rcx_17 == 0x2000
                        {
                            if *rax_17.byte_offset(0xc8) == 0
                            {
                                let mut rax_47: *mut i32;
                                let mut rdx_40: i64;
                                rax_47 = uucore::util_name::h60d842bf27b05e82();
                                var_2e8 = rax_47;
                                let mut var_2e0_13: i64 = rdx_40;
                                var_2f8 = &var_2e8;
                                let var_2f0_14: fn(arg1: *mut i64, arg2: i64) -> i64 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                                var_2c8 = &data_5bbe20;
                                let var_2c0_23: i64 = 2;
                                let var_2a8_22: i64 = 0;
                                let var_2b8_21: *mut *mut i32 = &var_2f8;
                                let var_2b0_22: i64 = 1;
                                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2c8);
                                var_2e8 = nullptr;
                                var_2e0_13 = var_1e0;
                                let var_2d0_8: i8 = 1;
                                var_2f8 = &var_2e8;
                                let var_2f0_15: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                                var_2c8 = &data_5bbfb8;
                                let var_2c0_24: i64 = 2;
                                let var_2a8_23: i64 = 0;
                                let var_2b8_22: *mut *mut i32 = &var_2f8;
                                let var_2b0_23: i64 = 1;
                                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2c8);
                            }
                            else
                            {
                                uu_tail::follow::files::FileHandling::reset_reader::h2b8bfb99f1a2f6b2(&arg2[0xe], rsi, rdx);
                            }
                        }
                    }
                    else
                    {
                        if r15_1 == 0x1000
                        {
                            goto 'label_506194;
                        }
                        
                        if *arg4.byte_offset(0x48) != 0
                        {
                            let rax_21: i8 = *arg2.byte_offset(0x8e);
                            
                            if rax_21 == 2 || (rax_21 & 1) != 0
                            {
                                let mut rax_43: *mut i32;
                                let mut rdx_36: i64;
                                rax_43 = uucore::util_name::h60d842bf27b05e82();
                                var_2e8 = rax_43;
                                let mut var_2e0_10: i64 = rdx_36;
                                var_2f8 = &var_2e8;
                                let var_2f0_11: fn(arg1: *mut i64, arg2: i64) -> i64 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                                var_2c8 = &data_5bbe20;
                                let var_2c0_19: i64 = 2;
                                let var_2a8_18: i64 = 0;
                                let var_2b8_18: *mut *mut i32 = &var_2f8;
                                let var_2b0_18: i64 = 1;
                                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2c8);
                                var_2e8 = nullptr;
                                var_2e0_10 = var_1e0;
                                let var_2d0_7: i8 = 1;
                                var_2f8 = &var_2e8;
                                let var_2f0_12: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                                var_2c8 = &data_5bbfb8;
                                let var_2c0_20: i64 = 2;
                                let var_2a8_19: i64 = 0;
                                let var_2b8_19: *mut *mut i32 = &var_2f8;
                                let var_2b0_19: i64 = 1;
                                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2c8);
                            }
                            else
                            {
                                let mut rax_22: *mut i32;
                                let mut rdx_16: i64;
                                rax_22 = uucore::util_name::h60d842bf27b05e82();
                                var_2e8 = rax_22;
                                let mut var_2e0_5: i64 = rdx_16;
                                var_2f8 = &var_2e8;
                                let var_2f0_3: fn(arg1: *mut i64, arg2: i64) -> i64 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                                var_2c8 = &data_5bbe20;
                                let var_2c0_9: i64 = 2;
                                let var_2a8_8: i64 = 0;
                                let var_2b8_9: *mut *mut i32 = &var_2f8;
                                let var_2b0_8: i64 = 1;
                                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2c8);
                                var_2e8 = nullptr;
                                var_2e0_5 = var_1e0;
                                let var_2d0_3: i8 = 1;
                                var_2f8 = &var_2e8;
                                let var_2f0_4: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                                var_2c8 = &data_5bbfd8;
                                let var_2c0_10: i64 = 2;
                                let var_2a8_9: i64 = 0;
                                let var_2b8_10: *mut *mut i32 = &var_2f8;
                                let mut var_2b0_9: i64 = 1;
                                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2c8);
                                
                                if *arg2 == 3
                                {
                                    core::option::unwrap_failed::h0e11329e76906eaa();
                                    /* no return */
                                }
                                
                                (*(*arg2.byte_offset(0x18) + 0x20))(&var_2c8, 
                                    *arg2.byte_offset(0x10), rsi, rdx);
                                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$notify..error..Error$GT$$GT$::h1955e5315261984f(&var_2c8);
                                uu_tail::follow::files::FileHandling::remove::h9a608e9706c93353(
                                    &var_2c8, &arg2[0xe], rsi, rdx);
                                core::ptr::drop_in_place$LT$uu_tail..follow..files..PathData$GT$::h0bd94260f77f0a2b(&var_2c8);
                                
                                if uu_tail::follow::files::FileHandling::no_files_remaining::hf3496cc0e002c3dd(&arg2[0xe], arg4) != 0
                                {
                                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8732f121b58e7ba0(&var_2e8);
                                    let var_2d8: i64;
                                    let var_2b8_11: i64 = var_2d8;
                                    var_2c8 = var_2e8;
                                    var_2b0_9 = 1;
                                    rax_19 = alloc::boxed::Box$LT$T$GT$::new::h7645b42f7bfbf581(
                                        &var_2c8);
                                    rdx_14 = &data_5bbdb0;
                                    'label_506a68:
                                    arg1[1] = rax_19;
                                    arg1[2] = rdx_14;
                                    *arg1 = -0x8000000000000000;
                                    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he6af43ab7f514533(&var_1b8);
                                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e81f59885851d09(&var_1e8);
                                    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h4ace78a7ba310efc(&var_1d0);
                                }
                            }
                        }
                    }
                }
                memcpy(&var_2c8, &var_e0, 0xb0);
                uu_tail::follow::files::FileHandling::update_metadata::h4aaaeb16ccacaf37(
                    &arg2[0xe], rsi, rdx, &var_2c8);
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he6af43ab7f514533(&var_1b8);
            }
        }
    }
    else if rax_2 == 3
    {
        let rax_5: u32 = *arg3.byte_offset(0x21);
        
        if rax_5 == 1
        {
            if *arg3.byte_offset(0x22) == 0
            {
                goto 'label_506125;
            }
        }
        else if rax_5 == 2
        {
            if (*arg3.byte_offset(0x22) & 5) == 0
            {
                goto 'label_506125;
            }
        }
        else if rax_5 == 3
        {
            let rax_6: u32 = *arg3.byte_offset(0x22);
            
            if rax_6 == 1
            {
                goto 'label_506125;
            }
            
            if rax_6 == 3
            {
                if *arg2.byte_offset(0x8e) - 1 >= 2
                {
                    let r14_3: *mut c_void = (r15 * 0x18 + -0xffffffffffffffe8).byte_offset(r13);
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h0bc823050694df3d(&var_2c8, r14_3);
                    let var_1a8_4: *mut *mut i32 = var_2b8;
                    var_1b8 = var_2c8;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h1444e8e90e3da7b6(&var_1d0, &var_1b8);
                    uu_tail::follow::files::FileHandling::remove::h9a608e9706c93353(&var_2c8, 
                        &arg2[0xe], rsi, rdx);
                    let rbx_1: *mut i8 = *r14_3.byte_offset(8);
                    let r14_4: size_t = *r14_3.byte_offset(0x10);
                    uu_tail::follow::files::PathData::from_other_with_path::h3c415c2bfeedf353(
                        &var_1b8, &var_2c8, rbx_1);
                    memcpy(&var_2c8, &var_1b8, 0xd8);
                    
                    if *arg2.byte_offset(0x38) == -0x8000000000000000
                    {
                        core::option::unwrap_failed::h0e11329e76906eaa();
                        /* no return */
                    }
                    
                    uu_tail::follow::files::FileHandling::insert::h8755548d7239df23(&arg2[0xe], 
                        rbx_1, r14_4, &var_2c8, 
                        _$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$GT$::eq::h1d8861b9e1bd0bd7(*arg2.byte_offset(0x40), *arg2.byte_offset(0x48), *r13.byte_offset(8), 
                            *r13.byte_offset(0x10)));
                    
                    if *arg2 == 3
                    {
                        core::option::unwrap_failed::h0e11329e76906eaa();
                        /* no return */
                    }
                    
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::hdf4e067f61f46c2b(uu_tail::follow::watch::WatcherRx::unwatch::hae2d0446936d6361(
                        *arg2.byte_offset(0x10), *arg2.byte_offset(0x18)));
                    
                    if *arg2 == 3
                    {
                        core::option::unwrap_failed::h0e11329e76906eaa();
                        /* no return */
                    }
                    
                    let mut rax_36: *mut i128;
                    let mut rdx_28: i64;
                    rax_36 =
                        uu_tail::follow::watch::WatcherRx::watch_with_parent::h1fadf41504d6de8e(
                        *arg2.byte_offset(0x10), *arg2.byte_offset(0x18), rbx_1, r14_4);
                    
                    if rax_36 != 0
                    {
                        arg1[1] = rax_36;
                        arg1[2] = rdx_28;
                        *arg1 = -0x8000000000000000;
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e81f59885851d09(
                            &var_1e8);
                        return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h4ace78a7ba310efc(&var_1d0);
                    }
                }
            }
            else if rax_6 == 2
            {
                goto 'label_505cec;
            }
        }
    }
    else if rax_2 == 4 && *arg3.byte_offset(0x21) < 2
    {
        'label_505cec:
        let rax_3: i8 = *arg2.byte_offset(0x8e);
        
        if (rax_3 & 1) != 0
        {
            if *arg4.byte_offset(0x48) == 0
            {
                let mut rax_26: i64;
                let mut rdx_19: i64;
                rax_26 = uucore::util_name::h60d842bf27b05e82();
                var_1b8 = rax_26;
                let var_1b0_6: i64 = rdx_19;
                var_2e8 = &var_1b8;
                let var_2e0_6: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                var_2c8 = &data_5bbe20;
                let var_2c0_11: i64 = 2;
                let var_2a8_10: i64 = 0;
                let var_2b8_12: *mut *mut i32 = &var_2e8;
                let var_2b0_10: i64 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2c8);
                var_1b8 = &var_1e8;
                let var_1b0_7: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                let var_1a8_3: *mut *mut c_void = &data_5bc128;
                let var_1a0_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                var_2c8 = &data_5bc068;
                let var_2c0_12: i64 = 3;
                let var_2a8_11: i64 = 0;
                let var_2b8_13: *mut i32 = &var_1b8;
                let mut var_2b0_11: i64 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2c8);
                
                if (uu_tail::follow::files::FileHandling::files_remaining::h86d5a5f2d15f0cfd(
                    &arg2[0xe]) | *arg2.byte_offset(0x8d) == 0) == 0
                {
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8732f121b58e7ba0(
                        &var_1b8);
                    let var_2b8_15: *mut *mut c_void = var_1a8_3;
                    var_2c8 = var_1b8;
                    var_2b0_11 = 1;
                    arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h7645b42f7bfbf581(&var_2c8);
                    arg1[2] = &data_5bbdb0;
                    *arg1 = -0x8000000000000000;
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e81f59885851d09(
                        &var_1e8);
                    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h4ace78a7ba310efc(&var_1d0);
                }
                
                uu_tail::follow::files::FileHandling::reset_reader::h2b8bfb99f1a2f6b2(&arg2[0xe], 
                    rsi, rdx);
            }
            else
            {
                let rax_7: *mut c_void =
                    uu_tail::follow::files::FileHandling::get_mut_metadata::h602fa25e5b671479(
                    &arg2[0xe], rsi, rdx);
                
                if rax_7 != 0
                {
                    let rcx_2: i32 = 0xf000 & *rax_7.byte_offset(0x38);
                    
                    if (rcx_2 == 0x1000 || rcx_2 == 0x2000 || rcx_2 == 0x8000) && *
                        uu_tail::follow::files::FileHandling::get::ha1f26ea8b12ea1ff(
                        arg2.byte_offset(0x38), rsi, rdx).byte_offset(0xc8) != 0
                    {
                        let mut rax_9: i64;
                        let mut rdx_5: i64;
                        rax_9 = uucore::util_name::h60d842bf27b05e82();
                        var_1b8 = rax_9;
                        let var_1b0_1: i64 = rdx_5;
                        var_2e8 = &var_1b8;
                        let mut var_2e0_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                        var_2c8 = &data_5bbe20;
                        let var_2c0_1: i64 = 2;
                        let var_2a8_1: i64 = 0;
                        let var_2b8_1: *mut *mut i32 = &var_2e8;
                        let var_2b0_1: i64 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2c8);
                        var_2e8 = nullptr;
                        var_2e0_1 = var_1e0;
                        let var_2d0_1: i8 = 1;
                        var_2c8 = &var_2e8;
                        let var_2c0_2: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                        let var_2b8_2: *mut *mut c_void = &data_5bc138;
                        let var_2b0_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                        let var_2a8_2: *mut *mut c_void = &data_5bc128;
                        let var_2a0_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                        var_1b8 = &data_5bbff8;
                        let var_1b0_2: i64 = 4;
                        let var_198_1: i64 = 0;
                        let var_1a8_1: *mut *mut i128 = &var_2c8;
                        let var_1a0_1: i64 = 3;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_1b8);
                    }
                }
                
                if _$LT$std..path..Path$u20$as$u20$uu_tail..paths..PathExtTail$GT$::is_orphan::h65c9528458cf452d(rsi, rdx) == 0
                {
                    uu_tail::follow::files::FileHandling::reset_reader::h2b8bfb99f1a2f6b2(
                        &arg2[0xe], rsi, rdx);
                }
                else if _$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h7a9332afdb48cbde(r13, *arg2.byte_offset(0x28), *arg2.byte_offset(0x30)) != 0
                {
                    uu_tail::follow::files::FileHandling::reset_reader::h2b8bfb99f1a2f6b2(
                        &arg2[0xe], rsi, rdx);
                }
                else
                {
                    let mut rax_12: i64;
                    let mut rdx_7: i64;
                    rax_12 = uucore::util_name::h60d842bf27b05e82();
                    var_1b8 = rax_12;
                    let var_1b0_3: i64 = rdx_7;
                    var_2e8 = &var_1b8;
                    let var_2e0_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                    var_2c8 = &data_5bbe20;
                    let var_2c0_3: i64 = 2;
                    let var_2a8_3: i64 = 0;
                    let var_2b8_3: *mut *mut i32 = &var_2e8;
                    let mut var_2b0_3: i64 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2c8);
                    var_2c8 = &data_5bc038;
                    let var_2c0_4: i64 = 1;
                    let var_2b8_4: i64 = 8;
                    var_2b0_3 = {0};
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2c8);
                    let mut rax_13: i64;
                    let mut rdx_8: i64;
                    rax_13 = uucore::util_name::h60d842bf27b05e82();
                    var_1b8 = rax_13;
                    let var_1b0_4: i64 = rdx_8;
                    var_2e8 = &var_1b8;
                    let var_2e0_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                    var_2c8 = &data_5bbe20;
                    let var_2c0_5: i64 = 2;
                    let var_2a8_4: i64 = 0;
                    let var_2b8_5: *mut *mut i32 = &var_2e8;
                    let var_2b0_4: i64 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2c8);
                    var_1b8 = &data_5bbeb0;
                    let var_1b0_5: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                    var_2c8 = &data_5bc048;
                    let var_2c0_6: i64 = 2;
                    let var_2a8_5: i64 = 0;
                    let var_2b8_6: *mut i32 = &var_1b8;
                    let var_2b0_5: i64 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2c8);
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h0bc823050694df3d(&var_2c8, r13);
                    let var_1a8_2: *mut i32 = var_2b8_6;
                    var_1b8 = var_2c8;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h1444e8e90e3da7b6(&arg2[8], &var_1b8);
                    
                    if *arg2 == 3
                    {
                        core::option::unwrap_failed::h0e11329e76906eaa();
                        /* no return */
                    }
                    
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::hdf4e067f61f46c2b(uu_tail::follow::watch::WatcherRx::unwatch::hae2d0446936d6361(
                        *arg2.byte_offset(0x10), *arg2.byte_offset(0x18)));
                    uu_tail::follow::files::FileHandling::reset_reader::h2b8bfb99f1a2f6b2(
                        &arg2[0xe], rsi, rdx);
                }
            }
        }
        else if rax_3 != 2 && arg2[0x23] != 0
        {
            if *arg2 == 3
            {
                core::option::unwrap_failed::h0e11329e76906eaa();
                /* no return */
            }
            
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::hdf4e067f61f46c2b(uu_tail::follow::watch::WatcherRx::unwatch::hae2d0446936d6361(*arg2.byte_offset(0x10), 
                *arg2.byte_offset(0x18)));
            uu_tail::follow::files::FileHandling::remove::h9a608e9706c93353(&var_2c8, &arg2[0xe], 
                rsi, rdx);
            core::ptr::drop_in_place$LT$uu_tail..follow..files..PathData$GT$::h0bd94260f77f0a2b(
                &var_2c8);
        }
    }
    arg1[2] = var_1c0;
    *arg1 = var_1d0;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e81f59885851d09(&var_1e8)
}
