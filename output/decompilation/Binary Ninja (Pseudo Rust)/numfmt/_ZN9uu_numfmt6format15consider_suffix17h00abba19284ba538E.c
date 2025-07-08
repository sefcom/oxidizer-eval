
  fn uu_numfmt::format::consider_suffix::h00abba19284ba538(arg1: *mut i64, arg2: i8, arg3: i8, arg4: i64, arg5: [u64; 0x2] @ zmm0) -> *mut c_void

{
    let mut var_28: i64 = 0x706050403020100;
    let mut rsi: i8 = 2;
    
    if arg2 - 2 < 4
    {
        rsi = arg2 - 2;
    }
    
    let mut result: *mut c_void = jump_table_422eb4[rsi] + &jump_table_422eb4;
    let mut rdx: u64;
    let mut rbx: i8;
    let mut rsi_1: *const i8;
    
    match result
    {
        0x4c3bbf =>
        {
            rsi_1 = "Unit 'auto' isn't supported with…";
            rdx = 0x2d;
        }
        0x4c3bd5 =>
        {
            result = &data_423078;
            rbx = 0;
            'label_4c3bf2:
            let mut zmm1: u128 = _mm_and_pd(data_415de0, arg5);
            let zmm3: f64 = *result.byte_offset(8);
            
            if -1.0 + zmm3 >= zmm1
            {
                goto 'label_4c3cc7;
            }
            
            let mut r14_1: i64 = 1;
            let mut rbp: i64;
            rbp = 1;
            
            if *result.byte_offset(0x10) > zmm1
            {
                goto 'label_4c3cab;
            }
            
            r14_1 = 2;
            
            if *result.byte_offset(0x18) > zmm1
            {
                goto 'label_4c3cab;
            }
            
            r14_1 = 3;
            
            if *result.byte_offset(0x20) > zmm1
            {
                goto 'label_4c3cab;
            }
            
            r14_1 = 4;
            
            if *result.byte_offset(0x28) > zmm1
            {
                goto 'label_4c3cab;
            }
            
            r14_1 = 5;
            
            if *result.byte_offset(0x30) > zmm1
            {
                goto 'label_4c3cab;
            }
            
            r14_1 = 6;
            
            if *result.byte_offset(0x38) > zmm1
            {
                goto 'label_4c3cab;
            }
            
            r14_1 = 7;
            
            if *result.byte_offset(0x40) > zmm1
            {
                goto 'label_4c3cab;
            }
            
            if !(*result.byte_offset(0x48) <= zmm1)
            {
                r14_1 = 8;
                rbp = 0;
                'label_4c3cab:
                zmm1 = *result.byte_offset(r14_1 << 3);
                let mut zmm0: [u64; 0x2];
                
                if arg4 == 0
                {
                    zmm0 = uu_numfmt::format::div_round::hcdae20ad69b44c09(arg3, arg5, zmm1);
                }
                else
                {
                    arg5[0] = arg5[0] / zmm1;
                    zmm0 = uu_numfmt::format::round_with_precision::h7f1d296807047857(arg3, arg4, 
                        arg5);
                }
                
                if _mm_and_pd(data_415de0, zmm0)[0] >= zmm3
                {
                    if rbp == 0
                    {
                        core::panicking::panic_bounds_check::h25a5330941572dd1(8, 8);
                        /* no return */
                    }
                    
                    zmm0[0] = zmm0[0] / zmm3;
                }
                else
                {
                    r14_1 -= 1;
                }
                
                result = *(&var_28).byte_offset(r14_1);
                arg1[1] = zmm0;
                arg1[2] = result;
                *arg1.byte_offset(0x11) = rbx;
                *arg1 = -0x8000000000000000;
                return result;
            }
            
            rsi_1 = "Number is too big and unsupporte…";
            rdx = 0x21;
        }
        0x4c3be0 =>
        {
            rbx = arg2 & 1;
            result = &data_4230c8;
            goto 'label_4c3bf2;
        }
        0x4c3cc7 =>
        {
            'label_4c3cc7:
            arg1[1] = arg5;
            *arg1.byte_offset(0x11) = 2;
            *arg1 = -0x8000000000000000;
            return result;
        }
    }
    
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h523a2f825c855b37(arg1, rsi_1, 
        rdx)
}
