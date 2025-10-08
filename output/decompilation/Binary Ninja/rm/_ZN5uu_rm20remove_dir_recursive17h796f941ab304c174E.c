
  uint64_t uu_rm::remove_dir_recursive::h796f941ab304c174(char* arg1, uint64_t arg2, void* arg3)

{
    uint64_t rbp;
    uint64_t var_8 = rbp;
    char var_108;
    core::str::converts::from_utf8::h8a6dc80f786921e0(&var_108, arg1, arg2);
    int64_t var_f8;
    uint64_t* var_d8;
    uint64_t var_b0;
    uint64_t** var_98;
    
    if (var_108 & 1 || var_f8 < 0x3e9)
    {
        char rax_3 = std::path::Path::is_dir::h02edbc48c38d7d9e(arg1, arg2);
        char rax_4;
        
        if (rax_3)
            rax_4 = std::path::Path::is_symlink::h004cfac91d04dbc0(arg1, arg2);
        
        if (rax_3 && !rax_4)
        {
            char rax_6 = *(arg3 + 7);
            
            if (rax_6 != 2)
            {
                label_45ca47:
                int64_t var_40;
                std::fs::read_dir::h8c3d3d6768148fc1(&var_40, arg1);
                char var_38;
                uint32_t r12_1 = var_38;
                int64_t r15_1 = var_40;
                int128_t var_c8;
                int64_t var_88;
                
                if (r12_1 != 2)
                {
                    int64_t var_68_1 = r15_1;
                    int64_t var_58 = r15_1;
                    char var_10a_1 = r12_1;
                    char var_50_1 = r12_1;
                    rbp = 0;
                    
                    while (true)
                    {
                        _$LT$std..fs..ReadDir$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1934f30e4eea5c14(&var_108, &var_58);
                        
                        if (var_108 != 1)
                            break;
                        
                        int64_t var_100;
                        var_98 = var_100;
                        int64_t var_e0;
                        int64_t var_78_1 = var_e0;
                        int64_t var_f0;
                        var_88 = var_f0;
                        
                        if (!var_98)
                        {
                            r12_1 = 1;
                            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..DirEntry$C$std..io..error..Error$GT$$GT$::hc3253a40f2f30f24(&var_98);
                        }
                        else
                        {
                            int64_t var_b8_1 = var_e0;
                            var_c8 = var_f0;
                            var_d8 = var_100;
                            std::fs::DirEntry::path::hc95af67dccb42f03(&var_b0, &var_d8);
                            char* var_a8;
                            uint64_t var_a0;
                            uint32_t rax_11 = uu_rm::remove_dir_recursive::h796f941ab304c174(
                                var_a8, var_a0, arg3);
                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hec94fc61a491c65b(
                                var_b0, var_a8);
                            core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::h368a5a1663c5dbc2(
                                &var_d8);
                            r12_1 = rax_11 | rbp;
                            r12_1 &= 1;
                            
                            if (!var_98)
                                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..DirEntry$C$std..io..error..Error$GT$$GT$::hc3253a40f2f30f24(&var_98);
                        }
                        
                        rbp = r12_1;
                    }
                    
                    core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h99d2b3813cc34141(&var_58);
                    
                    if (rax_6 == 2)
                        goto label_45cbf8;
                    
                    goto label_45cc0b;
                }
                
                if (std::io::error::Error::kind::h135fe00c4e7365f3(r15_1) == 1)
                {
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::haf081cf9ad72b71d(r15_1);
                    rbp = 0;
                    
                    if (rax_6 == 2)
                        goto label_45cbf8;
                    
                    goto label_45cc0b;
                }
                
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::haf081cf9ad72b71d(r15_1);
                rbp = 1;
                
                if (rax_6 != 2)
                {
                    label_45cc0b:
                    int64_t rax_14 = std::fs::remove_dir::hddc5f5b6184df82a(arg1);
                    
                    if (!rax_14)
                    {
                        if (*(arg3 + 5) == 1)
                        {
                            uu_rm::normalize::h371ce75c5c819b8d();
                            var_d8 = 1;
                            int64_t var_90;
                            int64_t var_d0_5 = var_90;
                            var_c8 = var_88;
                            *var_c8[8] = 1;
                            var_b0 = &var_d8;
                            int64_t (* var_a8_1)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                            var_108 = &data_4ea520;
                            int64_t var_100_5 = 2;
                            int64_t var_e8_5 = 0;
                            uint64_t* var_f8_5 = &var_b0;
                            int64_t var_f0_5 = 1;
                            std::io::stdio::_print::h5e446ff973c02de6(&var_108);
                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hec94fc61a491c65b(
                                var_98, var_90);
                        }
                    }
                    else if (rbp & 1)
                        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::haf081cf9ad72b71d(
                            rax_14);
                    else if (!uu_rm::is_readable::h11778c167935ca98(arg1))
                    {
                        uint64_t* rax_19;
                        int64_t rdx_10;
                        rax_19 = uucore::util_name::h074417a1e6395129();
                        var_d8 = rax_19;
                        int64_t var_d0_6 = rdx_10;
                        var_98 = &var_d8;
                        int64_t (* var_90_3)(int64_t* arg1, int64_t arg2) =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5f6f103f460297c8;
                        var_108 = &data_4ea4a0;
                        int64_t var_100_6 = 2;
                        int64_t var_e8_6 = 0;
                        uint64_t*** var_f8_6 = &var_98;
                        int64_t var_f0_6 = 1;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_108);
                        var_d8 = 1;
                        char* var_d0_7 = arg1;
                        var_c8 = arg2;
                        *var_c8[8] = 1;
                        var_98 = &var_d8;
                        int64_t (* var_90_4)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                        var_108 = &data_4ea500;
                        int64_t var_100_7 = 2;
                        int64_t var_e8_7 = 0;
                        uint64_t*** var_f8_7 = &var_98;
                        int64_t var_f0_7 = 1;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_108);
                        rbp = 1;
                        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::haf081cf9ad72b71d(
                            rax_14);
                    }
                    else
                    {
                        var_b0 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h38f2107b9f174514();
                        uint64_t* rax_17;
                        int64_t rdx_8;
                        rax_17 = uucore::util_name::h074417a1e6395129();
                        var_d8 = rax_17;
                        int64_t var_d0_3 = rdx_8;
                        var_98 = &var_d8;
                        int64_t (* var_90_2)(int64_t* arg1, int64_t arg2) =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5f6f103f460297c8;
                        var_108 = &data_4ea4a0;
                        int64_t var_100_3 = 2;
                        int64_t var_e8_3 = 0;
                        uint64_t*** var_f8_3 = &var_98;
                        int64_t var_f0_3 = 1;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_108);
                        var_d8 = &var_b0;
                        int64_t (* var_d0_4)(int64_t* arg1, int64_t* arg2) = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h29c983c066893c20;
                        var_108 = &data_4ea4e0;
                        int64_t var_100_4 = 2;
                        int64_t var_e8_4 = 0;
                        uint64_t** var_f8_4 = &var_d8;
                        int64_t var_f0_4 = 1;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_108);
                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::h186a117efda8c6b1(var_b0);
                        rbp = 1;
                    }
                }
                else
                {
                    label_45cbf8:
                    
                    if (uu_rm::prompt_dir::h2b47d5798effefb0(arg1, arg2, *(arg3 + 6), 2))
                        goto label_45cc0b;
                    
                    rbp = 0;
                }
            }
            else
            {
                if (uu_rm::is_dir_empty::h0b58628bb17a83e8(arg1))
                    goto label_45ca47;
                
                if (uu_rm::prompt_descend::heddf5145b62c3c76())
                    goto label_45ca47;
                
                rbp = 0;
            }
        }
        else
            rbp = uu_rm::remove_file::h42f0a78696bb1093(arg1, arg2, arg3);
    }
    else if (!std::fs::remove_dir_all::h2f1ee9cf2f121232(arg1))
        rbp = 0;
    else
    {
        var_b0 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h38f2107b9f174514();
        uint64_t* rax_2;
        int64_t rdx_2;
        rax_2 = uucore::util_name::h074417a1e6395129();
        var_d8 = rax_2;
        int64_t var_d0_1 = rdx_2;
        var_98 = &var_d8;
        int64_t (* var_90_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5f6f103f460297c8;
        var_108 = &data_4ea4a0;
        int64_t var_100_1 = 2;
        int64_t var_e8_1 = 0;
        uint64_t*** var_f8_1 = &var_98;
        int64_t var_f0_1 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_108);
        var_d8 = &var_b0;
        int64_t (* var_d0_2)(int64_t* arg1, int64_t* arg2) = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h29c983c066893c20;
        var_108 = &data_4ea4e0;
        int64_t var_100_2 = 2;
        int64_t var_e8_2 = 0;
        uint64_t** var_f8_2 = &var_d8;
        int64_t var_f0_2 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_108);
        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::h186a117efda8c6b1(var_b0);
        rbp = 1;
    }
    return rbp;
}
