
  fn bat::assets::HighlightingAssets::get_theme::h5c1f06a82dc91560(arg1: *mut c_void, arg2: i64, arg3: u64) -> i64

{
    let mut var_38: i64 = arg2;
    let var_30: u64 = arg3;
    let mut result: i64 = bat::assets::lazy_theme_set::LazyThemeSet::get::heee0fccd6e54090a(
        arg1.byte_offset(0x68), arg2, arg3);
    
    if result == 0
    {
        let mut rax: i8;
        let mut rdx: u64;
        rax = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he1ce7ac76dd9ec5e(arg2, arg3, "ansi-lightansi-dark[unknow", 0xa);
        let mut rax_1: i8;
        
        if rax == 0
        {
            rax_1 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he1ce7ac76dd9ec5e(arg2, arg3, "ansi-dark[unknow", 9);
        }
        
        let mut var_e8: *mut i64;
        let mut var_d0: *mut *mut [i8; 0xa2];
        let mut var_a0: i128;
        let var_90: i64;
        let mut var_80: i64;
        
        if rax != 0 || rax_1 != 0
        {
            let var_48_1: i8 = 0;
            let var_50_1: i64 = 0;
            let var_47_1: i64 = 0x1500000006;
            var_80 = -0x8000000000000000;
            let var_78_1: *const i8 = "[bat warning]Theme '' is depreca…";
            let var_70_1: i64 = 0xd;
            let var_68_1: i64 = -0x7ffffffffffffffe;
            var_e8 = &var_38;
            let var_e0_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5cd1e3edb3ca57a0;
            var_d0 = &data_ace178;
            let var_c8_1: i64 = 2;
            let var_b0_1: i64 = 0;
            let var_c0_1: *mut *mut i64 = &var_e8;
            let var_b8_1: i64 = 1;
            core::option::Option$LT$T$GT$::map_or_else::hec96efa742f30dcc(&var_a0, 0, rdx, &var_d0);
            var_e8 = var_a0;
            let var_d8_1: i64 = var_90;
            var_a0 = &var_80;
            *var_a0[8] = _$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hc730c7572ee14c54;
            let var_90_1: *mut *mut i64 = &var_e8;
            let var_88_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_d0 = &data_ace198;
            let var_c8_2: i64 = 3;
            let var_b0_2: i64 = 0;
            let var_c0_2: *mut i128 = &var_a0;
            let var_b8_2: i64 = 2;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_d0);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(&var_e8);
            core::ptr::drop_in_place$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$GT$::hde6d3ec6e19234d6(&var_80);
            return bat::assets::HighlightingAssets::get_theme::h5c1f06a82dc91560(arg1, "ansibool[", 
                4);
        }
        
        if arg3 != 0
        {
            let var_48_2: i8 = 0;
            let var_50_2: i64 = 0;
            let var_47_2: i64 = 0x1500000006;
            var_80 = -0x8000000000000000;
            let var_78_2: *const i8 = "[bat warning]Theme '' is depreca…";
            let var_70_2: i64 = 0xd;
            let var_68_2: i64 = -0x7ffffffffffffffe;
            var_e8 = &var_38;
            let var_e0_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5cd1e3edb3ca57a0;
            var_d0 = &data_ace1c8;
            let var_c8_3: i64 = 2;
            let var_b0_3: i64 = 0;
            let var_c0_3: *mut *mut i64 = &var_e8;
            let var_b8_3: i64 = 1;
            core::option::Option$LT$T$GT$::map_or_else::hec96efa742f30dcc(&var_a0, 0, rdx, &var_d0);
            var_e8 = var_a0;
            let var_d8_2: i64 = var_90;
            var_a0 = &var_80;
            *var_a0[8] = _$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hc730c7572ee14c54;
            let var_90_2: *mut *mut i64 = &var_e8;
            let var_88_2: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_d0 = &data_ace198;
            let var_c8_4: i64 = 3;
            let var_b0_4: i64 = 0;
            let var_c0_4: *mut i128 = &var_a0;
            let var_b8_4: i64 = 2;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_d0);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(&var_e8);
            core::ptr::drop_in_place$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$GT$::hde6d3ec6e19234d6(&var_80);
        }
        
        let rsi_2: i64 = *arg1.byte_offset(0x80);
        
        if rsi_2 == 0
        {
            result = bat::assets::lazy_theme_set::LazyThemeSet::get::heee0fccd6e54090a(
                arg1.byte_offset(0x68), "Monokai Extended", 0x10);
            
            if result == 0
            {
                core::option::expect_failed::h3f620cfb8545dc61("something is very wrong if the d…");
                /* no return */
            }
        }
        else
        {
            result = bat::assets::lazy_theme_set::LazyThemeSet::get::heee0fccd6e54090a(
                arg1.byte_offset(0x68), rsi_2, *arg1.byte_offset(0x88));
            
            if result == 0
            {
                core::option::expect_failed::h3f620cfb8545dc61("something is very wrong if the d…");
                /* no return */
            }
        }
    }
    
    result
}
