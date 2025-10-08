
  int128_t* uu_mktemp::dry_exec::h79e853eb482345ae(int128_t* arg1, int64_t arg2, uint64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6, int64_t arg7, int64_t arg8)

{
    int64_t r13 = arg6 + arg5;
    int64_t rax;
    int64_t rdx;
    rax =
        alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h1ce624207ce12e07(r13 + arg8, 1, 1);
    int64_t var_b0 = rax;
    int64_t var_a0 = 0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h0a7a3c02395513ee(&var_b0, arg4, arg4 + arg5);
    alloc::vec::Vec$LT$T$C$A$GT$::extend_trusted::h8fe8267ec7921697(&var_b0, arg6);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h0a7a3c02395513ee(&var_b0, arg7, arg8 + arg7);
    int64_t* i_1;
    int64_t rdx_4;
    i_1 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index_mut::h58b12ff6e736bfc6(arg5, r13, rdx, var_a0);
    int64_t* rax_1 = rand::rngs::thread::rng::h4ff389470e265d23();
    int64_t* var_70 = rax_1;
    _$LT$rand_core..block..BlockRng$LT$R$GT$$u20$as$u20$rand_core..RngCore$GT$::fill_bytes::h9d96d4e2b1acda12(&rax_1[2], i_1, rdx_4);
    core::ptr::drop_in_place$LT$rand..rngs..thread..ThreadRng$GT$::h76d95870443bb98b(&var_70);
    
    if (rdx_4)
    {
        char* i;
        
        if (rdx_4 < 8)
        {
            i = i_1;
            label_465eca:
            
            do
            {
                uint8_t rax_8 = *i;
                uint32_t rdx_12 = rax_8 / 0x3e;
                rax_8 -= (rdx_12 << 6) - rdx_12 * 2;
                
                if (rax_8 < 0xa)
                    rax_8 |= 0x30;
                else if (rax_8 >= 0x24)
                    rax_8 += 0x1d;
                else
                    rax_8 += 0x57;
                
                *i = rax_8;
                i = &i[1];
            } while (i != i_1 + rdx_4);
        }
        else
        {
            void* rax_3;
            uint128_t zmm0_1;
            int32_t zmm2_1[0x4];
            int128_t zmm3_1;
            int32_t zmm4_1[0x4];
            int128_t zmm5_1;
            int32_t zmm7_1[0x4];
            int32_t zmm8_1[0x4];
            int32_t zmm9_1[0x4];
            int128_t zmm11_1;
            uint128_t zmm12_1;
            int32_t zmm13_1[0x4];
            int32_t zmm14_1[0x4];
            
            if (rdx_4 >= 0x10)
            {
                rax_3 = rdx_4 & 0xfffffffffffffff0;
                int64_t rcx_2 = 0;
                zmm2_1 = data_419380;
                zmm3_1 = data_4193b0;
                zmm4_1 = (*">")[0];
                zmm5_1 = data_4194d0;
                zmm7_1 = *data_419720;
                zmm8_1 = *data_4195d0;
                zmm9_1 = data_4194e0;
                zmm11_1 = data_419730;
                
                do
                {
                    zmm0_1 = *(i_1 + rcx_2);
                    zmm13_1 = _mm_srli_epi16(zmm0_1, 1) & data_419370;
                    zmm14_1 =
                        _mm_srli_epi16(_mm_mullo_epi16(_mm_unpackhi_epi8(zmm13_1, 0), zmm2_1), 8);
                    zmm13_1 = _mm_srli_epi16(
                        _mm_packus_epi16(
                            _mm_srli_epi16(_mm_mullo_epi16(_mm_unpacklo_epi8(zmm13_1, 0), zmm2_1), 
                                8), 
                            zmm14_1), 
                        4) & zmm3_1;
                    zmm14_1 =
                        _mm_mullo_epi16(_mm_unpackhi_epi8(zmm13_1, zmm13_1[0]), zmm4_1) & zmm5_1;
                    zmm0_1 = _mm_sub_epi8(zmm0_1, 
                        _mm_packus_epi16(
                            _mm_mullo_epi16(_mm_unpacklo_epi8(zmm13_1, zmm13_1[0]), zmm4_1)
                                & zmm5_1, 
                            zmm14_1));
                    zmm12_1 = _mm_add_epi8(zmm0_1, zmm8_1);
                    char temp0_39[0x10] = _mm_cmpeq_epi8(_mm_min_epu8(zmm12_1, zmm9_1), zmm12_1);
                    zmm12_1 = _mm_add_epi8(zmm0_1, (*"WWWWWWWWWWWWWWWW")[0]);
                    zmm13_1 = _mm_cmpgt_epi8(zmm0_1, (*"################[short aliases: …")[0]);
                    *(i_1 + rcx_2) = (_mm_add_epi8(zmm0_1, zmm7_1) & zmm13_1)
                        | (zmm13_1 & ~((temp0_39 & ~(zmm0_1 | zmm11_1)) | (zmm12_1 & temp0_39)));
                    rcx_2 += 0x10;
                } while (rax_3 != rcx_2);
                
                if (rdx_4 != rax_3)
                {
                    if (rdx_4 & 8)
                        goto label_465b8f;
                    
                    i = rax_3 + i_1;
                    goto label_465eca;
                }
            }
            else
            {
                rax_3 = nullptr;
                label_465b8f:
                int64_t rdx_7 = rdx_4 & 0xfffffffffffffff8;
                i = i_1 + rdx_7;
                int64_t zmm1_1 = {0};
                zmm2_1 = data_419380;
                zmm3_1 = data_4193b0;
                zmm4_1 = (*">")[0];
                zmm5_1 = data_4194d0;
                char zmm6_1[0x10] = *"########";
                zmm7_1 = data_4197d0;
                zmm8_1 = data_419530;
                zmm9_1 = data_4196d0;
                zmm11_1 = *"00000000";
                
                do
                {
                    zmm0_1 = *(i_1 + rax_3);
                    zmm13_1 = _mm_srli_epi16(zmm0_1, 1) & data_419370;
                    zmm14_1 = _mm_srli_epi16(
                        _mm_mullo_epi16(_mm_unpackhi_epi8(zmm13_1, zmm1_1), zmm2_1), 8);
                    zmm13_1 = _mm_srli_epi16(
                        _mm_packus_epi16(
                            _mm_srli_epi16(
                                _mm_mullo_epi16(_mm_unpacklo_epi8(zmm13_1, zmm1_1), zmm2_1), 8), 
                            zmm14_1), 
                        4) & zmm3_1;
                    zmm14_1 =
                        _mm_mullo_epi16(_mm_unpackhi_epi8(zmm13_1, zmm13_1[0]), zmm4_1) & zmm5_1;
                    zmm0_1 = _mm_sub_epi8(zmm0_1, 
                        _mm_packus_epi16(
                            _mm_mullo_epi16(_mm_unpacklo_epi8(zmm13_1, zmm13_1[0]), zmm4_1)
                                & zmm5_1, 
                            zmm14_1));
                    zmm12_1 = _mm_add_epi8(zmm0_1, zmm8_1);
                    char temp0_18[0x10] = _mm_cmpeq_epi8(_mm_max_epu8(zmm12_1, zmm9_1), zmm12_1);
                    zmm12_1 = _mm_add_epi8(zmm0_1, (*"WWWWWWWW")[0]);
                    zmm13_1 = _mm_cmpgt_epi8(zmm0_1, zmm6_1);
                    *(i_1 + rax_3) = ((_mm_add_epi8(zmm0_1, zmm7_1) & zmm13_1)
                        | (zmm13_1 & ~((temp0_18 & ~zmm12_1) | ((zmm0_1 | zmm11_1) & temp0_18))))[0];
                    rax_3 += 8;
                } while (rdx_7 != rax_3);
                
                if (rdx_4 != rdx_7)
                    goto label_465eca;
            }
        }
    }
    
    int64_t var_78 = var_a0;
    uint128_t var_88 = var_b0;
    alloc::string::String::from_utf8::hcb4419710bc0e60b(&var_70, &var_88);
    void var_48;
    core::result::Result$LT$T$C$E$GT$::unwrap::h77945e3bff9165c9(&var_48, &var_70);
    std::path::Path::join::h71cca2405c68dc0d(arg1, arg2, arg3, &var_48);
    return arg1;
}
