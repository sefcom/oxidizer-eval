
  fn alacritty::display::meter::Meter::add_sample::h7e345f80395e864b(arg1: *mut c_void, arg2: i64, arg3: i32) -> i64

{
    let rax_6: i64 = *arg1.byte_offset(0x58);
    
    if rax_6 >= 0xa
    {
        let var_8: i64 = rax_6;
        core::panicking::panic_bounds_check::h025cadc56a971af7(rax_6, 0xa);
        /* no return */
    }
    
    let mut zmm1: u128 =
        __subpd_xmmpd_mempd(__punpckldq_xmmdq_memdq(arg2, data_4e7d80[0x10][0]), data_4e77f0);
    let mut zmm2: u128;
    zmm2 = _mm_unpackhi_pd(zmm1, zmm1) + zmm1;
    zmm2 = zmm2 * 1000000.0;
    zmm1 = *arg1.byte_offset(rax_6 << 3);
    zmm2 = zmm2 + arg3 / 1000.0;
    *arg1.byte_offset(rax_6 << 3) = zmm2;
    let zmm0: f64 = 10.0;
    zmm1 = zmm1 / zmm0;
    zmm2 = zmm2 / zmm0;
    zmm2 = zmm2 + *arg1.byte_offset(0x50) - zmm1;
    *arg1.byte_offset(0x50) = zmm2;
    let rcx: i64 = *arg1.byte_offset(0x58);
    let rdx_2: i64 = ((rcx + 1) / 5) & 0xfffffffffffffffe;
    *arg1.byte_offset(0x58) = -((rdx_2 * 5)) + rcx + 1;
    -((rdx_2 * 5)) + rcx + 1
}
