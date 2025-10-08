
  int64_t uu_cp::copydir::copy_direntry::h5128c59f3878fb79(int128_t* arg1, void** arg2, int64_t* arg3, void* arg4, char** arg5, char arg6, int64_t* arg7, char** arg8)

{
    int64_t var_1d8 = arg3[5];
    int128_t var_1e8 = *(arg3 + 0x18);
    uint64_t rax_1 = arg3[8];
    int128_t var_208 = *(arg3 + 0x30);
    char rbp = arg3[9];
    char* r12 = arg3[1];
    uint64_t r15 = arg3[2];
    int128_t* rdi_8;
    int128_t* r14_3;
    
    if (!std::path::Path::is_symlink::h004cfac91d04dbc0(r12, r15) || *(arg4 + 0x59))
    {
        char rax_3 = std::path::Path::is_dir::h02edbc48c38d7d9e(r12, r15);
        void* const var_f8;
        int32_t r14_1;
        
        if (rax_3)
        {
            int64_t rsi_2 = *var_208[8];
            int64_t var_128_1 = rsi_2;
            uint64_t var_130_1 = rax_1;
            std::fs::metadata::h87a95e5fd9b91fc7(&var_f8, rsi_2);
            r14_1 = var_f8;
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he37bb0d8b54bbf24(&var_f8);
        }
        
        int64_t* var_1a8;
        int64_t var_168;
        int128_t var_f0;
        int128_t var_d8;
        int128_t* rcx;
        int128_t zmm0_1;
        int128_t zmm1_1;
        int128_t zmm2_1;
        
        if (!rax_3 || r14_1 != 2)
        {
            if (std::path::Path::is_dir::h02edbc48c38d7d9e(r12, r15))
                goto label_499515;
            
            uu_cp::copy_file::h2d5f479453081e34(&var_168, arg2, r12, r15, *var_208[8], rax_1, arg4, 
                arg5, arg7, arg8, 0);
            
            if (var_168 != -0x7ffffffffffffff4)
            {
                int64_t var_138;
                int64_t var_c8_1 = var_138;
                zmm0_1 = var_168;
                int128_t var_148;
                var_d8 = var_148;
                int128_t var_158;
                int128_t var_e8_1 = var_158;
                var_f8 = zmm0_1;
                
                if (arg6)
                {
                    if (std::path::Path::is_symlink::h004cfac91d04dbc0(r12, r15))
                    {
                        if (var_f8 != -0x7ffffffffffffffe)
                        {
                            core::ptr::drop_in_place$LT$uu_cp..Error$GT$::h9ee7df58e7d9e41e(
                                &var_168);
                            goto label_499515;
                        }
                        
                        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hb23d8f5d6ef8daac(
                            &var_d8);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1c03d16396ad1b8d(
                            &var_f0);
                        goto label_499515;
                    }
                }
                else if (var_f8 == -0x7ffffffffffffffe)
                {
                    int64_t r14_2 = var_d8;
                    
                    if (std::io::error::Error::kind::h135fe00c4e7365f3(r14_2) == 1)
                    {
                        int64_t var_1b0 = r14_2;
                        char rax_16 = std::io::error::Error::kind::h135fe00c4e7365f3(r14_2);
                        zmm0_1 = var_1e8;
                        int64_t** var_118 = 1;
                        int128_t var_110_1 = zmm0_1;
                        char var_100_1 = 1;
                        int64_t* var_178 = &var_118;
                        int64_t (* var_170_1)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                        var_1a8 = &data_55e640;
                        int64_t var_1a0_2 = 2;
                        int64_t var_188_1 = 0;
                        int64_t** var_198_1 = &var_178;
                        int64_t var_190_1 = 1;
                        void var_48;
                        core::option::Option$LT$T$GT$::map_or_else::ha891a5b84284deb4(&var_48, 
                            &var_1a8);
                        uint64_t var_1c8 =
                            uucore::mods::error::UIoError::new::h7234677a8d8132fc(rax_16, &var_48);
                        void** const var_1c0_1 = &data_55e348;
                        uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
                        int64_t* rax_18;
                        int64_t rdx_4;
                        rax_18 = uucore::util_name::h074417a1e6395129();
                        var_178 = rax_18;
                        int64_t var_170_2 = rdx_4;
                        var_118 = &var_178;
                        var_110_1 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::haac06c1252b30d1d;
                        *var_110_1[8] = &var_1c8;
                        var_100_1 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hf8a637a73ed45d5b;
                        var_1a8 = &data_55e660;
                        int64_t var_1a0_3 = 3;
                        int64_t var_188_2 = 0;
                        int64_t*** var_198_2 = &var_118;
                        int64_t var_190_2 = 2;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_1a8);
                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h3fae8bb6fba1fa61(var_1c8, var_1c0_1);
                        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hb23d8f5d6ef8daac(
                            &var_1b0);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1c03d16396ad1b8d(
                            &var_f0);
                        goto label_499515;
                    }
                }
                
                rcx = arg1;
                rcx[3] = var_138;
                zmm0_1 = var_168;
                zmm1_1 = var_158;
                zmm2_1 = var_148;
                goto label_4998a3;
            }
            
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$uu_cp..Error$GT$$GT$::h38297071204f1dde(&var_168);
            label_499515:
            r14_3 = &arg3[3];
            rdi_8 = &arg3[6];
            *arg1 = -0x7ffffffffffffff4;
        }
        else
        {
            int128_t var_e8;
            
            if (!rbp)
            {
                uu_cp::copydir::build_dir::hcf48ec2566a6908d(&var_f8, &var_208, 0, *(arg4 + 0x48), 
                    *(arg4 + 0x4a), r12, r15);
                void* const rax_11 = var_f8;
                
                if (rax_11 != -0x7ffffffffffffff4)
                {
                    int128_t zmm0_2 = var_f0;
                    *(arg1 + 0x28) = var_d8;
                    *(arg1 + 0x18) = var_e8;
                    *(arg1 + 8) = zmm0_2;
                    *arg1 = rax_11;
                }
                else
                {
                    if (*(arg4 + 0x60))
                    {
                        uu_cp::context_for::h4d8c781d36af7105(&var_168);
                        var_1a8 = &var_168;
                        int64_t (* var_1a0_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                        var_f8 = &data_55e620;
                        var_f0 = 2;
                        var_d8 = 0;
                        var_e8 = &var_1a8;
                        *var_e8[8] = 1;
                        std::io::stdio::_print::h5e446ff973c02de6(&var_f8);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1c03d16396ad1b8d(
                            &var_168);
                    }
                    
                    *arg1 = -0x7ffffffffffffff4;
                }
                
                r14_3 = &var_1e8;
                rdi_8 = &var_208;
            }
            else
            {
                _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::h0e3b1f2b5d04343d(&var_f8, "cannot overwrite non-directory w…", 0x2d);
                rcx = arg1;
                int64_t var_c8;
                rcx[3] = var_c8;
                zmm0_1 = var_f8;
                zmm1_1 = var_e8;
                zmm2_1 = var_d8;
                label_4998a3:
                rcx[2] = zmm2_1;
                rcx[1] = zmm1_1;
                *rcx = zmm0_1;
                r14_3 = &var_1e8;
                rdi_8 = &var_208;
            }
        }
    }
    else
    {
        uu_cp::copy_link::h25042d5280b1628e(arg1, r12, r15, *var_208[8], rax_1, arg5);
        r14_3 = &var_1e8;
        rdi_8 = &var_208;
    }
    
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(rdi_8);
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(r14_3);
    return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(arg3);
}
