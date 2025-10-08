
  fn uu_pinky::platform::unix::Pinky::print_entry::h41deaa8dc6a9a73e(arg1: *mut c_void, arg2: *mut c_void) -> i64

{
    let mut var_60: i64;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hf329c2e59eb871a4(&var_60, &data_418b9c, 4);
    let mut var_1a8: *mut c_void;
    uucore::features::utmpx::Utmpx::tty_device::h164f6e4ca04cfddc(&var_1a8, arg2);
    let var_1a0: i64;
    std::path::PathBuf::push::had6f445dae3e5da7(&var_60, var_1a0);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h14fcc68f829f922f(&var_1a8);
    let var_58: i64;
    std::fs::metadata::heb058fef4c2aae1a(&var_1a8, var_58);
    let rdi_5: *mut c_void = var_1a8;
    let mut rax: i32;
    let mut r15: i64;
    
    if rdi_5 != 2
    {
        let var_140: i64;
        r15 = var_140;
        rax = 0x20;
        let var_170: i8;
        
        if (var_170 & 0x10) == 0
        {
            rax = 0x2a;
        }
    }
    else
    {
        rax = 0x3f;
        r15 = 0;
    }
    
    let mut var_f4: i32 = rax;
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h17b85d6b1e25795c(rdi_5, var_1a0);
    let mut var_1c0: *mut *mut i64;
    uucore::features::utmpx::Utmpx::user::h7da4603721cbda8f(&var_1c0, arg2);
    let mut var_e8: *mut i64 = &var_1c0;
    let var_e0: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    let var_d8: i64 = 0;
    let mut var_d0: i16 = 0x20;
    var_1a8 = &data_419240;
    let var_1a0_1: i64 = 1;
    let mut var_188: *const i8 = &data_41a668;
    let mut var_180: i64 = 1;
    let mut var_198_1: *mut *mut i64 = &var_e8;
    let var_190: i64 = 2;
    std::io::stdio::_print::h5e446ff973c02de6(&var_1a8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h14fcc68f829f922f(&var_1c0);
    
    if *arg1.byte_offset(0x1a) != 0
    {
        uucore::features::utmpx::Utmpx::user::h7da4603721cbda8f(&var_1c0, arg2);
        let var_1b8: *mut i8;
        let var_1b0: u64;
        _$LT$uucore..features..entries..Passwd$u20$as$u20$uucore..features..entries..Locate$LT$$RF$str$GT$$GT$::locate::h4bb3a5c7c498e57d(&var_e8, var_1b8, var_1b0);
        
        if !(0 + -(var_e8))
        {
            let var_78: i128;
            let var_138_1: i128 = var_78;
            let var_88: i128;
            let var_148_1: i128 = var_88;
            let var_98: i128;
            let var_158_1: i128 = var_98;
            let var_a8: i128;
            let var_168_1: i128 = var_a8;
            let var_b8: i128;
            let var_178_1: i128 = var_b8;
            let var_c8: i64;
            var_188 = var_c8;
            var_198_1 = var_d8;
            var_1a8 = var_e8;
            let mut var_48: i64;
            uu_pinky::platform::unix::gecos_to_fullname::hc5cc590c8c5acc48(&var_48, &var_1a8);
            core::ptr::drop_in_place$LT$uucore..features..entries..Passwd$GT$::h6a9a4c57811c6eeb(
                &var_1a8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h14fcc68f829f922f(&var_1c0);
            
            if var_48 != -0x8000000000000000
            {
                let var_38: i64;
                let var_d8_1: i64 = var_38;
                var_e8 = var_48;
                var_1c0 = &var_e8;
                let var_1b8_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                var_1a8 = &data_4f8f60;
                let var_1a0_4: i64 = 1;
                let var_188_3: *mut c_void = &data_41a6d8;
                var_180 = 1;
                let var_198_4: *mut *mut *mut i64 = &var_1c0;
                let var_190_3: i64 = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&var_1a8);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h14fcc68f829f922f(&var_e8);
            }
            else
            {
                var_e8 = &data_4f8f80;
                let var_e0_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2da38598e58e6190;
                var_1a8 = &data_4f8f60;
                let var_1a0_3: i64 = 1;
                let var_188_2: *mut c_void = &data_41a6a8;
                var_180 = 1;
                let var_198_3: *mut *mut i64 = &var_e8;
                let var_190_2: i64 = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&var_1a8);
            }
        }
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$uucore..features..entries..Passwd$C$std..io..error..Error$GT$$GT$::h9dd5054bcb71dab2(&var_e8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h14fcc68f829f922f(&var_1c0);
            var_e8 = &data_4f8f80;
            let var_e0_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2da38598e58e6190;
            var_1a8 = &data_4f8f60;
            let var_1a0_2: i64 = 1;
            let var_188_1: *mut c_void = &data_41a6a8;
            var_180 = 1;
            let var_198_2: *mut *mut i64 = &var_e8;
            let var_190_1: i64 = 1;
            std::io::stdio::_print::h5e446ff973c02de6(&var_1a8);
        }
    }
    
    uucore::features::utmpx::Utmpx::tty_device::h164f6e4ca04cfddc(&var_1c0, arg2);
    var_1a8 = &var_f4;
    let var_1a0_5: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
        _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
    let var_198_5: *mut *mut *mut i64 = &var_1c0;
    let var_190_4: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    let var_188_4: i64 = 0;
    var_180 = 0x20;
    var_e8 = &data_4f8f90;
    let var_e0_3: i64 = 2;
    let var_c8_1: *mut c_void = &data_41a708;
    let var_c0: i64 = 2;
    let var_d8_2: *const *mut c_void = &var_1a8;
    var_d0 = 3;
    std::io::stdio::_print::h5e446ff973c02de6(&var_e8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h14fcc68f829f922f(&var_1c0);
    
    if *arg1.byte_offset(0x18) != 0
    {
        if r15 == 0
        {
            var_e8 = &data_4f8fb0;
            let var_e0_4: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2da38598e58e6190;
            var_1a8 = &data_4f8f60;
            let var_1a0_7: i64 = 1;
            let var_188_6: *mut c_void = &data_41a770;
            let var_180_2: i64 = 1;
            let var_198_7: *mut *mut i64 = &var_e8;
            let var_190_6: i64 = 1;
            std::io::stdio::_print::h5e446ff973c02de6(&var_1a8);
        }
        else
        {
            uu_pinky::platform::unix::idle_string::h2a0abac9e7d11a58(&var_e8, r15);
            var_1c0 = &var_e8;
            let var_1b8_2: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_1a8 = &data_4f8f60;
            let var_1a0_6: i64 = 1;
            let var_188_5: *mut c_void = &data_41a770;
            let var_180_1: i64 = 1;
            let var_198_6: *mut *mut *mut i64 = &var_1c0;
            let var_190_5: i64 = 1;
            std::io::stdio::_print::h5e446ff973c02de6(&var_1a8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h14fcc68f829f922f(&var_e8);
        }
    }
    
    uu_pinky::platform::unix::time_string::h69285d7cb2498297(&var_e8, arg2);
    var_1c0 = &var_e8;
    let var_1b8_3: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    var_1a8 = &data_4f8f60;
    let result_1: i64 = 1;
    let var_188_7: i64 = 0;
    let var_198_8: *mut *mut *mut i64 = &var_1c0;
    let mut var_190_7: i64 = 1;
    std::io::stdio::_print::h5e446ff973c02de6(&var_1a8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h14fcc68f829f922f(&var_e8);
    uucore::features::utmpx::Utmpx::host::hfb1a95bf3e0888e1(&var_e8, arg2);
    
    if *arg1.byte_offset(0x1d) == 0 || var_d8_2 == 0
    {
        goto 'label_4634dc;
    }
    
    uucore::features::utmpx::Utmpx::canon_host::h6d7ae94323da986c(&var_1a8, arg2);
    let r13_1: *mut c_void = var_1a8;
    let mut result: i64 = result_1;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h14fcc68f829f922f(&var_e8);
    
    if -(r13_1) != -0x8000000000000000
    {
        var_e8 = r13_1;
        let result_2: i64 = result;
        let var_d8_3: *mut *mut *mut i64 = var_198_8;
        var_1c0 = &var_e8;
        let var_1b8_4: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_1a8 = &data_4f8f60;
        let var_1a0_8: i64 = 1;
        let var_188_8: i64 = 0;
        let var_198_9: *mut *mut *mut i64 = &var_1c0;
        var_190_7 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_1a8);
        'label_4634dc:
        var_1a8 = &data_4f8f70;
        let var_1a0_9: i64 = 1;
        let var_198_10: i64 = 8;
        var_190_7 = {0};
        std::io::stdio::_print::h5e446ff973c02de6(&var_1a8);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h14fcc68f829f922f(&var_e8);
        result = 0;
    }
    
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h4cadf87e0dc5da61(var_60, var_58);
    result
}
