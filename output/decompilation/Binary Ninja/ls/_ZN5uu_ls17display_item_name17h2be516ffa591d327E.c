
  int64_t* uu_ls::display_item_name::h2be516ffa591d327(int128_t* arg1, void* arg2, void* arg3, int64_t arg4, int64_t arg5, int128_t* arg6, void* arg7, int64_t* arg8, void* arg9)

{
    int64_t var_260 = arg5;
    int128_t var_2f8;
    int32_t rax;
    int32_t rcx_1;
    rax = uucore::features::quoting_style::escape_name::ha9b5831150e16363(&var_2f8, *(arg2 + 8), 
        *(arg2 + 0x10), arg3 + 0xf5);
    int64_t var_2f0;
    int64_t* result;
    int128_t var_168;
    int64_t* result_3;
    
    if (*(arg3 + 0xef))
    {
        rax = 1;
        int32_t var_2fc_1 = rax;
        uu_ls::create_hyperlink::h72b30fed8b305b42(&var_168, var_2f0, result, arg2);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_2f8);
        result = result_3;
        var_2f8 = var_168;
    }
    
    if (*(arg8 + 0x1d) != 2)
    {
        uint64_t rax_2 = *(arg3 + 0xe4);
        rcx_1 = rax_2;
        rax_2 = arg9 + result > rax_2;
        rax_2 &= rcx_1;
        rcx_1 = 1;
        int32_t var_2fc_2 = rcx_1;
        uint64_t var_310_1 = rax_2;
        uu_ls::colors::color_name::hd87a58ac50dac0ef(&var_168, var_2f0, result, arg2, arg8, arg7, 
            0);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_2f8);
        result = result_3;
        var_2f8 = var_168;
    }
    
    char r15 = *(arg3 + 0xf8);
    int64_t* rax_4;
    rax_4 = r15 != 1;
    int64_t rbx;
    rbx = arg6[1];
    int128_t* rcx_4;
    rcx_4 = 1;
    rbx &= rax_4;
    int128_t var_248;
    int64_t* result_1;
    
    if (rbx)
    {
        result_3 = arg6[1];
        var_168 = *arg6;
        int32_t var_2fc_3 = 0;
        _$LT$alloc..string..String$u20$as$u20$core..ops..arith..Add$LT$$RF$str$GT$$GT$::add::h177306e76d9aa6a7(&var_248, &var_168, var_2f0, result);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_2f8);
        result = result_1;
        var_2f8 = var_248;
        rcx_4 = nullptr;
    }
    
    int32_t var_2fc_4 = rcx_4;
    uint32_t r14 = *(arg3 + 0xf4);
    
    if (r14)
    {
        int32_t rax_7 = uu_ls::classify_file::h531def787e741feb(arg2);
        
        if (r14 == 3)
        {
            label_52c2e7:
            
            if (rax_7 != 0x110000)
                alloc::string::String::push::h859ae11851fd8b8e(&var_2f8, rax_7);
        }
        else if (r14 != 2)
        {
            if (rax_7 == 0x2f)
                alloc::string::String::push::h859ae11851fd8b8e(&var_2f8, rax_7);
        }
        else if (rax_7 != 0x2a)
            goto label_52c2e7;
    }
    
    int64_t* var_2e0;
    
    if (r15 == 1 && uu_ls::PathData::file_type::h128ed7d98b354477(arg2))
    {
        void* rax_9 = uu_ls::PathData::file_type::h128ed7d98b354477(arg2);
        
        if (!rax_9)
        {
            core::option::unwrap_failed::h0e11329e76906eaa();
            /* no return */
        }
        
        if ((0xf000 & *rax_9) == 0xa000 && !*(arg2 + 0x128))
        {
            *(arg2 + 0x28);
            int64_t var_198;
            std::fs::read_link::hbe5657d82156963a(&var_198, *(arg2 + 0x20));
            int64_t var_278;
            
            if (var_198 != -0x8000000000000000)
            {
                int128_t var_2b8 = var_198;
                alloc::vec::Vec$LT$T$C$A$GT$::append_elements::ha1fae1b53678c561(&var_2f8, 
                    " -> '\'' to \x1b[2mwhenzeroAnsi …", 4);
                size_t var_188;
                
                if (*(arg8 + 0x1d) != 2)
                {
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h4e545ed874bc91f1(&var_168, &var_2b8);
                    int64_t* result_4 = result_3;
                    int128_t var_298_1 = var_168;
                    
                    if (!std::path::Path::is_absolute::h3431a23d91045560(*var_2b8[8], var_188))
                    {
                        char* rax_17;
                        size_t rdx_8;
                        rax_17 = std::path::Path::parent::h65c9a340a6266f2d(*(arg2 + 0x20), 
                            *(arg2 + 0x28));
                        
                        if (rax_17)
                        {
                            int64_t* result_7 = result_4;
                            var_168 = var_298_1;
                            std::path::Path::join::hd038e45245e60e36(&var_248, rax_17, rdx_8, 
                                &var_168);
                            var_298_1 = var_248;
                            result_4 = result_1;
                        }
                    }
                    
                    int64_t* result_6 = result_4;
                    var_278 = var_298_1;
                    var_248 = 0;
                    var_2e0 = -0x8000000000000000;
                    char* r12_1;
                    rbx = uu_ls::PathData::new::ha3e1f49dfc1f89b1(&var_168, &var_278, &var_248, 
                        &var_2e0, *(arg3 + 0xeb), *(arg3 + 0xf2), 0);
                    
                    if (uu_ls::PathData::get_metadata::hc7a96a0547653f90(arg2))
                        goto label_52c72e;
                    
                    int64_t var_148;
                    int64_t var_140;
                    char var_40;
                    uu_ls::get_metadata_with_deref_opt::h471baa3ff4b7ae17(&var_248, var_148, 
                        var_140, var_40);
                    int64_t var_2d8;
                    size_t var_2d0;
                    
                    if (var_248 != 2)
                    {
                        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hb9b2c6df5be91f44(&var_248);
                        label_52c72e:
                        uucore::features::quoting_style::escape_name::ha9b5831150e16363(&var_248, 
                            *var_2b8[8], var_188, r12_1);
                        uint64_t rax_22 = *(arg3 + 0xe4);
                        bool rcx_14 = rax_22;
                        rax_22 = arg9 + result > rax_22;
                        rax_22 &= rcx_14;
                        uint64_t var_310_2 = rax_22;
                        uu_ls::colors::color_name::hd87a58ac50dac0ef(&var_2e0, *var_248[8], 
                            result_1, arg2, arg8, arg7, &var_168);
                        int64_t rax_24;
                        uint64_t rdx_16;
                        rax_24 = core::slice::iter::Iter$LT$T$GT$::make_slice::h6c1fcdef0407b044(
                            var_2d8, var_2d0 + var_2d8);
                        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::ha1fae1b53678c561(&var_2f8, 
                            rax_24, rdx_16);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(
                            &var_2e0);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(
                            &var_248);
                    }
                    else
                    {
                        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hb9b2c6df5be91f44(&var_248);
                        *(arg2 + 0x28);
                        std::fs::read_link::hbe5657d82156963a(&var_248, *(arg2 + 0x20));
                        core::result::Result$LT$T$C$E$GT$::unwrap::h25f855f03e13c7a6(&var_2e0, 
                            &var_248);
                        std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(
                            &var_248, var_2d8, var_2d0);
                        int64_t rdi_31 = *var_248[8];
                        int64_t rax_21;
                        uint64_t rdx_13;
                        rax_21 = core::slice::iter::Iter$LT$T$GT$::make_slice::h6c1fcdef0407b044(
                            rdi_31, result_1 + rdi_31);
                        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::ha1fae1b53678c561(&var_2f8, 
                            rax_21, rdx_13);
                        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h950c753f5d689b41(&var_248);
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h585d8b757a674aea(
                            &var_2e0);
                    }
                    core::ptr::drop_in_place$LT$uu_ls..PathData$GT$::h882b87545de6c6bd(&var_168);
                }
                else
                {
                    uucore::features::quoting_style::escape_name::ha9b5831150e16363(&var_168, 
                        *var_2b8[8], var_188, arg3 + 0xf5);
                    int64_t rdi_17 = *var_168[8];
                    int64_t rax_14;
                    uint64_t rdx_7;
                    rax_14 = core::slice::iter::Iter$LT$T$GT$::make_slice::h6c1fcdef0407b044(
                        rdi_17, result_3 + rdi_17);
                    alloc::vec::Vec$LT$T$C$A$GT$::append_elements::ha1fae1b53678c561(&var_2f8, 
                        rax_14, rdx_7);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(
                        &var_168);
                }
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h585d8b757a674aea(&var_2b8);
            }
            else
            {
                int64_t* var_190;
                var_2e0 = var_190;
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h4e545ed874bc91f1(&var_248, arg2 + 0x18);
                int64_t* result_5 = result_1;
                result_3 = var_248;
                *var_168[8] = var_190;
                var_168 = 2;
                uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                int64_t rax_11;
                int64_t rdx_5;
                rax_11 = uucore::util_name::h60d842bf27b05e82();
                var_278 = rax_11;
                int64_t var_270_1 = rdx_5;
                var_2e0 = &var_278;
                int64_t (* var_2d8_1)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2a9d35fa3fd2b5f3;
                int128_t* var_2d0_1 = &var_168;
                uint64_t (* var_2c8_1)(char* arg1, void* arg2) =
                    _$LT$uu_ls..LsError$u20$as$u20$core..fmt..Display$GT$::fmt::h5d2fdcae43ce792d;
                var_248 = &data_612588;
                *var_248[8] = 3;
                int64_t var_228_1 = 0;
                int64_t** var_238 = &var_2e0;
                int64_t var_230_1 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_248);
                core::ptr::drop_in_place$LT$uu_ls..LsError$GT$::he771fbcc7e9ba207(&var_168);
            }
        }
    }
    
    if (arg4 == 1 && *(arg3 + 0xeb))
    {
        if (r15 != 4)
        {
            *(arg2 + 0x40);
            uu_ls::pad_left::h1d7ef6cb0cce13f7(&var_2e0, *(arg2 + 0x38));
        }
        else
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(
                &var_2e0, arg2 + 0x30);
        
        var_248 = &var_2e0;
        *var_248[8] =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        int128_t* var_238_1 = &var_2f8;
        int64_t (* var_230_2)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        var_168 = &data_6125e8;
        *var_168[8] = 2;
        int64_t var_148_1 = 0;
        int128_t* var_158 = &var_248;
        int64_t var_150_1 = 2;
        int128_t var_180;
        core::option::Option$LT$T$GT$::map_or_else::h7fca96e7ce97ddb7(&var_180, &var_168);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_2f8);
        int64_t* result_2;
        result = result_2;
        var_2f8 = var_180;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_2e0);
    }
    
    arg1[1] = result;
    *arg1 = var_2f8;
    
    if (rbx)
        return result;
    
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(arg6);
}
