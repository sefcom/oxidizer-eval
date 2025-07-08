
  int32_t** uu_tail::chunks::ReverseChunks::new::hc0b2e059517a0fa7(int32_t** arg1, int32_t* arg2)

{
    int64_t rax;
    int64_t rdx;
    rax = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(arg2, 2, 0);
    int64_t rax_1 = core::result::Result$LT$T$C$E$GT$::unwrap::hc23b1578389952be(rax, rdx);
    int64_t rax_2;
    int64_t rdx_2;
    rax_2 = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(arg2, 1, 0);
    int64_t r15_1 =
        core::result::Result$LT$T$C$E$GT$::unwrap::hc23b1578389952be(rax_2, rdx_2) - rax_1;
    uint128_t zmm1 = __subpd_xmmpd_mempd(__punpckldq_xmmdq_memdq(r15_1, data_41f440), data_41f3d0);
    uint128_t zmm0;
    zmm0 = _mm_unpackhi_pd(zmm1, zmm1) + zmm1;
    zmm0 = zmm0 * 1.52587890625e-05;
    uint64_t zmm0_1[0x2] = ceil(zmm0);
    int64_t rax_4 = zmm0_1[0];
    zmm0_1[0] = zmm0_1[0] - 9.2233720368547758e+18;
    int64_t rdx_5 = (zmm0_1[0] & rax_4 >> 0x3f) | rax_4;
    uint64_t temp0_3[0x2] = _mm_xor_pd(zmm0_1, zmm0_1);
    
    if (zmm0_1[0] < temp0_3[0])
        rdx_5 = 0;
    
    int64_t rax_5 = -1;
    
    if (zmm0_1[0] <= 1.844674407370955e+19)
        rax_5 = rdx_5;
    
    *arg1 = arg2;
    arg1[1] = r15_1;
    arg1[2] = rax_5;
    arg1[3] = 0;
    return arg1;
}
