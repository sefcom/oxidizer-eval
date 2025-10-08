
  uint64_t alacritty::display::bell::VisualBell::intensity_at_instant::h7ef172ac2da99aa5(int64_t* arg1, int64_t arg2, int32_t arg3, uint64_t arg4[0x2] @ zmm0)

{
    int64_t var_28 = arg2;
    int32_t var_20 = arg3;
    int64_t r15 = *arg1;
    uint64_t result;
    result = !r15;
    int32_t rbx = arg1[1];
    _mm_xor_pd(arg4, arg4);
    
    if (!(result & !rbx))
    {
        result = arg1[3];
        
        if (result != 0x3b9aca00)
        {
            int64_t rcx_1 = arg1[2];
            
            if (arg2 != rcx_1)
            {
                if (arg2 >= rcx_1)
                {
                    label_849d02:
                    int64_t rax;
                    int32_t rdx;
                    rax = std::time::Instant::duration_since::h569f2ab177f38507(&var_28, rcx_1);
                    uint128_t zmm0 = _mm_unpacklo_epi64(rax, r15);
                    zmm0 = _mm_add_pd(
                        __subpd_xmmpd_mempd(_mm_srli_epi64(zmm0, 0x20) | data_4e8220[0x70][0], 
                            data_4e82a0), 
                        (data_4e9c80 & zmm0) | *data_4e9250);
                    uint128_t zmm4_1 = _mm_unpacklo_epi64(rdx, rbx);
                    uint128_t zmm1_1 = *data_4e9250;
                    zmm4_1 = _mm_add_pd(
                        __divpd_xmmpd_mempd(_mm_sub_pd(zmm4_1 | zmm1_1, zmm1_1), data_4e8540), 
                        zmm0);
                    zmm4_1 = zmm4_1 / _mm_unpackhi_pd(zmm4_1, zmm4_1);
                    zmm4_1 = __minsd_xmmsd_memsd(zmm4_1, 0x3ff0000000000000);
                    result = jump_table_4f1f44[arg1[4]] + &jump_table_4f1f44;
                    double zmm2_1;
                    
                    switch (result)
                    {
                        case 0x849d94:
                        {
                            zmm0 = 0x3fd0000000000000;
                            zmm4_1 = alacritty::display::bell::cubic_bezier::h4df3262c1e733036(
                                zmm0, 0x3fb999999999999a, zmm0, 1.0, zmm4_1);
                            break;
                        }
                        case 0x849db5:
                        {
                            zmm4_1 = alacritty::display::bell::cubic_bezier::h4df3262c1e733036(
                                0x3fd0000000000000, 0x3fdd70a3d70a3d71, 0.45000000000000001, 
                                0.93999999999999995, zmm4_1);
                            break;
                        }
                        case 0x849dda:
                        {
                            zmm4_1 = alacritty::display::bell::cubic_bezier::h4df3262c1e733036(
                                0x3fb3333333333333, 0x3fea3d70a3d70a3d, 0.16500000000000001, 1.0, 
                                zmm4_1);
                            break;
                        }
                        case 0x849df4:
                        {
                            zmm4_1 = alacritty::display::bell::cubic_bezier::h4df3262c1e733036(
                                0x3fd8f5c28f5c28f6, 0x3fe2666666666666, 0.56499999999999995, 1.0, 
                                zmm4_1);
                            break;
                        }
                        case 0x849e0e:
                        {
                            zmm0 = 0x3fcd70a3d70a3d71;
                            zmm2_1 = 0.32000000000000001;
                            label_849e6c:
                            zmm1_1 = 0x3ff0000000000000;
                            zmm4_1 = alacritty::display::bell::cubic_bezier::h4df3262c1e733036(
                                zmm0, zmm1_1, zmm2_1, zmm1_1, zmm4_1);
                            break;
                        }
                        case 0x849e20:
                        {
                            zmm4_1 = alacritty::display::bell::cubic_bezier::h4df3262c1e733036(
                                0x3fcb851eb851eb85, 0x3fe3851eb851eb85, 0.35499999999999998, 1.0, 
                                zmm4_1);
                            break;
                        }
                        case 0x849e3a:
                        {
                            zmm4_1 = alacritty::display::bell::cubic_bezier::h4df3262c1e733036(
                                0x3fc51eb851eb851f, 0x3feae147ae147ae1, 0.44, 1.0, zmm4_1);
                            break;
                        }
                        case 0x849e5c:
                        {
                            zmm0 = 0x3fc851eb851eb852;
                            zmm2_1 = 0.22;
                            goto label_849e6c;
                        }
                    }
                    
                    zmm0 = 0x3ff0000000000000 - zmm4_1;
                }
            }
            else if (arg3 >= result)
                goto label_849d02;
        }
    }
    
    return result;
}
