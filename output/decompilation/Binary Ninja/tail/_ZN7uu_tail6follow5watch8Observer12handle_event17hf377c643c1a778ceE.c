
  int64_t uu_tail::follow::watch::Observer::handle_event::hf377c643c1a778ce(int64_t* arg1, int32_t* arg2, void* arg3, void* arg4)

{
    int64_t r15 = *(arg3 + 0x10);
    
    if (!r15)
    {
        core::option::unwrap_failed::h0e11329e76906eaa();
        /* no return */
    }
    
    void* r13 = *(arg3 + 8);
    int64_t var_1d0 = 0;
    int64_t var_1c8 = 8;
    int64_t var_1c0 = 0;
    char* rsi = *(r13 + 8);
    size_t rdx = *(r13 + 0x10);
    void var_1e8;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(
        &var_1e8, 
        uu_tail::follow::files::FileHandling::get::ha1f26ea8b12ea1ff(&arg2[0xe], rsi, rdx) + 0xb0);
    uint32_t rax_2 = *(arg3 + 0x20);
    int32_t* var_2e8;
    int128_t* var_2c8;
    int32_t** var_2b8;
    int128_t var_1e0;
    int32_t var_1b8;
    
    if (rax_2 == 2)
    {
        if (*(arg3 + 0x21) != 3)
        {
            label_506125:
            std::fs::metadata::h5a76b0b01e9dc15d(&var_1b8, rsi);
            
            if (var_1b8 == 2)
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he6af43ab7f514533(&var_1b8);
            else
            {
                void var_e0;
                memcpy(&var_e0, &var_1b8, 0xb0);
                int32_t var_a8;
                int32_t r15_1 = 0xf000 & var_a8;
                int32_t* var_2f8;
                void* rax_17;
                int128_t* rax_19;
                void** const rdx_14;
                
                if (r15_1 == 0x2000 || r15_1 == 0x8000)
                {
                    rax_17 = uu_tail::follow::files::FileHandling::get::ha1f26ea8b12ea1ff(
                        &arg2[0xe], rsi, rdx);
                    
                    if (*rax_17 != 2)
                    {
                        label_506579:
                        int32_t rcx_7 = 0xf000 & *(rax_17 + 0x38);
                        
                        if (rcx_7 != 0x1000 && rcx_7 != 0x2000 && rcx_7 != 0x8000)
                        {
                            int32_t* rax_41;
                            int64_t rdx_33;
                            rax_41 = uucore::util_name::h60d842bf27b05e82();
                            var_2e8 = rax_41;
                            int64_t var_2e0_9 = rdx_33;
                            var_2f8 = &var_2e8;
                            int64_t (* var_2f0_9)(int64_t* arg1, int64_t arg2) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                            var_2c8 = &data_5bbe20;
                            int64_t var_2c0_17 = 2;
                            int64_t var_2a8_16 = 0;
                            int32_t** var_2b8_17 = &var_2f8;
                            int64_t var_2b0_16 = 1;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2c8);
                            var_2e8 = nullptr;
                            var_2e0_9 = var_1e0;
                            char var_2d0_6 = 1;
                            var_2f8 = &var_2e8;
                            int64_t (* var_2f0_10)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                            var_2c8 = &data_5bbf38;
                            int64_t var_2c0_18 = 2;
                            int64_t var_2a8_17 = 0;
                            var_2b8 = &var_2f8;
                            int64_t var_2b0_17 = 1;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2c8);
                            rax_19 = uu_tail::follow::files::FileHandling::update_reader::haeff66f6ffe85304(&arg2[0xe], rsi, rdx);
                            goto label_506a57;
                        }
                        
                        int64_t var_b8;
                        
                        if (!*(rax_17 + 0xc8))
                        {
                            int32_t* rax_40;
                            int64_t rdx_31;
                            rax_40 = uucore::util_name::h60d842bf27b05e82();
                            var_2e8 = rax_40;
                            int64_t var_2e0_8 = rdx_31;
                            var_2f8 = &var_2e8;
                            int64_t (* var_2f0_7)(int64_t* arg1, int64_t arg2) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                            var_2c8 = &data_5bbe20;
                            int64_t var_2c0_15 = 2;
                            int64_t var_2a8_14 = 0;
                            int32_t** var_2b8_16 = &var_2f8;
                            int64_t var_2b0_14 = 1;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2c8);
                            var_2e8 = nullptr;
                            var_2e0_8 = var_1e0;
                            char var_2d0_5 = 1;
                            var_2f8 = &var_2e8;
                            int64_t (* var_2f0_8)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                            var_2c8 = &data_5bbf58;
                            int64_t var_2c0_16 = 2;
                            int64_t var_2a8_15 = 0;
                            var_2b8 = &var_2f8;
                            int64_t var_2b0_15 = 1;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2c8);
                            rax_19 = uu_tail::follow::files::FileHandling::update_reader::haeff66f6ffe85304(&arg2[0xe], rsi, rdx);
                        }
                        else if (_$LT$notify..event..EventKind$u20$as$u20$core..cmp..PartialEq$GT$::eq::hdefd9549194a1b6f(arg3 + 0x20) || (*(arg2 + 0x8d) && *(rax_17 + 0x28) != var_b8))
                        {
                            int32_t* rax_37;
                            int64_t rdx_29;
                            rax_37 = uucore::util_name::h60d842bf27b05e82();
                            var_2e8 = rax_37;
                            int64_t var_2e0_7 = rdx_29;
                            var_2f8 = &var_2e8;
                            int64_t (* var_2f0_5)(int64_t* arg1, int64_t arg2) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                            var_2c8 = &data_5bbe20;
                            int64_t var_2c0_13 = 2;
                            int64_t var_2a8_12 = 0;
                            int32_t** var_2b8_14 = &var_2f8;
                            int64_t var_2b0_12 = 1;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2c8);
                            var_2e8 = nullptr;
                            var_2e0_7 = var_1e0;
                            char var_2d0_4 = 1;
                            var_2f8 = &var_2e8;
                            int64_t (* var_2f0_6)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                            var_2c8 = &data_5bbf78;
                            int64_t var_2c0_14 = 2;
                            int64_t var_2a8_13 = 0;
                            var_2b8 = &var_2f8;
                            int64_t var_2b0_13 = 1;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2c8);
                            rax_19 = uu_tail::follow::files::FileHandling::update_reader::haeff66f6ffe85304(&arg2[0xe], rsi, rdx);
                        }
                        else
                        {
                            _$LT$std..fs..Metadata$u20$as$u20$uu_tail..paths..MetadataExtTail$GT$::got_truncated::ha28743506d7e92e5(&var_2c8, rax_17, &var_e0);
                            rax_19 = var_2c8;
                            void** var_2c0;
                            
                            if (rax_19)
                            {
                                rdx_14 = var_2c0;
                                goto label_506a68;
                            }
                            
                            if (!var_2c0)
                                goto label_506c94;
                            
                            int32_t* rax_44;
                            int64_t rdx_37;
                            rax_44 = uucore::util_name::h60d842bf27b05e82();
                            var_2e8 = rax_44;
                            int64_t var_2e0_11 = rdx_37;
                            var_2f8 = &var_2e8;
                            int64_t (* var_2f0_13)(int64_t* arg1, int64_t arg2) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                            var_2c8 = &data_5bbe20;
                            int64_t var_2c0_21 = 2;
                            int64_t var_2a8_20 = 0;
                            int32_t** var_2b8_20 = &var_2f8;
                            int64_t var_2b0_20 = 1;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2c8);
                            var_2e8 = &var_1e8;
                            int64_t (* var_2e0_12)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                            var_2c8 = &data_5bbf98;
                            int64_t var_2c0_22 = 2;
                            int64_t var_2a8_21 = 0;
                            var_2b8 = &var_2e8;
                            int64_t var_2b0_21 = 1;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2c8);
                            rax_19 = uu_tail::follow::files::FileHandling::update_reader::haeff66f6ffe85304(&arg2[0xe], rsi, rdx);
                        }
                        label_506a57:
                        
                        if (rax_19)
                            goto label_506a68;
                        
                        label_506c94:
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h0bc823050694df3d(&var_2c8, r13);
                        int32_t** var_2d8_2 = var_2b8;
                        var_2e8 = var_2c8;
                        alloc::vec::Vec$LT$T$C$A$GT$::push::h1444e8e90e3da7b6(&var_1d0, &var_2e8);
                    }
                    else
                    {
                        label_506194:
                        int32_t* rax_18;
                        int64_t rdx_12;
                        rax_18 = uucore::util_name::h60d842bf27b05e82();
                        var_2e8 = rax_18;
                        int64_t var_2e0_4 = rdx_12;
                        var_2f8 = &var_2e8;
                        int64_t (* var_2f0_1)(int64_t* arg1, int64_t arg2) =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                        var_2c8 = &data_5bbe20;
                        int64_t var_2c0_7 = 2;
                        int64_t var_2a8_6 = 0;
                        int32_t** var_2b8_7 = &var_2f8;
                        int64_t var_2b0_6 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2c8);
                        var_2e8 = nullptr;
                        var_2e0_4 = var_1e0;
                        char var_2d0_2 = 1;
                        var_2f8 = &var_2e8;
                        int64_t (* var_2f0_2)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                        var_2c8 = &data_5bbf58;
                        int64_t var_2c0_8 = 2;
                        int64_t var_2a8_7 = 0;
                        int32_t** var_2b8_8 = &var_2f8;
                        int64_t var_2b0_7 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2c8);
                        rax_19 =
                            uu_tail::follow::files::FileHandling::update_reader::haeff66f6ffe85304(
                            &arg2[0xe], rsi, rdx);
                        
                        if (rax_19)
                            goto label_506a68;
                        
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h0bc823050694df3d(&var_2c8, r13);
                        int32_t** var_2d8_1 = var_2b8_8;
                        var_2e8 = var_2c8;
                        alloc::vec::Vec$LT$T$C$A$GT$::push::h1444e8e90e3da7b6(&var_1d0, &var_2e8);
                    }
                }
                else
                {
                    rax_17 = uu_tail::follow::files::FileHandling::get::ha1f26ea8b12ea1ff(
                        &arg2[0xe], rsi, rdx);
                    
                    if (*rax_17 != 2)
                    {
                        if (r15_1 == 0x1000)
                            goto label_506579;
                        
                        int32_t rcx_17 = 0xf000 & *(rax_17 + 0x38);
                        
                        if (rcx_17 == 0x1000 || rcx_17 == 0x8000 || rcx_17 == 0x2000)
                        {
                            if (!*(rax_17 + 0xc8))
                            {
                                int32_t* rax_47;
                                int64_t rdx_40;
                                rax_47 = uucore::util_name::h60d842bf27b05e82();
                                var_2e8 = rax_47;
                                int64_t var_2e0_13 = rdx_40;
                                var_2f8 = &var_2e8;
                                int64_t (* var_2f0_14)(int64_t* arg1, int64_t arg2) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                                var_2c8 = &data_5bbe20;
                                int64_t var_2c0_23 = 2;
                                int64_t var_2a8_22 = 0;
                                int32_t** var_2b8_21 = &var_2f8;
                                int64_t var_2b0_22 = 1;
                                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2c8);
                                var_2e8 = nullptr;
                                var_2e0_13 = var_1e0;
                                char var_2d0_8 = 1;
                                var_2f8 = &var_2e8;
                                int64_t (* var_2f0_15)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                                var_2c8 = &data_5bbfb8;
                                int64_t var_2c0_24 = 2;
                                int64_t var_2a8_23 = 0;
                                int32_t** var_2b8_22 = &var_2f8;
                                int64_t var_2b0_23 = 1;
                                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2c8);
                            }
                            else
                                uu_tail::follow::files::FileHandling::reset_reader::h2b8bfb99f1a2f6b2(&arg2[0xe], rsi, rdx);
                        }
                    }
                    else
                    {
                        if (r15_1 == 0x1000)
                            goto label_506194;
                        
                        if (*(arg4 + 0x48))
                        {
                            char rax_21 = *(arg2 + 0x8e);
                            
                            if (rax_21 == 2 || rax_21 & 1)
                            {
                                int32_t* rax_43;
                                int64_t rdx_36;
                                rax_43 = uucore::util_name::h60d842bf27b05e82();
                                var_2e8 = rax_43;
                                int64_t var_2e0_10 = rdx_36;
                                var_2f8 = &var_2e8;
                                int64_t (* var_2f0_11)(int64_t* arg1, int64_t arg2) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                                var_2c8 = &data_5bbe20;
                                int64_t var_2c0_19 = 2;
                                int64_t var_2a8_18 = 0;
                                int32_t** var_2b8_18 = &var_2f8;
                                int64_t var_2b0_18 = 1;
                                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2c8);
                                var_2e8 = nullptr;
                                var_2e0_10 = var_1e0;
                                char var_2d0_7 = 1;
                                var_2f8 = &var_2e8;
                                int64_t (* var_2f0_12)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                                var_2c8 = &data_5bbfb8;
                                int64_t var_2c0_20 = 2;
                                int64_t var_2a8_19 = 0;
                                int32_t** var_2b8_19 = &var_2f8;
                                int64_t var_2b0_19 = 1;
                                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2c8);
                            }
                            else
                            {
                                int32_t* rax_22;
                                int64_t rdx_16;
                                rax_22 = uucore::util_name::h60d842bf27b05e82();
                                var_2e8 = rax_22;
                                int64_t var_2e0_5 = rdx_16;
                                var_2f8 = &var_2e8;
                                int64_t (* var_2f0_3)(int64_t* arg1, int64_t arg2) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                                var_2c8 = &data_5bbe20;
                                int64_t var_2c0_9 = 2;
                                int64_t var_2a8_8 = 0;
                                int32_t** var_2b8_9 = &var_2f8;
                                int64_t var_2b0_8 = 1;
                                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2c8);
                                var_2e8 = nullptr;
                                var_2e0_5 = var_1e0;
                                char var_2d0_3 = 1;
                                var_2f8 = &var_2e8;
                                int64_t (* var_2f0_4)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                                var_2c8 = &data_5bbfd8;
                                int64_t var_2c0_10 = 2;
                                int64_t var_2a8_9 = 0;
                                int32_t** var_2b8_10 = &var_2f8;
                                int64_t var_2b0_9 = 1;
                                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2c8);
                                
                                if (*arg2 == 3)
                                {
                                    core::option::unwrap_failed::h0e11329e76906eaa();
                                    /* no return */
                                }
                                
                                (*(*(arg2 + 0x18) + 0x20))(&var_2c8, *(arg2 + 0x10), rsi, rdx);
                                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$notify..error..Error$GT$$GT$::h1955e5315261984f(&var_2c8);
                                uu_tail::follow::files::FileHandling::remove::h9a608e9706c93353(
                                    &var_2c8, &arg2[0xe], rsi, rdx);
                                core::ptr::drop_in_place$LT$uu_tail..follow..files..PathData$GT$::h0bd94260f77f0a2b(&var_2c8);
                                
                                if (uu_tail::follow::files::FileHandling::no_files_remaining::hf3496cc0e002c3dd(&arg2[0xe], arg4))
                                {
                                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8732f121b58e7ba0(&var_2e8);
                                    int64_t var_2d8;
                                    int64_t var_2b8_11 = var_2d8;
                                    var_2c8 = var_2e8;
                                    var_2b0_9 = 1;
                                    rax_19 = alloc::boxed::Box$LT$T$GT$::new::h7645b42f7bfbf581(
                                        &var_2c8);
                                    rdx_14 = &data_5bbdb0;
                                    label_506a68:
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
    else if (rax_2 == 3)
    {
        uint32_t rax_5 = *(arg3 + 0x21);
        
        if (rax_5 == 1)
        {
            if (!*(arg3 + 0x22))
                goto label_506125;
        }
        else if (rax_5 == 2)
        {
            if (!(*(arg3 + 0x22) & 5))
                goto label_506125;
        }
        else if (rax_5 == 3)
        {
            uint32_t rax_6 = *(arg3 + 0x22);
            
            if (rax_6 == 1)
                goto label_506125;
            
            if (rax_6 == 3)
            {
                if (*(arg2 + 0x8e) - 1 >= 2)
                {
                    void* r14_3 = r15 * 0x18 + -0xffffffffffffffe8 + r13;
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h0bc823050694df3d(&var_2c8, r14_3);
                    int32_t** var_1a8_4 = var_2b8;
                    var_1b8 = var_2c8;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h1444e8e90e3da7b6(&var_1d0, &var_1b8);
                    uu_tail::follow::files::FileHandling::remove::h9a608e9706c93353(&var_2c8, 
                        &arg2[0xe], rsi, rdx);
                    char* rbx_1 = *(r14_3 + 8);
                    size_t r14_4 = *(r14_3 + 0x10);
                    uu_tail::follow::files::PathData::from_other_with_path::h3c415c2bfeedf353(
                        &var_1b8, &var_2c8, rbx_1);
                    memcpy(&var_2c8, &var_1b8, 0xd8);
                    
                    if (*(arg2 + 0x38) == -0x8000000000000000)
                    {
                        core::option::unwrap_failed::h0e11329e76906eaa();
                        /* no return */
                    }
                    
                    uu_tail::follow::files::FileHandling::insert::h8755548d7239df23(&arg2[0xe], 
                        rbx_1, r14_4, &var_2c8, 
                        _$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$GT$::eq::h1d8861b9e1bd0bd7(*(arg2 + 0x40), *(arg2 + 0x48), *(r13 + 8), *(r13 + 0x10)));
                    
                    if (*arg2 == 3)
                    {
                        core::option::unwrap_failed::h0e11329e76906eaa();
                        /* no return */
                    }
                    
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::hdf4e067f61f46c2b(uu_tail::follow::watch::WatcherRx::unwatch::hae2d0446936d6361(*(arg2 + 0x10), 
                        *(arg2 + 0x18)));
                    
                    if (*arg2 == 3)
                    {
                        core::option::unwrap_failed::h0e11329e76906eaa();
                        /* no return */
                    }
                    
                    int128_t* rax_36;
                    int64_t rdx_28;
                    rax_36 =
                        uu_tail::follow::watch::WatcherRx::watch_with_parent::h1fadf41504d6de8e(
                        *(arg2 + 0x10), *(arg2 + 0x18), rbx_1, r14_4);
                    
                    if (rax_36)
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
            else if (rax_6 == 2)
                goto label_505cec;
        }
    }
    else if (rax_2 == 4 && *(arg3 + 0x21) < 2)
    {
        label_505cec:
        char rax_3 = *(arg2 + 0x8e);
        
        if (rax_3 & 1)
        {
            if (!*(arg4 + 0x48))
            {
                int64_t rax_26;
                int64_t rdx_19;
                rax_26 = uucore::util_name::h60d842bf27b05e82();
                var_1b8 = rax_26;
                int64_t var_1b0_6 = rdx_19;
                var_2e8 = &var_1b8;
                int64_t (* var_2e0_6)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                var_2c8 = &data_5bbe20;
                int64_t var_2c0_11 = 2;
                int64_t var_2a8_10 = 0;
                int32_t** var_2b8_12 = &var_2e8;
                int64_t var_2b0_10 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2c8);
                var_1b8 = &var_1e8;
                int64_t (* var_1b0_7)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                void** const var_1a8_3 = &data_5bc128;
                int64_t (* var_1a0_2)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                var_2c8 = &data_5bc068;
                int64_t var_2c0_12 = 3;
                int64_t var_2a8_11 = 0;
                int32_t* var_2b8_13 = &var_1b8;
                int64_t var_2b0_11 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2c8);
                
                if (!(uu_tail::follow::files::FileHandling::files_remaining::h86d5a5f2d15f0cfd(
                    &arg2[0xe]) | !*(arg2 + 0x8d)))
                {
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8732f121b58e7ba0(
                        &var_1b8);
                    void** const var_2b8_15 = var_1a8_3;
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
                void* rax_7 =
                    uu_tail::follow::files::FileHandling::get_mut_metadata::h602fa25e5b671479(
                    &arg2[0xe], rsi, rdx);
                
                if (rax_7)
                {
                    int32_t rcx_2 = 0xf000 & *(rax_7 + 0x38);
                    
                    if ((rcx_2 == 0x1000 || rcx_2 == 0x2000 || rcx_2 == 0x8000) && *(
                        uu_tail::follow::files::FileHandling::get::ha1f26ea8b12ea1ff(arg2 + 0x38, 
                        rsi, rdx) + 0xc8))
                    {
                        int64_t rax_9;
                        int64_t rdx_5;
                        rax_9 = uucore::util_name::h60d842bf27b05e82();
                        var_1b8 = rax_9;
                        int64_t var_1b0_1 = rdx_5;
                        var_2e8 = &var_1b8;
                        int64_t (* var_2e0_1)(int64_t* arg1, int64_t arg2) =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                        var_2c8 = &data_5bbe20;
                        int64_t var_2c0_1 = 2;
                        int64_t var_2a8_1 = 0;
                        int32_t** var_2b8_1 = &var_2e8;
                        int64_t var_2b0_1 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2c8);
                        var_2e8 = nullptr;
                        var_2e0_1 = var_1e0;
                        char var_2d0_1 = 1;
                        var_2c8 = &var_2e8;
                        int64_t (* var_2c0_2)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                        void** const var_2b8_2 = &data_5bc138;
                        int64_t (* var_2b0_2)(int64_t* arg1, int64_t arg2) =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                        void** const var_2a8_2 = &data_5bc128;
                        int64_t (* var_2a0_1)(int64_t* arg1, int64_t arg2) =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                        var_1b8 = &data_5bbff8;
                        int64_t var_1b0_2 = 4;
                        int64_t var_198_1 = 0;
                        int128_t** var_1a8_1 = &var_2c8;
                        int64_t var_1a0_1 = 3;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_1b8);
                    }
                }
                
                if (!_$LT$std..path..Path$u20$as$u20$uu_tail..paths..PathExtTail$GT$::is_orphan::h65c9528458cf452d(rsi, rdx))
                    uu_tail::follow::files::FileHandling::reset_reader::h2b8bfb99f1a2f6b2(
                        &arg2[0xe], rsi, rdx);
                else if (_$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h7a9332afdb48cbde(r13, *(arg2 + 0x28), *(arg2 + 0x30)))
                    uu_tail::follow::files::FileHandling::reset_reader::h2b8bfb99f1a2f6b2(
                        &arg2[0xe], rsi, rdx);
                else
                {
                    int64_t rax_12;
                    int64_t rdx_7;
                    rax_12 = uucore::util_name::h60d842bf27b05e82();
                    var_1b8 = rax_12;
                    int64_t var_1b0_3 = rdx_7;
                    var_2e8 = &var_1b8;
                    int64_t (* var_2e0_2)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                    var_2c8 = &data_5bbe20;
                    int64_t var_2c0_3 = 2;
                    int64_t var_2a8_3 = 0;
                    int32_t** var_2b8_3 = &var_2e8;
                    int64_t var_2b0_3 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2c8);
                    var_2c8 = &data_5bc038;
                    int64_t var_2c0_4 = 1;
                    int64_t var_2b8_4 = 8;
                    var_2b0_3 = {0};
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2c8);
                    int64_t rax_13;
                    int64_t rdx_8;
                    rax_13 = uucore::util_name::h60d842bf27b05e82();
                    var_1b8 = rax_13;
                    int64_t var_1b0_4 = rdx_8;
                    var_2e8 = &var_1b8;
                    int64_t (* var_2e0_3)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                    var_2c8 = &data_5bbe20;
                    int64_t var_2c0_5 = 2;
                    int64_t var_2a8_4 = 0;
                    int32_t** var_2b8_5 = &var_2e8;
                    int64_t var_2b0_4 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2c8);
                    var_1b8 = &data_5bbeb0;
                    int64_t (* var_1b0_5)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                    var_2c8 = &data_5bc048;
                    int64_t var_2c0_6 = 2;
                    int64_t var_2a8_5 = 0;
                    int32_t* var_2b8_6 = &var_1b8;
                    int64_t var_2b0_5 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2c8);
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h0bc823050694df3d(&var_2c8, r13);
                    int32_t* var_1a8_2 = var_2b8_6;
                    var_1b8 = var_2c8;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h1444e8e90e3da7b6(&arg2[8], &var_1b8);
                    
                    if (*arg2 == 3)
                    {
                        core::option::unwrap_failed::h0e11329e76906eaa();
                        /* no return */
                    }
                    
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::hdf4e067f61f46c2b(uu_tail::follow::watch::WatcherRx::unwatch::hae2d0446936d6361(*(arg2 + 0x10), 
                        *(arg2 + 0x18)));
                    uu_tail::follow::files::FileHandling::reset_reader::h2b8bfb99f1a2f6b2(
                        &arg2[0xe], rsi, rdx);
                }
            }
        }
        else if (rax_3 != 2 && arg2[0x23])
        {
            if (*arg2 == 3)
            {
                core::option::unwrap_failed::h0e11329e76906eaa();
                /* no return */
            }
            
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::hdf4e067f61f46c2b(uu_tail::follow::watch::WatcherRx::unwatch::hae2d0446936d6361(*(arg2 + 0x10), 
                *(arg2 + 0x18)));
            uu_tail::follow::files::FileHandling::remove::h9a608e9706c93353(&var_2c8, &arg2[0xe], 
                rsi, rdx);
            core::ptr::drop_in_place$LT$uu_tail..follow..files..PathData$GT$::h0bd94260f77f0a2b(
                &var_2c8);
        }
    }
    arg1[2] = var_1c0;
    *arg1 = var_1d0;
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e81f59885851d09(&var_1e8);
}
