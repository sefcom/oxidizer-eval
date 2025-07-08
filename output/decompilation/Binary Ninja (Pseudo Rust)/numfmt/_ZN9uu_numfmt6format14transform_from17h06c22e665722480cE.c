
  fn uu_numfmt::format::transform_from::h06c22e665722480c(arg1: *mut i64, arg2: *mut i8, arg3: *mut c_void, arg4: i64, arg5: i8) -> u128

{
    let mut var_38: i64;
    let r12: i64;
    uu_numfmt::format::parse_suffix::h407c60c3b46102ef(&var_38, arg2, arg3, r12);
    let rdx: i64 = var_38;
    let result_1: i64;
    let mut result: u128 = result_1;
    let var_28: i8;
    let var_27: bool;
    
    if rdx != -0x8000000000000000
    {
        let var_22: i16;
        *arg1.byte_offset(0x16) = var_22;
        let var_26: i32;
        *arg1.byte_offset(0x12) = var_26;
        *arg1 = rdx;
        arg1[1] = result;
        arg1[2] = var_28;
        *arg1.byte_offset(0x11) = var_27;
    }
    else
    {
        let zmm1_1: u128 =
            __subpd_xmmpd_mempd(__punpckldq_xmmdq_memdq(arg4, data_415e90), data_415dd0);
        let mut zmm2_1: u128;
        zmm2_1 = _mm_unpackhi_pd(zmm1_1, zmm1_1) + zmm1_1;
        result = result * zmm2_1;
        result = uu_numfmt::format::remove_suffix::h52c5c1e5f9168522(&var_38, var_28, var_27, arg5, 
            result);
        
        if var_38 != -0x8000000000000000
        {
            arg1[2] = var_28;
            result = var_38;
            *arg1 = result;
        }
        else
        {
            let result_2: u128 = result_1;
            result = _mm_xor_pd(result, result);
            
            if arg5 == 5
            {
                result = _mm_andnot_pd(_mm_cmpeq_sd(result, result_2, 0), result_2);
            }
            else if result <= result_2
            {
                result = ceil(result_2);
            }
            else
            {
                result = __xorpd_xmmxuq_memxuq(ceil(__andpd_xmmxuq_memxuq(result_2, data_415de0)), 
                    data_416160);
            }
            
            arg1[1] = result;
            *arg1 = -0x8000000000000000;
        }
    }
    result
}
