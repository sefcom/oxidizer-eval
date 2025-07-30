
  int128_t* flealib::systemcmd::SystemCmd::get_system_info::h3c3ed6186f7b791a(int128_t* arg1, int64_t* arg2)

{
    sysinfo::common::System::refresh_all::h1fc83b5cbd010d91(arg2);
    void** const var_200;
    sysinfo::common::System::name::hc8bf6cc3ec672ee2(&var_200);
    int128_t var_258;
    int64_t var_248;
    int64_t var_1f0;
    int64_t var_198;
    int128_t zmm0;
    
    if (!(0 + -(var_200)))
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
    
    int128_t var_1a8 = zmm0;
    sysinfo::common::System::kernel_version::hcc467c07b3576e64(&var_200);
    int64_t var_108;
    int128_t zmm0_1;
    
    if (var_200 != -0x8000000000000000)
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
    
    int128_t var_118 = zmm0_1;
    sysinfo::common::System::os_version::h91e4287681b99a77(&var_200);
    int64_t var_178;
    int128_t zmm0_2;
    
    if (var_200 != -0x8000000000000000)
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
    
    int128_t var_188 = zmm0_2;
    sysinfo::common::System::long_os_version::had50b3c9957b05a9(&var_200);
    int128_t zmm0_3;
    
    if (var_200 != -0x8000000000000000)
    {
        int64_t var_138_1 = var_1f0;
        zmm0_3 = var_200;
    }
    else
    {
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(&var_258, 
            "<unknown>System name: \r\nSystem…", 9);
        int64_t var_138 = var_248;
        zmm0_3 = var_258;
    }
    
    int128_t var_148 = zmm0_3;
    int64_t var_c8 = arg2[0x23];
    var_258 = &var_1a8;
    *var_258[8] =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Debug$GT$::fmt::h1887dc6ebeddb523;
    int128_t* var_248_1 = &var_118;
    int64_t (* var_240)(void* arg1, void* arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Debug$GT$::fmt::h1887dc6ebeddb523;
    int128_t* var_238 = &var_188;
    int64_t (* var_230)(void* arg1, void* arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Debug$GT$::fmt::h1887dc6ebeddb523;
    int128_t* var_228 = &var_148;
    int64_t (* var_220)(void* arg1, void* arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Debug$GT$::fmt::h1887dc6ebeddb523;
    int64_t* var_218 = &var_c8;
    uint64_t (* var_210)(int64_t* arg1, char* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h5424ed13591dfd18;
    var_200 = &data_b08fe0;
    int64_t var_1f8 = 6;
    int64_t var_1e0 = 0;
    int128_t* var_1f0_1 = &var_258;
    int64_t var_1e8 = 5;
    int128_t var_e0;
    core::option::Option$LT$T$GT$::map_or_else::h09968eee8a96299b(&var_e0, &var_200);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_148);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_188);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_118);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_1a8);
    int128_t var_1c8 = var_e0;
    int64_t rax_10 = arg2[0x2d];
    var_1a8 = rax_10 >> 0x14;
    var_118 = (rax_10 - arg2[0x2f]) >> 0x14;
    int64_t rax_13 = arg2[0x34];
    var_188 = rax_13 >> 0x14;
    var_148 = (rax_13 - arg2[0x35]) >> 0x14;
    var_258 = &var_1a8;
    *var_258[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h5424ed13591dfd18;
    int128_t* var_248_2 = &var_118;
    uint64_t (* var_240_1)(int64_t* arg1, char* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h5424ed13591dfd18;
    int128_t* var_238_1 = &var_188;
    uint64_t (* var_230_1)(int64_t* arg1, char* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h5424ed13591dfd18;
    int128_t* var_228_1 = &var_148;
    uint64_t (* var_220_1)(int64_t* arg1, char* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h5424ed13591dfd18;
    var_200 = &data_b09040;
    int64_t var_1f8_1 = 5;
    int64_t var_1e0_1 = 0;
    int128_t* var_1f0_2 = &var_258;
    int64_t var_1e8_1 = 4;
    int128_t var_a8;
    core::option::Option$LT$T$GT$::map_or_else::h09968eee8a96299b(&var_a8, &var_200);
    var_c8 = var_a8;
    uint64_t var_98;
    uint64_t var_b8 = var_98;
    int128_t* rbp;
    rbp = 1;
    int64_t var_c0;
    alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h29791fc847e31467(&var_1c8, var_c0, var_98);
    alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h29791fc847e31467(&var_1c8, &data_4514b0[8], 8);
    sysinfo::common::Users::new_with_refreshed_list::hc9341fa093dbadfb(&var_e0);
    int64_t rcx_6 = *var_e0[8];
    var_188 = rcx_6;
    int64_t var_d0;
    *var_188[8] = var_d0 * 0x38 + rcx_6;
    
    for (void* i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h99f0c75d64c9b8bd(&var_188); i; i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h99f0c75d64c9b8bd(&var_188))
    {
        var_200 = *(i + 8);
        var_148 = &var_200;
        *var_148[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::h4fef948cf25803d9;
        var_258 = &data_b09090;
        *var_258[8] = 2;
        int64_t var_238_2 = 0;
        int128_t* var_248_3 = &var_148;
        int64_t var_240_2 = 1;
        int128_t var_90;
        core::option::Option$LT$T$GT$::map_or_else::h09968eee8a96299b(&var_90, &var_258);
        var_258 = var_90;
        uint64_t var_80;
        uint64_t var_248_4 = var_80;
        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h29791fc847e31467(&var_1c8, *var_258[8], 
            var_80);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_258);
    }
    
    rbp = 1;
    alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h29791fc847e31467(&var_1c8, &data_4514b0[0x10], 
        8);
    sysinfo::common::Disks::new_with_refreshed_list::hf6ff7270f4a59d10(&var_1a8);
    int64_t rcx_9 = *var_1a8[8];
    var_148 = rcx_9;
    *var_148[8] = var_198 * 0x70 + rcx_9;
    
    for (int64_t i_1 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h77f06b596fc16c2c(&var_148); i_1; i_1 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h77f06b596fc16c2c(&var_148))
    {
        var_188 = i_1;
        var_200 = &var_188;
        int64_t (* var_1f8_2)(int64_t* arg1, void* arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::hd6a74c119766a180;
        var_258 = &data_b09090;
        *var_258[8] = 2;
        int64_t var_238_3 = 0;
        void** const* var_248_5 = &var_200;
        int64_t var_240_3 = 1;
        int128_t var_78;
        core::option::Option$LT$T$GT$::map_or_else::h09968eee8a96299b(&var_78, &var_258);
        var_258 = var_78;
        uint64_t var_68;
        uint64_t var_248_6 = var_68;
        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h29791fc847e31467(&var_1c8, *var_258[8], 
            var_68);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_258);
    }
    
    rbp = 1;
    alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h29791fc847e31467(&var_1c8, 
        "Networks:\r\nUptime:\r\n: /Days:…", 0xb);
    sysinfo::common::Networks::new_with_refreshed_list::h25bd9e7c6d3d576f(&var_148);
    int32_t rax_20;
    rax_20 = 1;
    int32_t var_1cc = rax_20;
    _$LT$$RF$sysinfo..common..Networks$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h7522801a2b36065d(&var_118, &var_148);
    int64_t var_f8;
    int64_t var_168 = var_f8;
    var_178 = var_108;
    var_188 = var_118;
    uint64_t var_158;
    uint64_t var_150;
    
    while (true)
    {
        int64_t rax_22;
        int64_t* rdx_3;
        rax_22 = _$LT$hashbrown..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd0a113598629af8c(&var_188);
        
        if (!rax_22)
            break;
        
        int64_t var_b0 = rax_22;
        var_158 = sysinfo::common::NetworkData::received::hce5ace0c2b1a9bd9(rdx_3);
        var_150 = sysinfo::common::NetworkData::transmitted::haabfd62a8ffb692d(rdx_3);
        var_258 = &var_b0;
        *var_258[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h49740bff2e11fb82;
        int64_t* var_248_7 = &var_158;
        uint64_t (* var_240_4)(int64_t* arg1, char* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h5424ed13591dfd18;
        int64_t* var_238_4 = &var_150;
        uint64_t (* var_230_2)(int64_t* arg1, char* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h5424ed13591dfd18;
        var_200 = &data_b090b0;
        int64_t var_1f8_3 = 4;
        int64_t var_1e0_2 = 0;
        int128_t* var_1f0_3 = &var_258;
        int64_t var_1e8_2 = 3;
        int128_t var_60;
        core::option::Option$LT$T$GT$::map_or_else::h09968eee8a96299b(&var_60, &var_200);
        var_258 = var_60;
        uint64_t var_50;
        uint64_t var_248_8 = var_50;
        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h29791fc847e31467(&var_1c8, *var_258[8], 
            var_50);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_258);
    }
    
    alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h29791fc847e31467(&var_1c8, 
        "Uptime:\r\n: /Days: Hours: Minut…", 9);
    int64_t rax_25 = sysinfo::common::System::uptime::hd8c74ee8b2c1dd18();
    var_158 = rax_25 / 0x15180;
    var_150 = (rax_25 % 0x15180 * 0x123457) >> 0x20;
    var_118 = ((rax_25 - rax_25 / 0xe10 * 0xe10) * 0x889) >> 0x11;
    var_188 = rax_25 % 0x3c;
    var_258 = &var_158;
    *var_258[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h5424ed13591dfd18;
    uint64_t* var_248_9 = &var_150;
    uint64_t (* var_240_5)(int64_t* arg1, char* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h5424ed13591dfd18;
    int128_t* var_238_5 = &var_118;
    uint64_t (* var_230_3)(int64_t* arg1, char* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h5424ed13591dfd18;
    int128_t* var_228_2 = &var_188;
    uint64_t (* var_220_2)(int64_t* arg1, char* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h5424ed13591dfd18;
    var_200 = &data_b090f0;
    int64_t var_1f8_4 = 5;
    int64_t var_1e0_3 = 0;
    int128_t* var_1f0_4 = &var_258;
    int64_t var_1e8_3 = 4;
    int128_t var_48;
    core::option::Option$LT$T$GT$::map_or_else::h09968eee8a96299b(&var_48, &var_200);
    var_258 = var_48;
    uint64_t var_38;
    uint64_t var_248_10 = var_38;
    alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h29791fc847e31467(&var_1c8, *var_258[8], var_38);
    arg1[1] = var_d0;
    *arg1 = var_1c8;
    int32_t var_1cc_1 = 0;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_258);
    core::ptr::drop_in_place$LT$sysinfo..common..Networks$GT$::hcdfd34bc85985594(&var_148);
    core::ptr::drop_in_place$LT$sysinfo..common..Disks$GT$::hdce72d6d44ef7e4d(&var_1a8);
    core::ptr::drop_in_place$LT$sysinfo..common..Users$GT$::h65685925c652bcda(&var_e0);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_c8);
    return arg1;
}
