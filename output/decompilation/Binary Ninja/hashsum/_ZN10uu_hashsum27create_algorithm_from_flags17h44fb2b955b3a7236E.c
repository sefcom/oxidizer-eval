
  int64_t* uu_hashsum::create_algorithm_from_flags::h44fb2b955b3a7236(int64_t* arg1, void* arg2)

{
    int64_t var_40 = 0;
    char rax;
    int64_t r8;
    rax = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "md5md5sumsha1sumsha224sha224sums…", 3);
    void* var_90;
    int64_t var_88;
    int64_t var_80;
    int128_t var_78;
    void* var_68;
    int64_t rax_1;
    uint64_t rax_2;
    int64_t rcx_1;
    
    if (!rax)
    {
        label_5da155:
        char rax_3;
        int64_t r8_1;
        rax_3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg2, "sha1callz", 4);
        
        if (rax_3)
        {
            uucore::features::checksum::detect_algo::hbb2f85fa7c8cfc19(&var_90, 
                "sha1sumsha224sha224sumsha256sha2…", 7, 0, r8_1);
            void* rdx_2 = var_90;
            rax_1 = var_88;
            rcx_1 = var_80;
            
            if (!rdx_2)
                goto label_5da84b;
            
            int128_t var_50_2 = var_78;
            var_68 = rdx_2;
            int64_t var_60_2 = rax_1;
            int64_t var_58_2 = rcx_1;
            rax_2 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h1bc583d45d3e50be(&var_40, &var_68);
            
            if (rax_2)
                goto label_5da877;
            
            goto label_5da1d0;
        }
        
        label_5da1d0:
        char rax_4;
        int64_t r8_2;
        rax_4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg2, "sha224sha224sumsha256sha256sumsh…", 6);
        
        if (rax_4)
        {
            uucore::features::checksum::detect_algo::hbb2f85fa7c8cfc19(&var_90, 
                "sha224sumsha256sha256sumsha384sh…", 9, 0, r8_2);
            void* rdx_3 = var_90;
            rax_1 = var_88;
            rcx_1 = var_80;
            
            if (!rdx_3)
                goto label_5da84b;
            
            int128_t var_50_3 = var_78;
            var_68 = rdx_3;
            int64_t var_60_3 = rax_1;
            int64_t var_58_3 = rcx_1;
            rax_2 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h1bc583d45d3e50be(&var_40, &var_68);
            
            if (rax_2)
                goto label_5da877;
            
            goto label_5da24b;
        }
        
        label_5da24b:
        char rax_5;
        int64_t r8_3;
        rax_5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg2, "sha256sha256sumsha384sha384sumsh…", 6);
        
        if (rax_5)
        {
            uucore::features::checksum::detect_algo::hbb2f85fa7c8cfc19(&var_90, 
                "sha256sumsha384sha384sumsha512sh…", 9, 0, r8_3);
            void* rdx_4 = var_90;
            rax_1 = var_88;
            rcx_1 = var_80;
            
            if (!rdx_4)
                goto label_5da84b;
            
            int128_t var_50_4 = var_78;
            var_68 = rdx_4;
            int64_t var_60_4 = rax_1;
            int64_t var_58_4 = rcx_1;
            rax_2 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h1bc583d45d3e50be(&var_40, &var_68);
            
            if (rax_2)
                goto label_5da877;
            
            goto label_5da2c6;
        }
        
        label_5da2c6:
        char rax_6;
        int64_t r8_4;
        rax_6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg2, "sha384sha384sumsha512sha512sumb2…", 6);
        
        if (rax_6)
        {
            uucore::features::checksum::detect_algo::hbb2f85fa7c8cfc19(&var_90, 
                "sha384sumsha512sha512sumb2sumb3s…", 9, 0, r8_4);
            void* rdx_5 = var_90;
            rax_1 = var_88;
            rcx_1 = var_80;
            
            if (!rdx_5)
                goto label_5da84b;
            
            int128_t var_50_5 = var_78;
            var_68 = rdx_5;
            int64_t var_60_5 = rax_1;
            int64_t var_58_5 = rcx_1;
            rax_2 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h1bc583d45d3e50be(&var_40, &var_68);
            
            if (rax_2)
                goto label_5da877;
            
            goto label_5da341;
        }
        
        label_5da341:
        char rax_7;
        int64_t r8_5;
        rax_7 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg2, "sha512sha512sumb2sumb3sum", 6);
        
        if (rax_7)
        {
            uucore::features::checksum::detect_algo::hbb2f85fa7c8cfc19(&var_90, 
                "sha512sumb2sumb3sum", 9, 0, r8_5);
            void* rdx_6 = var_90;
            rax_1 = var_88;
            rcx_1 = var_80;
            
            if (!rdx_6)
                goto label_5da84b;
            
            int128_t var_50_6 = var_78;
            var_68 = rdx_6;
            int64_t var_60_6 = rax_1;
            int64_t var_58_6 = rcx_1;
            rax_2 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h1bc583d45d3e50be(&var_40, &var_68);
            
            if (rax_2)
                goto label_5da877;
            
            goto label_5da3bc;
        }
        
        label_5da3bc:
        char rax_8;
        int64_t r8_6;
        rax_8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg2, "b2sumb3sum", 5);
        
        if (rax_8)
        {
            uucore::features::checksum::detect_algo::hbb2f85fa7c8cfc19(&var_90, "b2sumb3sum", 5, 0, 
                r8_6);
            void* rdx_7 = var_90;
            rax_1 = var_88;
            rcx_1 = var_80;
            
            if (!rdx_7)
                goto label_5da84b;
            
            int128_t var_50_7 = var_78;
            var_68 = rdx_7;
            int64_t var_60_7 = rax_1;
            int64_t var_58_7 = rcx_1;
            rax_2 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h1bc583d45d3e50be(&var_40, &var_68);
            
            if (rax_2)
                goto label_5da877;
            
            goto label_5da437;
        }
        
        label_5da437:
        char rax_9;
        int64_t r8_7;
        rax_9 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg2, "b3sum", 5);
        
        if (rax_9)
        {
            uucore::features::checksum::detect_algo::hbb2f85fa7c8cfc19(&var_90, "b3sum", 5, 0, 
                r8_7);
            void* rdx_8 = var_90;
            rax_1 = var_88;
            rcx_1 = var_80;
            
            if (!rdx_8)
                goto label_5da84b;
            
            int128_t var_50_8 = var_78;
            var_68 = rdx_8;
            int64_t var_60_8 = rax_1;
            int64_t var_58_8 = rcx_1;
            rax_2 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h1bc583d45d3e50be(&var_40, &var_68);
            
            if (rax_2)
                goto label_5da877;
            
            goto label_5da4b2;
        }
        
        label_5da4b2:
        
        if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg2, "sha3[", 4))
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h4357859c597eaa3f(
                &var_90, arg2, "bitsFA", 4);
            int64_t* rdx_9 = &var_90;
            int64_t** rax_11 = clap_builder::parser::error::MatchesError::unwrap::h5d44f088bdacce08(
                "bitsFA", 4, rdx_9);
            int64_t rsi_9;
            
            if (!rax_11)
                rsi_9 = 0;
            else
            {
                rdx_9 = *rax_11;
                rsi_9 = 1;
            }
            
            uucore::features::checksum::create_sha3::hcd73b2e9e9c5f640(&var_90, rsi_9, rdx_9);
            void* rdx_10 = var_90;
            rax_1 = var_88;
            rcx_1 = var_80;
            
            if (!rdx_10)
                goto label_5da84b;
            
            int128_t var_50_9 = var_78;
            var_68 = rdx_10;
            int64_t var_60_9 = rax_1;
            int64_t var_58_9 = rcx_1;
            rax_2 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h1bc583d45d3e50be(&var_40, &var_68);
            
            if (rax_2)
                goto label_5da877;
            
            goto label_5da563;
        }
        
        label_5da563:
        char rax_12 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg2, "sha3-224", 8);
        
        if (rax_12)
        {
            int64_t rax_13 = alloc::boxed::Box$LT$T$GT$::new::h56ceb8bc84fcc09c();
            var_90 = "SHA3-224SHA3-256RgbColo";
            int64_t var_88_1 = 8;
            int64_t var_80_1 = rax_13;
            var_78 = &data_73e920;
            *var_78[8] = 0xe0;
            rax_2 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h1bc583d45d3e50be(&var_40, &var_90);
        }
        
        if (rax_12 && rax_2)
            goto label_5da877;
        
        char rax_14 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg2, "sha3-256shake128Syntax(", 8);
        
        if (rax_14)
        {
            int64_t rax_15 = alloc::boxed::Box$LT$T$GT$::new::h96109929ce1ae329();
            var_90 = "SHA3-256RgbColo";
            int64_t var_88_2 = 8;
            int64_t var_80_2 = rax_15;
            var_78 = &data_73e950;
            *var_78[8] = 0x100;
            rax_2 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h1bc583d45d3e50be(&var_40, &var_90);
        }
        
        if (rax_14 && rax_2)
            goto label_5da877;
        
        char rax_16 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg2, "sha3-384SHA3_224Pattern", 8);
        
        if (rax_16)
        {
            int64_t rax_17 = alloc::boxed::Box$LT$T$GT$::new::h8957ed870d0d589d();
            var_90 = "SHA3-38";
            int64_t var_88_3 = 8;
            int64_t var_80_3 = rax_17;
            var_78 = &data_73e980;
            *var_78[8] = 0x180;
            rax_2 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h1bc583d45d3e50be(&var_40, &var_90);
        }
        
        if (rax_16 && rax_2)
            goto label_5da877;
        
        char rax_18 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg2, "sha3-51", 8);
        
        if (rax_18)
        {
            int64_t rax_19 = alloc::boxed::Box$LT$T$GT$::new::h9e00f0c13a1acd4d();
            var_90 = "SHA3-512shake256S";
            int64_t var_88_4 = 8;
            int64_t var_80_4 = rax_19;
            var_78 = &data_73e9b0;
            *var_78[8] = 0x200;
            rax_2 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h1bc583d45d3e50be(&var_40, &var_90);
        }
        
        if (rax_18 && rax_2)
            goto label_5da877;
        
        if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg2, "shake128Syntax(", 8))
        {
            label_5da79a:
            
            if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg2, "shake256S", 8))
            {
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h4357859c597eaa3f(&var_90, arg2, "bitsFA", 4);
                int64_t* rax_24 =
                    clap_builder::parser::error::MatchesError::unwrap::h5d44f088bdacce08("bitsFA", 
                    4, &var_90);
                
                if (!rax_24)
                {
                    rax_2 = alloc::boxed::Box$LT$T$GT$::new::h5da6a9570b8b523b(7);
                    goto label_5da877;
                }
                
                int64_t rax_25 = alloc::boxed::Box$LT$T$GT$::new::h2a30d9bd725b68e7();
                int64_t rcx_3 = *rax_24;
                var_90 = "SHAKE256stride: xidstart( ";
                int64_t var_88_6 = 8;
                int64_t var_80_6 = rax_25;
                var_78 = &data_73eaa0;
                *var_78[8] = rcx_3;
                rax_2 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h1bc583d45d3e50be(&var_40, &var_90);
                
                if (rax_2)
                    goto label_5da877;
                
                goto label_5da82a;
            }
            
            label_5da82a:
            int64_t rax_26 = var_40;
            
            if (!rax_26)
            {
                rax_2 = alloc::boxed::Box$LT$T$GT$::new::h5da6a9570b8b523b(0xe);
                goto label_5da877;
            }
            
            int128_t var_28;
            *(arg1 + 0x18) = var_28;
            int128_t var_38;
            *(arg1 + 8) = var_38;
            *arg1 = rax_26;
        }
        else
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h4357859c597eaa3f(
                &var_90, arg2, "bitsFA", 4);
            int64_t* rax_21 = clap_builder::parser::error::MatchesError::unwrap::h5d44f088bdacce08(
                "bitsFA", 4, &var_90);
            
            if (rax_21)
            {
                int64_t rax_22 = alloc::boxed::Box$LT$T$GT$::new::h8cbd87c202e90656();
                int64_t rcx_2 = *rax_21;
                var_90 = "SHAKE128armenianEthiopic";
                int64_t var_88_5 = 8;
                int64_t var_80_5 = rax_22;
                var_78 = &data_73ea70;
                *var_78[8] = rcx_2;
                rax_2 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h1bc583d45d3e50be(&var_40, &var_90);
                
                if (rax_2)
                    goto label_5da877;
                
                goto label_5da79a;
            }
            
            rax_2 = alloc::boxed::Box$LT$T$GT$::new::h5da6a9570b8b523b(6);
            label_5da877:
            arg1[1] = rax_2;
            arg1[2] = &data_73ea00;
            *arg1 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::hc31e744318080425(&var_40);
        }
    }
    else
    {
        uucore::features::checksum::detect_algo::hbb2f85fa7c8cfc19(&var_90, 
            "md5sumsha1sumsha224sha224sumsha2…", 6, 0, r8);
        void* rdx_1 = var_90;
        rax_1 = var_88;
        rcx_1 = var_80;
        
        if (rdx_1)
        {
            int128_t var_50_1 = var_78;
            var_68 = rdx_1;
            int64_t var_60_1 = rax_1;
            int64_t var_58_1 = rcx_1;
            rax_2 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h1bc583d45d3e50be(&var_40, &var_68);
            
            if (rax_2)
                goto label_5da877;
            
            goto label_5da155;
        }
        
        label_5da84b:
        arg1[1] = rax_1;
        arg1[2] = rcx_1;
        *arg1 = 0;
        core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::hc31e744318080425(&var_40);
    }
    return arg1;
}
