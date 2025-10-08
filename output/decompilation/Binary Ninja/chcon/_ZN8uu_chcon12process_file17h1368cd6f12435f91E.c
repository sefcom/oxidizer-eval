
  int64_t uu_chcon::process_file::h1368cd6f12435f91(int32_t* arg1, void* arg2, int32_t* arg3, int64_t* arg4, int32_t* arg5)

{
    FTSENT* r15 = arg4[1];
    
    if (!r15)
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    int64_t result;
    uint64_t rdx;
    result = uu_chcon::fts::EntryRef::path::h98d370586f8004df(r15);
    
    if (result)
    {
        void* const var_168;
        result = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h87c7e3fd647b3672(&var_168, result, rdx);
        
        if (!(0 + -(var_168)))
        {
            int128_t var_118 = var_168;
            char* rax_1;
            uint64_t rdx_1;
            rax_1 = uu_chcon::fts::EntryRef::access_path::h84f48584df271673(r15);
            uint128_t var_1b8;
            uint64_t var_158;
            uint128_t var_150;
            uint128_t var_140;
            uint128_t var_130;
            uint128_t zmm0_2;
            uint128_t zmm1_1;
            
            if (rax_1)
            {
                label_4645b8:
                struct stat* fts_statp = r15->fts_statp;
                uint128_t zmm2_1;
                uint128_t zmm3_1;
                
                if (!fts_statp)
                {
                    uu_chcon::errors::Error::from_io1::hfc25099ea69addfb(&var_168, 
                        "Getting meta dataGetting securit…", 0x11, &var_118, 0x1400000003);
                    *(arg1 + 0x40) = *var_130[8];
                    zmm0_2 = var_168;
                    zmm1_1 = var_158;
                    zmm2_1 = var_150;
                    zmm3_1 = var_140;
                    label_464c95:
                    *(arg1 + 0x30) = zmm3_1;
                    *(arg1 + 0x20) = zmm2_1;
                    *(arg1 + 0x10) = zmm1_1;
                    *arg1 = zmm0_2;
                }
                else
                {
                    uint64_t st_dev = fts_statp->st_dev;
                    uint64_t st_ino = fts_statp->st_ino;
                    int32_t var_f8 = 0x12;
                    uint64_t rdx_3 = r15->fts_info - 1;
                    
                    if (rdx_3 > 9)
                        goto label_464a0e;
                    
                    uint128_t var_1a8;
                    uint128_t var_198_2;
                    uint128_t var_188_1;
                    int64_t var_178_1;
                    uint64_t st_dev_1;
                    uint64_t st_ino_1;
                    char* var_98_1;
                    int64_t* var_78;
                    
                    switch (rdx_3)
                    {
                        case 0:
                        {
                            if (!*(arg2 + 0x7b))
                                goto label_464a0e;
                            
                            if (*arg5 != 1 || *(arg5 + 8) != st_dev || *(arg5 + 0x10) != st_ino)
                            {
                                *arg1 = 0x12;
                                core::ptr::drop_in_place$LT$core..result..Result$LT$bool$C$uu_chcon..errors..Error$GT$$GT$::h4eb00232c8be16dd(&var_f8);
                            }
                            else
                            {
                                uu_chcon::root_dev_ino_warn::heb2bdc38e2851f11(*var_118[8], 
                                    var_158);
                                uu_chcon::fts::FTS::set::h57c16749566a888b(&var_78, *arg4, r15, 4);
                                uu_chcon::fts::FTS::read_next_entry::h61830a73507cb09a(&var_1b8, 
                                    arg4);
                                uu_chcon::errors::Error::from_io1::hfc25099ea69addfb(&var_168, 
                                    "Modifying root pathAccessingRead…", 0x13, &var_118, 
                                    0x100000003);
                                *(arg1 + 0x40) = *var_130[8];
                                int128_t zmm0_3 = var_168;
                                *(arg1 + 0x30) = var_140;
                                *(arg1 + 0x20) = var_150;
                                *(arg1 + 0x10) = var_158;
                                *arg1 = zmm0_3;
                                core::ptr::drop_in_place$LT$core..result..Result$LT$bool$C$uu_chcon..errors..Error$GT$$GT$::h4eb00232c8be16dd(&var_1b8);
                                core::ptr::drop_in_place$LT$core..result..Result$LT$bool$C$uu_chcon..errors..Error$GT$$GT$::h4eb00232c8be16dd(&var_78);
                                core::ptr::drop_in_place$LT$core..result..Result$LT$bool$C$uu_chcon..errors..Error$GT$$GT$::h4eb00232c8be16dd(&var_f8);
                            }
                            break;
                        }
                        case 1:
                        {
                            fts_statp = *(arg2 + 0x7b);
                            
                            if (fts_statp >= 2 && (fts_statp == 2 || !r15->fts_level))
                                goto label_464a0e;
                            
                            uu_chcon::emit_cycle_warning::h2458f9364db9f58d();
                            uu_chcon::errors::Error::from_io1::hfc25099ea69addfb(&var_168, 
                                "Reading cyclic directoryGetting …", 0x18, &var_118, 0x1500000003);
                            *(arg1 + 0x40) = *var_130[8];
                            int128_t zmm0_6 = var_168;
                            *(arg1 + 0x30) = var_140;
                            *(arg1 + 0x20) = var_150;
                            *(arg1 + 0x10) = var_158;
                            *arg1 = zmm0_6;
                            core::ptr::drop_in_place$LT$core..result..Result$LT$bool$C$uu_chcon..errors..Error$GT$$GT$::h4eb00232c8be16dd(&var_f8);
                            break;
                        }
                        case 2:
                        case 4:
                        case 7:
                        case 8:
                        {
                            goto label_464a0e;
                        }
                        case 3:
                        {
                            st_dev_1 = st_dev;
                            st_ino_1 = st_ino;
                            var_98_1 = rax_1;
                            uu_chcon::errors::Error::from_io1::hfc25099ea69addfb(&var_168, 
                                "Reading directoryReading cyclic …", 0x11, &var_118, 
                                r15->fts_errno << 0x20 | 2);
                            var_178_1 = *var_130[8];
                            var_188_1 = var_140;
                            var_198_2 = var_150;
                            var_1a8 = var_158;
                            var_1b8 = var_168;
                            fts_statp = core::ptr::drop_in_place$LT$core..result..Result$LT$bool$C$uu_chcon..errors..Error$GT$$GT$::h4eb00232c8be16dd(&var_f8);
                            label_4649b5:
                            int64_t var_b8 = var_178_1;
                            uint128_t var_c8 = var_188_1;
                            uint128_t var_d8 = var_198_2;
                            uint128_t var_e8 = var_1a8;
                            var_f8 = var_1b8;
                            rax_1 = var_98_1;
                            st_ino = st_ino_1;
                            st_dev = st_dev_1;
                            label_464a0e:
                            fts_statp = r15->fts_info == 6;
                            int32_t rsi_5 = var_f8;
                            rdx_3 = rsi_5 == 0x12;
                            
                            if (!(fts_statp & rdx_3))
                                goto label_464b12;
                            
                            if (*arg5 != 1 || *(arg5 + 8) != st_dev || *(arg5 + 0x10) != st_ino)
                            {
                                label_464b24:
                                
                                if (*(arg2 + 0x78))
                                {
                                    int64_t rax_11;
                                    int64_t rdx_6;
                                    rax_11 = uucore::util_name::h074417a1e6395129();
                                    int64_t var_88 = rax_11;
                                    int64_t var_80_1 = rdx_6;
                                    var_1b8 = 1;
                                    var_1b8 = var_118;
                                    *var_1a8[8] = 1;
                                    var_78 = &var_88;
                                    int64_t (* var_70_1)(int64_t* arg1, int64_t arg2) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hfc43d111ea64d20e;
                                    uint128_t* var_68_1 = &var_1b8;
                                    int64_t (* var_60_1)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                                    var_168 = &data_4f0458;
                                    int64_t var_160_1 = 3;
                                    *var_150[8] = 0;
                                    var_158 = &var_78;
                                    var_150 = 2;
                                    std::io::stdio::_print::h5e446ff973c02de6(&var_168);
                                }
                                
                                uu_chcon::change_file_context::h4ff94423838786fe(&var_168, arg2, 
                                    arg3, rax_1, rdx_1);
                                core::ptr::drop_in_place$LT$core..result..Result$LT$bool$C$uu_chcon..errors..Error$GT$$GT$::h4eb00232c8be16dd(&var_f8);
                                var_b8 = *var_130[8];
                                var_c8 = var_140;
                                var_d8 = var_150;
                                var_e8 = var_158;
                                var_f8 = var_168;
                            }
                            else
                            {
                                uu_chcon::root_dev_ino_warn::heb2bdc38e2851f11(*var_118[8], 
                                    var_158);
                                uu_chcon::errors::Error::from_io1::hfc25099ea69addfb(&var_168, 
                                    "Modifying root pathAccessingRead…", 0x13, &var_118, 
                                    0x100000003);
                                var_1b8 = var_168;
                                core::ptr::drop_in_place$LT$core..result..Result$LT$bool$C$uu_chcon..errors..Error$GT$$GT$::h4eb00232c8be16dd(&var_f8);
                                var_b8 = *var_130[8];
                                var_c8 = var_140;
                                var_d8 = var_150;
                                var_e8 = var_158;
                                var_f8 = var_1b8;
                                rsi_5 = var_f8;
                                label_464b12:
                                
                                if (rsi_5 == 0x12)
                                    goto label_464b24;
                            }
                            
                            if (!*(arg2 + 0x7b))
                            {
                                uu_chcon::fts::FTS::set::h57c16749566a888b(&var_168, *arg4, r15, 4);
                                core::ptr::drop_in_place$LT$core..result..Result$LT$bool$C$uu_chcon..errors..Error$GT$$GT$::h4eb00232c8be16dd(&var_168);
                            }
                            
                            *(arg1 + 0x40) = var_b8;
                            zmm0_2 = var_f8;
                            zmm1_1 = var_e8;
                            zmm2_1 = var_d8;
                            zmm3_1 = var_c8;
                            goto label_464c95;
                        }
                        case 5:
                        {
                            if (*(arg2 + 0x7b))
                                goto label_464a0e;
                            
                            *arg1 = 0x12;
                            core::ptr::drop_in_place$LT$core..result..Result$LT$bool$C$uu_chcon..errors..Error$GT$$GT$::h4eb00232c8be16dd(&var_f8);
                            break;
                        }
                        case 6:
                        {
                            st_dev_1 = st_dev;
                            st_ino_1 = st_ino;
                            var_98_1 = rax_1;
                            uu_chcon::errors::Error::from_io1::hfc25099ea69addfb(&var_168, 
                                "AccessingReading directoryReadin…", 9, &var_118, 
                                r15->fts_errno << 0x20 | 2);
                            var_178_1 = *var_130[8];
                            var_188_1 = var_140;
                            var_198_2 = var_150;
                            var_1a8 = var_158;
                            var_1b8 = var_168;
                            fts_statp = core::ptr::drop_in_place$LT$core..result..Result$LT$bool$C$uu_chcon..errors..Error$GT$$GT$::h4eb00232c8be16dd(&var_f8);
                            goto label_4649b5;
                        }
                        case 9:
                        {
                            if (r15->fts_level || r15->fts_number)
                            {
                                st_dev_1 = st_dev;
                                st_ino_1 = st_ino;
                                var_98_1 = rax_1;
                                uu_chcon::errors::Error::from_io1::hfc25099ea69addfb(&var_168, 
                                    "AccessingReading directoryReadin…", 9, &var_118, 
                                    r15->fts_errno << 0x20 | 2);
                                var_178_1 = *var_130[8];
                                var_188_1 = var_140;
                                var_198_2 = var_150;
                                var_1a8 = var_158;
                                var_1b8 = var_168;
                                fts_statp = core::ptr::drop_in_place$LT$core..result..Result$LT$bool$C$uu_chcon..errors..Error$GT$$GT$::h4eb00232c8be16dd(&var_f8);
                                goto label_4649b5;
                            }
                            
                            r15->fts_number = 1;
                            uu_chcon::fts::FTS::set::h57c16749566a888b(&var_168, *arg4, r15, 1);
                            *arg1 = 0x12;
                            core::ptr::drop_in_place$LT$core..result..Result$LT$bool$C$uu_chcon..errors..Error$GT$$GT$::h4eb00232c8be16dd(&var_168);
                            core::ptr::drop_in_place$LT$core..result..Result$LT$bool$C$uu_chcon..errors..Error$GT$$GT$::h4eb00232c8be16dd(&var_f8);
                            break;
                        }
                    }
                }
            }
            else
            {
                uu_chcon::errors::Error::from_io1::hfc25099ea69addfb(&var_168, 
                    "File name validation: changing s…", 0x14, &var_118, 0x1400000003);
                zmm0_2 = var_168;
                int32_t rcx_1 = var_168;
                char* var_160;
                rax_1 = var_160;
                rdx_1 = var_158;
                var_1b8 = var_150;
                
                if (rcx_1 == 0x12)
                    goto label_4645b8;
                
                zmm1_1 = var_1b8;
                *(arg1 + 0x38) = var_130;
                *(arg1 + 0x28) = var_140;
                *(arg1 + 0x18) = zmm1_1;
                *arg1 = zmm0_2;
                *(arg1 + 8) = rax_1;
                *(arg1 + 0x10) = rdx_1;
            }
            return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h4c6317eb479ec9cc(var_118, 
                *var_118[8]);
        }
    }
    
    *arg1 = 0x10;
    *(arg1 + 8) = "File name validation: changing s…";
    *(arg1 + 0x10) = 0x14;
    *(arg1 + 0x18) = 0x1400000003;
    return result;
}
