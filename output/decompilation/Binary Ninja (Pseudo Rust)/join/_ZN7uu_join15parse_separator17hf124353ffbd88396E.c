
  fn uu_join::parse_separator::hf124353ffbd88396(arg1: *mut i64, arg2: *mut i8, arg3: i64)

{
    let mut rax: *mut u64;
    
    if arg3 == 1
    {
        rax = *arg2;
        *arg1 = -0x8000000000000000;
        arg1[1] = rax;
    }
    else if arg3 != 0
    {
        let mut var_90: i32;
        core::str::converts::from_utf8::h8a6dc80f786921e0(&var_90, arg2, arg3);
        
        if var_90 != 1
        {
            let var_88: i64;
            let mut var_60: i64 = var_88;
            let var_80: u64;
            let var_58_1: u64 = var_80;
            let mut var_a0: i64 = var_88;
            let var_98_1: i64 = var_88 + var_80;
            let mut rax_2: i8;
            let mut rdx: i32;
            rax_2 = core::str::validations::next_code_point::h0099d433804eecaf(&var_a0, arg1);
            
            if (rax_2 & 1) == 0 || rdx == 0x110000
            {
                core::option::expect_failed::h3f620cfb8545dc61("valid string with at least one b…");
                /* no return */
            }
            
            let mut rdx_1: i32;
            rax = core::str::validations::next_code_point::h0099d433804eecaf(&var_a0, arg1);
            
            if (rax & 1) == 0
            {
                _$LT$alloc..vec..Vec$LT$u8$GT$$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::h7bd9bfc71eaad3d0(arg1, var_88, var_80);
            }
            else if ((rdx ^ 0x5c) | (rdx_1 ^ 0x30)) != 0
            {
                let mut var_50: *mut i64 = &var_60;
                let var_48_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4a0c6b711cbcdca8;
                var_90 = &data_4fe520;
                let var_88_1: i64 = 1;
                let var_70_1: i64 = 0;
                let var_80_1: *mut *mut i64 = &var_50;
                let mut var_78: i32;
                var_78 = 1;
                let mut var_40: ();
                core::option::Option$LT$T$GT$::map_or_else::h9a77d6fb89838746(&var_40, &var_90);
                let var_28_1: i32 = 1;
                arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h6838e3ae00012226(&var_40);
                arg1[2] = &data_4fe360;
                *arg1 = -0x7ffffffffffffffc;
            }
            else
            {
                *arg1 = -0x8000000000000000;
                arg1[1] = 0;
            }
        }
        else
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h9c1c5d77c0020408(&var_90, "non-UTF-8 multi-byte tabvalid st…", 0x18);
            let var_78_1: i32 = 1;
            arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h6838e3ae00012226(&var_90);
            arg1[2] = &data_4fe360;
            *arg1 = -0x7ffffffffffffffc;
        }
    }
    else
    {
        *arg1 = -0x7ffffffffffffffe;
    }
}
