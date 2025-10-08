
  double uu_numfmt::format::round_with_precision::hbeea945620f7b8d9(char arg1, int64_t arg2, uint128_t arg3 @ zmm0)

{
    int64_t var_8 = arg3;
    arg3 = __subpd_xmmpd_mempd(__punpckldq_xmmdq_memdq(arg2, data_419750), data_419640[0xa0][0]);
    char var_11 = arg1;
    uint128_t zmm1;
    zmm1 = _mm_unpackhi_pd(arg3, arg3) + arg3;
    uint128_t zmm0 = pow(0x4024000000000000, zmm1);
    uint128_t zmm1_1 = zmm0;
    uint64_t var_10 = zmm0;
    zmm0 = var_8 * zmm1_1;
    return uu_numfmt::options::RoundMethod::round::h874ad1975578cac0(&var_11, zmm0, zmm1_1)
        / var_10;
}
