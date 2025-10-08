
  int64_t* uu_uname::UNameOutput::new::h8729604a17648380(int64_t* arg1, char* arg2)

{
    uint64_t rbp = -0x8000000000000000;
    uint64_t var_460;
    _$LT$platform_info..lib_impl..target..PlatformInfo$u20$as$u20$platform_info..PlatformInfoAPI$GT$::new::h6dba048fa364e08a(&var_460);
    uint64_t r13 = var_460;
    int64_t var_458;
    uint64_t var_450;
    
    if (-(r13) != -0x8000000000000000)
    {
        void var_448;
        void var_230;
        memcpy(&var_230, &var_448, 0x200);
        uint64_t var_248 = r13;
        int64_t var_240_1 = var_458;
        uint64_t var_238_1 = var_450;
        char r13_1 = *arg2;
        char rax_3 = arg2[1];
        int64_t var_4e8;
        int64_t var_4b8;
        uint64_t var_4a8;
        uint64_t var_480;
        uint64_t r14_1;
        uint64_t r15_1;
        
        if (!r13_1 && !(rax_3 & 1) && !arg2[2] && !arg2[4] && !arg2[3] && !arg2[5] && !arg2[8]
            && !arg2[6])
        {
            if (!arg2[7])
                goto label_451cc4;
            
            r14_1 = -0x8000000000000000;
            r15_1 = -0x8000000000000000;
        }
        else if (!((rax_3 | r13_1) & 1))
        {
            r14_1 = -0x8000000000000000;
            
            if (!(arg2[2] | r13_1))
                r15_1 = -0x8000000000000000;
            else
            {
                label_451d21:
                int64_t var_228;
                uint64_t var_220;
                uu_uname::UNameOutput::new::_$u7b$$u7b$closure$u7d$$u7d$::h1fc53966bdfc526c(
                    &var_460, var_228, var_220);
                r15_1 = var_460;
                var_4e8 = var_458;
                var_4a8 = var_450;
            }
        }
        else
        {
            label_451cc4:
            uu_uname::UNameOutput::new::_$u7b$$u7b$closure$u7d$$u7d$::h1fc53966bdfc526c(&var_460, 
                var_458, var_450);
            r14_1 = var_460;
            var_4b8 = var_458;
            var_480 = var_450;
            
            if (arg2[2] | r13_1)
                goto label_451d21;
            
            r15_1 = -0x8000000000000000;
        }
        
        uint64_t var_4b0_1 = r15_1;
        uint64_t var_508_1;
        uint64_t var_4f8_1;
        int64_t var_4c8;
        int64_t var_4c0;
        uint64_t var_490;
        uint64_t var_488;
        
        if (!(arg2[4] | r13_1))
        {
            var_4f8_1 = -0x8000000000000000;
            var_508_1 = -0x8000000000000000;
            
            if (arg2[3])
            {
                label_451df2:
                int64_t var_1f8;
                uint64_t var_1f0;
                uu_uname::UNameOutput::new::_$u7b$$u7b$closure$u7d$$u7d$::h1fc53966bdfc526c(
                    &var_460, var_1f8, var_1f0);
                var_508_1 = var_460;
                var_4c8 = var_458;
                var_490 = var_450;
            }
        }
        else
        {
            int64_t var_210;
            uint64_t var_208;
            uu_uname::UNameOutput::new::_$u7b$$u7b$closure$u7d$$u7d$::h1fc53966bdfc526c(&var_460, 
                var_210, var_208);
            var_4f8_1 = var_460;
            var_4c0 = var_458;
            var_488 = var_450;
            
            if (arg2[3] | r13_1)
                goto label_451df2;
            
            var_508_1 = -0x8000000000000000;
        }
        
        uint64_t var_500_1;
        int64_t var_4d8;
        int64_t var_4d0;
        uint64_t var_4a0;
        uint64_t var_498;
        uint64_t r13_2;
        
        if (!(arg2[5] | r13_1))
        {
            var_500_1 = -0x8000000000000000;
            r13_2 = -0x8000000000000000;
            
            if (arg2[8])
            {
                label_451ea0:
                int64_t var_1c8;
                uint64_t var_1c0;
                uu_uname::UNameOutput::new::_$u7b$$u7b$closure$u7d$$u7d$::h1fc53966bdfc526c(
                    &var_460, var_1c8, var_1c0);
                r13_2 = var_460;
                var_4d8 = var_458;
                var_4a0 = var_450;
            }
        }
        else
        {
            int64_t var_1e0;
            uint64_t var_1d8;
            uu_uname::UNameOutput::new::_$u7b$$u7b$closure$u7d$$u7d$::h1fc53966bdfc526c(&var_460, 
                var_1e0, var_1d8);
            var_500_1 = var_460;
            var_4d0 = var_458;
            var_498 = var_450;
            
            if (r13_1 | arg2[8])
                goto label_451ea0;
            
            r13_2 = -0x8000000000000000;
        }
        
        int64_t var_4e0;
        int128_t var_478;
        uint64_t r14_2;
        
        if (!arg2[6])
        {
            r14_2 = -0x8000000000000000;
            
            if (arg2[7])
            {
                label_451f2e:
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h91a23e95e4a350be(&var_460, "unknowncannot get system name(uu…", 7);
                rbp = var_460;
                var_478 = var_458;
            }
        }
        else
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h91a23e95e4a350be(&var_460, "unknowncannot get system name(uu…", 7);
            r14_2 = var_460;
            var_4e0 = var_458;
            r15_1 = var_450;
            
            if (arg2[7])
                goto label_451f2e;
        }
        
        *arg1 = r14_1;
        arg1[1] = var_4b8;
        arg1[2] = var_480;
        arg1[3] = var_4b0_1;
        arg1[4] = var_4e8;
        arg1[5] = var_4a8;
        arg1[6] = var_4f8_1;
        arg1[7] = var_4c0;
        arg1[8] = var_488;
        arg1[9] = var_508_1;
        arg1[0xa] = var_4c8;
        arg1[0xb] = var_490;
        arg1[0xc] = var_500_1;
        arg1[0xd] = var_4d0;
        arg1[0xe] = var_498;
        arg1[0xf] = r13_2;
        arg1[0x10] = var_4d8;
        arg1[0x11] = var_4a0;
        arg1[0x12] = r14_2;
        arg1[0x13] = var_4e0;
        arg1[0x14] = r15_1;
        arg1[0x15] = rbp;
        *(arg1 + 0xb0) = var_478;
        core::ptr::drop_in_place$LT$platform_info..lib_impl..target..PlatformInfo$GT$::h9ca82266cd321676(&var_248);
    }
    else
    {
        arg1[1] = uu_uname::UNameOutput::new::_$u7b$$u7b$closure$u7d$$u7d$::hccd4d1aee67c1cc5(
            var_458, var_450);
        arg1[2] = &data_4da138;
        *arg1 = -0x7fffffffffffffff;
    }
    return arg1;
}
