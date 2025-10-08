
  fn uu_hashsum::create_algorithm_from_flags::h1839fc02dfbf2f14(arg1: *mut i64, arg2: *mut c_void) -> *mut i64

{
    let mut var_40: i64 = 0;
    let mut rax: i8;
    let mut r8: i64;
    rax = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "md5md5sumsha1sumsha224sha224sums…", 3);
    let mut var_90: *const i8;
    let var_88: i64;
    let var_80: i64;
    let mut var_78: i128;
    let mut var_68: *const i8;
    let mut rax_1: i64;
    let mut rax_2: u64;
    let mut rcx_1: i64;
    
    if rax == 0
    {
        'label_481e85:
        let mut rax_3: i8;
        let mut r8_1: i64;
        rax_3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "sha1shimsysv\x1b[0mnameCyan    "…", 4);
        
        if rax_3 != 0
        {
            uucore::features::checksum::detect_algo::hf5ee5896e94cf2e7(&var_90, 
                "sha1sumsha224sha224sumsha256sha2…", 7, 0, r8_1);
            let rdx_2: *mut i8 = var_90;
            rax_1 = var_88;
            rcx_1 = var_80;
            
            if rdx_2 == 0
            {
                goto 'label_482527;
            }
            
            let var_50_2: i128 = var_78;
            var_68 = rdx_2;
            let var_60_2: i64 = rax_1;
            let var_58_2: i64 = rcx_1;
            rax_2 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::hbf9d7cdaa9aa6f90(&var_40, &var_68);
            
            if rax_2 != 0
            {
                goto 'label_482553;
            }
            
            goto 'label_481f00;
        }
        
        'label_481f00:
        let mut rax_4: i8;
        let mut r8_2: i64;
        rax_4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "sha224sha224sumsha256sha256sumsh…", 6);
        
        if rax_4 != 0
        {
            uucore::features::checksum::detect_algo::hf5ee5896e94cf2e7(&var_90, 
                "sha224sumsha256sha256sumsha384sh…", 9, 0, r8_2);
            let rdx_3: *mut i8 = var_90;
            rax_1 = var_88;
            rcx_1 = var_80;
            
            if rdx_3 == 0
            {
                goto 'label_482527;
            }
            
            let var_50_3: i128 = var_78;
            var_68 = rdx_3;
            let var_60_3: i64 = rax_1;
            let var_58_3: i64 = rcx_1;
            rax_2 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::hbf9d7cdaa9aa6f90(&var_40, &var_68);
            
            if rax_2 != 0
            {
                goto 'label_482553;
            }
            
            goto 'label_481f7b;
        }
        
        'label_481f7b:
        let mut rax_5: i8;
        let mut r8_3: i64;
        rax_5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "sha256sha256sumsha384sha384sumsh…", 6);
        
        if rax_5 != 0
        {
            uucore::features::checksum::detect_algo::hf5ee5896e94cf2e7(&var_90, 
                "sha256sumsha384sha384sumsha512sh…", 9, 0, r8_3);
            let rdx_4: *mut i8 = var_90;
            rax_1 = var_88;
            rcx_1 = var_80;
            
            if rdx_4 == 0
            {
                goto 'label_482527;
            }
            
            let var_50_4: i128 = var_78;
            var_68 = rdx_4;
            let var_60_4: i64 = rax_1;
            let var_58_4: i64 = rcx_1;
            rax_2 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::hbf9d7cdaa9aa6f90(&var_40, &var_68);
            
            if rax_2 != 0
            {
                goto 'label_482553;
            }
            
            goto 'label_481ff6;
        }
        
        'label_481ff6:
        let mut rax_6: i8;
        let mut r8_4: i64;
        rax_6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "sha384sha384sumsha512sha512sumb2…", 6);
        
        if rax_6 != 0
        {
            uucore::features::checksum::detect_algo::hf5ee5896e94cf2e7(&var_90, 
                "sha384sumsha512sha512sumb2sumb3s…", 9, 0, r8_4);
            let rdx_5: *mut i8 = var_90;
            rax_1 = var_88;
            rcx_1 = var_80;
            
            if rdx_5 == 0
            {
                goto 'label_482527;
            }
            
            let var_50_5: i128 = var_78;
            var_68 = rdx_5;
            let var_60_5: i64 = rax_1;
            let var_58_5: i64 = rcx_1;
            rax_2 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::hbf9d7cdaa9aa6f90(&var_40, &var_68);
            
            if rax_2 != 0
            {
                goto 'label_482553;
            }
            
            goto 'label_482071;
        }
        
        'label_482071:
        let mut rax_7: i8;
        let mut r8_5: i64;
        rax_7 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "sha512sha512sumb2sumb3sum(uutils…", 6);
        
        if rax_7 != 0
        {
            uucore::features::checksum::detect_algo::hf5ee5896e94cf2e7(&var_90, 
                "sha512sumb2sumb3sum(uutils coreu…", 9, 0, r8_5);
            let rdx_6: *mut i8 = var_90;
            rax_1 = var_88;
            rcx_1 = var_80;
            
            if rdx_6 == 0
            {
                goto 'label_482527;
            }
            
            let var_50_6: i128 = var_78;
            var_68 = rdx_6;
            let var_60_6: i64 = rax_1;
            let var_58_6: i64 = rcx_1;
            rax_2 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::hbf9d7cdaa9aa6f90(&var_40, &var_68);
            
            if rax_2 != 0
            {
                goto 'label_482553;
            }
            
            goto 'label_4820ec;
        }
        
        'label_4820ec:
        let mut rax_8: i8;
        let mut r8_6: i64;
        rax_8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "b2sumb3sum(uutils coreutils) 0.0…", 5);
        
        if rax_8 != 0
        {
            uucore::features::checksum::detect_algo::hf5ee5896e94cf2e7(&var_90, 
                "b2sumb3sum(uutils coreutils) 0.0…", 5, 0, r8_6);
            let rdx_7: *mut i8 = var_90;
            rax_1 = var_88;
            rcx_1 = var_80;
            
            if rdx_7 == 0
            {
                goto 'label_482527;
            }
            
            let var_50_7: i128 = var_78;
            var_68 = rdx_7;
            let var_60_7: i64 = rax_1;
            let var_58_7: i64 = rcx_1;
            rax_2 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::hbf9d7cdaa9aa6f90(&var_40, &var_68);
            
            if rax_2 != 0
            {
                goto 'label_482553;
            }
            
            goto 'label_482167;
        }
        
        'label_482167:
        let mut rax_9: i8;
        let mut r8_7: i64;
        rax_9 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "b3sum(uutils coreutils) 0.0.30Co…", 5);
        
        if rax_9 != 0
        {
            uucore::features::checksum::detect_algo::hf5ee5896e94cf2e7(&var_90, 
                "b3sum(uutils coreutils) 0.0.30Co…", 5, 0, r8_7);
            let rdx_8: *mut i8 = var_90;
            rax_1 = var_88;
            rcx_1 = var_80;
            
            if rdx_8 == 0
            {
                goto 'label_482527;
            }
            
            let var_50_8: i128 = var_78;
            var_68 = rdx_8;
            let var_60_8: i64 = rax_1;
            let var_58_8: i64 = rcx_1;
            rax_2 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::hbf9d7cdaa9aa6f90(&var_40, &var_68);
            
            if rax_2 != 0
            {
                goto 'label_482553;
            }
            
            goto 'label_4821e2;
        }
        
        'label_4821e2:
        
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "sha3\x1b[1mKindboolmut kindAuto/", 4) != 0
        {
            let mut rdx_9: i64 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0a57e03627a031fa(&var_90, arg2);
            let rax_11: *mut i64 =
                clap_builder::parser::error::MatchesError::unwrap::h910b4fe3294f6236(&var_90);
            let mut rsi_9: i8;
            
            if rax_11 == 0
            {
                rsi_9 = 0;
            }
            else
            {
                rdx_9 = *rax_11;
                rsi_9 = 1;
            }
            
            uucore::features::checksum::create_sha3::h99da0dd0a73781c3(&var_90, rsi_9, rdx_9);
            let rdx_10: *const i8 = var_90;
            rax_1 = var_88;
            rcx_1 = var_80;
            
            if rdx_10 == 0
            {
                goto 'label_482527;
            }
            
            let var_50_9: i128 = var_78;
            var_68 = rdx_10;
            let var_60_9: i64 = rax_1;
            let var_58_9: i64 = rcx_1;
            rax_2 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::hbf9d7cdaa9aa6f90(&var_40, &var_68);
            
            if rax_2 != 0
            {
                goto 'label_482553;
            }
            
            goto 'label_482277;
        }
        
        'label_482277:
        let rax_12: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "sha3-224CommandsEALREADY0", 8);
        
        if rax_12 != 0
        {
            let rax_13: i64 = alloc::boxed::Box$LT$T$GT$::new::h30a79606e34047a2();
            var_90 = "SHA3-224SHA3-256RgbColor        …";
            let var_88_1: i64 = 8;
            let var_80_1: i64 = rax_13;
            var_78 = &data_551670;
            *var_78[8] = 0xe0;
            rax_2 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::hbf9d7cdaa9aa6f90(&var_40, &var_90);
        }
        
        if rax_12 != 0 && rax_2 != 0
        {
            goto 'label_482553;
        }
        
        let rax_14: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "sha3-256shake128deadlockSHA3-224…", 8);
        
        if rax_14 != 0
        {
            let rax_15: i64 = alloc::boxed::Box$LT$T$GT$::new::h30a79606e34047a2();
            var_90 = "SHA3-256RgbColor        position…";
            let var_88_2: i64 = 8;
            let var_80_2: i64 = rax_15;
            var_78 = &data_5516a0;
            *var_78[8] = 0x100;
            rax_2 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::hbf9d7cdaa9aa6f90(&var_40, &var_90);
        }
        
        if rax_14 != 0 && rax_2 != 0
        {
            goto 'label_482553;
        }
        
        let rax_16: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "sha3-384SHA3_224SHA3_384@", 8);
        
        if rax_16 != 0
        {
            let rax_17: i64 = alloc::boxed::Box$LT$T$GT$::new::h30a79606e34047a2();
            var_90 = "SHA3-384TrailingESTRPIPENotFound…";
            let var_88_3: i64 = 8;
            let var_80_3: i64 = rax_17;
            var_78 = &data_5516d0;
            *var_78[8] = 0x180;
            rax_2 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::hbf9d7cdaa9aa6f90(&var_40, &var_90);
        }
        
        if rax_16 != 0 && rax_2 != 0
        {
            goto 'label_482553;
        }
        
        let rax_18: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "sha3-5", 8);
        
        if rax_18 != 0
        {
            let rax_19: i64 = alloc::boxed::Box$LT$T$GT$::new::h30a79606e34047a2();
            var_90 = "SHA3-512shake256\n       no-name…";
            let var_88_4: i64 = 8;
            let var_80_4: i64 = rax_19;
            var_78 = &data_551700;
            *var_78[8] = 0x200;
            rax_2 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::hbf9d7cdaa9aa6f90(&var_40, &var_90);
        }
        
        if rax_18 != 0 && rax_2 != 0
        {
            goto 'label_482553;
        }
        
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "shake128deadlockSHA3-224SHA3-256…", 8) == 0
        {
            'label_482492:
            
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                arg2, "shake256\n       no-namesextern …", 8) != 0
            {
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0a57e03627a031fa(&var_90, arg2);
                let rax_24: *mut i64 =
                    clap_builder::parser::error::MatchesError::unwrap::h910b4fe3294f6236(&var_90);
                
                if rax_24 == 0
                {
                    rax_2 = alloc::boxed::Box$LT$T$GT$::new::h5151485f78da14f2(7);
                    goto 'label_482553;
                }
                
                let rax_25: i64 = alloc::boxed::Box$LT$T$GT$::new::h30a79606e34047a2();
                let rcx_3: i64 = *rax_24;
                var_90 = &data_411ef0[0x78];
                let var_88_6: i64 = 8;
                let var_80_6: i64 = rax_25;
                var_78 = &data_5517e8;
                *var_78[8] = rcx_3;
                rax_2 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::hbf9d7cdaa9aa6f90(&var_40, &var_90);
                
                if rax_2 != 0
                {
                    goto 'label_482553;
                }
                
                goto 'label_482506;
            }
            
            'label_482506:
            let rax_26: i64 = var_40;
            
            if rax_26 == 0
            {
                rax_2 = alloc::boxed::Box$LT$T$GT$::new::h5151485f78da14f2(0xe);
                goto 'label_482553;
            }
            
            let var_28: i128;
            *arg1.byte_offset(0x18) = var_28;
            let var_38: i128;
            *arg1.byte_offset(8) = var_38;
            *arg1 = rax_26;
        }
        else
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0a57e03627a031fa(
                &var_90, arg2);
            let rax_21: *mut i64 =
                clap_builder::parser::error::MatchesError::unwrap::h910b4fe3294f6236(&var_90);
            
            if rax_21 != 0
            {
                let rax_22: i64 = alloc::boxed::Box$LT$T$GT$::new::h30a79606e34047a2();
                let rcx_2: i64 = *rax_21;
                var_90 = "SHAKE128tagBLAKE2b ( ( *blake2bf…";
                let var_88_5: i64 = 8;
                let var_80_5: i64 = rax_22;
                var_78 = &data_5517b8;
                *var_78[8] = rcx_2;
                rax_2 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::hbf9d7cdaa9aa6f90(&var_40, &var_90);
                
                if rax_2 != 0
                {
                    goto 'label_482553;
                }
                
                goto 'label_482492;
            }
            
            rax_2 = alloc::boxed::Box$LT$T$GT$::new::h5151485f78da14f2(6);
            'label_482553:
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
        let rdx_1: *mut i8 = var_90;
        rax_1 = var_88;
        rcx_1 = var_80;
        
        if rdx_1 != 0
        {
            let var_50_1: i128 = var_78;
            var_68 = rdx_1;
            let var_60_1: i64 = rax_1;
            let var_58_1: i64 = rcx_1;
            rax_2 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::hbf9d7cdaa9aa6f90(&var_40, &var_68);
            
            if rax_2 != 0
            {
                goto 'label_482553;
            }
            
            goto 'label_481e85;
        }
        
        'label_482527:
        arg1[1] = rax_1;
        arg1[2] = rcx_1;
        *arg1 = 0;
        core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::hb1b168fd0887dd2e(&var_40);
    }
    arg1
}
