
  int64_t alacritty::display::meter::Meter::add_sample::h7e345f80395e864b(void* arg1, int64_t arg2, int32_t arg3)

{
    int64_t rax_6 = *(arg1 + 0x58);
    
    if (rax_6 >= 0xa)
    {
        int64_t var_8 = rax_6;
        core::panicking::panic_bounds_check::h025cadc56a971af7(rax_6, 0xa);
        /* no return */
    }
    
    uint128_t zmm1 =
        __subpd_xmmpd_mempd(__punpckldq_xmmdq_memdq(arg2, data_4e7d80[0x10][0]), data_4e77f0);
    uint128_t zmm2;
    zmm2 = _mm_unpackhi_pd(zmm1, zmm1) + zmm1;
    zmm2 = zmm2 * 1000000.0;
    zmm1 = *(arg1 + (rax_6 << 3));
    zmm2 = zmm2 + arg3 / 1000.0;
    *(arg1 + (rax_6 << 3)) = zmm2;
    double zmm0 = 10.0;
    zmm1 = zmm1 / zmm0;
    zmm2 = zmm2 / zmm0;
    zmm2 = zmm2 + *(arg1 + 0x50) - zmm1;
    *(arg1 + 0x50) = zmm2;
    int64_t rcx = *(arg1 + 0x58);
    int64_t rdx_2 = ((rcx + 1) / 5) & 0xfffffffffffffffe;
    *(arg1 + 0x58) = -((rdx_2 * 5)) + rcx + 1;
    return -((rdx_2 * 5)) + rcx + 1;
}
