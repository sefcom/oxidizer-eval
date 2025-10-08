
  void* uu_numfmt::format::consider_suffix::h8fe5d35b3319f348(int64_t* arg1, char arg2, char arg3, int64_t arg4, uint64_t arg5[0x2] @ zmm0)

{
    int64_t var_38 = 0x706050403020100;
    char rsi = 2;
    
    if (arg2 - 2 < 4)
        rsi = arg2 - 2;
    
    void* result = jump_table_41a3f8[rsi] + &jump_table_41a3f8;
    uint64_t rdx;
    char rbx;
    char const* const rsi_1;
    
    switch (result)
    {
        case 0x46a010:
        {
            rsi_1 = "Unit 'auto' isn't supported with…";
            rdx = 0x2d;
            break;
        }
        case 0x46a02d:
        {
            result = &data_41aab8;
            rbx = 0;
            label_46a04a:
            uint128_t zmm1 = _mm_and_pd(data_4196f0, arg5);
            double zmm3 = *(result + 8);
            
            if (-1.0 + zmm3 >= zmm1)
                goto label_46a083;
            
            int64_t rbp;
            rbp = 1;
            double var_30;
            double* r14_1;
            int64_t r15_1;
            
            if (!(*(result + 0x10) <= zmm1))
            {
                r14_1 = &*var_38[1];
                r15_1 = 1;
                label_46a14d:
                var_30 = zmm3;
                zmm1 = *(result + (r15_1 << 3));
                uint64_t zmm0_1[0x2];
                
                if (!arg4)
                    zmm0_1 = uu_numfmt::format::div_round::hdf3f58dd879fd2ae(arg3, arg5, zmm1);
                else
                {
                    arg5[0] = arg5[0] / zmm1;
                    zmm0_1 = uu_numfmt::format::round_with_precision::hbeea945620f7b8d9(arg3, arg4, 
                        arg5);
                }
                
                uint64_t temp0_2[0x2] = _mm_and_pd(data_4196f0, zmm0_1);
                double zmm2_2 = var_30;
                
                if (temp0_2[0] >= zmm2_2)
                {
                    if (!rbp)
                    {
                        core::panicking::panic_bounds_check::h025cadc56a971af7(8, 8);
                        /* no return */
                    }
                    
                    zmm0_1[0] = zmm0_1[0] / zmm2_2;
                    result = *(&var_38 + r15_1);
                }
                else
                    result = *(r14_1 - 1);
                
                arg1[1] = zmm0_1;
                arg1[2] = result;
                *(arg1 + 0x11) = rbx;
                *arg1 = -0x8000000000000000;
                return result;
            }
            
            if (!(*(result + 0x18) <= zmm1))
            {
                r14_1 = &*var_38[2];
                r15_1 = 2;
                goto label_46a14d;
            }
            
            if (!(*(result + 0x20) <= zmm1))
            {
                r14_1 = &*var_38[3];
                r15_1 = 3;
                goto label_46a14d;
            }
            
            if (!(*(result + 0x28) <= zmm1))
            {
                r14_1 = &*var_38[4];
                r15_1 = 4;
                goto label_46a14d;
            }
            
            if (!(*(result + 0x30) <= zmm1))
            {
                r14_1 = &*var_38[5];
                r15_1 = 5;
                goto label_46a14d;
            }
            
            if (!(*(result + 0x38) <= zmm1))
            {
                r14_1 = &*var_38[6];
                r15_1 = 6;
                goto label_46a14d;
            }
            
            if (!(*(result + 0x40) <= zmm1))
            {
                r14_1 = &*var_38[7];
                r15_1 = 7;
                goto label_46a14d;
            }
            
            if (!(*(result + 0x48) <= zmm1))
            {
                r14_1 = &var_30;
                r15_1 = 8;
                rbp = 0;
                goto label_46a14d;
            }
            
            rsi_1 = "Number is too big and unsupporte…";
            rdx = 0x21;
            break;
        }
        case 0x46a038:
        {
            rbx = arg2 & 1;
            result = &data_41ab08;
            goto label_46a04a;
        }
        case 0x46a083:
        {
            label_46a083:
            arg1[1] = arg5;
            *(arg1 + 0x11) = 2;
            *arg1 = -0x8000000000000000;
            return result;
            break;
        }
    }
    
    /* tailcall */
    return _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h4c3223c430555e40(arg1, rsi_1, rdx);
}
