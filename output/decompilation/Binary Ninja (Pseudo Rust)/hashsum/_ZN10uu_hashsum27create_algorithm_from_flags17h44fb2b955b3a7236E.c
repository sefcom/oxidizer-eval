
  fn uu_hashsum::create_algorithm_from_flags::h44fb2b955b3a7236(arg1: *mut i64, arg2: *mut c_void) -> *mut i64

{
    let mut var_40: i64 = 0;
    let mut rax: i8;
    let mut r8: i64;
    rax = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "md5md5sumsha1sumsha224sha224sums…", 3);
    let mut var_90: *mut c_void;
    let var_88: i64;
    let var_80: i64;
    let mut var_78: i128;
    let mut var_68: *mut c_void;
    let mut rax_1: i64;
    let mut rax_2: u64;
    let mut rcx_1: i64;
    
    if rax == 0
    {
        'label_5da155:
        let mut rax_3: i8;
        let mut r8_1: i64;
        rax_3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg2, "sha1callz", 4);
        
        if rax_3 != 0
        {
            uucore::features::checksum::detect_algo::hbb2f85fa7c8cfc19(&var_90, 
                "sha1sumsha224sha224sumsha256sha2…", 7, 0, r8_1);
            let rdx_2: *mut c_void = var_90;
            rax_1 = var_88;
            rcx_1 = var_80;
            
            if rdx_2 == 0
            {
                goto 'label_5da84b;
            }
            
            let var_50_2: i128 = var_78;
            var_68 = rdx_2;
            let var_60_2: i64 = rax_1;
            let var_58_2: i64 = rcx_1;
            rax_2 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h1bc583d45d3e50be(&var_40, &var_68);
            
            if rax_2 != 0
            {
                goto 'label_5da877;
            }
            
            goto 'label_5da1d0;
        }
        
        'label_5da1d0:
        let mut rax_4: i8;
        let mut r8_2: i64;
        rax_4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg2, "sha224sha224sumsha256sha256sumsh…", 6);
        
        if rax_4 != 0
        {
            uucore::features::checksum::detect_algo::hbb2f85fa7c8cfc19(&var_90, 
                "sha224sumsha256sha256sumsha384sh…", 9, 0, r8_2);
            let rdx_3: *mut c_void = var_90;
            rax_1 = var_88;
            rcx_1 = var_80;
            
            if rdx_3 == 0
            {
                goto 'label_5da84b;
            }
            
            let var_50_3: i128 = var_78;
            var_68 = rdx_3;
            let var_60_3: i64 = rax_1;
            let var_58_3: i64 = rcx_1;
            rax_2 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h1bc583d45d3e50be(&var_40, &var_68);
            
            if rax_2 != 0
            {
                goto 'label_5da877;
            }
            
            goto 'label_5da24b;
        }
        
        'label_5da24b:
        let mut rax_5: i8;
        let mut r8_3: i64;
        rax_5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg2, "sha256sha256sumsha384sha384sumsh…", 6);
        
        if rax_5 != 0
        {
            uucore::features::checksum::detect_algo::hbb2f85fa7c8cfc19(&var_90, 
                "sha256sumsha384sha384sumsha512sh…", 9, 0, r8_3);
            let rdx_4: *mut c_void = var_90;
            rax_1 = var_88;
            rcx_1 = var_80;
            
            if rdx_4 == 0
            {
                goto 'label_5da84b;
            }
            
            let var_50_4: i128 = var_78;
            var_68 = rdx_4;
            let var_60_4: i64 = rax_1;
            let var_58_4: i64 = rcx_1;
            rax_2 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h1bc583d45d3e50be(&var_40, &var_68);
            
            if rax_2 != 0
            {
                goto 'label_5da877;
            }
            
            goto 'label_5da2c6;
        }
        
        'label_5da2c6:
        let mut rax_6: i8;
        let mut r8_4: i64;
        rax_6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg2, "sha384sha384sumsha512sha512sumb2…", 6);
        
        if rax_6 != 0
        {
            uucore::features::checksum::detect_algo::hbb2f85fa7c8cfc19(&var_90, 
                "sha384sumsha512sha512sumb2sumb3s…", 9, 0, r8_4);
            let rdx_5: *mut c_void = var_90;
            rax_1 = var_88;
            rcx_1 = var_80;
            
            if rdx_5 == 0
            {
                goto 'label_5da84b;
            }
            
            let var_50_5: i128 = var_78;
            var_68 = rdx_5;
            let var_60_5: i64 = rax_1;
            let var_58_5: i64 = rcx_1;
            rax_2 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h1bc583d45d3e50be(&var_40, &var_68);
            
            if rax_2 != 0
            {
                goto 'label_5da877;
            }
            
            goto 'label_5da341;
        }
        
        'label_5da341:
        let mut rax_7: i8;
        let mut r8_5: i64;
        rax_7 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg2, "sha512sha512sumb2sumb3sum", 6);
        
        if rax_7 != 0
        {
            uucore::features::checksum::detect_algo::hbb2f85fa7c8cfc19(&var_90, 
                "sha512sumb2sumb3sum", 9, 0, r8_5);
            let rdx_6: *mut c_void = var_90;
            rax_1 = var_88;
            rcx_1 = var_80;
            
            if rdx_6 == 0
            {
                goto 'label_5da84b;
            }
            
            let var_50_6: i128 = var_78;
            var_68 = rdx_6;
            let var_60_6: i64 = rax_1;
            let var_58_6: i64 = rcx_1;
            rax_2 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h1bc583d45d3e50be(&var_40, &var_68);
            
            if rax_2 != 0
            {
                goto 'label_5da877;
            }
            
            goto 'label_5da3bc;
        }
        
        'label_5da3bc:
        let mut rax_8: i8;
        let mut r8_6: i64;
        rax_8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg2, "b2sumb3sum", 5);
        
        if rax_8 != 0
        {
            uucore::features::checksum::detect_algo::hbb2f85fa7c8cfc19(&var_90, "b2sumb3sum", 5, 0, 
                r8_6);
            let rdx_7: *mut c_void = var_90;
            rax_1 = var_88;
            rcx_1 = var_80;
            
            if rdx_7 == 0
            {
                goto 'label_5da84b;
            }
            
            let var_50_7: i128 = var_78;
            var_68 = rdx_7;
            let var_60_7: i64 = rax_1;
            let var_58_7: i64 = rcx_1;
            rax_2 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h1bc583d45d3e50be(&var_40, &var_68);
            
            if rax_2 != 0
            {
                goto 'label_5da877;
            }
            
            goto 'label_5da437;
        }
        
        'label_5da437:
        let mut rax_9: i8;
        let mut r8_7: i64;
        rax_9 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg2, "b3sum", 5);
        
        if rax_9 != 0
        {
            uucore::features::checksum::detect_algo::hbb2f85fa7c8cfc19(&var_90, "b3sum", 5, 0, 
                r8_7);
            let rdx_8: *mut c_void = var_90;
            rax_1 = var_88;
            rcx_1 = var_80;
            
            if rdx_8 == 0
            {
                goto 'label_5da84b;
            }
            
            let var_50_8: i128 = var_78;
            var_68 = rdx_8;
            let var_60_8: i64 = rax_1;
            let var_58_8: i64 = rcx_1;
            rax_2 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h1bc583d45d3e50be(&var_40, &var_68);
            
            if rax_2 != 0
            {
                goto 'label_5da877;
            }
            
            goto 'label_5da4b2;
        }
        
        'label_5da4b2:
        
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg2, "sha3[", 4) != 0
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h4357859c597eaa3f(
                &var_90, arg2, "bitsFA", 4);
            let mut rdx_9: *mut i64 = &var_90;
            let rax_11: *mut *mut i64 =
                clap_builder::parser::error::MatchesError::unwrap::h5d44f088bdacce08("bitsFA", 4, 
                rdx_9);
            let mut rsi_9: i64;
            
            if rax_11 == 0
            {
                rsi_9 = 0;
            }
            else
            {
                rdx_9 = *rax_11;
                rsi_9 = 1;
            }
            
            uucore::features::checksum::create_sha3::hcd73b2e9e9c5f640(&var_90, rsi_9, rdx_9);
            let rdx_10: *mut c_void = var_90;
            rax_1 = var_88;
            rcx_1 = var_80;
            
            if rdx_10 == 0
            {
                goto 'label_5da84b;
            }
            
            let var_50_9: i128 = var_78;
            var_68 = rdx_10;
            let var_60_9: i64 = rax_1;
            let var_58_9: i64 = rcx_1;
            rax_2 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h1bc583d45d3e50be(&var_40, &var_68);
            
            if rax_2 != 0
            {
                goto 'label_5da877;
            }
            
            goto 'label_5da563;
        }
        
        'label_5da563:
        let rax_12: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg2, "sha3-224", 8);
        
        if rax_12 != 0
        {
            let rax_13: i64 = alloc::boxed::Box$LT$T$GT$::new::h56ceb8bc84fcc09c();
            var_90 = "SHA3-224SHA3-256RgbColo";
            let var_88_1: i64 = 8;
            let var_80_1: i64 = rax_13;
            var_78 = &data_73e920;
            *var_78[8] = 0xe0;
            rax_2 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h1bc583d45d3e50be(&var_40, &var_90);
        }
        
        if rax_12 != 0 && rax_2 != 0
        {
            goto 'label_5da877;
        }
        
        let rax_14: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg2, "sha3-256shake128Syntax(", 8);
        
        if rax_14 != 0
        {
            let rax_15: i64 = alloc::boxed::Box$LT$T$GT$::new::h96109929ce1ae329();
            var_90 = "SHA3-256RgbColo";
            let var_88_2: i64 = 8;
            let var_80_2: i64 = rax_15;
            var_78 = &data_73e950;
            *var_78[8] = 0x100;
            rax_2 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h1bc583d45d3e50be(&var_40, &var_90);
        }
        
        if rax_14 != 0 && rax_2 != 0
        {
            goto 'label_5da877;
        }
        
        let rax_16: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg2, "sha3-384SHA3_224Pattern", 8);
        
        if rax_16 != 0
        {
            let rax_17: i64 = alloc::boxed::Box$LT$T$GT$::new::h8957ed870d0d589d();
            var_90 = "SHA3-38";
            let var_88_3: i64 = 8;
            let var_80_3: i64 = rax_17;
            var_78 = &data_73e980;
            *var_78[8] = 0x180;
            rax_2 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h1bc583d45d3e50be(&var_40, &var_90);
        }
        
        if rax_16 != 0 && rax_2 != 0
        {
            goto 'label_5da877;
        }
        
        let rax_18: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg2, "sha3-51", 8);
        
        if rax_18 != 0
        {
            let rax_19: i64 = alloc::boxed::Box$LT$T$GT$::new::h9e00f0c13a1acd4d();
            var_90 = "SHA3-512shake256S";
            let var_88_4: i64 = 8;
            let var_80_4: i64 = rax_19;
            var_78 = &data_73e9b0;
            *var_78[8] = 0x200;
            rax_2 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h1bc583d45d3e50be(&var_40, &var_90);
        }
        
        if rax_18 != 0 && rax_2 != 0
        {
            goto 'label_5da877;
        }
        
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg2, "shake128Syntax(", 8) == 0
        {
            'label_5da79a:
            
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg2, "shake256S", 8) != 0
            {
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h4357859c597eaa3f(&var_90, arg2, "bitsFA", 4);
                let rax_24: *mut i64 =
                    clap_builder::parser::error::MatchesError::unwrap::h5d44f088bdacce08("bitsFA", 
                    4, &var_90);
                
                if rax_24 == 0
                {
                    rax_2 = alloc::boxed::Box$LT$T$GT$::new::h5da6a9570b8b523b(7);
                    goto 'label_5da877;
                }
                
                let rax_25: i64 = alloc::boxed::Box$LT$T$GT$::new::h2a30d9bd725b68e7();
                let rcx_3: i64 = *rax_24;
                var_90 = "SHAKE256stride: xidstart( ";
                let var_88_6: i64 = 8;
                let var_80_6: i64 = rax_25;
                var_78 = &data_73eaa0;
                *var_78[8] = rcx_3;
                rax_2 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h1bc583d45d3e50be(&var_40, &var_90);
                
                if rax_2 != 0
                {
                    goto 'label_5da877;
                }
                
                goto 'label_5da82a;
            }
            
            'label_5da82a:
            let rax_26: i64 = var_40;
            
            if rax_26 == 0
            {
                rax_2 = alloc::boxed::Box$LT$T$GT$::new::h5da6a9570b8b523b(0xe);
                goto 'label_5da877;
            }
            
            let var_28: i128;
            *arg1.byte_offset(0x18) = var_28;
            let var_38: i128;
            *arg1.byte_offset(8) = var_38;
            *arg1 = rax_26;
        }
        else
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h4357859c597eaa3f(
                &var_90, arg2, "bitsFA", 4);
            let rax_21: *mut i64 =
                clap_builder::parser::error::MatchesError::unwrap::h5d44f088bdacce08("bitsFA", 4, 
                &var_90);
            
            if rax_21 != 0
            {
                let rax_22: i64 = alloc::boxed::Box$LT$T$GT$::new::h8cbd87c202e90656();
                let rcx_2: i64 = *rax_21;
                var_90 = "SHAKE128armenianEthiopic";
                let var_88_5: i64 = 8;
                let var_80_5: i64 = rax_22;
                var_78 = &data_73ea70;
                *var_78[8] = rcx_2;
                rax_2 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h1bc583d45d3e50be(&var_40, &var_90);
                
                if rax_2 != 0
                {
                    goto 'label_5da877;
                }
                
                goto 'label_5da79a;
            }
            
            rax_2 = alloc::boxed::Box$LT$T$GT$::new::h5da6a9570b8b523b(6);
            'label_5da877:
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
        let rdx_1: *mut c_void = var_90;
        rax_1 = var_88;
        rcx_1 = var_80;
        
        if rdx_1 != 0
        {
            let var_50_1: i128 = var_78;
            var_68 = rdx_1;
            let var_60_1: i64 = rax_1;
            let var_58_1: i64 = rcx_1;
            rax_2 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h1bc583d45d3e50be(&var_40, &var_68);
            
            if rax_2 != 0
            {
                goto 'label_5da877;
            }
            
            goto 'label_5da155;
        }
        
        'label_5da84b:
        arg1[1] = rax_1;
        arg1[2] = rcx_1;
        *arg1 = 0;
        core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::hc31e744318080425(&var_40);
    }
    arg1
}
