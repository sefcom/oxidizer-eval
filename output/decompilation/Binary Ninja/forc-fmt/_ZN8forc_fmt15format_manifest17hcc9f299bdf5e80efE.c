
  int64_t forc_fmt::format_manifest::hcc9f299bdf5e80ef(char* arg1, char arg2, int64_t* arg3)

{
    int64_t var_108;
    std::fs::read_to_string::h72615f83e87f7dcf(&var_108, arg3);
    int64_t r14 = var_108;
    char const (** const var_198)[0xc8];
    int64_t* var_158;
    
    if (-(r14) != -0x8000000000000000)
    {
        int64_t var_f8;
        int64_t var_78_1 = var_f8;
        int128_t var_88 = var_108;
        int64_t r12_1 = *var_88[8];
        _$LT$taplo..formatter..Options$u20$as$u20$core..default..Default$GT$::default::h383d5ad32251c519(&var_198);
        void var_e0;
        taplo::formatter::format::hf668126a4a9afc09(&var_e0, r12_1, var_f8, &var_198);
        int64_t rax_9;
        char* rcx_5;
        int64_t var_d8;
        
        if (!(arg2 & 1))
        {
            rax_9 = forc_fmt::write_file_formatted::ha4a188379ce620ba(arg3[1], arg3[2], var_d8);
            
            if (!rax_9)
            {
                label_7d513e:
                r14 = 0;
                goto label_7d5141;
            }
            
            rcx_5 = arg1;
            *(rcx_5 + 8) = rax_9;
            rax_9 = 1;
        }
        else
        {
            uint64_t var_d0;
            char rax_3;
            uint64_t rdx_3;
            rax_3 = alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::h8515288a5a7eeb3b(var_d8, var_d0, r12_1, var_f8);
            uint64_t var_148;
            int128_t* var_120;
            int128_t var_c8;
            
            if (rax_3)
            {
                int64_t rax_4 = core::sync::atomic::atomic_load::h0943286c275b0a82(
                    &tracing_core::metadata::MAX_LEVEL::he61cb0e5fc6f5f25);
                int64_t var_188;
                int64_t var_178;
                int128_t var_f0;
                int128_t** var_a0;
                
                if (rax_4 == 5 || rax_4 > 2)
                {
                    label_7d4f8e:
                    
                    if (!core::sync::atomic::atomic_load::h6834916517087897(
                        &tracing_core::dispatcher::EXISTS::h25c10194e397632b) &&
                        core::sync::atomic::atomic_load::h0943286c275b0a82(
                        &log::MAX_LOG_LEVEL_FILTER::h8b86a041fa92d435) >= 3)
                    {
                        void* forc_fmt::format_manifest::__CALLSITE::hf272baa263208f55_3 =
                            forc_fmt::format_manifest::__CALLSITE::hf272baa263208f55;
                        int128_t zmm0_2 =
                            *(forc_fmt::format_manifest::__CALLSITE::hf272baa263208f55_3 + 0x20);
                        int64_t var_70 = 3;
                        void* rax_12;
                        int64_t rdx_6;
                        rax_12 = log::logger::hda83ce6e5b01f630();
                        
                        if ((*(rdx_6 + 0x18))(rax_12, &var_70))
                        {
                            void* forc_fmt::format_manifest::__CALLSITE::hf272baa263208f55_2 =
                                forc_fmt::format_manifest::__CALLSITE::hf272baa263208f55;
                            var_158 = *(forc_fmt::format_manifest::__CALLSITE::hf272baa263208f55_2
                                + 0x30);
                            var_148 = *(forc_fmt::format_manifest::__CALLSITE::hf272baa263208f55_2
                                + 0x40);
                            int64_t var_138_2 = 0;
                            int64_t var_130_2 = *(
                                forc_fmt::format_manifest::__CALLSITE::hf272baa263208f55_2 + 0x38);
                            _$LT$tracing_core..field..Iter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h062fa63b7cc5c6bc(&var_198, &var_158);
                            
                            if (!var_198)
                            {
                                core::option::expect_failed::h3f620cfb8545dc61(
                                    "FieldSet corrupted (this is a bu…");
                                /* no return */
                            }
                            
                            int64_t var_a8_2 = var_178;
                            int128_t var_b8_2 = var_188;
                            var_c8 = var_198;
                            var_f0 = *(arg3 + 8);
                            int128_t* var_58 = &var_f0;
                            uint64_t (* var_50_1)(int64_t* arg1, int64_t arg2) = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
                            var_198 = &data_c0a418;
                            int64_t var_190_4 = 1;
                            int64_t var_178_4 = 0;
                            int128_t** var_188_5 = &var_58;
                            int64_t var_180_4 = 1;
                            var_120 = &var_c8;
                            char const (** const* var_118_3)[0xc8] = &var_198;
                            void* const var_110_2 = &data_c0a3a8;
                            var_a0 = &var_120;
                            int64_t var_98_1 = 1;
                            void* var_90_1 =
                                forc_fmt::format_manifest::__CALLSITE::hf272baa263208f55_2 + 0x30;
                            int64_t var_148_2 = *zmm0_2[8];
                            var_158 = var_70;
                            tracing::__macro_support::__tracing_log::h4c7a43eb8e34734d(
                                forc_fmt::format_manifest::__CALLSITE::hf272baa263208f55_3, rax_12, 
                                rdx_6, &var_158, &var_a0);
                        }
                    }
                }
                else
                {
                    char rax_5 =
                        tracing_core::callsite::DefaultCallsite::interest::h44bc8806352c8553(
                        &forc_fmt::format_manifest::__CALLSITE::hf272baa263208f55);
                    
                    if (!rax_5)
                        goto label_7d4f8e;
                    
                    if (!tracing::__macro_support::__is_enabled::hb2603213f716e822(
                            forc_fmt::format_manifest::__CALLSITE::hf272baa263208f55, rax_5))
                        goto label_7d4f8e;
                    
                    void* forc_fmt::format_manifest::__CALLSITE::hf272baa263208f55_1 =
                        forc_fmt::format_manifest::__CALLSITE::hf272baa263208f55;
                    var_158 = *(forc_fmt::format_manifest::__CALLSITE::hf272baa263208f55_1 + 0x30);
                    var_148 = *(forc_fmt::format_manifest::__CALLSITE::hf272baa263208f55_1 + 0x40);
                    int64_t var_138_1 = 0;
                    int64_t var_130_1 =
                        *(forc_fmt::format_manifest::__CALLSITE::hf272baa263208f55_1 + 0x38);
                    _$LT$tracing_core..field..Iter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h062fa63b7cc5c6bc(&var_198, &var_158);
                    
                    if (!var_198)
                    {
                        core::option::expect_failed::h3f620cfb8545dc61(
                            "FieldSet corrupted (this is a bu…");
                        /* no return */
                    }
                    
                    int64_t var_a8_1 = var_178;
                    int128_t var_b8_1 = var_188;
                    var_c8 = var_198;
                    var_a0 = *(arg3 + 8);
                    var_f0 = &var_a0;
                    *var_f0[8] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
                    var_198 = &data_c0a418;
                    int64_t var_190_2 = 1;
                    int64_t var_178_2 = 0;
                    int128_t* var_188_2 = &var_f0;
                    int64_t var_180_2 = 1;
                    var_120 = &var_c8;
                    char const (** const* var_118_1)[0xc8] = &var_198;
                    void* const var_110_1 = &data_c0a3a8;
                    var_158 = &var_120;
                    int64_t var_150_2 = 1;
                    void* var_148_1 =
                        forc_fmt::format_manifest::__CALLSITE::hf272baa263208f55_1 + 0x30;
                    forc_fmt::format_manifest::_$u7b$$u7b$closure$u7d$$u7d$::h875ff412e591defc(
                        &var_158);
                }
                goto label_7d513e;
            }
            
            var_c8 = *(arg3 + 8);
            var_120 = &var_c8;
            uint64_t (* var_118_2)(int64_t* arg1, int64_t arg2) =
                _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
            var_198 = &data_c0a408;
            int64_t var_190_3 = 1;
            int64_t var_178_3 = 0;
            int128_t** var_188_3 = &var_120;
            int64_t var_180_3 = 1;
            core::option::Option$LT$T$GT$::map_or_else::he9085a4e14fd35e7(&var_158, 0, rdx_3, 
                &var_198);
            var_198 = var_158;
            uint64_t var_188_4 = var_148;
            forc_tracing::println_error::h8bc2a86d36dc4dba(var_190_3, var_148);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::he4f3a1149946cfdd(&var_198);
            r14 = 1;
            forc_fmt::display_file_diff::h0e6791d1d0ed248f(r12_1, var_f8, var_d8, var_d0);
            label_7d5141:
            rcx_5 = arg1;
            rcx_5[1] = r14;
            rax_9 = 0;
            r14 = var_108;
        }
        *rcx_5 = rax_9;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::he4f3a1149946cfdd(&var_e0);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::he4f3a1149946cfdd(&var_88);
        
        if (r14 == -0x8000000000000000)
            core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$GT$::hcc2236c43ea66e8e(&var_108);
    }
    else
    {
        uint64_t rdx = core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$GT$::hcc2236c43ea66e8e(&var_108);
        var_158 = arg3;
        int64_t (* var_150_1)(void* arg1, int64_t* arg2) =
            _$LT$std..path..PathBuf$u20$as$u20$core..fmt..Debug$GT$::fmt::h56ce33c072e686b1;
        var_198 = &data_c0a428;
        int64_t var_190_1 = 1;
        int64_t var_178_1 = 0;
        void** var_188_1 = &var_158;
        int64_t var_180_1 = 1;
        void var_48;
        core::option::Option$LT$T$GT$::map_or_else::he9085a4e14fd35e7(&var_48, 0, rdx, &var_198);
        *(arg1 + 8) =
            anyhow::error::_$LT$impl$u20$anyhow..Error$GT$::msg::hbb2939ea4f0c1592(&var_48);
        *arg1 = 1;
    }
    return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he39d626ec3977c8f(arg3);
}
