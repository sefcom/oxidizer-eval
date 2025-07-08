
  int64_t uu_cp::copydir::copy_direntry::he742c4f146ad7097(int64_t* arg1, int64_t* arg2, int128_t* arg3, int64_t* arg4, int64_t* arg5, char arg6, int64_t* arg7, int64_t* arg8)

{
    uint64_t rsi = arg3[1];
    int128_t var_1f8 = *arg3;
    int64_t var_158 = *(arg3 + 0x28);
    int128_t var_168 = *(arg3 + 0x18);
    uint64_t rax_1 = arg3[4];
    int128_t var_1d8 = arg3[3];
    char r13 = *(arg3 + 0x48);
    char rax_2 = std::path::Path::is_symlink::h6ab8b58756c51c6b(*var_1f8[8], rsi);
    char* rsi_1 = *var_1f8[8];
    
    if (!(rax_2 & !*(arg4 + 0x41)))
    {
        if (!std::path::Path::is_dir::h9ac0db933706da51(rsi_1, rsi))
            goto label_50e15b;
        
        if (uu_cp::copydir::ends_with_slash_dot::h7ca260d86f8cd653(&var_1f8))
            goto label_50e15b;
        
        void* const var_f8;
        std::fs::metadata::h003d8cdbffde7c56(&var_f8, *var_1d8[8]);
        void* const rdi_7 = var_f8;
        int64_t var_f0;
        int64_t rsi_4 = var_f0;
        int32_t* var_1a8;
        int32_t var_148;
        int64_t var_d8;
        int128_t var_d0;
        void* const rax_15;
        int128_t zmm0_1;
        int128_t zmm0_3;
        int128_t zmm1_3;
        int128_t zmm2_3;
        
        if (rdi_7 != 2)
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6e54671ee6a51b2a(rdi_7, rsi_4);
            label_50e15b:
            
            if (std::path::Path::is_dir::h9ac0db933706da51(*var_1f8[8], rsi))
                goto label_50e165;
            
            int128_t var_138;
            int128_t var_128;
            
            if (!arg6)
            {
                uu_cp::copy_file::h3a721c0b700148ba(&var_f8, arg2, *var_1f8[8], rsi, *var_1d8[8], 
                    rax_1, arg4, arg5, arg7, arg8, 0);
                void* const rax_9 = var_f8;
                
                if (rax_9 != 3)
                {
                    if (rax_9 == 0xd)
                        goto label_50e165;
                    
                    goto label_50e459;
                }
                
                if (std::io::error::Error::kind::hb2ff5fa058639b3d(var_d8) != 1)
                    goto label_50e459;
                
                char rax_11 = std::io::error::Error::kind::hb2ff5fa058639b3d(var_d8);
                zmm0_1 = var_168;
                var_1a8 = 1;
                int128_t var_1a0_1 = zmm0_1;
                char var_190_1 = 1;
                int32_t** var_108 = &var_1a8;
                int64_t (* var_100_1)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                var_148 = &data_5b62e0;
                int64_t var_140_1 = 2;
                var_128 = 0;
                var_138 = &var_108;
                *var_138[8] = 1;
                void var_48;
                core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&var_48, &var_148);
                int128_t* var_1b8 =
                    uucore::mods::error::UIoError::new::h583c767c36d4d604(rax_11, &var_48);
                void** const var_1b0_1 = &data_5b6f50;
                uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                int32_t** rax_13;
                int64_t rdx_4;
                rax_13 = uucore::util_name::h60d842bf27b05e82();
                var_108 = rax_13;
                int64_t var_100_2 = rdx_4;
                var_1a8 = &var_108;
                var_1a0_1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h52491f3ba70e88c7;
                *var_1a0_1[8] = &var_1b8;
                var_190_1 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hecbc8f9382c41ff5;
                var_148 = &data_5b6300;
                int64_t var_140_2 = 3;
                var_128 = 0;
                var_138 = &var_1a8;
                *var_138[8] = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_148);
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::hd3f979be012334ba(var_1b8, var_1b0_1);
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h414e413090760199(var_d8);
                void* const rax_14 = var_f8;
                
                if (rax_14 == 3)
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(
                        &var_f0);
                else if (rax_14 != 0xd)
                    core::ptr::drop_in_place$LT$uu_cp..Error$GT$::h771e7f9a0f8a7901(&var_f8);
                
                goto label_50e165;
            }
            
            uu_cp::copy_file::h3a721c0b700148ba(&var_148, arg2, *var_1f8[8], rsi, *var_1d8[8], 
                rax_1, arg4, arg5, arg7, arg8, 0);
            
            if (var_148 == 0xd)
                goto label_50e165;
            
            var_d8 = var_128;
            var_f8 = var_148;
            
            if (!std::path::Path::is_symlink::h6ab8b58756c51c6b(*var_1f8[8], rsi))
            {
                rax_15 = var_f8;
                var_1a8 = var_f0;
                
                if (rax_15 == 0xd)
                    goto label_50e165;
                
                int128_t var_118;
                arg1[7] = *var_118[8];
                zmm0_3 = var_1a8;
                zmm1_3 = var_138;
                zmm2_3 = var_d0;
                goto label_50e5f7;
            }
            
            core::ptr::drop_in_place$LT$uu_cp..Error$GT$::h771e7f9a0f8a7901(&var_f8);
            label_50e165:
            *arg1 = 0xd;
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_1d8);
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_168);
        }
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6e54671ee6a51b2a(2, rsi_4);
            int128_t var_e8;
            int128_t var_c8;
            
            if (!r13)
            {
                uu_cp::copydir::build_dir::h8f7105fdecd19cc9(&var_f8, arg4[6], *(arg4 + 0x32), 
                    &var_1d8);
                rax_15 = var_f8;
                
                if (rax_15 != 0xd)
                {
                    arg1[7] = *var_c8[8];
                    zmm0_3 = var_f0;
                    zmm1_3 = var_e8;
                    zmm2_3 = var_d0;
                    label_50e5f7:
                    *(arg1 + 0x28) = zmm2_3;
                    *(arg1 + 0x18) = zmm1_3;
                    *(arg1 + 8) = zmm0_3;
                    *arg1 = rax_15;
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_1d8);
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_168);
                }
                else
                {
                    if (arg4[9])
                    {
                        uu_cp::context_for::h98549e35fded8509(&var_148);
                        var_1a8 = &var_148;
                        int128_t var_1a0;
                        var_1a0 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        var_f8 = &data_5b62c0;
                        var_f0 = 2;
                        int64_t var_d8_1 = 0;
                        var_e8 = &var_1a8;
                        *var_e8[8] = 1;
                        std::io::stdio::_print::he918bceb0c89db46(&var_f8);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(
                            &var_148);
                    }
                    
                    *arg1 = 0xd;
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_1d8);
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_168);
                }
            }
            else
            {
                _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::h3a818a2f4f98d944(&var_f8, "cannot overwrite non-directory w…", 0x2d);
                label_50e459:
                zmm0_1 = var_f8;
                *(arg1 + 0x30) = var_c8;
                *(arg1 + 0x20) = var_d8;
                *(arg1 + 0x10) = var_e8;
                *arg1 = zmm0_1;
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_1d8);
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_168);
            }
        }
    }
    else
    {
        uu_cp::copy_link::h3110b816ad64228e(arg1, rsi_1, rsi, *var_1d8[8], rax_1, arg5);
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_1d8);
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_168);
    }
    
    return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_1f8);
}
