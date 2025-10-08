
  fn uu_tail::follow::watch::Observer::handle_event::hd08bd6b67fb66ec6(arg1: *mut i64, arg2: *mut i32, arg3: *mut c_void, arg4: i8) -> i64

{
    let rbx: i64 = *arg3.byte_offset(0x10);
    
    if rbx == 0
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    let r15: *mut c_void = *arg3.byte_offset(8);
    let mut var_280: i64 = 0;
    let var_278: i64 = 8;
    let var_270: i64 = 0;
    let mut var_298: ();
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
        &var_298, 
        uu_tail::follow::files::FileHandling::get::hc0a1561a42a9610a(&arg2[0xe], 
            *r15.byte_offset(8), *r15.byte_offset(0x10)).byte_offset(0xb0));
    let rax_2: u32 = *arg3.byte_offset(0x20);
    let mut var_398: *mut i32;
    let mut var_378: *mut c_void;
    let mut var_368: *mut *mut *mut i32;
    let var_290: i128;
    let mut var_268: i32;
    
    if rax_2 == 2
    {
        if *arg3.byte_offset(0x21) != 3
        {
            'label_4a43af:
            *r15.byte_offset(0x10);
            std::fs::metadata::h5c248dd9820946eb(&var_268, *r15.byte_offset(8));
            
            if var_268 != 2
            {
                let mut var_1b8: ();
                memcpy(&var_1b8, &var_268, 0xb0);
                let var_180: i32;
                let rbx_1: i32 = 0xf000 & var_180;
                let mut var_3a8: *mut *mut i32;
                let mut rax_17: *mut i32;
                let mut rax_19: u64;
                let mut rdx_16: *mut *mut c_void;
                
                if rbx_1 == 0x8000 || rbx_1 == 0x2000
                {
                    rax_17 = uu_tail::follow::files::FileHandling::get::hc0a1561a42a9610a(
                        &arg2[0xe], *r15.byte_offset(8), *r15.byte_offset(0x10));
                    
                    if *rax_17 != 2
                    {
                        'label_4a4892:
                        let rcx_9: i32 = 0xf000 & rax_17[0xe];
                        
                        if rcx_9 != 0x1000 && rcx_9 != 0x2000 && rcx_9 != 0x8000
                        {
                            let mut rax_39: *mut i32;
                            let mut rdx_38: i64;
                            rax_39 = uucore::util_name::h074417a1e6395129();
                            var_398 = rax_39;
                            let mut var_390_9: i64 = rdx_38;
                            var_3a8 = &var_398;
                            let var_3a0_9: fn(arg1: *mut i64, arg2: i64) -> i64 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4163173f9b6529c1;
                            var_378 = &data_5734a0;
                            let var_370_17: i64 = 2;
                            let var_358_16: i64 = 0;
                            let var_368_17: *mut *mut *mut i32 = &var_3a8;
                            let var_360_16: i64 = 1;
                            std::io::stdio::_eprint::h57899770eacec2ad(&var_378);
                            var_398 = nullptr;
                            var_390_9 = var_290;
                            let var_380_6: i8 = 1;
                            var_3a8 = &var_398;
                            let var_3a0_10: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                            var_378 = &data_5735b0;
                            let var_370_18: i64 = 2;
                            let var_358_17: i64 = 0;
                            var_368 = &var_3a8;
                            let var_360_17: i64 = 1;
                            std::io::stdio::_eprint::h57899770eacec2ad(&var_378);
                            rax_19 = uu_tail::follow::files::FileHandling::update_reader::hba2c0912cd1385d3(&arg2[0xe], *r15.byte_offset(8), *r15.byte_offset(0x10));
                            goto 'label_4a4cd9;
                        }
                        
                        let var_190: i64;
                        
                        if *rax_17.byte_offset(0xc8) == 0
                        {
                            let mut rax_38: *mut i32;
                            let mut rdx_36: i64;
                            rax_38 = uucore::util_name::h074417a1e6395129();
                            var_398 = rax_38;
                            let mut var_390_8: i64 = rdx_36;
                            var_3a8 = &var_398;
                            let var_3a0_7: fn(arg1: *mut i64, arg2: i64) -> i64 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4163173f9b6529c1;
                            var_378 = &data_5734a0;
                            let var_370_15: i64 = 2;
                            let var_358_14: i64 = 0;
                            let var_368_16: *mut *mut *mut i32 = &var_3a8;
                            let var_360_14: i64 = 1;
                            std::io::stdio::_eprint::h57899770eacec2ad(&var_378);
                            var_398 = nullptr;
                            var_390_8 = var_290;
                            let var_380_5: i8 = 1;
                            var_3a8 = &var_398;
                            let var_3a0_8: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                            var_378 = &data_5735d0;
                            let var_370_16: i64 = 2;
                            let var_358_15: i64 = 0;
                            var_368 = &var_3a8;
                            let var_360_15: i64 = 1;
                            std::io::stdio::_eprint::h57899770eacec2ad(&var_378);
                            rax_19 = uu_tail::follow::files::FileHandling::update_reader::hba2c0912cd1385d3(&arg2[0xe], *r15.byte_offset(8), *r15.byte_offset(0x10));
                        }
                        else if _$LT$notify_types..event..EventKind$u20$as$u20$core..cmp..PartialEq$GT$::eq::ha41d237c36887005(arg3.byte_offset(0x20), &data_424e4b) == 0 && (
                            *arg2.byte_offset(0x8d) == 0 || *rax_17.byte_offset(0x28) == var_190)
                        {
                            _$LT$std..fs..Metadata$u20$as$u20$uu_tail..paths..MetadataExtTail$GT$::got_truncated::hb79a91cf73219042(&var_378, rax_17, &var_1b8);
                            rax_19 = var_378;
                            let var_370: *mut *mut c_void;
                            rdx_16 = var_370;
                            
                            if rax_19 != 0
                            {
                                goto 'label_4a4cea;
                            }
                            
                            if (rdx_16 & 1) == 0
                            {
                                goto 'label_4a4e48;
                            }
                            
                            let mut rax_42: *mut i32;
                            let mut rdx_41: i64;
                            rax_42 = uucore::util_name::h074417a1e6395129();
                            var_398 = rax_42;
                            let var_390_10: i64 = rdx_41;
                            var_3a8 = &var_398;
                            let var_3a0_11: fn(arg1: *mut i64, arg2: i64) -> i64 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4163173f9b6529c1;
                            var_378 = &data_5734a0;
                            let var_370_19: i64 = 2;
                            let var_358_18: i64 = 0;
                            let var_368_18: *mut *mut *mut i32 = &var_3a8;
                            let var_360_18: i64 = 1;
                            std::io::stdio::_eprint::h57899770eacec2ad(&var_378);
                            var_398 = &var_298;
                            let var_390_11: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                            var_378 = &data_573610;
                            let var_370_20: i64 = 2;
                            let var_358_19: i64 = 0;
                            var_368 = &var_398;
                            let var_360_19: i64 = 1;
                            std::io::stdio::_eprint::h57899770eacec2ad(&var_378);
                            rax_19 = uu_tail::follow::files::FileHandling::update_reader::hba2c0912cd1385d3(&arg2[0xe], *r15.byte_offset(8), *r15.byte_offset(0x10));
                        }
                        else
                        {
                            let mut rax_31: *mut i32;
                            let mut rdx_25: i64;
                            rax_31 = uucore::util_name::h074417a1e6395129();
                            var_398 = rax_31;
                            let mut var_390_7: i64 = rdx_25;
                            var_3a8 = &var_398;
                            let var_3a0_5: fn(arg1: *mut i64, arg2: i64) -> i64 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4163173f9b6529c1;
                            var_378 = &data_5734a0;
                            let var_370_13: i64 = 2;
                            let var_358_12: i64 = 0;
                            let var_368_15: *mut *mut *mut i32 = &var_3a8;
                            let var_360_12: i64 = 1;
                            std::io::stdio::_eprint::h57899770eacec2ad(&var_378);
                            var_398 = nullptr;
                            var_390_7 = var_290;
                            let var_380_4: i8 = 1;
                            var_3a8 = &var_398;
                            let var_3a0_6: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                            var_378 = &data_5735f0;
                            let var_370_14: i64 = 2;
                            let var_358_13: i64 = 0;
                            var_368 = &var_3a8;
                            let var_360_13: i64 = 1;
                            std::io::stdio::_eprint::h57899770eacec2ad(&var_378);
                            rax_19 = uu_tail::follow::files::FileHandling::update_reader::hba2c0912cd1385d3(&arg2[0xe], *r15.byte_offset(8), *r15.byte_offset(0x10));
                        }
                        'label_4a4cd9:
                        
                        if rax_19 != 0
                        {
                            goto 'label_4a4cea;
                        }
                        
                        'label_4a4e48:
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hf90a2ac3df31af12(&var_378, *r15.byte_offset(8), *r15.byte_offset(0x10));
                        let var_388_2: *mut *mut *mut i32 = var_368;
                        var_398 = var_378;
                        alloc::vec::Vec$LT$T$C$A$GT$::push::hcd2b65ebabcd2f96(&var_280, &var_398);
                    }
                    else
                    {
                        'label_4a4432:
                        let mut rax_18: *mut i32;
                        let mut rdx_14: i64;
                        rax_18 = uucore::util_name::h074417a1e6395129();
                        var_398 = rax_18;
                        let mut var_390_4: i64 = rdx_14;
                        var_3a8 = &var_398;
                        let var_3a0_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4163173f9b6529c1;
                        var_378 = &data_5734a0;
                        let var_370_7: i64 = 2;
                        let var_358_6: i64 = 0;
                        let var_368_7: *mut *mut *mut i32 = &var_3a8;
                        let var_360_6: i64 = 1;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_378);
                        var_398 = nullptr;
                        var_390_4 = var_290;
                        let var_380_2: i8 = 1;
                        var_3a8 = &var_398;
                        let var_3a0_2: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                        var_378 = &data_5735d0;
                        let var_370_8: i64 = 2;
                        let var_358_7: i64 = 0;
                        let var_368_8: *mut *mut *mut i32 = &var_3a8;
                        let var_360_7: i64 = 1;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_378);
                        rax_19 =
                            uu_tail::follow::files::FileHandling::update_reader::hba2c0912cd1385d3(
                            &arg2[0xe], *r15.byte_offset(8), *r15.byte_offset(0x10));
                        
                        if rax_19 != 0
                        {
                            goto 'label_4a4cea;
                        }
                        
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hf90a2ac3df31af12(&var_378, *r15.byte_offset(8), *r15.byte_offset(0x10));
                        let var_388_1: *mut *mut *mut i32 = var_368_8;
                        var_398 = var_378;
                        alloc::vec::Vec$LT$T$C$A$GT$::push::hcd2b65ebabcd2f96(&var_280, &var_398);
                    }
                }
                else
                {
                    rax_17 = uu_tail::follow::files::FileHandling::get::hc0a1561a42a9610a(
                        &arg2[0xe], *r15.byte_offset(8), *r15.byte_offset(0x10));
                    
                    if *rax_17 != 2
                    {
                        if rbx_1 == 0x1000
                        {
                            goto 'label_4a4892;
                        }
                        
                        let rcx_18: i32 = 0xf000 & rax_17[0xe];
                        
                        if rcx_18 == 0x1000 || rcx_18 == 0x8000 || rcx_18 == 0x2000
                        {
                            if *rax_17.byte_offset(0xc8) == 0
                            {
                                let mut rax_44: *mut i32;
                                let mut rdx_46: i64;
                                rax_44 = uucore::util_name::h074417a1e6395129();
                                var_398 = rax_44;
                                let mut var_390_12: i64 = rdx_46;
                                var_3a8 = &var_398;
                                let var_3a0_12: fn(arg1: *mut i64, arg2: i64) -> i64 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4163173f9b6529c1;
                                var_378 = &data_5734a0;
                                let var_370_21: i64 = 2;
                                let var_358_20: i64 = 0;
                                let var_368_19: *mut *mut *mut i32 = &var_3a8;
                                let var_360_20: i64 = 1;
                                std::io::stdio::_eprint::h57899770eacec2ad(&var_378);
                                var_398 = nullptr;
                                var_390_12 = var_290;
                                let var_380_7: i8 = 1;
                                var_3a8 = &var_398;
                                let var_3a0_13: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                                var_378 = &data_573630;
                                let var_370_22: i64 = 2;
                                let var_358_21: i64 = 0;
                                let var_368_20: *mut *mut *mut i32 = &var_3a8;
                                let var_360_21: i64 = 1;
                                std::io::stdio::_eprint::h57899770eacec2ad(&var_378);
                            }
                            else
                            {
                                uu_tail::follow::files::FileHandling::reset_reader::hff52527130e84020(&arg2[0xe], *r15.byte_offset(8), *r15.byte_offset(0x10));
                            }
                        }
                    }
                    else
                    {
                        if rbx_1 == 0x1000
                        {
                            goto 'label_4a4432;
                        }
                        
                        if (arg4 & 1) != 0
                        {
                            let rax_25: i8 = *arg2.byte_offset(0x8e);
                            
                            if ((rax_25 != 2 ^ rax_25) & 1) == 0
                            {
                                let mut rax_45: *mut i32;
                                let mut rdx_47: i64;
                                rax_45 = uucore::util_name::h074417a1e6395129();
                                var_398 = rax_45;
                                let mut var_390_13: i64 = rdx_47;
                                var_3a8 = &var_398;
                                let var_3a0_14: fn(arg1: *mut i64, arg2: i64) -> i64 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4163173f9b6529c1;
                                var_378 = &data_5734a0;
                                let var_370_23: i64 = 2;
                                let var_358_22: i64 = 0;
                                let var_368_21: *mut *mut *mut i32 = &var_3a8;
                                let var_360_22: i64 = 1;
                                std::io::stdio::_eprint::h57899770eacec2ad(&var_378);
                                var_398 = nullptr;
                                var_390_13 = var_290;
                                let var_380_8: i8 = 1;
                                var_3a8 = &var_398;
                                let var_3a0_15: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                                var_378 = &data_573630;
                                let var_370_24: i64 = 2;
                                let var_358_23: i64 = 0;
                                let var_368_22: *mut *mut *mut i32 = &var_3a8;
                                let var_360_23: i64 = 1;
                                std::io::stdio::_eprint::h57899770eacec2ad(&var_378);
                            }
                            else
                            {
                                let mut rax_26: *mut i32;
                                let mut rdx_22: i64;
                                rax_26 = uucore::util_name::h074417a1e6395129();
                                var_398 = rax_26;
                                let mut var_390_6: i64 = rdx_22;
                                var_3a8 = &var_398;
                                let var_3a0_3: fn(arg1: *mut i64, arg2: i64) -> i64 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4163173f9b6529c1;
                                var_378 = &data_5734a0;
                                let var_370_11: i64 = 2;
                                let var_358_10: i64 = 0;
                                let var_368_12: *mut *mut *mut i32 = &var_3a8;
                                let var_360_10: i64 = 1;
                                std::io::stdio::_eprint::h57899770eacec2ad(&var_378);
                                var_398 = nullptr;
                                var_390_6 = var_290;
                                let var_380_3: i8 = 1;
                                var_3a8 = &var_398;
                                let var_3a0_4: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                                var_378 = &data_573650;
                                let var_370_12: i64 = 2;
                                let var_358_11: i64 = 0;
                                let var_368_13: *mut *mut *mut i32 = &var_3a8;
                                let mut var_360_11: i64 = 1;
                                std::io::stdio::_eprint::h57899770eacec2ad(&var_378);
                                
                                if *arg2 == 3
                                {
                                    core::option::unwrap_failed::h893f57cb7db71cb7();
                                    /* no return */
                                }
                                
                                (*(*arg2.byte_offset(0x18) + 0x20))(&var_378, 
                                    *arg2.byte_offset(0x10), *r15.byte_offset(8), 
                                    *r15.byte_offset(0x10));
                                core::ptr::drop_in_place$LT$core..result..Result$LT$bool$C$notify..error..Error$GT$$GT$::h00c92e5e8c601890(&var_378);
                                uu_tail::follow::files::FileHandling::remove::h45671f4f92c48796(
                                    &var_378, &arg2[0xe], *r15.byte_offset(8), 
                                    *r15.byte_offset(0x10));
                                core::ptr::drop_in_place$LT$uu_tail..follow..files..PathData$GT$::heb873d53c1526937(&var_378);
                                
                                if uu_tail::follow::files::FileHandling::no_files_remaining::hdacea64a27534677(&arg2[0xe], arg4) != 0
                                {
                                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::ha6b2ce04d4e70875(&var_398, "no files remaining \ndirectory c…", 0x12);
                                    let var_388: i64;
                                    let var_368_14: i64 = var_388;
                                    var_378 = var_398;
                                    var_360_11 = 1;
                                    rax_19 = alloc::boxed::Box$LT$T$GT$::new::hb525c77ba03b79d9(
                                        &var_378);
                                    rdx_16 = &data_572f18;
                                    'label_4a4cea:
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
                let rbx_4: *mut i8 = *r15.byte_offset(8);
                let r14_3: u64 = *r15.byte_offset(0x10);
                memcpy(&var_378, &var_1b8, 0xb0);
                uu_tail::follow::files::FileHandling::update_metadata::h25061ac57dde0fed(
                    &arg2[0xe], rbx_4, r14_3, &var_378);
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::ha4975ed621f4cd7c(&var_268);
            }
            else
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::ha4975ed621f4cd7c(&var_268);
            }
        }
    }
    else if rax_2 == 3
    {
        let rax_12: u32 = *arg3.byte_offset(0x21);
        
        if rax_12 == 1
        {
            if *arg3.byte_offset(0x22) == 0
            {
                goto 'label_4a43af;
            }
        }
        else if rax_12 == 2
        {
            if (*arg3.byte_offset(0x22) & 5) == 0
            {
                goto 'label_4a43af;
            }
        }
        else if rax_12 == 3
        {
            let rax_13: u32 = *arg3.byte_offset(0x22);
            
            if rax_13 == 1
            {
                goto 'label_4a43af;
            }
            
            if rax_13 == 3
            {
                let rax_32: i8 = *arg2.byte_offset(0x8e);
                
                if ((rax_32 != 2 ^ rax_32) & 1) != 0
                {
                    let r13_1: *mut c_void = r15.byte_offset(rbx * 0x18);
                    
                    if r13_1 == 0x18
                    {
                        core::option::unwrap_failed::h893f57cb7db71cb7();
                        /* no return */
                    }
                    
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hf90a2ac3df31af12(&var_378, *r13_1.byte_offset(-0x10), *r13_1.byte_offset(-8));
                    let var_258_4: *mut *mut *mut i32 = var_368;
                    var_268 = var_378;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hcd2b65ebabcd2f96(&var_280, &var_268);
                    uu_tail::follow::files::FileHandling::remove::h45671f4f92c48796(&var_378, 
                        &arg2[0xe], *r15.byte_offset(8), *r15.byte_offset(0x10));
                    *r13_1.byte_offset(-8);
                    let mut var_108: ();
                    uu_tail::follow::files::PathData::from_other_with_path::h24752379624f266e(
                        &var_108, &var_378, *r13_1.byte_offset(-0x10));
                    
                    if 0 + -(*arg2.byte_offset(0x38))
                    {
                        core::option::unwrap_failed::h893f57cb7db71cb7();
                        /* no return */
                    }
                    
                    uu_tail::follow::files::FileHandling::insert::h25f905215c20caac(&arg2[0xe], 
                        *r13_1.byte_offset(-0x10), *r13_1.byte_offset(-8), &var_108, 
                        _$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$GT$::eq::h35303d53f5dfabe5(*arg2.byte_offset(0x40), *arg2.byte_offset(0x48), *r15.byte_offset(8), 
                            *r15.byte_offset(0x10)));
                    
                    if *arg2 == 3
                    {
                        core::option::unwrap_failed::h893f57cb7db71cb7();
                        /* no return */
                    }
                    
                    *r15.byte_offset(8);
                    *r15.byte_offset(0x10);
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h1ddfbf499f92a46c(uu_tail::follow::watch::WatcherRx::unwatch::h840738548114636d(
                        *arg2.byte_offset(0x10), *arg2.byte_offset(0x18)), &data_572f18);
                    
                    if *arg2 == 3
                    {
                        core::option::unwrap_failed::h893f57cb7db71cb7();
                        /* no return */
                    }
                    
                    let mut rax_37: u64;
                    let mut rdx_35: i64;
                    rax_37 =
                        uu_tail::follow::watch::WatcherRx::watch_with_parent::ha42b5e61fec17468(
                        *arg2.byte_offset(0x10), *arg2.byte_offset(0x18), 
                        *r13_1.byte_offset(-0x10), *r13_1.byte_offset(-8));
                    
                    if rax_37 != 0
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
            else if rax_13 == 2
            {
                goto 'label_4a3f61;
            }
        }
    }
    else if rax_2 == 4 && *arg3.byte_offset(0x21) < 2
    {
        'label_4a3f61:
        let rax_14: bool = *arg2.byte_offset(0x8e);
        
        if (rax_14 & 1) == 0
        {
            if (rax_14 != 2 & (rax_14 & 1) == 0) != 0 && arg2[0x23] == 1
            {
                if *arg2 == 3
                {
                    core::option::unwrap_failed::h893f57cb7db71cb7();
                    /* no return */
                }
                
                *r15.byte_offset(8);
                *r15.byte_offset(0x10);
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h1ddfbf499f92a46c(uu_tail::follow::watch::WatcherRx::unwatch::h840738548114636d(
                    *arg2.byte_offset(0x10), *arg2.byte_offset(0x18)), &data_572f18);
                uu_tail::follow::files::FileHandling::remove::h45671f4f92c48796(&var_378, 
                    &arg2[0xe], *r15.byte_offset(8), *r15.byte_offset(0x10));
                core::ptr::drop_in_place$LT$uu_tail..follow..files..PathData$GT$::heb873d53c1526937(
                    &var_378);
            }
        }
        else if (arg4 & 1) == 0
        {
            let mut rax_21: i64;
            let mut rdx_19: i64;
            rax_21 = uucore::util_name::h074417a1e6395129();
            var_268 = rax_21;
            let var_260_6: i64 = rdx_19;
            var_398 = &var_268;
            let var_390_5: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4163173f9b6529c1;
            var_378 = &data_5734a0;
            let var_370_9: i64 = 2;
            let var_358_8: i64 = 0;
            let var_368_9: *mut *mut i32 = &var_398;
            let var_360_8: i64 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_378);
            var_268 = &var_298;
            let var_260_7: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            let var_258_3: *mut *mut [i8; 0x98] = &data_573800;
            let var_250_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4163173f9b6529c1;
            var_378 = &data_5736e0;
            let var_370_10: i64 = 3;
            let var_358_9: i64 = 0;
            let var_368_10: *mut i32 = &var_268;
            let mut var_360_9: i64 = 2;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_378);
            
            if uu_tail::follow::files::FileHandling::files_remaining::h4da9cfafa6cde0f6(&arg2[0xe])
                == 0 && *arg2.byte_offset(0x8d) == 1
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::ha6b2ce04d4e70875(&var_268, "no files remaining \ndirectory c…", 0x12);
                let var_368_11: *mut *mut [i8; 0x98] = var_258_3;
                var_378 = var_268;
                var_360_9 = 1;
                arg1[1] = alloc::boxed::Box$LT$T$GT$::new::hb525c77ba03b79d9(&var_378);
                arg1[2] = &data_572f18;
                *arg1 = -0x8000000000000000;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::ha5fed46387940267(&var_298);
                return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::he0295db7e74c1801(&var_280);
            }
            
            uu_tail::follow::files::FileHandling::reset_reader::hff52527130e84020(&arg2[0xe], 
                *r15.byte_offset(8), *r15.byte_offset(0x10));
        }
        else
        {
            let rax_3: *mut i32 =
                uu_tail::follow::files::FileHandling::get_mut_metadata::h3eb5234edd98ad23(
                &arg2[0xe], *r15.byte_offset(8), *r15.byte_offset(0x10));
            
            if rax_3 != 0
            {
                let rcx_1: i32 = 0xf000 & rax_3[0xe];
                
                if (rcx_1 == 0x1000 || rcx_1 == 0x8000 || rcx_1 == 0x2000) && *
                    uu_tail::follow::files::FileHandling::get::hc0a1561a42a9610a(
                    arg2.byte_offset(0x38), *r15.byte_offset(8), *r15.byte_offset(0x10)).
                    byte_offset(0xc8) != 0
                {
                    let mut rax_5: i64;
                    let mut rdx_3: i64;
                    rax_5 = uucore::util_name::h074417a1e6395129();
                    var_268 = rax_5;
                    let var_260_1: i64 = rdx_3;
                    var_398 = &var_268;
                    let mut var_390_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4163173f9b6529c1;
                    var_378 = &data_5734a0;
                    let var_370_1: i64 = 2;
                    let var_358_1: i64 = 0;
                    let var_368_1: *mut *mut i32 = &var_398;
                    let var_360_1: i64 = 1;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_378);
                    var_398 = nullptr;
                    var_390_1 = var_290;
                    let var_380_1: i8 = 1;
                    var_378 = &var_398;
                    let var_370_2: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    let var_368_2: *mut *mut [i8; 0x7f] = &data_573810;
                    let var_360_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4163173f9b6529c1;
                    let var_358_2: *mut *mut [i8; 0x98] = &data_573800;
                    let var_350_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4163173f9b6529c1;
                    var_268 = &data_573670;
                    let var_260_2: i64 = 4;
                    let var_248_1: i64 = 0;
                    let var_258_1: *const *mut c_void = &var_378;
                    let var_250_1: i64 = 3;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_268);
                }
            }
            
            if _$LT$std..path..Path$u20$as$u20$uu_tail..paths..PathExtTail$GT$::is_orphan::h6fd6d482b353a62d(*r15.byte_offset(8), *r15.byte_offset(0x10)) == 0
            {
                uu_tail::follow::files::FileHandling::reset_reader::hff52527130e84020(&arg2[0xe], 
                    *r15.byte_offset(8), *r15.byte_offset(0x10));
            }
            else if _$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h7089f22eaab784f8(r15, *arg2.byte_offset(0x28), *arg2.byte_offset(0x30)) != 0
            {
                uu_tail::follow::files::FileHandling::reset_reader::hff52527130e84020(&arg2[0xe], 
                    *r15.byte_offset(8), *r15.byte_offset(0x10));
            }
            else
            {
                let mut rax_8: i64;
                let mut rdx_5: i64;
                rax_8 = uucore::util_name::h074417a1e6395129();
                var_268 = rax_8;
                let var_260_3: i64 = rdx_5;
                var_398 = &var_268;
                let var_390_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4163173f9b6529c1;
                var_378 = &data_5734a0;
                let var_370_3: i64 = 2;
                let var_358_3: i64 = 0;
                let var_368_3: *mut *mut i32 = &var_398;
                let mut var_360_3: i64 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_378);
                var_378 = &data_5736b0;
                let var_370_4: i64 = 1;
                let var_368_4: i64 = 8;
                var_360_3 = {0};
                std::io::stdio::_eprint::h57899770eacec2ad(&var_378);
                let mut rax_9: i64;
                let mut rdx_6: i64;
                rax_9 = uucore::util_name::h074417a1e6395129();
                var_268 = rax_9;
                let var_260_4: i64 = rdx_6;
                var_398 = &var_268;
                let var_390_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4163173f9b6529c1;
                var_378 = &data_5734a0;
                let var_370_5: i64 = 2;
                let var_358_4: i64 = 0;
                let var_368_5: *mut *mut i32 = &var_398;
                let var_360_4: i64 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_378);
                var_268 = &data_573510;
                let var_260_5: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4163173f9b6529c1;
                var_378 = &data_5736c0;
                let var_370_6: i64 = 2;
                let var_358_5: i64 = 0;
                let var_368_6: *mut i32 = &var_268;
                let var_360_5: i64 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_378);
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hf90a2ac3df31af12(&var_378, *r15.byte_offset(8), *r15.byte_offset(0x10));
                let var_258_2: *mut i32 = var_368_6;
                var_268 = var_378;
                alloc::vec::Vec$LT$T$C$A$GT$::push::hcd2b65ebabcd2f96(&arg2[8], &var_268);
                
                if *arg2 == 3
                {
                    core::option::unwrap_failed::h893f57cb7db71cb7();
                    /* no return */
                }
                
                *r15.byte_offset(8);
                *r15.byte_offset(0x10);
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h1ddfbf499f92a46c(uu_tail::follow::watch::WatcherRx::unwatch::h840738548114636d(
                    *arg2.byte_offset(0x10), *arg2.byte_offset(0x18)), &data_572f18);
                uu_tail::follow::files::FileHandling::reset_reader::hff52527130e84020(&arg2[0xe], 
                    *r15.byte_offset(8), *r15.byte_offset(0x10));
            }
        }
    }
    arg1[2] = var_270;
    *arg1 = var_280;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::ha5fed46387940267(&var_298)
}
