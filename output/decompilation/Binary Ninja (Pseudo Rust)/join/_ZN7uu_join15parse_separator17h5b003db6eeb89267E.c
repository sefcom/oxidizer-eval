
  fn uu_join::parse_separator::h5b003db6eeb89267(arg1: *mut i64, arg2: *mut i8, arg3: i64)

{
    let mut rax: *mut size_t;
    
    if arg3 == 1
    {
        rax = *arg2;
        *arg1 = -0x8000000000000000;
        arg1[1] = rax;
    }
    else if arg3 != 0
    {
        let mut var_90: *mut *mut [i8; 0xa0];
        std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&var_90, arg2, arg3);
        
        if var_90 == 0
        {
            let var_88: i64;
            let mut var_60: i64 = var_88;
            let var_80: size_t;
            let var_58_1: size_t = var_80;
            let mut var_a0: i64 = var_88;
            let var_98_1: i64 = var_88 + var_80;
            let mut rax_2: i32;
            let mut rdx: i32;
            rax_2 = core::str::validations::next_code_point::hd261ae405076a208(&var_a0, arg1);
            
            if rax_2 == 0 || rdx == 0x110000
            {
                core::option::expect_failed::h9e03a1f6ff88dbcf("valid string with at least one b…");
                /* no return */
            }
            
            let mut rdx_1: i32;
            rax = core::str::validations::next_code_point::hd261ae405076a208(&var_a0, arg1);
            
            if rax == 0
            {
                _$LT$alloc..vec..Vec$LT$u8$GT$$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::h4f184cf760c10fc8(arg1, var_88, var_80);
            }
            else if rdx != 0x5c || rdx_1 != 0x30
            {
                let mut var_50: *mut i64 = &var_60;
                let var_48_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h096fdbe421567f22;
                var_90 = &data_535468;
                let var_88_1: i64 = 1;
                let var_70_1: i64 = 0;
                let var_80_1: *mut *mut i64 = &var_50;
                let mut var_78: i32;
                var_78 = 1;
                let mut var_40: ();
                core::option::Option$LT$T$GT$::map_or_else::h84da32fb4d9c85b4(&var_40, &var_90);
                let var_28_1: i32 = 1;
                arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h7aaaeb17d3fe937d(&var_40);
                arg1[2] = &data_5352b8;
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
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h2c5bde50ee02e8d6(
                &var_90, "non-UTF-8 multi-byte tabvalid st…", 0x18);
            let var_78_1: i32 = 1;
            arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h7aaaeb17d3fe937d(&var_90);
            arg1[2] = &data_5352b8;
            *arg1 = -0x7ffffffffffffffc;
        }
    }
    else
    {
        *arg1 = -0x7ffffffffffffffe;
    }
}
