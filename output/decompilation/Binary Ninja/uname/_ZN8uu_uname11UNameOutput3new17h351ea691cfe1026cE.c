
  int64_t* uu_uname::UNameOutput::new::h351ea691cfe1026c(int64_t* arg1, char* arg2)

{
    int64_t r13 = -0x8000000000000000;
    int64_t var_468;
    _$LT$platform_info..lib_impl..target..PlatformInfo$u20$as$u20$platform_info..PlatformInfoAPI$GT$::new::ha4b962048a517d48(&var_468);
    int64_t rbp = var_468;
    int64_t var_460;
    int64_t* var_458;
    
    if (rbp != -0x8000000000000000)
    {
        uint128_t var_450;
        void var_230;
        memcpy(&var_230, &var_450, 0x200);
        int64_t var_248 = rbp;
        int64_t var_240_1 = var_460;
        int64_t* var_238_1 = var_458;
        char rbp_1 = *arg2;
        char rax_1 = arg2[1];
        uint8_t temp0_4;
        
        if (!rbp_1 && !rax_1)
        {
            uint128_t zmm0_1 = *(arg2 + 2);
            zmm0_1 = _mm_unpacklo_epi8(zmm0_1, zmm0_1);
            temp0_4 = _mm_movemask_ps(_mm_cmpeq_epi8({0}, _mm_unpacklo_epi16(zmm0_1, zmm0_1)));
        }
        
        int64_t var_558;
        int64_t* var_548;
        
        if (!rbp_1 && !rax_1 && temp0_4 & 1 && (temp0_4 & 4) >> 2 && (temp0_4 & 2) >> 1
            && temp0_4 >> 3 && !arg2[8] && !arg2[6])
        {
            if (!arg2[7])
                goto label_4a85f5;
            
            var_558 = -0x8000000000000000;
        }
        else if (!(rax_1 | rbp_1))
            var_558 = -0x8000000000000000;
        else
        {
            label_4a85f5:
            uu_uname::UNameOutput::new::_$u7b$$u7b$closure$u7d$$u7d$::h5f1544a0fffce066(&var_468, 
                var_460, var_458);
            var_548 = var_458;
            var_558 = var_468;
        }
        
        int64_t var_538;
        int64_t* var_528;
        
        if (!(arg2[2] | rbp_1))
            var_538 = -0x8000000000000000;
        else
        {
            int64_t var_228;
            size_t var_220;
            uu_uname::UNameOutput::new::_$u7b$$u7b$closure$u7d$$u7d$::h3687ac6272136274(&var_468, 
                var_228, var_220);
            var_528 = var_458;
            var_538 = var_468;
        }
        
        int64_t var_518;
        int64_t* var_508;
        
        if (!(arg2[4] | rbp_1))
            var_518 = -0x8000000000000000;
        else
        {
            int64_t var_210;
            size_t var_208;
            uu_uname::UNameOutput::new::_$u7b$$u7b$closure$u7d$$u7d$::hb194b474012d03c3(&var_468, 
                var_210, var_208);
            var_508 = var_458;
            var_518 = var_468;
        }
        
        int64_t var_4f8;
        int64_t* var_4e8;
        
        if (!(arg2[3] | rbp_1))
            var_4f8 = -0x8000000000000000;
        else
        {
            int64_t var_1f8;
            size_t var_1f0;
            uu_uname::UNameOutput::new::_$u7b$$u7b$closure$u7d$$u7d$::hd8014734772d6d9e(&var_468, 
                var_1f8, var_1f0);
            var_4e8 = var_458;
            var_4f8 = var_468;
        }
        
        int64_t var_4d8;
        int64_t* var_4c8;
        
        if (arg2[5] | rbp_1)
        {
            int64_t var_1e0;
            size_t var_1d8;
            uu_uname::UNameOutput::new::_$u7b$$u7b$closure$u7d$$u7d$::h7b3a0060148809c8(&var_468, 
                var_1e0, var_1d8);
            var_4c8 = var_458;
            var_4d8 = var_468;
            
            if (!(rbp_1 | arg2[8]))
                goto label_4a883b;
            
            goto label_4a87b7;
        }
        
        var_4d8 = -0x8000000000000000;
        uint128_t var_4b8;
        
        if (!(rbp_1 | arg2[8]))
        {
            label_4a883b:
            var_4b8 = -0x8000000000000000;
            
            if (arg2[6])
                goto label_4a87f9;
            
            goto label_4a884a;
        }
        
        label_4a87b7:
        int64_t var_1c8;
        size_t var_1c0;
        uu_uname::UNameOutput::new::_$u7b$$u7b$closure$u7d$$u7d$::hab4e1388d167a7da(&var_468, 
            var_1c8, var_1c0);
        int64_t* var_4a8 = var_458;
        var_4b8 = var_468;
        int64_t var_498;
        int64_t* var_488;
        uint128_t var_478;
        
        if (!arg2[6])
        {
            label_4a884a:
            var_498 = -0x8000000000000000;
            
            if (arg2[7])
            {
                label_4a886d:
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h427e8d00d5b06fd3(
                    &var_468, "unknowncannot get system name0.0…", 7);
                r13 = var_468;
                var_478 = var_460;
            }
        }
        else
        {
            label_4a87f9:
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h427e8d00d5b06fd3(
                &var_468, "unknowncannot get system name0.0…", 7);
            var_488 = var_458;
            var_498 = var_468;
            
            if (arg2[7])
                goto label_4a886d;
        }
        
        int64_t* var_458_1 = var_548;
        var_468 = var_558;
        var_450 = var_538;
        int64_t* var_440_1 = var_528;
        uint128_t var_438_1 = var_518;
        int64_t* var_428_1 = var_508;
        uint128_t var_420_1 = var_4f8;
        int64_t* var_410_1 = var_4e8;
        int64_t* var_3f8_1 = var_4c8;
        uint128_t var_408_1 = var_4d8;
        int64_t* var_3e0_1 = var_4a8;
        uint128_t var_3f0_1 = var_4b8;
        int64_t* var_3c8_1 = var_488;
        uint128_t var_3d8_1 = var_498;
        memcpy(arg1, &var_468, 0xa8);
        arg1[0x15] = r13;
        *(arg1 + 0xb0) = var_478;
        core::ptr::drop_in_place$LT$platform_info..lib_impl..target..PlatformInfo$GT$::h4c5e76bb01c8ee30(&var_248);
    }
    else
    {
        arg1[1] = uu_uname::UNameOutput::new::_$u7b$$u7b$closure$u7d$$u7d$::h60c72fb2e39c2b3f(
            var_460, var_458);
        arg1[2] = &data_50b170;
        *arg1 = -0x7fffffffffffffff;
    }
    return arg1;
}
