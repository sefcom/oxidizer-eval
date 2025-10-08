
  fn uu_uname::UNameOutput::new::h8729604a17648380(arg1: *mut i64, arg2: *mut i8) -> *mut i64

{
    let mut rbp: u64 = -0x8000000000000000;
    let mut var_460: u64;
    _$LT$platform_info..lib_impl..target..PlatformInfo$u20$as$u20$platform_info..PlatformInfoAPI$GT$::new::h6dba048fa364e08a(&var_460);
    let r13: u64 = var_460;
    let var_458: i64;
    let var_450: u64;
    
    if -(r13) != -0x8000000000000000
    {
        let mut var_448: ();
        let mut var_230: ();
        memcpy(&var_230, &var_448, 0x200);
        let mut var_248: u64 = r13;
        let var_240_1: i64 = var_458;
        let var_238_1: u64 = var_450;
        let r13_1: i8 = *arg2;
        let rax_3: i8 = arg2[1];
        let mut var_4e8: i64;
        let mut var_4b8: i64;
        let mut var_4a8: u64;
        let mut var_480: u64;
        let mut r14_1: u64;
        let mut r15_1: u64;
        
        if r13_1 == 0 && (rax_3 & 1) == 0 && arg2[2] == 0 && arg2[4] == 0 && arg2[3] == 0
            && arg2[5] == 0 && arg2[8] == 0 && arg2[6] == 0
        {
            if arg2[7] == 0
            {
                goto 'label_451cc4;
            }
            
            r14_1 = -0x8000000000000000;
            r15_1 = -0x8000000000000000;
        }
        else if ((rax_3 | r13_1) & 1) == 0
        {
            r14_1 = -0x8000000000000000;
            
            if (arg2[2] | r13_1) == 0
            {
                r15_1 = -0x8000000000000000;
            }
            else
            {
                'label_451d21:
                let var_228: i64;
                let var_220: u64;
                uu_uname::UNameOutput::new::_$u7b$$u7b$closure$u7d$$u7d$::h1fc53966bdfc526c(
                    &var_460, var_228, var_220);
                r15_1 = var_460;
                var_4e8 = var_458;
                var_4a8 = var_450;
            }
        }
        else
        {
            'label_451cc4:
            uu_uname::UNameOutput::new::_$u7b$$u7b$closure$u7d$$u7d$::h1fc53966bdfc526c(&var_460, 
                var_458, var_450);
            r14_1 = var_460;
            var_4b8 = var_458;
            var_480 = var_450;
            
            if (arg2[2] | r13_1) != 0
            {
                goto 'label_451d21;
            }
            
            r15_1 = -0x8000000000000000;
        }
        
        let var_4b0_1: u64 = r15_1;
        let mut var_508_1: u64;
        let mut var_4f8_1: u64;
        let mut var_4c8: i64;
        let mut var_4c0: i64;
        let mut var_490: u64;
        let mut var_488: u64;
        
        if (arg2[4] | r13_1) == 0
        {
            var_4f8_1 = -0x8000000000000000;
            var_508_1 = -0x8000000000000000;
            
            if arg2[3] != 0
            {
                'label_451df2:
                let var_1f8: i64;
                let var_1f0: u64;
                uu_uname::UNameOutput::new::_$u7b$$u7b$closure$u7d$$u7d$::h1fc53966bdfc526c(
                    &var_460, var_1f8, var_1f0);
                var_508_1 = var_460;
                var_4c8 = var_458;
                var_490 = var_450;
            }
        }
        else
        {
            let var_210: i64;
            let var_208: u64;
            uu_uname::UNameOutput::new::_$u7b$$u7b$closure$u7d$$u7d$::h1fc53966bdfc526c(&var_460, 
                var_210, var_208);
            var_4f8_1 = var_460;
            var_4c0 = var_458;
            var_488 = var_450;
            
            if (arg2[3] | r13_1) != 0
            {
                goto 'label_451df2;
            }
            
            var_508_1 = -0x8000000000000000;
        }
        
        let mut var_500_1: u64;
        let mut var_4d8: i64;
        let mut var_4d0: i64;
        let mut var_4a0: u64;
        let mut var_498: u64;
        let mut r13_2: u64;
        
        if (arg2[5] | r13_1) == 0
        {
            var_500_1 = -0x8000000000000000;
            r13_2 = -0x8000000000000000;
            
            if arg2[8] != 0
            {
                'label_451ea0:
                let var_1c8: i64;
                let var_1c0: u64;
                uu_uname::UNameOutput::new::_$u7b$$u7b$closure$u7d$$u7d$::h1fc53966bdfc526c(
                    &var_460, var_1c8, var_1c0);
                r13_2 = var_460;
                var_4d8 = var_458;
                var_4a0 = var_450;
            }
        }
        else
        {
            let var_1e0: i64;
            let var_1d8: u64;
            uu_uname::UNameOutput::new::_$u7b$$u7b$closure$u7d$$u7d$::h1fc53966bdfc526c(&var_460, 
                var_1e0, var_1d8);
            var_500_1 = var_460;
            var_4d0 = var_458;
            var_498 = var_450;
            
            if (r13_1 | arg2[8]) != 0
            {
                goto 'label_451ea0;
            }
            
            r13_2 = -0x8000000000000000;
        }
        
        let mut var_4e0: i64;
        let mut var_478: i128;
        let mut r14_2: u64;
        
        if arg2[6] == 0
        {
            r14_2 = -0x8000000000000000;
            
            if arg2[7] != 0
            {
                'label_451f2e:
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
            
            if arg2[7] != 0
            {
                goto 'label_451f2e;
            }
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
        *arg1.byte_offset(0xb0) = var_478;
        core::ptr::drop_in_place$LT$platform_info..lib_impl..target..PlatformInfo$GT$::h9ca82266cd321676(&var_248);
    }
    else
    {
        arg1[1] = uu_uname::UNameOutput::new::_$u7b$$u7b$closure$u7d$$u7d$::hccd4d1aee67c1cc5(
            var_458, var_450);
        arg1[2] = &data_4da138;
        *arg1 = -0x7fffffffffffffff;
    }
    arg1
}
