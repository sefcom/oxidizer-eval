
  fn uu_uname::UNameOutput::new::h351ea691cfe1026c(arg1: *mut i64, arg2: *mut i8) -> *mut i64

{
    let mut r13: i64 = -0x8000000000000000;
    let mut var_468: i64;
    _$LT$platform_info..lib_impl..target..PlatformInfo$u20$as$u20$platform_info..PlatformInfoAPI$GT$::new::ha4b962048a517d48(&var_468);
    let rbp: i64 = var_468;
    let var_460: i64;
    let var_458: *mut i64;
    
    if rbp != -0x8000000000000000
    {
        let mut var_450: u128;
        let mut var_230: ();
        memcpy(&var_230, &var_450, 0x200);
        let mut var_248: i64 = rbp;
        let var_240_1: i64 = var_460;
        let var_238_1: *mut i64 = var_458;
        let rbp_1: i8 = *arg2;
        let rax_1: i8 = arg2[1];
        let mut temp0_4: u8;
        
        if rbp_1 == 0 && rax_1 == 0
        {
            let mut zmm0_1: u128 = *arg2.byte_offset(2);
            zmm0_1 = _mm_unpacklo_epi8(zmm0_1, zmm0_1);
            temp0_4 = _mm_movemask_ps(_mm_cmpeq_epi8({0}, _mm_unpacklo_epi16(zmm0_1, zmm0_1)));
        }
        
        let mut var_558: i64;
        let mut var_548: *mut i64;
        
        if rbp_1 == 0 && rax_1 == 0 && (temp0_4 & 1) != 0 && (temp0_4 & 4) >> 2 != 0
            && (temp0_4 & 2) >> 1 != 0 && temp0_4 >> 3 != 0 && arg2[8] == 0 && arg2[6] == 0
        {
            if arg2[7] == 0
            {
                goto 'label_4a85f5;
            }
            
            var_558 = -0x8000000000000000;
        }
        else if (rax_1 | rbp_1) == 0
        {
            var_558 = -0x8000000000000000;
        }
        else
        {
            'label_4a85f5:
            uu_uname::UNameOutput::new::_$u7b$$u7b$closure$u7d$$u7d$::h5f1544a0fffce066(&var_468, 
                var_460, var_458);
            var_548 = var_458;
            var_558 = var_468;
        }
        
        let mut var_538: i64;
        let mut var_528: *mut i64;
        
        if (arg2[2] | rbp_1) == 0
        {
            var_538 = -0x8000000000000000;
        }
        else
        {
            let var_228: i64;
            let var_220: size_t;
            uu_uname::UNameOutput::new::_$u7b$$u7b$closure$u7d$$u7d$::h3687ac6272136274(&var_468, 
                var_228, var_220);
            var_528 = var_458;
            var_538 = var_468;
        }
        
        let mut var_518: i64;
        let mut var_508: *mut i64;
        
        if (arg2[4] | rbp_1) == 0
        {
            var_518 = -0x8000000000000000;
        }
        else
        {
            let var_210: i64;
            let var_208: size_t;
            uu_uname::UNameOutput::new::_$u7b$$u7b$closure$u7d$$u7d$::hb194b474012d03c3(&var_468, 
                var_210, var_208);
            var_508 = var_458;
            var_518 = var_468;
        }
        
        let mut var_4f8: i64;
        let mut var_4e8: *mut i64;
        
        if (arg2[3] | rbp_1) == 0
        {
            var_4f8 = -0x8000000000000000;
        }
        else
        {
            let var_1f8: i64;
            let var_1f0: size_t;
            uu_uname::UNameOutput::new::_$u7b$$u7b$closure$u7d$$u7d$::hd8014734772d6d9e(&var_468, 
                var_1f8, var_1f0);
            var_4e8 = var_458;
            var_4f8 = var_468;
        }
        
        let mut var_4d8: i64;
        let mut var_4c8: *mut i64;
        
        if (arg2[5] | rbp_1) != 0
        {
            let var_1e0: i64;
            let var_1d8: size_t;
            uu_uname::UNameOutput::new::_$u7b$$u7b$closure$u7d$$u7d$::h7b3a0060148809c8(&var_468, 
                var_1e0, var_1d8);
            var_4c8 = var_458;
            var_4d8 = var_468;
            
            if (rbp_1 | arg2[8]) == 0
            {
                goto 'label_4a883b;
            }
            
            goto 'label_4a87b7;
        }
        
        var_4d8 = -0x8000000000000000;
        let mut var_4b8: u128;
        
        if (rbp_1 | arg2[8]) == 0
        {
            'label_4a883b:
            var_4b8 = -0x8000000000000000;
            
            if arg2[6] != 0
            {
                goto 'label_4a87f9;
            }
            
            goto 'label_4a884a;
        }
        
        'label_4a87b7:
        let var_1c8: i64;
        let var_1c0: size_t;
        uu_uname::UNameOutput::new::_$u7b$$u7b$closure$u7d$$u7d$::hab4e1388d167a7da(&var_468, 
            var_1c8, var_1c0);
        let var_4a8: *mut i64 = var_458;
        var_4b8 = var_468;
        let mut var_498: i64;
        let mut var_488: *mut i64;
        let mut var_478: u128;
        
        if arg2[6] == 0
        {
            'label_4a884a:
            var_498 = -0x8000000000000000;
            
            if arg2[7] != 0
            {
                'label_4a886d:
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h427e8d00d5b06fd3(
                    &var_468, "unknowncannot get system name0.0…", 7);
                r13 = var_468;
                var_478 = var_460;
            }
        }
        else
        {
            'label_4a87f9:
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h427e8d00d5b06fd3(
                &var_468, "unknowncannot get system name0.0…", 7);
            var_488 = var_458;
            var_498 = var_468;
            
            if arg2[7] != 0
            {
                goto 'label_4a886d;
            }
        }
        
        let var_458_1: *mut i64 = var_548;
        var_468 = var_558;
        var_450 = var_538;
        let var_440_1: *mut i64 = var_528;
        let var_438_1: u128 = var_518;
        let var_428_1: *mut i64 = var_508;
        let var_420_1: u128 = var_4f8;
        let var_410_1: *mut i64 = var_4e8;
        let var_3f8_1: *mut i64 = var_4c8;
        let var_408_1: u128 = var_4d8;
        let var_3e0_1: *mut i64 = var_4a8;
        let var_3f0_1: u128 = var_4b8;
        let var_3c8_1: *mut i64 = var_488;
        let var_3d8_1: u128 = var_498;
        memcpy(arg1, &var_468, 0xa8);
        arg1[0x15] = r13;
        *arg1.byte_offset(0xb0) = var_478;
        core::ptr::drop_in_place$LT$platform_info..lib_impl..target..PlatformInfo$GT$::h4c5e76bb01c8ee30(&var_248);
    }
    else
    {
        arg1[1] = uu_uname::UNameOutput::new::_$u7b$$u7b$closure$u7d$$u7d$::h60c72fb2e39c2b3f(
            var_460, var_458);
        arg1[2] = &data_50b170;
        *arg1 = -0x7fffffffffffffff;
    }
    arg1
}
