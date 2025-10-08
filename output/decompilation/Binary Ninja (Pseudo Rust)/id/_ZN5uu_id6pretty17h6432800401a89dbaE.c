
  fn uu_id::pretty::h6432800401a89dba(arg1: *mut i64, arg2: i64 @ r14) -> i64

{
    let var_18: i64 = arg2;
    let mut r12: *mut *mut uid_t;
    let var_28: *mut *mut uid_t = r12;
    let mut var_1b8: *mut uid_t;
    let mut var_1b0: fn(arg1: *mut c_void, arg2: i64) -> i64;
    let mut var_1a0: *mut *mut [i8; 0x72];
    let mut var_168: i128;
    let mut var_e8: i128;
    let mut var_c8: *mut uid_t;
    let mut var_40: *mut i128;
    
    if !(0 + -(*arg1))
    {
        let var_f8_1: i128 = *arg1.byte_offset(0x70);
        let var_108_1: i128 = *arg1.byte_offset(0x60);
        let var_118_1: i128 = *arg1.byte_offset(0x50);
        let var_128_1: i128 = *arg1.byte_offset(0x40);
        let var_138_1: i128 = *arg1.byte_offset(0x30);
        let var_148_1: i128 = *arg1.byte_offset(0x20);
        let var_158_1: i128 = *arg1.byte_offset(0x10);
        var_168 = *arg1;
        var_1a0 = &var_168;
        let var_198_1: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_c8 = &data_4e8d58;
        let var_c0_1: i64 = 2;
        let var_a8_1: i64 = 0;
        let var_b8_1: *const *mut *mut [i8; 0x72] = &var_1a0;
        let var_b0_1: i64 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_c8);
        uucore::features::entries::Passwd::belongs_to::h86a03abed7028785(&var_1a0, &var_168);
        core::iter::traits::iterator::Iterator::collect::h7015affb243c4c0c(&var_1b8, var_198_1);
        let var_1a8: i64;
        alloc::str::join_generic_copy::h59511d2ef6868464(&var_c8, var_1b0, var_1a8, 
            " \nlogin\teuid\tgroups\tsrc/uu/i…");
        let var_d8_1: *const *mut *mut [i8; 0x72] = var_b8_1;
        var_e8 = var_c8;
        var_40 = &var_e8;
        let var_38_1: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_c8 = &data_4e8d78;
        let var_c0_2: i64 = 2;
        let var_a8_2: i64 = 0;
        let var_b8_2: *mut *mut i128 = &var_40;
        let var_b0_2: i64 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_c8);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h084553603f2ff391(var_e8, 
            *var_e8[8]);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hd40cc4d4fa480ff0(&var_1b8);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u32$GT$$GT$::h4a55a5c1ac3ca45b(var_1a0, 
            var_198_1);
        return core::ptr::drop_in_place$LT$uucore..features..entries..Passwd$GT$::h12f3820528dcc77c(
            &var_168);
    }
    
    let rax: *mut i8 = getlogin();
    let mut var_158: *mut *mut uid_t;
    let mut rbx_1: *mut uid_t;
    
    if rax == 0
    {
        rbx_1 = -0x8000000000000001;
    }
    else
    {
        alloc::ffi::c_str::_$LT$impl$u20$core..ffi..c_str..CStr$GT$::to_string_lossy::h9afbfb8b28205f24(&var_168, rax, strlen(rax) + 1);
        rbx_1 = var_168;
        arg2 = *var_168[8];
        r12 = var_158;
    }
    
    let mut rbp: i64;
    rbp = 1;
    let rax_4: uid_t = uucore::features::process::getuid::h408babfb7f2600cd();
    let mut var_170: uid_t = rax_4;
    _$LT$uucore..features..entries..Passwd$u20$as$u20$uucore..features..entries..Locate$LT$u32$GT$$GT$::locate::h5d0bb482984d9c00(&var_c8, rax_4);
    let mut var_198: i64;
    let mut var_190: *mut *mut uid_t;
    let mut var_148: i128;
    let mut var_c0: fn(arg1: *mut i32, arg2: *mut i64) -> u64;
    let mut var_b8: i64;
    let var_a8: i64;
    let var_98: i128;
    let var_88: i128;
    let var_78: i128;
    let var_68: i128;
    let var_58: i128;
    
    if var_c8 != -0x8000000000000000
    {
        let var_f8_2: i128 = var_58;
        let var_108_2: i128 = var_68;
        let var_118_2: i128 = var_78;
        let var_128_2: i128 = var_88;
        let var_138_2: i128 = var_98;
        var_148 = var_a8;
        var_158 = var_b8;
        var_168 = var_c8;
        rbp = 1;
        
        if rbx_1 != -0x7fffffffffffffff
        {
            var_1b8 = rbx_1;
            let var_1a8_1: *mut *mut uid_t = r12;
            var_e8 = &var_1b8;
            *var_e8[8] = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h9ee76235c490d349;
            var_1a0 = &data_4e8d98;
            let var_198_2: i64 = 2;
            let var_180_1: i64 = 0;
            let var_190_1: *mut i128 = &var_e8;
            let var_188_1: i64 = 1;
            std::io::stdio::_print::h5e446ff973c02de6(&var_1a0);
            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hcdb2e0fcaf73ab0e(
                var_1b8, arg2);
            rbp = 0;
        }
        
        var_1b8 = &var_168;
        var_1b0 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_1a0 = &data_4e8db8;
        var_198 = 2;
        let var_180_2: i64 = 0;
        var_190 = &var_1b8;
        let var_188_2: i64 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_1a0);
        core::ptr::drop_in_place$LT$uucore..features..entries..Passwd$GT$::h12f3820528dcc77c(
            &var_168);
    }
    else
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$uucore..features..entries..Passwd$C$std..io..error..Error$GT$$GT$::h13f42e2ad790cdaf(&var_c8);
        var_c8 = &var_170;
        var_c0 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h4ee7c3ea607dee75;
        var_168 = &data_4e8db8;
        *var_168[8] = 2;
        var_148 = 0;
        var_158 = &var_c8;
        var_158 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_168);
        rbp = 1;
    }
    
    let rax_5: uid_t = uucore::features::process::getegid::h2ca565c9eb3bafb7();
    let mut var_16c: uid_t = rax_5;
    
    if rax_5 == var_170
    {
        _$LT$uucore..features..entries..Passwd$u20$as$u20$uucore..features..entries..Locate$LT$u32$GT$$GT$::locate::h5d0bb482984d9c00(&var_c8, rax_5);
        
        if var_c8 != -0x8000000000000000
        {
            let var_f8_3: i128 = var_58;
            let var_108_3: i128 = var_68;
            let var_118_3: i128 = var_78;
            let var_128_3: i128 = var_88;
            let var_138_3: i128 = var_98;
            var_148 = var_a8;
            var_158 = var_b8;
            var_168 = var_c8;
            var_1b8 = &var_168;
            var_1b0 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_1a0 = &data_4e8dd8;
            var_198 = 2;
            let var_180_3: i64 = 0;
            var_190 = &var_1b8;
            let var_188_3: i64 = 1;
            std::io::stdio::_print::h5e446ff973c02de6(&var_1a0);
            core::ptr::drop_in_place$LT$uucore..features..entries..Passwd$GT$::h12f3820528dcc77c(
                &var_168);
        }
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$uucore..features..entries..Passwd$C$std..io..error..Error$GT$$GT$::h13f42e2ad790cdaf(&var_c8);
            var_c8 = &var_16c;
            var_c0 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h4ee7c3ea607dee75;
            var_168 = &data_4e8dd8;
            *var_168[8] = 2;
            var_148 = 0;
            var_158 = &var_c8;
            var_158 = 1;
            std::io::stdio::_print::h5e446ff973c02de6(&var_168);
        }
    }
    
    let mut rax_6: gid_t;
    let mut rdx_4: i32;
    rax_6 = uucore::features::process::getgid::h996eeb286e507395();
    var_40 = rax_6;
    
    if rax_6 != var_16c
    {
        _$LT$uucore..features..entries..Group$u20$as$u20$uucore..features..entries..Locate$LT$u32$GT$$GT$::locate::hf537d3ad4e514fa6(&var_1a0, rax_6);
        
        if var_1a0 != -0x8000000000000000
        {
            var_b8 = var_190;
            var_c8 = var_1a0;
            var_1b8 = &var_c8;
            var_1b0 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_168 = &data_4e8dd8;
            *var_168[8] = 2;
            var_148 = 0;
            var_158 = &var_1b8;
            var_158 = 1;
            std::io::stdio::_print::h5e446ff973c02de6(&var_168);
            rdx_4 = core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h89c11ba2d447c491(
                var_c8, var_c0);
        }
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$uucore..features..entries..Group$C$std..io..error..Error$GT$$GT$::hc76da6ccec0263f7(&var_1a0);
            var_c8 = &var_40;
            var_c0 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h4ee7c3ea607dee75;
            var_168 = &data_4e8dd8;
            *var_168[8] = 2;
            var_148 = 0;
            var_158 = &var_c8;
            var_158 = 1;
            rdx_4 = std::io::stdio::_print::h5e446ff973c02de6(&var_168);
        }
    }
    
    uucore::features::entries::get_groups_gnu::hafb36095cbadaa6c(&var_168, 0, rdx_4);
    core::result::Result$LT$T$C$E$GT$::unwrap::h5a3aa4a6e19f4b1e(&var_c8, &var_168);
    core::iter::traits::iterator::Iterator::collect::h42a1f7c93b48098b(&var_1a0, var_c0);
    alloc::str::join_generic_copy::h59511d2ef6868464(&var_168, var_198, var_190, 
        " \nlogin\teuid\tgroups\tsrc/uu/i…");
    let var_1a8_2: *mut *mut uid_t = var_158;
    var_1b8 = var_168;
    var_e8 = &var_1b8;
    *var_e8[8] =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    var_168 = &data_4e8df8;
    *var_168[8] = 2;
    var_148 = 0;
    var_158 = &var_e8;
    var_158 = 1;
    std::io::stdio::_print::h5e446ff973c02de6(&var_168);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h084553603f2ff391(var_1b8, var_1b0);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hd40cc4d4fa480ff0(
        &var_1a0);
    let result: i64 = core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u32$GT$$GT$::h4a55a5c1ac3ca45b(
        var_c8, var_c0);
    
    if rbx_1 != -0x7fffffffffffffff && rbp != 0
    {
        return core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hcdb2e0fcaf73ab0e(
            rbx_1, arg2);
    }
    
    result
}
