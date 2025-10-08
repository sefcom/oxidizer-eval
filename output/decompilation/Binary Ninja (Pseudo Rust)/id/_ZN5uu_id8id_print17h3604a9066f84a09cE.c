
  fn uu_id::id_print::h3604a9066f84a09c(arg1: *mut i8, arg2: i64, arg3: i64) -> i64

{
    if (*arg1 & 1) == 0
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    let rsi: uid_t = *arg1.byte_offset(4);
    let mut var_184: uid_t = rsi;
    let r13: gid_t = *arg1.byte_offset(8);
    let mut var_180: gid_t = r13;
    let r15: uid_t = *arg1.byte_offset(0xc);
    let mut var_178: uid_t = r15;
    let rax: u32 = *arg1.byte_offset(0x10);
    let mut var_174: u32 = rax;
    let mut var_130: i64;
    _$LT$uucore..features..entries..Passwd$u20$as$u20$uucore..features..entries..Locate$LT$u32$GT$$GT$::locate::h5d0bb482984d9c00(&var_130, rsi);
    let mut var_1d8: *mut *mut [i8; 0x9];
    let mut var_1d0: i64;
    let mut var_1b8: *mut *mut [i8; 0x9];
    let var_128: i64;
    
    if !(0 + -(var_130))
    {
        uucore::features::entries::uid2usr::_$u7b$$u7b$closure$u7d$$u7d$::h5379acb158e2a810(
            &var_1b8, &var_130);
        let rax_1: *mut *mut [i8; 0x9] = var_1b8;
        let var_1b0: i64;
        
        if rax_1 != -0x8000000000000000
        {
            var_1d8 = rax_1;
            var_1d0 = var_1b0;
            let var_1a8: i64;
            let var_1c8_1: i64 = var_1a8;
        }
        else
        {
            uu_id::id_print::_$u7b$$u7b$closure$u7d$$u7d$::h61bc1788f512f6c7(&var_1d8, &var_184, 
                var_1b0);
        }
    }
    else
    {
        uu_id::id_print::_$u7b$$u7b$closure$u7d$$u7d$::h61bc1788f512f6c7(&var_1d8, &var_184, 
            var_128);
    }
    let mut var_170: *mut uid_t = &var_184;
    let var_168: fn(arg1: *mut i32, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h4ee7c3ea607dee75;
    let var_160: *mut i64 = &var_1d8;
    let var_158: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    var_1b8 = &data_4e8ec8;
    let var_1b0_1: i64 = 3;
    let var_198: i64 = 0;
    let var_1a8_1: *mut *mut uid_t = &var_170;
    let var_1a0: i64 = 2;
    std::io::stdio::_print::h5e446ff973c02de6(&var_1b8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h084553603f2ff391(var_1d8, var_1d0);
    _$LT$uucore..features..entries..Group$u20$as$u20$uucore..features..entries..Locate$LT$u32$GT$$GT$::locate::hf537d3ad4e514fa6(&var_1b8, r13);
    let rax_2: *mut *mut [i8; 0x9] = var_1b8;
    
    if rax_2 != -0x8000000000000000
    {
        var_1d8 = rax_2;
        var_1d0 = var_1b0_1;
        let var_1c8_2: *mut *mut uid_t = var_1a8_1;
    }
    else
    {
        uu_id::id_print::_$u7b$$u7b$closure$u7d$$u7d$::h158cc5b81899bf3c(&var_1d8, &var_180, 
            var_1b0_1);
    }
    
    var_170 = &var_180;
    let mut var_168_1: fn(arg1: *mut i32, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h4ee7c3ea607dee75;
    let mut var_160_1: *const *mut *mut [i8; 0x9] = &var_1d8;
    let var_158_1: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    var_1b8 = &data_4e8ef8;
    let mut var_1b0_2: i64 = 3;
    let var_198_1: i64 = 0;
    let mut var_1a8_2: *mut *mut uid_t = &var_170;
    let var_1a0_1: i64 = 2;
    std::io::stdio::_print::h5e446ff973c02de6(&var_1b8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h084553603f2ff391(var_1d8, var_1d0);
    
    if arg1[0x1c] == 0
    {
        if r15 != var_184
        {
            let mut var_b0: i64;
            _$LT$uucore..features..entries..Passwd$u20$as$u20$uucore..features..entries..Locate$LT$u32$GT$$GT$::locate::h5d0bb482984d9c00(&var_b0, r15);
            let var_a8: i64;
            
            if var_b0 != -0x8000000000000000
            {
                uucore::features::entries::uid2usr::_$u7b$$u7b$closure$u7d$$u7d$::h5379acb158e2a810(
                    &var_1b8, &var_b0);
                let rax_3: *mut *mut [i8; 0x9] = var_1b8;
                
                if rax_3 != -0x8000000000000000
                {
                    var_1d8 = rax_3;
                    var_1d0 = var_1b0_2;
                    let var_1c8_3: *mut *mut uid_t = var_1a8_2;
                }
                else
                {
                    uu_id::id_print::_$u7b$$u7b$closure$u7d$$u7d$::h61bc1788f512f6c7(&var_1d8, 
                        &var_178, var_1b0_2);
                }
            }
            else
            {
                uu_id::id_print::_$u7b$$u7b$closure$u7d$$u7d$::h61bc1788f512f6c7(&var_1d8, 
                    &var_178, var_a8);
            }
            var_170 = &var_178;
            var_168_1 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h4ee7c3ea607dee75;
            var_160_1 = &var_1d8;
            let var_158_2: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_1b8 = &data_4e8f28;
            var_1b0_2 = 3;
            let var_198_2: i64 = 0;
            var_1a8_2 = &var_170;
            let var_1a0_2: i64 = 2;
            std::io::stdio::_print::h5e446ff973c02de6(&var_1b8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h084553603f2ff391(var_1d8, 
                var_1d0);
        }
        
        if rax != var_180
        {
            _$LT$uucore..features..entries..Group$u20$as$u20$uucore..features..entries..Locate$LT$u32$GT$$GT$::locate::hf537d3ad4e514fa6(&var_1b8, rax);
            let rax_5: *mut *mut [i8; 0x9] = var_1b8;
            
            if rax_5 != -0x8000000000000000
            {
                var_1d8 = rax_5;
                var_1d0 = var_1b0_2;
                let var_1c8_4: *mut *mut uid_t = var_1a8_2;
            }
            else
            {
                uu_id::id_print::_$u7b$$u7b$closure$u7d$$u7d$::h158cc5b81899bf3c(&var_1d8, 
                    &var_174, var_1b0_2);
            }
            
            var_170 = &var_174;
            var_168_1 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h4ee7c3ea607dee75;
            var_160_1 = &var_1d8;
            let var_158_3: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_1b8 = &data_4e8f58;
            let var_1b0_3: i64 = 3;
            let var_198_3: i64 = 0;
            var_1a8_2 = &var_170;
            let var_1a0_3: i64 = 2;
            std::io::stdio::_print::h5e446ff973c02de6(&var_1b8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h084553603f2ff391(var_1d8, 
                var_1d0);
        }
    }
    
    core::iter::traits::iterator::Iterator::collect::h9bfe5c5b303d5699(&var_170, arg2);
    alloc::str::join_generic_copy::h59511d2ef6868464(&var_1b8, var_168_1, var_160_1, 
        ",: cannot find name for user ID …");
    let var_1c8_5: *mut *mut uid_t = var_1a8_2;
    var_1d8 = var_1b8;
    let mut var_140: *const *mut *mut [i8; 0x9] = &var_1d8;
    let var_138: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    var_1b8 = &data_4e8f88;
    let var_1b0_4: i64 = 1;
    let var_198_4: i64 = 0;
    let var_1a8_3: *mut *const *mut *mut [i8; 0x9] = &var_140;
    let var_1a0_4: i64 = 1;
    std::io::stdio::_print::h5e446ff973c02de6(&var_1b8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h084553603f2ff391(var_1d8, var_1d0);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hd40cc4d4fa480ff0(
        &var_170)
}
