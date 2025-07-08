
  void* uu_numfmt::format::consider_suffix::h00abba19284ba538(int64_t* arg1, char arg2, char arg3, int64_t arg4, uint64_t arg5[0x2] @ zmm0)

{
    int64_t var_28 = 0x706050403020100;
    char rsi = 2;
    
    if (arg2 - 2 < 4)
        rsi = arg2 - 2;
    
    void* result = jump_table_422eb4[rsi] + &jump_table_422eb4;
    uint64_t rdx;
    char rbx;
    char const* const rsi_1;
    
    switch (result)
    {
        case 0x4c3bbf:
        {
            rsi_1 = "Unit 'auto' isn't supported with…";
            rdx = 0x2d;
            break;
        }
        case 0x4c3bd5:
        {
            result = &data_423078;
            rbx = 0;
            label_4c3bf2:
            uint128_t zmm1 = _mm_and_pd(data_415de0, arg5);
            double zmm3 = *(result + 8);
            
            if (-1.0 + zmm3 >= zmm1)
                goto label_4c3cc7;
            
            int64_t r14_1 = 1;
            int64_t rbp;
            rbp = 1;
            
            if (*(result + 0x10) > zmm1)
                goto label_4c3cab;
            
            r14_1 = 2;
            
            if (*(result + 0x18) > zmm1)
                goto label_4c3cab;
            
            r14_1 = 3;
            
            if (*(result + 0x20) > zmm1)
                goto label_4c3cab;
            
            r14_1 = 4;
            
            if (*(result + 0x28) > zmm1)
                goto label_4c3cab;
            
            r14_1 = 5;
            
            if (*(result + 0x30) > zmm1)
                goto label_4c3cab;
            
            r14_1 = 6;
            
            if (*(result + 0x38) > zmm1)
                goto label_4c3cab;
            
            r14_1 = 7;
            
            if (*(result + 0x40) > zmm1)
                goto label_4c3cab;
            
            if (!(*(result + 0x48) <= zmm1))
            {
                r14_1 = 8;
                rbp = 0;
                label_4c3cab:
                zmm1 = *(result + (r14_1 << 3));
                uint64_t zmm0[0x2];
                
                if (!arg4)
                    zmm0 = uu_numfmt::format::div_round::hcdae20ad69b44c09(arg3, arg5, zmm1);
                else
                {
                    arg5[0] = arg5[0] / zmm1;
                    zmm0 = uu_numfmt::format::round_with_precision::h7f1d296807047857(arg3, arg4, 
                        arg5);
                }
                
                if (_mm_and_pd(data_415de0, zmm0)[0] >= zmm3)
                {
                    if (!rbp)
                    {
                        core::panicking::panic_bounds_check::h25a5330941572dd1(8, 8);
                        /* no return */
                    }
                    
                    zmm0[0] = zmm0[0] / zmm3;
                }
                else
                    r14_1 -= 1;
                
                result = *(&var_28 + r14_1);
                arg1[1] = zmm0;
                arg1[2] = result;
                *(arg1 + 0x11) = rbx;
                *arg1 = -0x8000000000000000;
                return result;
            }
            
            rsi_1 = "Number is too big and unsupporte…";
            rdx = 0x21;
            break;
        }
        case 0x4c3be0:
        {
            rbx = arg2 & 1;
            result = &data_4230c8;
            goto label_4c3bf2;
        }
        case 0x4c3cc7:
        {
            label_4c3cc7:
            arg1[1] = arg5;
            *(arg1 + 0x11) = 2;
            *arg1 = -0x8000000000000000;
            return result;
            break;
        }
    }
    
    return _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h523a2f825c855b37(arg1, 
        rsi_1, rdx);
}
