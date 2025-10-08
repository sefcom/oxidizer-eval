
  int64_t uu_tail::follow::watch::Observer::handle_event::hd08bd6b67fb66ec6(int64_t* arg1, int32_t* arg2, void* arg3, char arg4)

{
    int64_t rbx = *(arg3 + 0x10);
    
    if (!rbx)
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    void* r15 = *(arg3 + 8);
    int64_t var_280 = 0;
    int64_t var_278 = 8;
    int64_t var_270 = 0;
    void var_298;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
        &var_298, 
        uu_tail::follow::files::FileHandling::get::hc0a1561a42a9610a(&arg2[0xe], *(r15 + 8), 
            *(r15 + 0x10)) + 0xb0);
    uint32_t rax_2 = *(arg3 + 0x20);
    int32_t* var_398;
    void* const var_378;
    int32_t*** var_368;
    int128_t var_290;
    int32_t var_268;
    
    if (rax_2 == 2)
    {
        if (*(arg3 + 0x21) != 3)
        {
            label_4a43af:
            *(r15 + 0x10);
            std::fs::metadata::h5c248dd9820946eb(&var_268, *(r15 + 8));
            
            if (var_268 != 2)
            {
                void var_1b8;
                memcpy(&var_1b8, &var_268, 0xb0);
                int32_t var_180;
                int32_t rbx_1 = 0xf000 & var_180;
                int32_t** var_3a8;
                int32_t* rax_17;
                uint64_t rax_19;
                void** const rdx_16;
                
                if (rbx_1 == 0x8000 || rbx_1 == 0x2000)
                {
                    rax_17 = uu_tail::follow::files::FileHandling::get::hc0a1561a42a9610a(
                        &arg2[0xe], *(r15 + 8), *(r15 + 0x10));
                    
                    if (*rax_17 != 2)
                    {
                        label_4a4892:
                        int32_t rcx_9 = 0xf000 & rax_17[0xe];
                        
                        if (rcx_9 != 0x1000 && rcx_9 != 0x2000 && rcx_9 != 0x8000)
                        {
                            int32_t* rax_39;
                            int64_t rdx_38;
                            rax_39 = uucore::util_name::h074417a1e6395129();
                            var_398 = rax_39;
                            int64_t var_390_9 = rdx_38;
                            var_3a8 = &var_398;
                            int64_t (* var_3a0_9)(int64_t* arg1, int64_t arg2) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4163173f9b6529c1;
                            var_378 = &data_5734a0;
                            int64_t var_370_17 = 2;
                            int64_t var_358_16 = 0;
                            int32_t*** var_368_17 = &var_3a8;
                            int64_t var_360_16 = 1;
                            std::io::stdio::_eprint::h57899770eacec2ad(&var_378);
                            var_398 = nullptr;
                            var_390_9 = var_290;
                            char var_380_6 = 1;
                            var_3a8 = &var_398;
                            int64_t (* var_3a0_10)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                            var_378 = &data_5735b0;
                            int64_t var_370_18 = 2;
                            int64_t var_358_17 = 0;
                            var_368 = &var_3a8;
                            int64_t var_360_17 = 1;
                            std::io::stdio::_eprint::h57899770eacec2ad(&var_378);
                            rax_19 = uu_tail::follow::files::FileHandling::update_reader::hba2c0912cd1385d3(&arg2[0xe], *(r15 + 8), *(r15 + 0x10));
                            goto label_4a4cd9;
                        }
                        
                        int64_t var_190;
                        
                        if (!*(rax_17 + 0xc8))
                        {
                            int32_t* rax_38;
                            int64_t rdx_36;
                            rax_38 = uucore::util_name::h074417a1e6395129();
                            var_398 = rax_38;
                            int64_t var_390_8 = rdx_36;
                            var_3a8 = &var_398;
                            int64_t (* var_3a0_7)(int64_t* arg1, int64_t arg2) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4163173f9b6529c1;
                            var_378 = &data_5734a0;
                            int64_t var_370_15 = 2;
                            int64_t var_358_14 = 0;
                            int32_t*** var_368_16 = &var_3a8;
                            int64_t var_360_14 = 1;
                            std::io::stdio::_eprint::h57899770eacec2ad(&var_378);
                            var_398 = nullptr;
                            var_390_8 = var_290;
                            char var_380_5 = 1;
                            var_3a8 = &var_398;
                            int64_t (* var_3a0_8)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                            var_378 = &data_5735d0;
                            int64_t var_370_16 = 2;
                            int64_t var_358_15 = 0;
                            var_368 = &var_3a8;
                            int64_t var_360_15 = 1;
                            std::io::stdio::_eprint::h57899770eacec2ad(&var_378);
                            rax_19 = uu_tail::follow::files::FileHandling::update_reader::hba2c0912cd1385d3(&arg2[0xe], *(r15 + 8), *(r15 + 0x10));
                        }
                        else if (!_$LT$notify_types..event..EventKind$u20$as$u20$core..cmp..PartialEq$GT$::eq::ha41d237c36887005(arg3 + 0x20, &data_424e4b)
                            && (!*(arg2 + 0x8d) || *(rax_17 + 0x28) == var_190))
                        {
                            _$LT$std..fs..Metadata$u20$as$u20$uu_tail..paths..MetadataExtTail$GT$::got_truncated::hb79a91cf73219042(&var_378, rax_17, &var_1b8);
                            rax_19 = var_378;
                            void** var_370;
                            rdx_16 = var_370;
                            
                            if (rax_19)
                                goto label_4a4cea;
                            
                            if (!(rdx_16 & 1))
                                goto label_4a4e48;
                            
                            int32_t* rax_42;
                            int64_t rdx_41;
                            rax_42 = uucore::util_name::h074417a1e6395129();
                            var_398 = rax_42;
                            int64_t var_390_10 = rdx_41;
                            var_3a8 = &var_398;
                            int64_t (* var_3a0_11)(int64_t* arg1, int64_t arg2) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4163173f9b6529c1;
                            var_378 = &data_5734a0;
                            int64_t var_370_19 = 2;
                            int64_t var_358_18 = 0;
                            int32_t*** var_368_18 = &var_3a8;
                            int64_t var_360_18 = 1;
                            std::io::stdio::_eprint::h57899770eacec2ad(&var_378);
                            var_398 = &var_298;
                            int64_t (* var_390_11)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                            var_378 = &data_573610;
                            int64_t var_370_20 = 2;
                            int64_t var_358_19 = 0;
                            var_368 = &var_398;
                            int64_t var_360_19 = 1;
                            std::io::stdio::_eprint::h57899770eacec2ad(&var_378);
                            rax_19 = uu_tail::follow::files::FileHandling::update_reader::hba2c0912cd1385d3(&arg2[0xe], *(r15 + 8), *(r15 + 0x10));
                        }
                        else
                        {
                            int32_t* rax_31;
                            int64_t rdx_25;
                            rax_31 = uucore::util_name::h074417a1e6395129();
                            var_398 = rax_31;
                            int64_t var_390_7 = rdx_25;
                            var_3a8 = &var_398;
                            int64_t (* var_3a0_5)(int64_t* arg1, int64_t arg2) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4163173f9b6529c1;
                            var_378 = &data_5734a0;
                            int64_t var_370_13 = 2;
                            int64_t var_358_12 = 0;
                            int32_t*** var_368_15 = &var_3a8;
                            int64_t var_360_12 = 1;
                            std::io::stdio::_eprint::h57899770eacec2ad(&var_378);
                            var_398 = nullptr;
                            var_390_7 = var_290;
                            char var_380_4 = 1;
                            var_3a8 = &var_398;
                            int64_t (* var_3a0_6)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                            var_378 = &data_5735f0;
                            int64_t var_370_14 = 2;
                            int64_t var_358_13 = 0;
                            var_368 = &var_3a8;
                            int64_t var_360_13 = 1;
                            std::io::stdio::_eprint::h57899770eacec2ad(&var_378);
                            rax_19 = uu_tail::follow::files::FileHandling::update_reader::hba2c0912cd1385d3(&arg2[0xe], *(r15 + 8), *(r15 + 0x10));
                        }
                        label_4a4cd9:
                        
                        if (rax_19)
                            goto label_4a4cea;
                        
                        label_4a4e48:
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hf90a2ac3df31af12(&var_378, *(r15 + 8), *(r15 + 0x10));
                        int32_t*** var_388_2 = var_368;
                        var_398 = var_378;
                        alloc::vec::Vec$LT$T$C$A$GT$::push::hcd2b65ebabcd2f96(&var_280, &var_398);
                    }
                    else
                    {
                        label_4a4432:
                        int32_t* rax_18;
                        int64_t rdx_14;
                        rax_18 = uucore::util_name::h074417a1e6395129();
                        var_398 = rax_18;
                        int64_t var_390_4 = rdx_14;
                        var_3a8 = &var_398;
                        int64_t (* var_3a0_1)(int64_t* arg1, int64_t arg2) =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4163173f9b6529c1;
                        var_378 = &data_5734a0;
                        int64_t var_370_7 = 2;
                        int64_t var_358_6 = 0;
                        int32_t*** var_368_7 = &var_3a8;
                        int64_t var_360_6 = 1;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_378);
                        var_398 = nullptr;
                        var_390_4 = var_290;
                        char var_380_2 = 1;
                        var_3a8 = &var_398;
                        int64_t (* var_3a0_2)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                        var_378 = &data_5735d0;
                        int64_t var_370_8 = 2;
                        int64_t var_358_7 = 0;
                        int32_t*** var_368_8 = &var_3a8;
                        int64_t var_360_7 = 1;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_378);
                        rax_19 =
                            uu_tail::follow::files::FileHandling::update_reader::hba2c0912cd1385d3(
                            &arg2[0xe], *(r15 + 8), *(r15 + 0x10));
                        
                        if (rax_19)
                            goto label_4a4cea;
                        
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hf90a2ac3df31af12(&var_378, *(r15 + 8), *(r15 + 0x10));
                        int32_t*** var_388_1 = var_368_8;
                        var_398 = var_378;
                        alloc::vec::Vec$LT$T$C$A$GT$::push::hcd2b65ebabcd2f96(&var_280, &var_398);
                    }
                }
                else
                {
                    rax_17 = uu_tail::follow::files::FileHandling::get::hc0a1561a42a9610a(
                        &arg2[0xe], *(r15 + 8), *(r15 + 0x10));
                    
                    if (*rax_17 != 2)
                    {
                        if (rbx_1 == 0x1000)
                            goto label_4a4892;
                        
                        int32_t rcx_18 = 0xf000 & rax_17[0xe];
                        
                        if (rcx_18 == 0x1000 || rcx_18 == 0x8000 || rcx_18 == 0x2000)
                        {
                            if (!*(rax_17 + 0xc8))
                            {
                                int32_t* rax_44;
                                int64_t rdx_46;
                                rax_44 = uucore::util_name::h074417a1e6395129();
                                var_398 = rax_44;
                                int64_t var_390_12 = rdx_46;
                                var_3a8 = &var_398;
                                int64_t (* var_3a0_12)(int64_t* arg1, int64_t arg2) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4163173f9b6529c1;
                                var_378 = &data_5734a0;
                                int64_t var_370_21 = 2;
                                int64_t var_358_20 = 0;
                                int32_t*** var_368_19 = &var_3a8;
                                int64_t var_360_20 = 1;
                                std::io::stdio::_eprint::h57899770eacec2ad(&var_378);
                                var_398 = nullptr;
                                var_390_12 = var_290;
                                char var_380_7 = 1;
                                var_3a8 = &var_398;
                                int64_t (* var_3a0_13)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                                var_378 = &data_573630;
                                int64_t var_370_22 = 2;
                                int64_t var_358_21 = 0;
                                int32_t*** var_368_20 = &var_3a8;
                                int64_t var_360_21 = 1;
                                std::io::stdio::_eprint::h57899770eacec2ad(&var_378);
                            }
                            else
                                uu_tail::follow::files::FileHandling::reset_reader::hff52527130e84020(&arg2[0xe], *(r15 + 8), *(r15 + 0x10));
                        }
                    }
                    else
                    {
                        if (rbx_1 == 0x1000)
                            goto label_4a4432;
                        
                        if (arg4 & 1)
                        {
                            char rax_25 = *(arg2 + 0x8e);
                            
                            if (!((rax_25 != 2 ^ rax_25) & 1))
                            {
                                int32_t* rax_45;
                                int64_t rdx_47;
                                rax_45 = uucore::util_name::h074417a1e6395129();
                                var_398 = rax_45;
                                int64_t var_390_13 = rdx_47;
                                var_3a8 = &var_398;
                                int64_t (* var_3a0_14)(int64_t* arg1, int64_t arg2) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4163173f9b6529c1;
                                var_378 = &data_5734a0;
                                int64_t var_370_23 = 2;
                                int64_t var_358_22 = 0;
                                int32_t*** var_368_21 = &var_3a8;
                                int64_t var_360_22 = 1;
                                std::io::stdio::_eprint::h57899770eacec2ad(&var_378);
                                var_398 = nullptr;
                                var_390_13 = var_290;
                                char var_380_8 = 1;
                                var_3a8 = &var_398;
                                int64_t (* var_3a0_15)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                                var_378 = &data_573630;
                                int64_t var_370_24 = 2;
                                int64_t var_358_23 = 0;
                                int32_t*** var_368_22 = &var_3a8;
                                int64_t var_360_23 = 1;
                                std::io::stdio::_eprint::h57899770eacec2ad(&var_378);
                            }
                            else
                            {
                                int32_t* rax_26;
                                int64_t rdx_22;
                                rax_26 = uucore::util_name::h074417a1e6395129();
                                var_398 = rax_26;
                                int64_t var_390_6 = rdx_22;
                                var_3a8 = &var_398;
                                int64_t (* var_3a0_3)(int64_t* arg1, int64_t arg2) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4163173f9b6529c1;
                                var_378 = &data_5734a0;
                                int64_t var_370_11 = 2;
                                int64_t var_358_10 = 0;
                                int32_t*** var_368_12 = &var_3a8;
                                int64_t var_360_10 = 1;
                                std::io::stdio::_eprint::h57899770eacec2ad(&var_378);
                                var_398 = nullptr;
                                var_390_6 = var_290;
                                char var_380_3 = 1;
                                var_3a8 = &var_398;
                                int64_t (* var_3a0_4)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                                var_378 = &data_573650;
                                int64_t var_370_12 = 2;
                                int64_t var_358_11 = 0;
                                int32_t*** var_368_13 = &var_3a8;
                                int64_t var_360_11 = 1;
                                std::io::stdio::_eprint::h57899770eacec2ad(&var_378);
                                
                                if (*arg2 == 3)
                                {
                                    core::option::unwrap_failed::h893f57cb7db71cb7();
                                    /* no return */
                                }
                                
                                (*(*(arg2 + 0x18) + 0x20))(&var_378, *(arg2 + 0x10), *(r15 + 8), 
                                    *(r15 + 0x10));
                                core::ptr::drop_in_place$LT$core..result..Result$LT$bool$C$notify..error..Error$GT$$GT$::h00c92e5e8c601890(&var_378);
                                uu_tail::follow::files::FileHandling::remove::h45671f4f92c48796(
                                    &var_378, &arg2[0xe], *(r15 + 8), *(r15 + 0x10));
                                core::ptr::drop_in_place$LT$uu_tail..follow..files..PathData$GT$::heb873d53c1526937(&var_378);
                                
                                if (uu_tail::follow::files::FileHandling::no_files_remaining::hdacea64a27534677(&arg2[0xe], arg4))
                                {
                                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::ha6b2ce04d4e70875(&var_398, "no files remaining \ndirectory c…", 0x12);
                                    int64_t var_388;
                                    int64_t var_368_14 = var_388;
                                    var_378 = var_398;
                                    var_360_11 = 1;
                                    rax_19 = alloc::boxed::Box$LT$T$GT$::new::hb525c77ba03b79d9(
                                        &var_378);
                                    rdx_16 = &data_572f18;
                                    label_4a4cea:
                                    arg1[1] = rax_19;
                                    arg1[2] = rdx_16;
                                    *arg1 = -0x8000000000000000;
                                    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::ha4975ed621f4cd7c(&var_268);
                                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::ha5fed46387940267(&var_298);
                                    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::he0295db7e74c1801(&var_280);
                                }
                            }
                        }
                    }
                }
                char* rbx_4 = *(r15 + 8);
                uint64_t r14_3 = *(r15 + 0x10);
                memcpy(&var_378, &var_1b8, 0xb0);
                uu_tail::follow::files::FileHandling::update_metadata::h25061ac57dde0fed(
                    &arg2[0xe], rbx_4, r14_3, &var_378);
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::ha4975ed621f4cd7c(&var_268);
            }
            else
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::ha4975ed621f4cd7c(&var_268);
        }
    }
    else if (rax_2 == 3)
    {
        uint32_t rax_12 = *(arg3 + 0x21);
        
        if (rax_12 == 1)
        {
            if (!*(arg3 + 0x22))
                goto label_4a43af;
        }
        else if (rax_12 == 2)
        {
            if (!(*(arg3 + 0x22) & 5))
                goto label_4a43af;
        }
        else if (rax_12 == 3)
        {
            uint32_t rax_13 = *(arg3 + 0x22);
            
            if (rax_13 == 1)
                goto label_4a43af;
            
            if (rax_13 == 3)
            {
                char rax_32 = *(arg2 + 0x8e);
                
                if ((rax_32 != 2 ^ rax_32) & 1)
                {
                    void* r13_1 = r15 + rbx * 0x18;
                    
                    if (r13_1 == 0x18)
                    {
                        core::option::unwrap_failed::h893f57cb7db71cb7();
                        /* no return */
                    }
                    
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hf90a2ac3df31af12(&var_378, *(r13_1 - 0x10), *(r13_1 - 8));
                    int32_t*** var_258_4 = var_368;
                    var_268 = var_378;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hcd2b65ebabcd2f96(&var_280, &var_268);
                    uu_tail::follow::files::FileHandling::remove::h45671f4f92c48796(&var_378, 
                        &arg2[0xe], *(r15 + 8), *(r15 + 0x10));
                    *(r13_1 - 8);
                    void var_108;
                    uu_tail::follow::files::PathData::from_other_with_path::h24752379624f266e(
                        &var_108, &var_378, *(r13_1 - 0x10));
                    
                    if (0 + -(*(arg2 + 0x38)))
                    {
                        core::option::unwrap_failed::h893f57cb7db71cb7();
                        /* no return */
                    }
                    
                    uu_tail::follow::files::FileHandling::insert::h25f905215c20caac(&arg2[0xe], 
                        *(r13_1 - 0x10), *(r13_1 - 8), &var_108, 
                        _$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$GT$::eq::h35303d53f5dfabe5(*(arg2 + 0x40), *(arg2 + 0x48), *(r15 + 8), *(r15 + 0x10)));
                    
                    if (*arg2 == 3)
                    {
                        core::option::unwrap_failed::h893f57cb7db71cb7();
                        /* no return */
                    }
                    
                    *(r15 + 8);
                    *(r15 + 0x10);
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h1ddfbf499f92a46c(uu_tail::follow::watch::WatcherRx::unwatch::h840738548114636d(*(arg2 + 0x10), 
                        *(arg2 + 0x18)), &data_572f18);
                    
                    if (*arg2 == 3)
                    {
                        core::option::unwrap_failed::h893f57cb7db71cb7();
                        /* no return */
                    }
                    
                    uint64_t rax_37;
                    int64_t rdx_35;
                    rax_37 =
                        uu_tail::follow::watch::WatcherRx::watch_with_parent::ha42b5e61fec17468(
                        *(arg2 + 0x10), *(arg2 + 0x18), *(r13_1 - 0x10), *(r13_1 - 8));
                    
                    if (rax_37)
                    {
                        arg1[1] = rax_37;
                        arg1[2] = rdx_35;
                        *arg1 = -0x8000000000000000;
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::ha5fed46387940267(
                            &var_298);
                        return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::he0295db7e74c1801(&var_280);
                    }
                }
            }
            else if (rax_13 == 2)
                goto label_4a3f61;
        }
    }
    else if (rax_2 == 4 && *(arg3 + 0x21) < 2)
    {
        label_4a3f61:
        bool rax_14 = *(arg2 + 0x8e);
        
        if (!(rax_14 & 1))
        {
            if (rax_14 != 2 & !(rax_14 & 1) && arg2[0x23] == 1)
            {
                if (*arg2 == 3)
                {
                    core::option::unwrap_failed::h893f57cb7db71cb7();
                    /* no return */
                }
                
                *(r15 + 8);
                *(r15 + 0x10);
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h1ddfbf499f92a46c(uu_tail::follow::watch::WatcherRx::unwatch::h840738548114636d(*(arg2 + 0x10), 
                    *(arg2 + 0x18)), &data_572f18);
                uu_tail::follow::files::FileHandling::remove::h45671f4f92c48796(&var_378, 
                    &arg2[0xe], *(r15 + 8), *(r15 + 0x10));
                core::ptr::drop_in_place$LT$uu_tail..follow..files..PathData$GT$::heb873d53c1526937(
                    &var_378);
            }
        }
        else if (!(arg4 & 1))
        {
            int64_t rax_21;
            int64_t rdx_19;
            rax_21 = uucore::util_name::h074417a1e6395129();
            var_268 = rax_21;
            int64_t var_260_6 = rdx_19;
            var_398 = &var_268;
            int64_t (* var_390_5)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4163173f9b6529c1;
            var_378 = &data_5734a0;
            int64_t var_370_9 = 2;
            int64_t var_358_8 = 0;
            int32_t** var_368_9 = &var_398;
            int64_t var_360_8 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_378);
            var_268 = &var_298;
            int64_t (* var_260_7)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            char const (** const var_258_3)[0x98] = &data_573800;
            int64_t (* var_250_2)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4163173f9b6529c1;
            var_378 = &data_5736e0;
            int64_t var_370_10 = 3;
            int64_t var_358_9 = 0;
            int32_t* var_368_10 = &var_268;
            int64_t var_360_9 = 2;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_378);
            
            if (!
                uu_tail::follow::files::FileHandling::files_remaining::h4da9cfafa6cde0f6(&arg2[0xe])
                && *(arg2 + 0x8d) == 1)
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::ha6b2ce04d4e70875(&var_268, "no files remaining \ndirectory c…", 0x12);
                char const (** const var_368_11)[0x98] = var_258_3;
                var_378 = var_268;
                var_360_9 = 1;
                arg1[1] = alloc::boxed::Box$LT$T$GT$::new::hb525c77ba03b79d9(&var_378);
                arg1[2] = &data_572f18;
                *arg1 = -0x8000000000000000;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::ha5fed46387940267(&var_298);
                return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::he0295db7e74c1801(&var_280);
            }
            
            uu_tail::follow::files::FileHandling::reset_reader::hff52527130e84020(&arg2[0xe], 
                *(r15 + 8), *(r15 + 0x10));
        }
        else
        {
            int32_t* rax_3 =
                uu_tail::follow::files::FileHandling::get_mut_metadata::h3eb5234edd98ad23(
                &arg2[0xe], *(r15 + 8), *(r15 + 0x10));
            
            if (rax_3)
            {
                int32_t rcx_1 = 0xf000 & rax_3[0xe];
                
                if ((rcx_1 == 0x1000 || rcx_1 == 0x8000 || rcx_1 == 0x2000) && *(
                    uu_tail::follow::files::FileHandling::get::hc0a1561a42a9610a(arg2 + 0x38, 
                    *(r15 + 8), *(r15 + 0x10)) + 0xc8))
                {
                    int64_t rax_5;
                    int64_t rdx_3;
                    rax_5 = uucore::util_name::h074417a1e6395129();
                    var_268 = rax_5;
                    int64_t var_260_1 = rdx_3;
                    var_398 = &var_268;
                    int64_t (* var_390_1)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4163173f9b6529c1;
                    var_378 = &data_5734a0;
                    int64_t var_370_1 = 2;
                    int64_t var_358_1 = 0;
                    int32_t** var_368_1 = &var_398;
                    int64_t var_360_1 = 1;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_378);
                    var_398 = nullptr;
                    var_390_1 = var_290;
                    char var_380_1 = 1;
                    var_378 = &var_398;
                    int64_t (* var_370_2)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    char const (** const var_368_2)[0x7f] = &data_573810;
                    int64_t (* var_360_2)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4163173f9b6529c1;
                    char const (** const var_358_2)[0x98] = &data_573800;
                    int64_t (* var_350_1)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4163173f9b6529c1;
                    var_268 = &data_573670;
                    int64_t var_260_2 = 4;
                    int64_t var_248_1 = 0;
                    void* const* var_258_1 = &var_378;
                    int64_t var_250_1 = 3;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_268);
                }
            }
            
            if (!_$LT$std..path..Path$u20$as$u20$uu_tail..paths..PathExtTail$GT$::is_orphan::h6fd6d482b353a62d(*(r15 + 8), *(r15 + 0x10)))
                uu_tail::follow::files::FileHandling::reset_reader::hff52527130e84020(&arg2[0xe], 
                    *(r15 + 8), *(r15 + 0x10));
            else if (_$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h7089f22eaab784f8(r15, *(arg2 + 0x28), *(arg2 + 0x30)))
                uu_tail::follow::files::FileHandling::reset_reader::hff52527130e84020(&arg2[0xe], 
                    *(r15 + 8), *(r15 + 0x10));
            else
            {
                int64_t rax_8;
                int64_t rdx_5;
                rax_8 = uucore::util_name::h074417a1e6395129();
                var_268 = rax_8;
                int64_t var_260_3 = rdx_5;
                var_398 = &var_268;
                int64_t (* var_390_2)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4163173f9b6529c1;
                var_378 = &data_5734a0;
                int64_t var_370_3 = 2;
                int64_t var_358_3 = 0;
                int32_t** var_368_3 = &var_398;
                int64_t var_360_3 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_378);
                var_378 = &data_5736b0;
                int64_t var_370_4 = 1;
                int64_t var_368_4 = 8;
                var_360_3 = {0};
                std::io::stdio::_eprint::h57899770eacec2ad(&var_378);
                int64_t rax_9;
                int64_t rdx_6;
                rax_9 = uucore::util_name::h074417a1e6395129();
                var_268 = rax_9;
                int64_t var_260_4 = rdx_6;
                var_398 = &var_268;
                int64_t (* var_390_3)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4163173f9b6529c1;
                var_378 = &data_5734a0;
                int64_t var_370_5 = 2;
                int64_t var_358_4 = 0;
                int32_t** var_368_5 = &var_398;
                int64_t var_360_4 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_378);
                var_268 = &data_573510;
                int64_t (* var_260_5)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4163173f9b6529c1;
                var_378 = &data_5736c0;
                int64_t var_370_6 = 2;
                int64_t var_358_5 = 0;
                int32_t* var_368_6 = &var_268;
                int64_t var_360_5 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_378);
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hf90a2ac3df31af12(&var_378, *(r15 + 8), *(r15 + 0x10));
                int32_t* var_258_2 = var_368_6;
                var_268 = var_378;
                alloc::vec::Vec$LT$T$C$A$GT$::push::hcd2b65ebabcd2f96(&arg2[8], &var_268);
                
                if (*arg2 == 3)
                {
                    core::option::unwrap_failed::h893f57cb7db71cb7();
                    /* no return */
                }
                
                *(r15 + 8);
                *(r15 + 0x10);
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h1ddfbf499f92a46c(uu_tail::follow::watch::WatcherRx::unwatch::h840738548114636d(*(arg2 + 0x10), 
                    *(arg2 + 0x18)), &data_572f18);
                uu_tail::follow::files::FileHandling::reset_reader::hff52527130e84020(&arg2[0xe], 
                    *(r15 + 8), *(r15 + 0x10));
            }
        }
    }
    arg1[2] = var_270;
    *arg1 = var_280;
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::ha5fed46387940267(&var_298);
}
