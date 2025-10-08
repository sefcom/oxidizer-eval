
  fn uu_du::read_files_from::h40a5e404b0358f57(arg1: *mut i64, arg2: i64, arg3: u64) -> *mut i64

{
    let mut result: *mut i64 = arg1;
    let mut var_b0: i64 = arg2;
    let var_a8: u64 = arg3;
    let mut var_148: *mut c_void;
    let mut result_1: *mut i64;
    let mut var_108: i32;
    let mut var_e8: *mut i64;
    let mut var_d8: u64;
    let mut var_c8: *mut i64;
    let mut var_88: *mut i64;
    let mut rax_1: u64;
    let mut rcx_1: *mut *mut c_void;
    
    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h99bb5143d53920f6(arg2, arg3, "-iso%Y-%m-%d %H:%M%Y-%m-%d %H:%M…", 1) == 0
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hac1b67b8d5e5f2cf(&var_e8, arg2, arg3);
        let var_e0: *mut i8;
        
        if std::path::Path::is_dir::h02edbc48c38d7d9e(var_e0, var_d8) == 0
        {
            std::fs::File::open::h980d6a34f4e65aa0(&var_108, var_b0);
            
            if var_108 != 1
            {
                let var_104: i32;
                std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h278545cd756cb2f0(
                    &var_148, var_104);
                let rax_14: u64 = alloc::boxed::Box$LT$T$GT$::new::habc9403b5c01943a(&var_148);
                result_1 = result;
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hab61ff66151da0a3(&var_e8);
                rcx_1 = &data_545f58;
                rax_1 = rax_14;
                goto 'label_49832b;
            }
            
            let var_100: *mut i64;
            
            if std::io::error::Error::kind::h135fe00c4e7365f3(var_100) == 0
            {
                var_c8 = var_100;
                var_88 = &var_b0;
                let var_80_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hff9117abb4c135da;
                var_148 = &data_545ee8;
                let var_140_3: i64 = 2;
                let var_128_4: i64 = 0;
                let var_138_3: *mut *mut i64 = &var_88;
                let var_130_4: i64 = 1;
                let mut var_48: ();
                core::option::Option$LT$T$GT$::map_or_else::hc02c35748679bc13(&var_48, &var_148);
                result[1] = std::io::error::Error::_new::hbf6e5d7f23cac6f9(0x28, 
                    alloc::boxed::Box$LT$T$GT$::new::h61e569ef930cd37d(&var_48), &data_546000);
                *result = -0x8000000000000000;
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hd825320995beb979(&var_c8);
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hab61ff66151da0a3(&var_e8);
            }
            else
            {
                result[1] = var_100;
                *result = -0x8000000000000000;
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hab61ff66151da0a3(&var_e8);
            }
        }
        else
        {
            var_88 = &var_b0;
            let var_80_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hff9117abb4c135da;
            var_148 = &data_545ec8;
            let var_140_2: i64 = 2;
            let var_128_3: i64 = 0;
            let var_138_2: *mut *mut i64 = &var_88;
            let var_130_3: i64 = 1;
            let mut var_60: ();
            core::option::Option$LT$T$GT$::map_or_else::hc02c35748679bc13(&var_60, &var_148);
            result[1] = std::io::error::Error::_new::hbf6e5d7f23cac6f9(0x28, 
                alloc::boxed::Box$LT$T$GT$::new::h61e569ef930cd37d(&var_60), &data_546000);
            *result = -0x8000000000000000;
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hab61ff66151da0a3(&var_e8);
        }
    }
    else
    {
        result_1 = result;
        std::io::stdio::stdin::h9a05a2c3e7544b2a();
        std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h195202c034a40601(
            &var_148, &std::io::stdio::stdin::INSTANCE::heccb3522b341563b);
        rax_1 = alloc::boxed::Box$LT$T$GT$::new::hca69a254467451c0(&var_148);
        rcx_1 = &data_546058;
        'label_49832b:
        let mut var_a0: i64 = 0;
        let var_98_1: i64 = 8;
        let var_90_1: i64 = 0;
        var_108 = rax_1;
        let var_f8_1: i8 = 0;
        let var_f0_1: i64 = 0;
        
        loop
        {
            _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9cfe857fc1e43c14(&var_88, &var_108);
            let var_80: i64;
            
            if var_80 == -0x7fffffffffffffff
            {
                core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$std..io..Split$LT$alloc..boxed..Box$LT$dyn$u20$std..io..BufRead$GT$$GT$$GT$$GT$::h9d70051d6ef6c40f(var_108, rcx_1);
                result = result_1;
                result[2] = var_90_1;
                *result = var_a0;
                break;
            }
            
            let var_78: i64;
            
            if var_80 == -0x8000000000000000
            {
                result = result_1;
                result[1] = var_78;
                *result = -0x8000000000000000;
                core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$std..io..Split$LT$alloc..boxed..Box$LT$dyn$u20$std..io..BufRead$GT$$GT$$GT$$GT$::h9d70051d6ef6c40f(var_108, rcx_1);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::heb31d09770f428f6(&var_a0);
                break;
            }
            
            let var_70: u64;
            let mut var_140: i64;
            let mut var_138: u64;
            
            if var_70 == 0
            {
                let mut var_68: *mut c_void = var_88.byte_offset(1);
                let mut rax_7: *mut i64;
                let mut rdx_3: i64;
                rax_7 = uucore::util_name::h074417a1e6395129();
                var_e8 = rax_7;
                let var_e0_1: i64 = rdx_3;
                var_c8 = &var_e8;
                let var_c0_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hff9117abb4c135da;
                var_148 = &data_545f08;
                let var_140_1: i64 = 2;
                let var_128_1: i64 = 0;
                let var_138_1: *mut *mut i64 = &var_c8;
                let var_130_1: i64 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_148);
                var_e8 = &var_b0;
                let var_e0_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hff9117abb4c135da;
                var_d8 = &var_68;
                let var_d0_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                var_148 = &data_545f28;
                var_140 = 3;
                let var_128_2: i64 = 0;
                var_138 = &var_e8;
                let var_130_2: i64 = 2;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_148);
                uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
            }
            else
            {
                alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_148, var_78, var_70);
                _$LT$alloc..borrow..Cow$LT$str$GT$$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hf7c0e7c1e655e4a4(&var_e8, var_140, var_138);
                var_c8 = var_e8;
                core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hd2b311ea2da27bf0(
                    &var_148);
                
                if _$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h5291ddcb580e955f(&var_c8, var_98_1, var_90_1) != 0
                {
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hab61ff66151da0a3(&var_c8);
                }
                else
                {
                    var_138 = var_d8;
                    var_148 = var_c8;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h606ac2565c1fed9c(&var_a0, &var_148);
                }
            }
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h9004fc21845d6fc2(var_80, 
                var_78);
        }
    }
    result
}
