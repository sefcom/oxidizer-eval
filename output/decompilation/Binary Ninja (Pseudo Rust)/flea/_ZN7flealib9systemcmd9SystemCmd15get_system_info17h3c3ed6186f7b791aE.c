
  fn flealib::systemcmd::SystemCmd::get_system_info::h3c3ed6186f7b791a(arg1: *mut i128, arg2: *mut i64) -> *mut i128

{
    sysinfo::common::System::refresh_all::h1fc83b5cbd010d91(arg2);
    let mut var_200: *mut *mut c_void;
    sysinfo::common::System::name::hc8bf6cc3ec672ee2(&var_200);
    let mut var_258: i128;
    let var_248: i64;
    let var_1f0: i64;
    let mut var_198: i64;
    let mut zmm0: i128;
    
    if !(0 + -(var_200))
    {
        var_198 = var_1f0;
        zmm0 = var_200;
    }
    else
    {
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(&var_258, 
            "<unknown>System name: \r\nSystem…", 9);
        var_198 = var_248;
        zmm0 = var_258;
    }
    
    let mut var_1a8: i128 = zmm0;
    sysinfo::common::System::kernel_version::hcc467c07b3576e64(&var_200);
    let mut var_108: i64;
    let mut zmm0_1: i128;
    
    if var_200 != -0x8000000000000000
    {
        var_108 = var_1f0;
        zmm0_1 = var_200;
    }
    else
    {
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(&var_258, 
            "<unknown>System name: \r\nSystem…", 9);
        var_108 = var_248;
        zmm0_1 = var_258;
    }
    
    let mut var_118: i128 = zmm0_1;
    sysinfo::common::System::os_version::h91e4287681b99a77(&var_200);
    let mut var_178: i64;
    let mut zmm0_2: i128;
    
    if var_200 != -0x8000000000000000
    {
        var_178 = var_1f0;
        zmm0_2 = var_200;
    }
    else
    {
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(&var_258, 
            "<unknown>System name: \r\nSystem…", 9);
        var_178 = var_248;
        zmm0_2 = var_258;
    }
    
    let mut var_188: i128 = zmm0_2;
    sysinfo::common::System::long_os_version::had50b3c9957b05a9(&var_200);
    let mut zmm0_3: i128;
    
    if var_200 != -0x8000000000000000
    {
        let var_138_1: i64 = var_1f0;
        zmm0_3 = var_200;
    }
    else
    {
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(&var_258, 
            "<unknown>System name: \r\nSystem…", 9);
        let var_138: i64 = var_248;
        zmm0_3 = var_258;
    }
    
    let mut var_148: i128 = zmm0_3;
    let mut var_c8: i64 = arg2[0x23];
    var_258 = &var_1a8;
    *var_258[8] =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Debug$GT$::fmt::h1887dc6ebeddb523;
    let var_248_1: *mut i128 = &var_118;
    let var_240: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Debug$GT$::fmt::h1887dc6ebeddb523;
    let var_238: *mut i128 = &var_188;
    let var_230: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Debug$GT$::fmt::h1887dc6ebeddb523;
    let var_228: *mut i128 = &var_148;
    let var_220: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Debug$GT$::fmt::h1887dc6ebeddb523;
    let var_218: *mut i64 = &var_c8;
    let var_210: fn(arg1: *mut i64, arg2: *mut i8) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h5424ed13591dfd18;
    var_200 = &data_b08fe0;
    let var_1f8: i64 = 6;
    let var_1e0: i64 = 0;
    let var_1f0_1: *mut i128 = &var_258;
    let var_1e8: i64 = 5;
    let mut var_e0: i128;
    core::option::Option$LT$T$GT$::map_or_else::h09968eee8a96299b(&var_e0, &var_200);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_148);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_188);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_118);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_1a8);
    let mut var_1c8: i128 = var_e0;
    let rax_10: i64 = arg2[0x2d];
    var_1a8 = rax_10 >> 0x14;
    var_118 = (rax_10 - arg2[0x2f]) >> 0x14;
    let rax_13: i64 = arg2[0x34];
    var_188 = rax_13 >> 0x14;
    var_148 = (rax_13 - arg2[0x35]) >> 0x14;
    var_258 = &var_1a8;
    *var_258[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h5424ed13591dfd18;
    let var_248_2: *mut i128 = &var_118;
    let var_240_1: fn(arg1: *mut i64, arg2: *mut i8) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h5424ed13591dfd18;
    let var_238_1: *mut i128 = &var_188;
    let var_230_1: fn(arg1: *mut i64, arg2: *mut i8) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h5424ed13591dfd18;
    let var_228_1: *mut i128 = &var_148;
    let var_220_1: fn(arg1: *mut i64, arg2: *mut i8) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h5424ed13591dfd18;
    var_200 = &data_b09040;
    let var_1f8_1: i64 = 5;
    let var_1e0_1: i64 = 0;
    let var_1f0_2: *mut i128 = &var_258;
    let var_1e8_1: i64 = 4;
    let mut var_a8: i128;
    core::option::Option$LT$T$GT$::map_or_else::h09968eee8a96299b(&var_a8, &var_200);
    var_c8 = var_a8;
    let var_98: u64;
    let var_b8: u64 = var_98;
    let mut rbp: *mut i128;
    rbp = 1;
    let var_c0: i64;
    alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h29791fc847e31467(&var_1c8, var_c0, var_98);
    alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h29791fc847e31467(&var_1c8, &data_4514b0[8], 8);
    sysinfo::common::Users::new_with_refreshed_list::hc9341fa093dbadfb(&var_e0);
    let rcx_6: i64 = *var_e0[8];
    var_188 = rcx_6;
    let var_d0: i64;
    *var_188[8] = var_d0 * 0x38 + rcx_6;
    
    for let mut i: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h99f0c75d64c9b8bd(&var_188); i != 0; i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h99f0c75d64c9b8bd(&var_188)
    {
        var_200 = *i.byte_offset(8);
        var_148 = &var_200;
        *var_148[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::h4fef948cf25803d9;
        var_258 = &data_b09090;
        *var_258[8] = 2;
        let var_238_2: i64 = 0;
        let var_248_3: *mut i128 = &var_148;
        let var_240_2: i64 = 1;
        let mut var_90: i128;
        core::option::Option$LT$T$GT$::map_or_else::h09968eee8a96299b(&var_90, &var_258);
        var_258 = var_90;
        let var_80: u64;
        let var_248_4: u64 = var_80;
        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h29791fc847e31467(&var_1c8, *var_258[8], 
            var_80);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_258);
    }
    
    rbp = 1;
    alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h29791fc847e31467(&var_1c8, &data_4514b0[0x10], 
        8);
    sysinfo::common::Disks::new_with_refreshed_list::hf6ff7270f4a59d10(&var_1a8);
    let rcx_9: i64 = *var_1a8[8];
    var_148 = rcx_9;
    *var_148[8] = var_198 * 0x70 + rcx_9;
    
    for let mut i_1: i64 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h77f06b596fc16c2c(&var_148); i_1 != 0; i_1 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h77f06b596fc16c2c(&var_148)
    {
        var_188 = i_1;
        var_200 = &var_188;
        let var_1f8_2: fn(arg1: *mut i64, arg2: *mut c_void) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::hd6a74c119766a180;
        var_258 = &data_b09090;
        *var_258[8] = 2;
        let var_238_3: i64 = 0;
        let var_248_5: *const *mut *mut c_void = &var_200;
        let var_240_3: i64 = 1;
        let mut var_78: i128;
        core::option::Option$LT$T$GT$::map_or_else::h09968eee8a96299b(&var_78, &var_258);
        var_258 = var_78;
        let var_68: u64;
        let var_248_6: u64 = var_68;
        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h29791fc847e31467(&var_1c8, *var_258[8], 
            var_68);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_258);
    }
    
    rbp = 1;
    alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h29791fc847e31467(&var_1c8, 
        "Networks:\r\nUptime:\r\n: /Days:…", 0xb);
    sysinfo::common::Networks::new_with_refreshed_list::h25bd9e7c6d3d576f(&var_148);
    let mut rax_20: i32;
    rax_20 = 1;
    let var_1cc: i32 = rax_20;
    _$LT$$RF$sysinfo..common..Networks$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h7522801a2b36065d(&var_118, &var_148);
    let var_f8: i64;
    let var_168: i64 = var_f8;
    var_178 = var_108;
    var_188 = var_118;
    let mut var_158: u64;
    let mut var_150: u64;
    
    loop
    {
        let mut rax_22: i64;
        let mut rdx_3: *mut i64;
        rax_22 = _$LT$hashbrown..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd0a113598629af8c(&var_188);
        
        if rax_22 == 0
        {
            break;
        }
        
        let mut var_b0: i64 = rax_22;
        var_158 = sysinfo::common::NetworkData::received::hce5ace0c2b1a9bd9(rdx_3);
        var_150 = sysinfo::common::NetworkData::transmitted::haabfd62a8ffb692d(rdx_3);
        var_258 = &var_b0;
        *var_258[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h49740bff2e11fb82;
        let var_248_7: *mut i64 = &var_158;
        let var_240_4: fn(arg1: *mut i64, arg2: *mut i8) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h5424ed13591dfd18;
        let var_238_4: *mut i64 = &var_150;
        let var_230_2: fn(arg1: *mut i64, arg2: *mut i8) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h5424ed13591dfd18;
        var_200 = &data_b090b0;
        let var_1f8_3: i64 = 4;
        let var_1e0_2: i64 = 0;
        let var_1f0_3: *mut i128 = &var_258;
        let var_1e8_2: i64 = 3;
        let mut var_60: i128;
        core::option::Option$LT$T$GT$::map_or_else::h09968eee8a96299b(&var_60, &var_200);
        var_258 = var_60;
        let var_50: u64;
        let var_248_8: u64 = var_50;
        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h29791fc847e31467(&var_1c8, *var_258[8], 
            var_50);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_258);
    }
    
    alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h29791fc847e31467(&var_1c8, 
        "Uptime:\r\n: /Days: Hours: Minut…", 9);
    let rax_25: i64 = sysinfo::common::System::uptime::hd8c74ee8b2c1dd18();
    var_158 = rax_25 / 0x15180;
    var_150 = (rax_25 % 0x15180 * 0x123457) >> 0x20;
    var_118 = ((rax_25 - rax_25 / 0xe10 * 0xe10) * 0x889) >> 0x11;
    var_188 = rax_25 % 0x3c;
    var_258 = &var_158;
    *var_258[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h5424ed13591dfd18;
    let var_248_9: *mut u64 = &var_150;
    let var_240_5: fn(arg1: *mut i64, arg2: *mut i8) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h5424ed13591dfd18;
    let var_238_5: *mut i128 = &var_118;
    let var_230_3: fn(arg1: *mut i64, arg2: *mut i8) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h5424ed13591dfd18;
    let var_228_2: *mut i128 = &var_188;
    let var_220_2: fn(arg1: *mut i64, arg2: *mut i8) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h5424ed13591dfd18;
    var_200 = &data_b090f0;
    let var_1f8_4: i64 = 5;
    let var_1e0_3: i64 = 0;
    let var_1f0_4: *mut i128 = &var_258;
    let var_1e8_3: i64 = 4;
    let mut var_48: i128;
    core::option::Option$LT$T$GT$::map_or_else::h09968eee8a96299b(&var_48, &var_200);
    var_258 = var_48;
    let var_38: u64;
    let var_248_10: u64 = var_38;
    alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h29791fc847e31467(&var_1c8, *var_258[8], var_38);
    arg1[1] = var_d0;
    *arg1 = var_1c8;
    let var_1cc_1: i32 = 0;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_258);
    core::ptr::drop_in_place$LT$sysinfo..common..Networks$GT$::hcdfd34bc85985594(&var_148);
    core::ptr::drop_in_place$LT$sysinfo..common..Disks$GT$::hdce72d6d44ef7e4d(&var_1a8);
    core::ptr::drop_in_place$LT$sysinfo..common..Users$GT$::h65685925c652bcda(&var_e0);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_c8);
    arg1
}
