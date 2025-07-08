
  int64_t* uu_base32::base_common::Config::from::h8f03cd9b16c9529c(int64_t* arg1, void* arg2)

{
    char const* const r15 = "filei128 as dyn ERANGEEDEADLKENA…";
    void** const var_158;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h5f358a8c68c9a234(
        &var_158, arg2, "filei128 as dyn ERANGEEDEADLKENA…", 4);
    int64_t var_68;
    clap_builder::parser::error::MatchesError::unwrap::h49b6dd2a71fba2f5(&var_68, 
        "filei128 as dyn ERANGEEDEADLKENA…", 4, &var_158);
    size_t var_1b0;
    char* var_150;
    
    if (!var_68)
    {
        label_4c110c:
        var_1b0 = -0x8000000000000000;
        label_4c1125:
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h61f91ed1ea627239(
            &var_158, arg2, "wrapdumb\x1b[5m <= \x1b[9mtrueTE…", 4);
        void* rax_5 = clap_builder::parser::error::MatchesError::unwrap::h0cc7fcf21fadb1ed(
            "wrapdumb\x1b[5m <= \x1b[9mtrueTE…", 4, &var_158);
        int64_t r12_2;
        
        if (!rax_5)
        {
            r12_2 = 0;
            label_4c119b:
            char rax_7 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg2, "decodeignore-garbageassertion fa…", 6);
            char rax_8 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg2, "ignore-garbageassertion failed: …", 0xe);
            int64_t var_1a0;
            arg1[4] = var_1a0;
            *(arg1 + 0x10) = var_1b0;
            *arg1 = r12_2;
            arg1[1] = r15;
            arg1[5] = rax_7;
            *(arg1 + 0x29) = rax_8;
        }
        else
        {
            uu_base32::base_common::Config::from::_$u7b$$u7b$closure$u7d$$u7d$::ha2ccd14d5f7590b0(
                &var_158, *(rax_5 + 8), *(rax_5 + 0x10));
            void** const rax_6 = var_158;
            r15 = var_150;
            
            if (!rax_6)
            {
                r12_2 = 1;
                goto label_4c119b;
            }
            
            arg1[1] = rax_6;
            arg1[2] = r15;
            *arg1 = 2;
            core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::hde4c27a62c966e98(&var_1b0);
        }
    }
    else
    {
        int128_t var_38;
        int128_t var_78_1 = var_38;
        int128_t var_48;
        int128_t var_88_1 = var_48;
        int128_t var_58;
        int128_t var_98_1 = var_58;
        int128_t var_a8 = var_68;
        void* rax_1 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h87b3baa98003a4ff(&var_a8);
        
        if (!rax_1)
        {
            core::option::unwrap_failed::h0e11329e76906eaa();
            /* no return */
        }
        
        void* rax_2 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h87b3baa98003a4ff(&var_a8);
        int64_t* var_1c0;
        int64_t var_198;
        void var_178;
        uint64_t rax_3;
        void** const rcx_1;
        
        if (!rax_2)
        {
            int64_t r12_1 = *(rax_1 + 8);
            r15 = *(rax_1 + 0x10);
            
            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2a5391263b8fe46e(r12_1, r15, "-invalid wrap size: wrap encoded…", 1))
                goto label_4c110c;
            
            std::fs::metadata::h44d4a21c29bf25da(&var_158, r12_1);
            void** const rdi_13 = var_158;
            
            if (rdi_13 != 2)
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hbca8dbb0b453c058(rdi_13, var_150);
                std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&var_1b0, 
                    r12_1, r15);
                goto label_4c1125;
            }
            
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hbca8dbb0b453c058(2, var_150);
            var_198 = 1;
            int128_t var_190;
            var_190 = r12_1;
            *var_190[8] = r15;
            char var_180_2 = 0;
            var_1c0 = &var_198;
            int64_t (* var_1b8_2)(void* arg1, void* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            var_158 = &data_549580;
            int64_t var_150_2 = 2;
            int64_t var_138_2 = 0;
            int64_t** var_148_2 = &var_1c0;
            int64_t var_140_2 = 1;
            core::option::Option$LT$T$GT$::map_or_else::hb37e8cc30801e00b(&var_178, &var_158);
            int32_t var_160_2 = 1;
            rax_3 = alloc::boxed::Box$LT$T$GT$::new::h89f85ffc87d48af0(&var_178);
            rcx_1 = &data_549698;
            goto label_4c10c7;
        }
        
        int128_t zmm0_2 = *(rax_2 + 8);
        var_198 = 0;
        int128_t var_190_1 = zmm0_2;
        char var_180_1 = 1;
        var_1c0 = &var_198;
        int64_t (* var_1b8_1)(void* arg1, void* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        var_158 = &data_549570;
        int64_t var_150_1 = 1;
        int64_t var_138_1 = 0;
        int64_t** var_148_1 = &var_1c0;
        int64_t var_140_1 = 1;
        core::option::Option$LT$T$GT$::map_or_else::hb37e8cc30801e00b(&var_178, &var_158);
        int32_t var_160_1 = 1;
        rax_3 = alloc::boxed::Box$LT$T$GT$::new::ha198aac8b81d8d24(&var_178);
        rcx_1 = &data_5495f0;
        label_4c10c7:
        arg1[1] = rax_3;
        arg1[2] = rcx_1;
        *arg1 = 2;
    }
    return arg1;
}
