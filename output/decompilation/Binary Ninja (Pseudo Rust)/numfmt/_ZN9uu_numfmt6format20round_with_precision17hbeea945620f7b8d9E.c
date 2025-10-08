
  fn uu_numfmt::format::round_with_precision::hbeea945620f7b8d9(arg1: i8, arg2: i64, arg3: u128 @ zmm0) -> f64

{
    let var_8: i64 = arg3;
    arg3 = __subpd_xmmpd_mempd(__punpckldq_xmmdq_memdq(arg2, data_419750), data_419640[0xa0][0]);
    let mut var_11: i8 = arg1;
    let mut zmm1: u128;
    zmm1 = _mm_unpackhi_pd(arg3, arg3) + arg3;
    let mut zmm0: u128 = pow(0x4024000000000000, zmm1);
    let zmm1_1: u128 = zmm0;
    let var_10: u64 = zmm0;
    zmm0 = var_8 * zmm1_1;
    uu_numfmt::options::RoundMethod::round::h874ad1975578cac0(&var_11, zmm0, zmm1_1) / var_10
}
