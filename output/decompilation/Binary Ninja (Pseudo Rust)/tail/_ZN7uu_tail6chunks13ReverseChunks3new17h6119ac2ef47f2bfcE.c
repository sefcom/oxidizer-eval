
  fn uu_tail::chunks::ReverseChunks::new::h6119ac2ef47f2bfc(arg1: *mut *mut i32, arg2: *mut i32) -> *mut *mut i32

{
    let mut rax: i8;
    let mut rdx: i64;
    rax = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::stream_position::hea3f1471eccd6c38(arg2);
    let rax_1: i64 = core::result::Result$LT$T$C$E$GT$::unwrap::hada310c9832e5020(rax, rdx);
    let mut rax_2: i8;
    let mut rdx_2: i64;
    rax_2 = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::h04cf64217ea00d1d(arg2, 1, 0);
    let r15_1: i64 =
        core::result::Result$LT$T$C$E$GT$::unwrap::hada310c9832e5020(rax_2, rdx_2) - rax_1;
    let zmm1: u128 =
        __subpd_xmmpd_mempd(__punpckldq_xmmdq_memdq(r15_1, data_4220f0[0x10][0]), data_422070);
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
