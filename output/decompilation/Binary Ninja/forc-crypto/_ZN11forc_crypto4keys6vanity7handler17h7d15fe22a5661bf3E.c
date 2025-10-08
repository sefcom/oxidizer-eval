
  char* forc_crypto::keys::vanity::handler::h7d15fe22a5661bf3(char* arg1, int64_t* arg2)

{
    uint64_t rax = forc_crypto::keys::vanity::Arg::validate::h776811c8940670eb(arg2);
    
    if (!rax)
    {
        uint64_t rax_1 = arg2[4];
        int128_t var_1a8 = *(arg2 + 0x10);
        uint64_t rax_2 = arg2[7];
        int128_t var_188 = *(arg2 + 0x28);
        int64_t var_128_1 = arg2[0xa];
        int128_t var_138 = *(arg2 + 0x40);
        char rbp_1 = arg2[0xe];
        char r14_1 = *arg2;
        int64_t r15_1 = arg2[1];
        int64_t var_218_1 = arg2[0xd];
        int128_t var_228 = *(arg2 + 0x58);
        int64_t rax_5 = var_138;
        uint64_t var_2c0;
        uint64_t var_2b8;
        uint64_t var_2b0[0x2];
        uint64_t var_118_1;
        uint64_t var_108;
        uint64_t var_100[0x2];
        int64_t* r13;
        uint64_t zmm0_2[0x2];
        
        if (-(rax_5) == -0x8000000000000000)
        {
            uint64_t r8_1 = 0;
            int64_t temp1_1 = var_1a8;
            uint64_t rdx_1 = rax_1;
            
            if (temp1_1 == -0x8000000000000000)
                rdx_1 = 0;
            
            int128_t* rcx_1 = 1;
            int128_t* rsi = *var_1a8[8];
            
            if (temp1_1 == -0x8000000000000000)
                rsi = 1;
            
            if (var_188 != -0x8000000000000000)
            {
                r8_1 = rax_2;
                rcx_1 = *var_188[8];
            }
            
            forc_crypto::keys::vanity::HexMatcher::new::hd4658ac7716e1740(&var_2c0, rsi, rdx_1, 
                rcx_1, r8_1);
            uint64_t rcx_2 = var_2c0;
            
            if (rcx_2 == -0x8000000000000000)
            {
                *(arg1 + 8) = var_2b8;
                *arg1 = 6;
                r13 = nullptr;
                goto label_7faacc;
            }
            
            zmm0_2 = var_2b0;
            int64_t var_2a0;
            var_100 = var_2a0;
            var_108 = zmm0_2;
            var_118_1 = rcx_2;
            uint64_t var_110_2 = var_2b8;
            r13 = 1;
            goto label_7fa69b;
        }
        
        forc_crypto::keys::vanity::RegexMatcher::new::h881b9c176c268426(&var_2c0, arg2[9], 
            arg2[0xa]);
        uint64_t rcx_3 = var_2c0;
        uint64_t rax_7;
        
        if (!rcx_3)
        {
            *(arg1 + 8) = var_2b8;
            *arg1 = 6;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h223631e41b095cf4(&arg2[8]);
            r13 = 1;
            label_7faacc:
            r15_1 = 0;
            label_7faae6:
            
            if (!r15_1 && var_228 != -0x8000000000000000)
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h901b5d8570583a03(&var_228);
            
            rax_7 = rax_5 == -0x8000000000000000;
            rax_7 |= r13;
            
            if (!(rax_7 & 1))
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h223631e41b095cf4(&var_138);
        }
        else
        {
            var_100 = var_2b0;
            uint64_t var_110_1 = rcx_3;
            var_108 = var_2b8;
            var_118_1 = -0x8000000000000000;
            zmm0_2 =
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h223631e41b095cf4(&arg2[8]);
            r13 = nullptr;
            label_7fa69b:
            var_2c0 = &data_a2f038;
            int64_t var_2b8_1 = 1;
            var_2b0[0] = 8;
            zmm0_2 = _mm_xor_pd(zmm0_2, zmm0_2);
            std::io::stdio::_print::h5e446ff973c02de6(&var_2c0);
            int64_t rax_9;
            int32_t rdx_3;
            rax_9 = std::time::Instant::now::h767314cc8c6c5886();
            int64_t var_d0 = rax_9;
            int32_t var_c8_1 = rdx_3;
            int128_t var_1e8 = var_118_1;
            forc_crypto::keys::vanity::find_vanity_address_with_timeout::hda53e568c7769d8c(
                &var_2c0, &var_1e8, rbp_1, r14_1, r15_1);
            rax_7 = var_2c0;
            int64_t var_280;
            
            if (var_280 == -0x7fffffffffffffff)
            {
                *(arg1 + 8) = rax_7;
                *arg1 = 6;
                r15_1 = 0;
                r13 ^= 1;
                goto label_7faae6;
            }
            
            uint64_t zmm0_5[0x2] = var_2b8_1;
            uint64_t var_88_1[0x2] = zmm0_5;
            uint64_t var_50 = rax_7;
            uint64_t var_48_1[0x2] = zmm0_5;
            uint64_t var_38_1 = zmm0_2[0];
            int128_t var_298;
            int64_t var_98_1 = *var_298[8];
            int64_t var_288;
            int64_t var_90_1 = var_288;
            uint64_t var_a8[0x2] = zmm0_2;
            int64_t var_150 = var_280;
            int64_t rax_13;
            int32_t rdx_5;
            rax_13 = std::time::Instant::elapsed::h537da767ad82472a(&var_d0);
            uint128_t zmm0_6 = __subpd_xmmpd_mempd(
                __punpckldq_xmmdq_memdq(rax_13, data_47a5a0[0x10][0]), data_47a420);
            uint128_t zmm1_4;
            zmm1_4 = _mm_unpackhi_pd(zmm0_6, zmm0_6) + zmm0_6;
            zmm0_6 = rdx_5;
            zmm0_6 = zmm0_6 / 1000000000.0;
            zmm0_6 = zmm0_6 + zmm1_4;
            uint64_t var_250 = zmm0_6;
            var_1e8 = &var_250;
            *var_1e8[8] = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::h78a04ef564c69060;
            var_2c0 = &data_a2f048;
            int64_t var_2b8_2 = 2;
            void* const var_2a0_1 = &data_4809e8;
            var_298 = 1;
            zmm0_2[0] = &var_1e8;
            zmm0_2[1] = 1;
            std::io::stdio::_print::h5e446ff973c02de6(&var_2c0);
            _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hb5d1621b153c42fd(
                &var_250, &var_50);
            int64_t var_248;
            int64_t var_240;
            fuels_core::types::checksum_address::checksum_encode::h060efe918b86ab33(&var_1e8, 
                var_248, var_240);
            uint64_t rax_14 = var_1e8;
            uint64_t var_2d8[0x2] = var_1e8;
            int64_t rcx_6 = *var_108[8];
            r15_1 = rax_14 == 0xc;
            char r12_2;
            
            if (rax_14 != 0xc)
            {
                int128_t var_1b8;
                var_298 = var_1b8;
                var_2a0_1 = var_100;
                var_2b8_2 = var_2d8;
                zmm0_2[1] = rcx_6;
                var_2c0 = rax_14;
                *(arg1 + 8) = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h38236e235eb7cc0a(&var_2c0);
                *arg1 = 6;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h223631e41b095cf4(&var_250);
                r12_2 = 0;
                label_7fae71:
                rax_7 = var_280 == -0x8000000000000000;
                rax_7 |= r12_2;
                
                if (!(rax_7 & 1))
                {
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h223631e41b095cf4(
                        &var_150);
                    r13 ^= 1;
                }
                else
                    r13 ^= 1;
                
                goto label_7faae6;
            }
            
            uint64_t var_168[0x2] = var_2d8;
            int64_t var_158_1 = rcx_6;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h223631e41b095cf4(&var_250);
            int64_t var_268;
            int128_t var_208;
            
            if (var_280 == -0x8000000000000000)
            {
                var_268 = 0;
                int64_t var_258_1 = 0;
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd37f91379d22554a(&var_2c0, "Addressforc-plugins/forc-crypto/…", 7);
                uint64_t var_2c8_2 = zmm0_2[0];
                var_2d8 = var_2c0;
                serde_json::value::to_value::h85ee9959a652e90e(&var_2c0, &var_168);
                core::result::Result$LT$T$C$E$GT$::unwrap::hfb6a08304b238768(&var_1e8, &var_2c0);
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h6e915daebfbdef11(&var_2c0, &var_268, &var_2d8, &var_1e8);
                core::ptr::drop_in_place$LT$core..option..Option$LT$serde_json..value..Value$GT$$GT$::hb265dab470452c02(&var_2c0);
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd37f91379d22554a(&var_2c0, "PrivateKeySuccessfully found van…", 0xa);
                uint64_t var_1f8_1 = zmm0_2[0];
                var_208 = var_2c0;
                hex::encode::h3c2f8144c0de34f9(&var_2d8, &var_a8);
                serde_json::value::to_value::h85ee9959a652e90e(&var_2c0, &var_2d8);
                core::result::Result$LT$T$C$E$GT$::unwrap::hfb6a08304b238768(&var_1e8, &var_2c0);
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h6e915daebfbdef11(&var_2c0, &var_268, &var_208, &var_1e8);
                core::ptr::drop_in_place$LT$core..option..Option$LT$serde_json..value..Value$GT$$GT$::hb265dab470452c02(&var_2c0);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h223631e41b095cf4(&var_2d8);
                var_248 = var_268;
                int64_t var_238_1 = var_258_1;
                var_250 = 5;
                r12_2 = 1;
                
                if (var_228 != -0x8000000000000000)
                    goto label_7fadc4;
                
                goto label_7fae9a;
            }
            
            uint64_t var_278[0x2];
            uint64_t var_d8_1 = var_278[1];
            int128_t var_e8 = var_150;
            var_268 = 0;
            int64_t var_258_2 = 0;
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd37f91379d22554a(&var_2c0, "Addressforc-plugins/forc-crypto/…", 7);
            uint64_t var_2c8_3 = zmm0_2[0];
            var_2d8 = var_2c0;
            serde_json::value::to_value::h85ee9959a652e90e(&var_2c0, &var_168);
            core::result::Result$LT$T$C$E$GT$::unwrap::hfb6a08304b238768(&var_1e8, &var_2c0);
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h6e915daebfbdef11(
                &var_2c0, &var_268, &var_2d8, &var_1e8);
            core::ptr::drop_in_place$LT$core..option..Option$LT$serde_json..value..Value$GT$$GT$::hb265dab470452c02(&var_2c0);
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd37f91379d22554a(&var_2c0, "PrivateKeySuccessfully found van…", 0xa);
            uint64_t var_1f8_2 = zmm0_2[0];
            var_208 = var_2c0;
            hex::encode::h3c2f8144c0de34f9(&var_2d8, &var_a8);
            serde_json::value::to_value::h85ee9959a652e90e(&var_2c0, &var_2d8);
            core::result::Result$LT$T$C$E$GT$::unwrap::hfb6a08304b238768(&var_1e8, &var_2c0);
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h6e915daebfbdef11(
                &var_2c0, &var_268, &var_208, &var_1e8);
            core::ptr::drop_in_place$LT$core..option..Option$LT$serde_json..value..Value$GT$$GT$::hb265dab470452c02(&var_2c0);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h223631e41b095cf4(&var_2d8);
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd37f91379d22554a(&var_2c0, "Mnemonic", 8);
            uint64_t var_2c8_4 = zmm0_2[0];
            var_2d8 = var_2c0;
            serde_json::value::to_value::h85ee9959a652e90e(&var_2c0, &var_e8);
            core::result::Result$LT$T$C$E$GT$::unwrap::hfb6a08304b238768(&var_1e8, &var_2c0);
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h6e915daebfbdef11(
                &var_2c0, &var_268, &var_2d8, &var_1e8);
            core::ptr::drop_in_place$LT$core..option..Option$LT$serde_json..value..Value$GT$$GT$::hb265dab470452c02(&var_2c0);
            var_248 = var_268;
            int64_t var_238_2 = var_258_2;
            var_250 = 5;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h223631e41b095cf4(&var_e8);
            r12_2 = 0;
            
            if (var_228 != -0x8000000000000000)
            {
                label_7fadc4:
                serde_json::ser::to_vec_pretty::h5d650f78e1c6ca5c(&var_2c0, &var_250);
                uint64_t rax_26 = var_2c0;
                
                if (rax_26 == -0x8000000000000000)
                {
                    *(arg1 + 8) = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::hc2c4c30e19823540(var_2b8_2);
                    *arg1 = 6;
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h901b5d8570583a03(&var_228);
                    label_7fae4b:
                    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h96da786e00a46fbc(
                        &var_250);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h223631e41b095cf4(
                        &var_168);
                    r12_2 ^= 1;
                    goto label_7fae71;
                }
                
                uint64_t rcx_13 = zmm0_2[0];
                uint64_t var_c0 = rax_26;
                int64_t var_b8_1 = var_2b8_2;
                uint64_t var_b0_1 = rcx_13;
                void** rax_28 = std::fs::write::hbabee19a07ed7bc8(&var_228, &var_c0);
                
                if (!rax_28)
                    goto label_7fae9a;
                
                *(arg1 + 8) = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h12fd0a7a4d9bffcb(rax_28);
                *arg1 = 6;
                goto label_7fae4b;
            }
            
            label_7fae9a:
            int128_t zmm0_11 = var_250;
            *(arg1 + 0x10) = var_240;
            *arg1 = zmm0_11;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h223631e41b095cf4(&var_168);
            
            if (var_280 != -0x8000000000000000 && r12_2)
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h223631e41b095cf4(&var_150);
            
            if (rax_5 != -0x8000000000000000 && r13)
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h223631e41b095cf4(&var_138);
        }
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hcdf0fe8cbfd4dfb2(&var_188);
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hcdf0fe8cbfd4dfb2(&var_1a8);
    }
    else
    {
        *(arg1 + 8) = rax;
        *arg1 = 6;
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hcdf0fe8cbfd4dfb2(&arg2[2]);
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hcdf0fe8cbfd4dfb2(&arg2[5]);
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hcdf0fe8cbfd4dfb2(&arg2[8]);
        core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h0bff990a9fd4e5f3(&arg2[0xb]);
    }
    
    return arg1;
}
