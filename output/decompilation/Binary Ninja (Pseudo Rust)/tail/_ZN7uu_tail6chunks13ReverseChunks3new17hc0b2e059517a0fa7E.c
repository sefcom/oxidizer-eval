
  fn uu_tail::chunks::ReverseChunks::new::hc0b2e059517a0fa7(arg1: *mut *mut i32, arg2: *mut i32) -> *mut *mut i32

{
    let mut rax: i64;
    let mut rdx: i64;
    rax = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(arg2, 2, 0);
    let rax_1: i64 = core::result::Result$LT$T$C$E$GT$::unwrap::hc23b1578389952be(rax, rdx);
    let mut rax_2: i64;
    let mut rdx_2: i64;
    rax_2 = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(arg2, 1, 0);
    let r15_1: i64 =
        core::result::Result$LT$T$C$E$GT$::unwrap::hc23b1578389952be(rax_2, rdx_2) - rax_1;
    let zmm1: u128 = __subpd_xmmpd_mempd(__punpckldq_xmmdq_memdq(r15_1, data_41f440), data_41f3d0);
    let mut zmm0: u128;
    zmm0 = _mm_unpackhi_pd(zmm1, zmm1) + zmm1;
    zmm0 = zmm0 * 1.52587890625e-05;
    let zmm0_1: [u64; 0x2] = ceil(zmm0);
    let rax_4: i64 = zmm0_1[0];
    zmm0_1[0] = zmm0_1[0] - 9.2233720368547758e+18;
    let mut rdx_5: i64 = (zmm0_1[0] & rax_4 >> 0x3f) | rax_4;
    let temp0_3: [u64; 0x2] = _mm_xor_pd(zmm0_1, zmm0_1);
    
    if zmm0_1[0] < temp0_3[0]
    {
        rdx_5 = 0;
    }
    
    let mut rax_5: i64 = -1;
    
    if zmm0_1[0] <= 1.844674407370955e+19
    {
        rax_5 = rdx_5;
    }
    
    *arg1 = arg2;
    arg1[1] = r15_1;
    arg1[2] = rax_5;
    arg1[3] = 0;
    arg1
}
