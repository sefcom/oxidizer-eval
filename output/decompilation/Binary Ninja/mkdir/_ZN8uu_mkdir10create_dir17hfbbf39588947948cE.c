
  uint64_t uu_mkdir::create_dir::hfbbf39588947948c(int64_t* arg1, uint64_t arg2, char arg3, void* arg4)

{
    void* const var_e0;
    std::fs::metadata::h6b8d15ae85f42ce6(&var_e0, arg1);
    void* const r12 = var_e0;
    int64_t var_d8;
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hd8a7744016ac23d6(r12, var_d8);
    uint64_t rbp_1;
    int64_t** var_150;
    int64_t* var_140;
    int64_t var_120;
    
    if (r12 == 2 || *(arg4 + 0xc))
    {
        std::path::Path::components::hd0346d362206f2e9(&var_120, arg1, arg2);
        rbp_1 = 0;
        std::path::Path::components::hd0346d362206f2e9(&var_e0, 1, 0);
        
        if (!_$LT$std..path..Components$u20$as$u20$core..cmp..PartialEq$GT$::eq::hd9623c64792f17b1(
            &var_120, &var_e0))
        {
            uint64_t rbx_2 = arg2;
            
            if (*(arg4 + 0xc))
            {
                char* rax_1;
                int64_t rdx_2;
                rax_1 = std::path::Path::parent::hef287f60afa56900(arg1, rbx_2);
                
                if (!rax_1)
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h09085b3eedcee021(&var_e0, "failed to create whole tree: cre…", 0x1b);
                    int64_t var_c8;
                    var_c8 = 1;
                    rbx_2 = arg2;
                    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::had00d84193dcc420(alloc::boxed::Box$LT$T$GT$::new::h5788815961083ce5(&var_e0), &data_4ede60);
                }
                else
                {
                    uint64_t rax_2 = uu_mkdir::create_dir::hfbbf39588947948c(rax_1, rdx_2, 1, arg4);
                    
                    if (rax_2)
                        return rax_2;
                }
            }
            
            int64_t* r14_1 = arg1;
            int64_t rax_5 = std::fs::create_dir::h1034eabddbb2ef35(r14_1);
            
            if (rax_5)
            {
                if (!std::path::Path::is_dir::h02edbc48c38d7d9e(r14_1, rbx_2))
                    return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hca385262aaa5c047(rax_5);
                return 0;
            }
            
            if (*(arg4 + 0xd))
            {
                int64_t** rax_7;
                int64_t rdx_4;
                rax_7 = uucore::util_name::h074417a1e6395129();
                var_150 = rax_7;
                int64_t var_148_2 = rdx_4;
                var_120 = 1;
                int64_t* var_118_1 = r14_1;
                uint64_t var_110_1 = rbx_2;
                int32_t var_108;
                var_108 = 1;
                var_140 = &var_150;
                int64_t (* var_138_2)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5f8342cc4ae57580;
                int64_t* var_130_1 = &var_120;
                int64_t (* var_128_1)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                var_e0 = &data_4edef8;
                int64_t var_d8_2 = 3;
                int64_t var_c0_2 = 0;
                int64_t** var_d0_2 = &var_140;
                int64_t var_c8_2 = 2;
                std::io::stdio::_print::h5e446ff973c02de6(&var_e0);
            }
            
            int32_t rdx_7;
            
            if (r12 != 2)
                rdx_7 = *(arg4 + 8);
            else
            {
                int32_t rax_8 =
                    uucore::features::fsxattr::get_acl_perm_bits_from_xattr::hcf1b9ddb092fba14(
                    r14_1);
                
                if (!arg3)
                    rdx_7 = rax_8 | *(arg4 + 8);
                else
                {
                    r14_1 = arg1;
                    rdx_7 = rax_8 | ((uucore::features::mode::get_umask::h22fe72fd4e3f2e99()
                        & 0x13f) ^ 0x1ff);
                }
            }
            
            rbp_1 = uu_mkdir::chmod::h277b932bb3f300b3(r14_1, rbx_2, rdx_7);
        }
    }
    else
    {
        var_140 = arg1;
        uint64_t var_138_1 = arg2;
        var_150 = &var_140;
        uint64_t (* var_148_1)(int64_t* arg1, int64_t arg2) =
            _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
        var_e0 = &data_4eded8;
        int64_t var_d8_1 = 2;
        int64_t var_c0_1 = 0;
        int64_t*** var_d0_1 = &var_150;
        int64_t var_c8_1 = 1;
        core::option::Option$LT$T$GT$::map_or_else::h568d5256e3b46eca(&var_120, &var_e0);
        int32_t var_108_1 = 1;
        rbp_1 = alloc::boxed::Box$LT$T$GT$::new::h5788815961083ce5(&var_120);
    }
    return rbp_1;
}
