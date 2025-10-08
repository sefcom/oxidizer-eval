
  fn uu_numfmt::format::transform_from::hcd3fb358ec05b121(arg1: *mut i64, arg2: *mut i8, arg3: i64, arg4: i64, arg5: i8) -> u64

{
    let mut var_50: i64;
    let r13: i64;
    uu_numfmt::format::parse_suffix::h65381ef2a47d074c(&var_50, arg2, arg3, r13);
    let rdx: i64 = var_50;
    let result_1: i8;
    let mut result: u64 = result_1;
    let var_48: f64;
    let var_40: i8;
    
    if -(rdx) != -0x8000000000000000
    {
        let var_3a: i16;
        let var_54_1: i16 = var_3a;
        let var_3e: i32;
        let var_58_1: i32 = var_3e;
        *arg1.byte_offset(0x16) = var_3a;
        *arg1.byte_offset(0x12) = var_3e;
        *arg1 = rdx;
        arg1[1] = var_48;
        arg1[2] = var_40;
        *arg1.byte_offset(0x11) = result;
    }
    else
    {
        let zmm1_1: u128 =
            __subpd_xmmpd_mempd(__punpckldq_xmmdq_memdq(arg4, data_419750), data_419640[0xa0][0]);
        let zmm2_1: [f64; 0x2] = _mm_unpackhi_pd(zmm1_1, zmm1_1);
        zmm2_1[0] = zmm2_1[0] + zmm1_1;
        let mut var_38: i64;
        let zmm1_2: [u64; 0x2] = uu_numfmt::format::remove_suffix::h7f875f2aa3a3c8ad(&var_38, 
            var_40, result, arg5, var_48 * zmm2_1[0]);
        
        if var_38 != -0x8000000000000000
        {
            let result_2: u64;
            result = result_2;
            arg1[2] = result;
            *arg1 = var_38;
        }
        else
        {
            let var_30: i64;
            let mut zmm0_2: i64;
            zmm0_2 =
                uu_numfmt::format::transform_from::_$u7b$$u7b$closure$u7d$$u7d$::hb3e2a9b15b793ed1(
                arg5, var_30, zmm1_2);
            arg1[1] = zmm0_2;
            *arg1 = -0x8000000000000000;
        }
    }
    result
}
