
  int64_t* uu_hashsum::create_algorithm_from_flags::h1839fc02dfbf2f14(int64_t* arg1, void* arg2)

{
    int64_t var_40 = 0;
    char rax;
    int64_t r8;
    rax = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "md5md5sumsha1sumsha224sha224sums…", 3);
    char const* const var_90;
    int64_t var_88;
    int64_t var_80;
    int128_t var_78;
    char const* const var_68;
    int64_t rax_1;
    uint64_t rax_2;
    int64_t rcx_1;
    
    if (!rax)
    {
        label_481e85:
        char rax_3;
        int64_t r8_1;
        rax_3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "sha1shimsysv\x1b[0mnameCyan    "…", 4);
        
        if (rax_3)
        {
            uucore::features::checksum::detect_algo::hf5ee5896e94cf2e7(&var_90, 
                "sha1sumsha224sha224sumsha256sha2…", 7, 0, r8_1);
            char* rdx_2 = var_90;
            rax_1 = var_88;
            rcx_1 = var_80;
            
            if (!rdx_2)
                goto label_482527;
            
            int128_t var_50_2 = var_78;
            var_68 = rdx_2;
            int64_t var_60_2 = rax_1;
            int64_t var_58_2 = rcx_1;
            rax_2 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::hbf9d7cdaa9aa6f90(&var_40, &var_68);
            
            if (rax_2)
                goto label_482553;
            
            goto label_481f00;
        }
        
        label_481f00:
        char rax_4;
        int64_t r8_2;
        rax_4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "sha224sha224sumsha256sha256sumsh…", 6);
        
        if (rax_4)
        {
            uucore::features::checksum::detect_algo::hf5ee5896e94cf2e7(&var_90, 
                "sha224sumsha256sha256sumsha384sh…", 9, 0, r8_2);
            char* rdx_3 = var_90;
            rax_1 = var_88;
            rcx_1 = var_80;
            
            if (!rdx_3)
                goto label_482527;
            
            int128_t var_50_3 = var_78;
            var_68 = rdx_3;
            int64_t var_60_3 = rax_1;
            int64_t var_58_3 = rcx_1;
            rax_2 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::hbf9d7cdaa9aa6f90(&var_40, &var_68);
            
            if (rax_2)
                goto label_482553;
            
            goto label_481f7b;
        }
        
        label_481f7b:
        char rax_5;
        int64_t r8_3;
        rax_5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "sha256sha256sumsha384sha384sumsh…", 6);
        
        if (rax_5)
        {
            uucore::features::checksum::detect_algo::hf5ee5896e94cf2e7(&var_90, 
                "sha256sumsha384sha384sumsha512sh…", 9, 0, r8_3);
            char* rdx_4 = var_90;
            rax_1 = var_88;
            rcx_1 = var_80;
            
            if (!rdx_4)
                goto label_482527;
            
            int128_t var_50_4 = var_78;
            var_68 = rdx_4;
            int64_t var_60_4 = rax_1;
            int64_t var_58_4 = rcx_1;
            rax_2 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::hbf9d7cdaa9aa6f90(&var_40, &var_68);
            
            if (rax_2)
                goto label_482553;
            
            goto label_481ff6;
        }
        
        label_481ff6:
        char rax_6;
        int64_t r8_4;
        rax_6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "sha384sha384sumsha512sha512sumb2…", 6);
        
        if (rax_6)
        {
            uucore::features::checksum::detect_algo::hf5ee5896e94cf2e7(&var_90, 
                "sha384sumsha512sha512sumb2sumb3s…", 9, 0, r8_4);
            char* rdx_5 = var_90;
            rax_1 = var_88;
            rcx_1 = var_80;
            
            if (!rdx_5)
                goto label_482527;
            
            int128_t var_50_5 = var_78;
            var_68 = rdx_5;
            int64_t var_60_5 = rax_1;
            int64_t var_58_5 = rcx_1;
            rax_2 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::hbf9d7cdaa9aa6f90(&var_40, &var_68);
            
            if (rax_2)
                goto label_482553;
            
            goto label_482071;
        }
        
        label_482071:
        char rax_7;
        int64_t r8_5;
        rax_7 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "sha512sha512sumb2sumb3sum(uutils…", 6);
        
        if (rax_7)
        {
            uucore::features::checksum::detect_algo::hf5ee5896e94cf2e7(&var_90, 
                "sha512sumb2sumb3sum(uutils coreu…", 9, 0, r8_5);
            char* rdx_6 = var_90;
            rax_1 = var_88;
            rcx_1 = var_80;
            
            if (!rdx_6)
                goto label_482527;
            
            int128_t var_50_6 = var_78;
            var_68 = rdx_6;
            int64_t var_60_6 = rax_1;
            int64_t var_58_6 = rcx_1;
            rax_2 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::hbf9d7cdaa9aa6f90(&var_40, &var_68);
            
            if (rax_2)
                goto label_482553;
            
            goto label_4820ec;
        }
        
        label_4820ec:
        char rax_8;
        int64_t r8_6;
        rax_8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "b2sumb3sum(uutils coreutils) 0.0…", 5);
        
        if (rax_8)
        {
            uucore::features::checksum::detect_algo::hf5ee5896e94cf2e7(&var_90, 
                "b2sumb3sum(uutils coreutils) 0.0…", 5, 0, r8_6);
            char* rdx_7 = var_90;
            rax_1 = var_88;
            rcx_1 = var_80;
            
            if (!rdx_7)
                goto label_482527;
            
            int128_t var_50_7 = var_78;
            var_68 = rdx_7;
            int64_t var_60_7 = rax_1;
            int64_t var_58_7 = rcx_1;
            rax_2 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::hbf9d7cdaa9aa6f90(&var_40, &var_68);
            
            if (rax_2)
                goto label_482553;
            
            goto label_482167;
        }
        
        label_482167:
        char rax_9;
        int64_t r8_7;
        rax_9 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "b3sum(uutils coreutils) 0.0.30Co…", 5);
        
        if (rax_9)
        {
            uucore::features::checksum::detect_algo::hf5ee5896e94cf2e7(&var_90, 
                "b3sum(uutils coreutils) 0.0.30Co…", 5, 0, r8_7);
            char* rdx_8 = var_90;
            rax_1 = var_88;
            rcx_1 = var_80;
            
            if (!rdx_8)
                goto label_482527;
            
            int128_t var_50_8 = var_78;
            var_68 = rdx_8;
            int64_t var_60_8 = rax_1;
            int64_t var_58_8 = rcx_1;
            rax_2 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::hbf9d7cdaa9aa6f90(&var_40, &var_68);
            
            if (rax_2)
                goto label_482553;
            
            goto label_4821e2;
        }
        
        label_4821e2:
        
        if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "sha3\x1b[1mKindboolmut kindAuto/", 4))
        {
            int64_t rdx_9 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0a57e03627a031fa(&var_90, arg2);
            int64_t* rax_11 =
                clap_builder::parser::error::MatchesError::unwrap::h910b4fe3294f6236(&var_90);
            char rsi_9;
            
            if (!rax_11)
                rsi_9 = 0;
            else
            {
                rdx_9 = *rax_11;
                rsi_9 = 1;
            }
            
            uucore::features::checksum::create_sha3::h99da0dd0a73781c3(&var_90, rsi_9, rdx_9);
            char const* const rdx_10 = var_90;
            rax_1 = var_88;
            rcx_1 = var_80;
            
            if (!rdx_10)
                goto label_482527;
            
            int128_t var_50_9 = var_78;
            var_68 = rdx_10;
            int64_t var_60_9 = rax_1;
            int64_t var_58_9 = rcx_1;
            rax_2 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::hbf9d7cdaa9aa6f90(&var_40, &var_68);
            
            if (rax_2)
                goto label_482553;
            
            goto label_482277;
        }
        
        label_482277:
        char rax_12 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "sha3-224CommandsEALREADY0", 8);
        
        if (rax_12)
        {
            int64_t rax_13 = alloc::boxed::Box$LT$T$GT$::new::h30a79606e34047a2();
            var_90 = "SHA3-224SHA3-256RgbColor        …";
            int64_t var_88_1 = 8;
            int64_t var_80_1 = rax_13;
            var_78 = &data_551670;
            *var_78[8] = 0xe0;
            rax_2 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::hbf9d7cdaa9aa6f90(&var_40, &var_90);
        }
        
        if (rax_12 && rax_2)
            goto label_482553;
        
        char rax_14 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "sha3-256shake128deadlockSHA3-224…", 8);
        
        if (rax_14)
        {
            int64_t rax_15 = alloc::boxed::Box$LT$T$GT$::new::h30a79606e34047a2();
            var_90 = "SHA3-256RgbColor        position…";
            int64_t var_88_2 = 8;
            int64_t var_80_2 = rax_15;
            var_78 = &data_5516a0;
            *var_78[8] = 0x100;
            rax_2 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::hbf9d7cdaa9aa6f90(&var_40, &var_90);
        }
        
        if (rax_14 && rax_2)
            goto label_482553;
        
        char rax_16 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "sha3-384SHA3_224SHA3_384@", 8);
        
        if (rax_16)
        {
            int64_t rax_17 = alloc::boxed::Box$LT$T$GT$::new::h30a79606e34047a2();
            var_90 = "SHA3-384TrailingESTRPIPENotFound…";
            int64_t var_88_3 = 8;
            int64_t var_80_3 = rax_17;
            var_78 = &data_5516d0;
            *var_78[8] = 0x180;
            rax_2 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::hbf9d7cdaa9aa6f90(&var_40, &var_90);
        }
        
        if (rax_16 && rax_2)
            goto label_482553;
        
        char rax_18 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "sha3-5", 8);
        
        if (rax_18)
        {
            int64_t rax_19 = alloc::boxed::Box$LT$T$GT$::new::h30a79606e34047a2();
            var_90 = "SHA3-512shake256\n       no-name…";
            int64_t var_88_4 = 8;
            int64_t var_80_4 = rax_19;
            var_78 = &data_551700;
            *var_78[8] = 0x200;
            rax_2 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::hbf9d7cdaa9aa6f90(&var_40, &var_90);
        }
        
        if (rax_18 && rax_2)
            goto label_482553;
        
        if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "shake128deadlockSHA3-224SHA3-256…", 8))
        {
            label_482492:
            
            if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                arg2, "shake256\n       no-namesextern …", 8))
            {
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0a57e03627a031fa(&var_90, arg2);
                int64_t* rax_24 =
                    clap_builder::parser::error::MatchesError::unwrap::h910b4fe3294f6236(&var_90);
                
                if (!rax_24)
                {
                    rax_2 = alloc::boxed::Box$LT$T$GT$::new::h5151485f78da14f2(7);
                    goto label_482553;
                }
                
                int64_t rax_25 = alloc::boxed::Box$LT$T$GT$::new::h30a79606e34047a2();
                int64_t rcx_3 = *rax_24;
                var_90 = &data_411ef0[0x78];
                int64_t var_88_6 = 8;
                int64_t var_80_6 = rax_25;
                var_78 = &data_5517e8;
                *var_78[8] = rcx_3;
                rax_2 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::hbf9d7cdaa9aa6f90(&var_40, &var_90);
                
                if (rax_2)
                    goto label_482553;
                
                goto label_482506;
            }
            
            label_482506:
            int64_t rax_26 = var_40;
            
            if (!rax_26)
            {
                rax_2 = alloc::boxed::Box$LT$T$GT$::new::h5151485f78da14f2(0xe);
                goto label_482553;
            }
            
            int128_t var_28;
            *(arg1 + 0x18) = var_28;
            int128_t var_38;
            *(arg1 + 8) = var_38;
            *arg1 = rax_26;
        }
        else
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0a57e03627a031fa(
                &var_90, arg2);
            int64_t* rax_21 =
                clap_builder::parser::error::MatchesError::unwrap::h910b4fe3294f6236(&var_90);
            
            if (rax_21)
            {
                int64_t rax_22 = alloc::boxed::Box$LT$T$GT$::new::h30a79606e34047a2();
                int64_t rcx_2 = *rax_21;
                var_90 = "SHAKE128tagBLAKE2b ( ( *blake2bf…";
                int64_t var_88_5 = 8;
                int64_t var_80_5 = rax_22;
                var_78 = &data_5517b8;
                *var_78[8] = rcx_2;
                rax_2 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::hbf9d7cdaa9aa6f90(&var_40, &var_90);
                
                if (rax_2)
                    goto label_482553;
                
                goto label_482492;
            }
            
            rax_2 = alloc::boxed::Box$LT$T$GT$::new::h5151485f78da14f2(6);
            label_482553:
            arg1[1] = rax_2;
            arg1[2] = &data_551750;
            *arg1 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::hb1b168fd0887dd2e(&var_40);
        }
    }
    else
    {
        uucore::features::checksum::detect_algo::hf5ee5896e94cf2e7(&var_90, 
            "md5sumsha1sumsha224sha224sumsha2…", 6, 0, r8);
        char* rdx_1 = var_90;
        rax_1 = var_88;
        rcx_1 = var_80;
        
        if (rdx_1)
        {
            int128_t var_50_1 = var_78;
            var_68 = rdx_1;
            int64_t var_60_1 = rax_1;
            int64_t var_58_1 = rcx_1;
            rax_2 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::hbf9d7cdaa9aa6f90(&var_40, &var_68);
            
            if (rax_2)
                goto label_482553;
            
            goto label_481e85;
        }
        
        label_482527:
        arg1[1] = rax_1;
        arg1[2] = rcx_1;
        *arg1 = 0;
        core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::hb1b168fd0887dd2e(&var_40);
    }
    return arg1;
}
