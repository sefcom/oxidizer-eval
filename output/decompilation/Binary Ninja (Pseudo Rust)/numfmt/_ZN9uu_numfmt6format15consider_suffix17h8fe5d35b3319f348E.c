
  fn uu_numfmt::format::consider_suffix::h8fe5d35b3319f348(arg1: *mut i64, arg2: i8, arg3: i8, arg4: i64, arg5: [u64; 0x2] @ zmm0) -> *mut c_void

{
    let mut var_38: i64 = 0x706050403020100;
    let mut rsi: i8 = 2;
    
    if arg2 - 2 < 4
    {
        rsi = arg2 - 2;
    }
    
    let mut result: *mut c_void = jump_table_41a3f8[rsi] + &jump_table_41a3f8;
    let mut rdx: u64;
    let mut rbx: i8;
    let mut rsi_1: *const i8;
    
    match result
    {
        0x46a010 =>
        {
            rsi_1 = "Unit 'auto' isn't supported with…";
            rdx = 0x2d;
        }
        0x46a02d =>
        {
            result = &data_41aab8;
            rbx = 0;
            'label_46a04a:
            let mut zmm1: u128 = _mm_and_pd(data_4196f0, arg5);
            let zmm3: f64 = *result.byte_offset(8);
            
            if -1.0 + zmm3 >= zmm1
            {
                goto 'label_46a083;
            }
            
            let mut rbp: i64;
            rbp = 1;
            let mut var_30: f64;
            let mut r14_1: *mut f64;
            let mut r15_1: i64;
            
            if !(*result.byte_offset(0x10) <= zmm1)
            {
                r14_1 = &*var_38[1];
                r15_1 = 1;
                'label_46a14d:
                var_30 = zmm3;
                zmm1 = *result.byte_offset(r15_1 << 3);
                let mut zmm0_1: [u64; 0x2];
                
                if arg4 == 0
                {
                    zmm0_1 = uu_numfmt::format::div_round::hdf3f58dd879fd2ae(arg3, arg5, zmm1);
                }
                else
                {
                    arg5[0] = arg5[0] / zmm1;
                    zmm0_1 = uu_numfmt::format::round_with_precision::hbeea945620f7b8d9(arg3, arg4, 
                        arg5);
                }
                
                let temp0_2: [u64; 0x2] = _mm_and_pd(data_4196f0, zmm0_1);
                let zmm2_2: f64 = var_30;
                
                if temp0_2[0] >= zmm2_2
                {
                    if rbp == 0
                    {
                        core::panicking::panic_bounds_check::h025cadc56a971af7(8, 8);
                        /* no return */
                    }
                    
                    zmm0_1[0] = zmm0_1[0] / zmm2_2;
                    result = *(&var_38).byte_offset(r15_1);
                }
                else
                {
                    result = *r14_1.byte_offset(-1);
                }
                
                arg1[1] = zmm0_1;
                arg1[2] = result;
                *arg1.byte_offset(0x11) = rbx;
                *arg1 = -0x8000000000000000;
                return result;
            }
            
            if !(*result.byte_offset(0x18) <= zmm1)
            {
                r14_1 = &*var_38[2];
                r15_1 = 2;
                goto 'label_46a14d;
            }
            
            if !(*result.byte_offset(0x20) <= zmm1)
            {
                r14_1 = &*var_38[3];
                r15_1 = 3;
                goto 'label_46a14d;
            }
            
            if !(*result.byte_offset(0x28) <= zmm1)
            {
                r14_1 = &*var_38[4];
                r15_1 = 4;
                goto 'label_46a14d;
            }
            
            if !(*result.byte_offset(0x30) <= zmm1)
            {
                r14_1 = &*var_38[5];
                r15_1 = 5;
                goto 'label_46a14d;
            }
            
            if !(*result.byte_offset(0x38) <= zmm1)
            {
                r14_1 = &*var_38[6];
                r15_1 = 6;
                goto 'label_46a14d;
            }
            
            if !(*result.byte_offset(0x40) <= zmm1)
            {
                r14_1 = &*var_38[7];
                r15_1 = 7;
                goto 'label_46a14d;
            }
            
            if !(*result.byte_offset(0x48) <= zmm1)
            {
                r14_1 = &var_30;
                r15_1 = 8;
                rbp = 0;
                goto 'label_46a14d;
            }
            
            rsi_1 = "Number is too big and unsupporte…";
            rdx = 0x21;
        }
        0x46a038 =>
        {
            rbx = arg2 & 1;
            result = &data_41ab08;
            goto 'label_46a04a;
        }
        0x46a083 =>
        {
            'label_46a083:
            arg1[1] = arg5;
            *arg1.byte_offset(0x11) = 2;
            *arg1 = -0x8000000000000000;
            return result;
        }
    }
    
    /* tailcall */
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h4c3223c430555e40(arg1, rsi_1, rdx)
}
