
  fn forc_crypto::keys::vanity::handler::h7d15fe22a5661bf3(arg1: *mut i8, arg2: *mut i64) -> *mut i8

{
    let rax: u64 = forc_crypto::keys::vanity::Arg::validate::h776811c8940670eb(arg2);
    
    if rax == 0
    {
        let rax_1: u64 = arg2[4];
        let mut var_1a8: i128 = *arg2.byte_offset(0x10);
        let rax_2: u64 = arg2[7];
        let mut var_188: i128 = *arg2.byte_offset(0x28);
        let var_128_1: i64 = arg2[0xa];
        let mut var_138: i128 = *arg2.byte_offset(0x40);
        let rbp_1: i8 = arg2[0xe];
        let r14_1: i8 = *arg2;
        let mut r15_1: i64 = arg2[1];
        let var_218_1: i64 = arg2[0xd];
        let mut var_228: i128 = *arg2.byte_offset(0x58);
        let rax_5: i64 = var_138;
        let mut var_2c0: u64;
        let var_2b8: u64;
        let var_2b0: [u64; 0x2];
        let mut var_118_1: u64;
        let mut var_108: u64;
        let mut var_100: [u64; 0x2];
        let mut r13: *mut i64;
        let mut zmm0_2: [u64; 0x2];
        
        if -(rax_5) == -0x8000000000000000
        {
            let mut r8_1: u64 = 0;
            let temp1_1: i64 = var_1a8;
            let mut rdx_1: u64 = rax_1;
            
            if temp1_1 == -0x8000000000000000
            {
                rdx_1 = 0;
            }
            
            let mut rcx_1: *mut i128 = 1;
            let mut rsi: *mut i128 = *var_1a8[8];
            
            if temp1_1 == -0x8000000000000000
            {
                rsi = 1;
            }
            
            if var_188 != -0x8000000000000000
            {
                r8_1 = rax_2;
                rcx_1 = *var_188[8];
            }
            
            forc_crypto::keys::vanity::HexMatcher::new::hd4658ac7716e1740(&var_2c0, rsi, rdx_1, 
                rcx_1, r8_1);
            let rcx_2: u64 = var_2c0;
            
            if rcx_2 == -0x8000000000000000
            {
                *arg1.byte_offset(8) = var_2b8;
                *arg1 = 6;
                r13 = nullptr;
                goto 'label_7faacc;
            }
            
            zmm0_2 = var_2b0;
            let var_2a0: i64;
            var_100 = var_2a0;
            var_108 = zmm0_2;
            var_118_1 = rcx_2;
            let var_110_2: u64 = var_2b8;
            r13 = 1;
            goto 'label_7fa69b;
        }
        
        forc_crypto::keys::vanity::RegexMatcher::new::h881b9c176c268426(&var_2c0, arg2[9], 
            arg2[0xa]);
        let rcx_3: u64 = var_2c0;
        let mut rax_7: u64;
        
        if rcx_3 == 0
        {
            *arg1.byte_offset(8) = var_2b8;
            *arg1 = 6;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h223631e41b095cf4(&arg2[8]);
            r13 = 1;
            'label_7faacc:
            r15_1 = 0;
            'label_7faae6:
            
            if r15_1 == 0 && var_228 != -0x8000000000000000
            {
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h901b5d8570583a03(&var_228);
            }
            
            rax_7 = rax_5 == -0x8000000000000000;
            rax_7 |= r13;
            
            if (rax_7 & 1) == 0
            {
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h223631e41b095cf4(&var_138);
            }
        }
        else
        {
            var_100 = var_2b0;
            let var_110_1: u64 = rcx_3;
            var_108 = var_2b8;
            var_118_1 = -0x8000000000000000;
            zmm0_2 =
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h223631e41b095cf4(&arg2[8]);
            r13 = nullptr;
            'label_7fa69b:
            var_2c0 = &data_a2f038;
            let var_2b8_1: i64 = 1;
            var_2b0[0] = 8;
            zmm0_2 = _mm_xor_pd(zmm0_2, zmm0_2);
            std::io::stdio::_print::h5e446ff973c02de6(&var_2c0);
            let mut rax_9: i64;
            let mut rdx_3: i32;
            rax_9 = std::time::Instant::now::h767314cc8c6c5886();
            let mut var_d0: i64 = rax_9;
            let var_c8_1: i32 = rdx_3;
            let mut var_1e8: i128 = var_118_1;
            forc_crypto::keys::vanity::find_vanity_address_with_timeout::hda53e568c7769d8c(
                &var_2c0, &var_1e8, rbp_1, r14_1, r15_1);
            rax_7 = var_2c0;
            let var_280: i64;
            
            if var_280 == -0x7fffffffffffffff
            {
                *arg1.byte_offset(8) = rax_7;
                *arg1 = 6;
                r15_1 = 0;
                r13 ^= 1;
                goto 'label_7faae6;
            }
            
            let zmm0_5: [u64; 0x2] = var_2b8_1;
            let var_88_1: [u64; 0x2] = zmm0_5;
            let mut var_50: u64 = rax_7;
            let var_48_1: [u64; 0x2] = zmm0_5;
            let var_38_1: u64 = zmm0_2[0];
            let mut var_298: i128;
            let var_98_1: i64 = *var_298[8];
            let var_288: i64;
            let var_90_1: i64 = var_288;
            let mut var_a8: [u64; 0x2] = zmm0_2;
            let mut var_150: i64 = var_280;
            let mut rax_13: i64;
            let mut rdx_5: i32;
            rax_13 = std::time::Instant::elapsed::h537da767ad82472a(&var_d0);
            let mut zmm0_6: u128 = __subpd_xmmpd_mempd(
                __punpckldq_xmmdq_memdq(rax_13, data_47a5a0[0x10][0]), data_47a420);
            let mut zmm1_4: u128;
            zmm1_4 = _mm_unpackhi_pd(zmm0_6, zmm0_6) + zmm0_6;
            zmm0_6 = rdx_5;
            zmm0_6 = zmm0_6 / 1000000000.0;
            zmm0_6 = zmm0_6 + zmm1_4;
            let mut var_250: u64 = zmm0_6;
            var_1e8 = &var_250;
            *var_1e8[8] = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::h78a04ef564c69060;
            var_2c0 = &data_a2f048;
            let mut var_2b8_2: i64 = 2;
            let mut var_2a0_1: *mut c_void = &data_4809e8;
            var_298 = 1;
            zmm0_2[0] = &var_1e8;
            zmm0_2[1] = 1;
            std::io::stdio::_print::h5e446ff973c02de6(&var_2c0);
            _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hb5d1621b153c42fd(
                &var_250, &var_50);
            let mut var_248: i64;
            let var_240: i64;
            fuels_core::types::checksum_address::checksum_encode::h060efe918b86ab33(&var_1e8, 
                var_248, var_240);
            let rax_14: u64 = var_1e8;
            let mut var_2d8: [u64; 0x2] = var_1e8;
            let rcx_6: i64 = *var_108[8];
            r15_1 = rax_14 == 0xc;
            let mut r12_2: i8;
            
            if rax_14 != 0xc
            {
                let var_1b8: i128;
                var_298 = var_1b8;
                var_2a0_1 = var_100;
                var_2b8_2 = var_2d8;
                zmm0_2[1] = rcx_6;
                var_2c0 = rax_14;
                *arg1.byte_offset(8) = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h38236e235eb7cc0a(&var_2c0);
                *arg1 = 6;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h223631e41b095cf4(&var_250);
                r12_2 = 0;
                'label_7fae71:
                rax_7 = var_280 == -0x8000000000000000;
                rax_7 |= r12_2;
                
                if (rax_7 & 1) == 0
                {
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h223631e41b095cf4(
                        &var_150);
                    r13 ^= 1;
                }
                else
                {
                    r13 ^= 1;
                }
                
                goto 'label_7faae6;
            }
            
            let mut var_168: [u64; 0x2] = var_2d8;
            let var_158_1: i64 = rcx_6;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h223631e41b095cf4(&var_250);
            let mut var_268: i64;
            let mut var_208: i128;
            
            if var_280 == -0x8000000000000000
            {
                var_268 = 0;
                let var_258_1: i64 = 0;
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd37f91379d22554a(&var_2c0, "Addressforc-plugins/forc-crypto/…", 7);
                let var_2c8_2: u64 = zmm0_2[0];
                var_2d8 = var_2c0;
                serde_json::value::to_value::h85ee9959a652e90e(&var_2c0, &var_168);
                core::result::Result$LT$T$C$E$GT$::unwrap::hfb6a08304b238768(&var_1e8, &var_2c0);
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h6e915daebfbdef11(&var_2c0, &var_268, &var_2d8, &var_1e8);
                core::ptr::drop_in_place$LT$core..option..Option$LT$serde_json..value..Value$GT$$GT$::hb265dab470452c02(&var_2c0);
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd37f91379d22554a(&var_2c0, "PrivateKeySuccessfully found van…", 0xa);
                let var_1f8_1: u64 = zmm0_2[0];
                var_208 = var_2c0;
                hex::encode::h3c2f8144c0de34f9(&var_2d8, &var_a8);
                serde_json::value::to_value::h85ee9959a652e90e(&var_2c0, &var_2d8);
                core::result::Result$LT$T$C$E$GT$::unwrap::hfb6a08304b238768(&var_1e8, &var_2c0);
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h6e915daebfbdef11(&var_2c0, &var_268, &var_208, &var_1e8);
                core::ptr::drop_in_place$LT$core..option..Option$LT$serde_json..value..Value$GT$$GT$::hb265dab470452c02(&var_2c0);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h223631e41b095cf4(&var_2d8);
                var_248 = var_268;
                let var_238_1: i64 = var_258_1;
                var_250 = 5;
                r12_2 = 1;
                
                if var_228 != -0x8000000000000000
                {
                    goto 'label_7fadc4;
                }
                
                goto 'label_7fae9a;
            }
            
            let var_278: [u64; 0x2];
            let var_d8_1: u64 = var_278[1];
            let mut var_e8: i128 = var_150;
            var_268 = 0;
            let var_258_2: i64 = 0;
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd37f91379d22554a(&var_2c0, "Addressforc-plugins/forc-crypto/…", 7);
            let var_2c8_3: u64 = zmm0_2[0];
            var_2d8 = var_2c0;
            serde_json::value::to_value::h85ee9959a652e90e(&var_2c0, &var_168);
            core::result::Result$LT$T$C$E$GT$::unwrap::hfb6a08304b238768(&var_1e8, &var_2c0);
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h6e915daebfbdef11(
                &var_2c0, &var_268, &var_2d8, &var_1e8);
            core::ptr::drop_in_place$LT$core..option..Option$LT$serde_json..value..Value$GT$$GT$::hb265dab470452c02(&var_2c0);
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd37f91379d22554a(&var_2c0, "PrivateKeySuccessfully found van…", 0xa);
            let var_1f8_2: u64 = zmm0_2[0];
            var_208 = var_2c0;
            hex::encode::h3c2f8144c0de34f9(&var_2d8, &var_a8);
            serde_json::value::to_value::h85ee9959a652e90e(&var_2c0, &var_2d8);
            core::result::Result$LT$T$C$E$GT$::unwrap::hfb6a08304b238768(&var_1e8, &var_2c0);
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h6e915daebfbdef11(
                &var_2c0, &var_268, &var_208, &var_1e8);
            core::ptr::drop_in_place$LT$core..option..Option$LT$serde_json..value..Value$GT$$GT$::hb265dab470452c02(&var_2c0);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h223631e41b095cf4(&var_2d8);
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd37f91379d22554a(&var_2c0, "Mnemonic", 8);
            let var_2c8_4: u64 = zmm0_2[0];
            var_2d8 = var_2c0;
            serde_json::value::to_value::h85ee9959a652e90e(&var_2c0, &var_e8);
            core::result::Result$LT$T$C$E$GT$::unwrap::hfb6a08304b238768(&var_1e8, &var_2c0);
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h6e915daebfbdef11(
                &var_2c0, &var_268, &var_2d8, &var_1e8);
            core::ptr::drop_in_place$LT$core..option..Option$LT$serde_json..value..Value$GT$$GT$::hb265dab470452c02(&var_2c0);
            var_248 = var_268;
            let var_238_2: i64 = var_258_2;
            var_250 = 5;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h223631e41b095cf4(&var_e8);
            r12_2 = 0;
            
            if var_228 != -0x8000000000000000
            {
                'label_7fadc4:
                serde_json::ser::to_vec_pretty::h5d650f78e1c6ca5c(&var_2c0, &var_250);
                let rax_26: u64 = var_2c0;
                
                if rax_26 == -0x8000000000000000
                {
                    *arg1.byte_offset(8) = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::hc2c4c30e19823540(var_2b8_2);
                    *arg1 = 6;
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h901b5d8570583a03(&var_228);
                    'label_7fae4b:
                    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h96da786e00a46fbc(
                        &var_250);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h223631e41b095cf4(
                        &var_168);
                    r12_2 ^= 1;
                    goto 'label_7fae71;
                }
                
                let rcx_13: u64 = zmm0_2[0];
                let mut var_c0: u64 = rax_26;
                let var_b8_1: i64 = var_2b8_2;
                let var_b0_1: u64 = rcx_13;
                let rax_28: *mut *mut c_void = std::fs::write::hbabee19a07ed7bc8(&var_228, &var_c0);
                
                if rax_28 == 0
                {
                    goto 'label_7fae9a;
                }
                
                *arg1.byte_offset(8) = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h12fd0a7a4d9bffcb(rax_28);
                *arg1 = 6;
                goto 'label_7fae4b;
            }
            
            'label_7fae9a:
            let zmm0_11: i128 = var_250;
            *arg1.byte_offset(0x10) = var_240;
            *arg1 = zmm0_11;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h223631e41b095cf4(&var_168);
            
            if var_280 != -0x8000000000000000 && r12_2 != 0
            {
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h223631e41b095cf4(&var_150);
            }
            
            if rax_5 != -0x8000000000000000 && r13 != 0
            {
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h223631e41b095cf4(&var_138);
            }
        }
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hcdf0fe8cbfd4dfb2(&var_188);
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hcdf0fe8cbfd4dfb2(&var_1a8);
    }
    else
    {
        *arg1.byte_offset(8) = rax;
        *arg1 = 6;
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hcdf0fe8cbfd4dfb2(&arg2[2]);
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hcdf0fe8cbfd4dfb2(&arg2[5]);
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hcdf0fe8cbfd4dfb2(&arg2[8]);
        core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h0bff990a9fd4e5f3(&arg2[0xb]);
    }
    
    arg1
}
