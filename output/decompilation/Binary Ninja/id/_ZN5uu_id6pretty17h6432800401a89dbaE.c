
  int64_t uu_id::pretty::h6432800401a89dba(int64_t* arg1, int64_t arg2 @ r14)

{
    int64_t var_18 = arg2;
    uid_t** r12;
    uid_t** var_28 = r12;
    uid_t* var_1b8;
    int64_t (* var_1b0)(void* arg1, int64_t arg2);
    char const (** const var_1a0)[0x72];
    int128_t var_168;
    int128_t var_e8;
    uid_t* var_c8;
    int128_t* var_40;
    
    if (!(0 + -(*arg1)))
    {
        int128_t var_f8_1 = *(arg1 + 0x70);
        int128_t var_108_1 = *(arg1 + 0x60);
        int128_t var_118_1 = *(arg1 + 0x50);
        int128_t var_128_1 = *(arg1 + 0x40);
        int128_t var_138_1 = *(arg1 + 0x30);
        int128_t var_148_1 = *(arg1 + 0x20);
        int128_t var_158_1 = *(arg1 + 0x10);
        var_168 = *arg1;
        var_1a0 = &var_168;
        int64_t (* var_198_1)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_c8 = &data_4e8d58;
        int64_t var_c0_1 = 2;
        int64_t var_a8_1 = 0;
        char const (** const* var_b8_1)[0x72] = &var_1a0;
        int64_t var_b0_1 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_c8);
        uucore::features::entries::Passwd::belongs_to::h86a03abed7028785(&var_1a0, &var_168);
        core::iter::traits::iterator::Iterator::collect::h7015affb243c4c0c(&var_1b8, var_198_1);
        int64_t var_1a8;
        alloc::str::join_generic_copy::h59511d2ef6868464(&var_c8, var_1b0, var_1a8, 
            " \nlogin\teuid\tgroups\tsrc/uu/i…");
        char const (** const* var_d8_1)[0x72] = var_b8_1;
        var_e8 = var_c8;
        var_40 = &var_e8;
        int64_t (* var_38_1)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_c8 = &data_4e8d78;
        int64_t var_c0_2 = 2;
        int64_t var_a8_2 = 0;
        int128_t** var_b8_2 = &var_40;
        int64_t var_b0_2 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_c8);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h084553603f2ff391(var_e8, 
            *var_e8[8]);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hd40cc4d4fa480ff0(&var_1b8);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u32$GT$$GT$::h4a55a5c1ac3ca45b(var_1a0, 
            var_198_1);
        return core::ptr::drop_in_place$LT$uucore..features..entries..Passwd$GT$::h12f3820528dcc77c(
            &var_168);
    }
    
    char* rax = getlogin();
    uid_t** var_158;
    uid_t* rbx_1;
    
    if (!rax)
        rbx_1 = -0x8000000000000001;
    else
    {
        alloc::ffi::c_str::_$LT$impl$u20$core..ffi..c_str..CStr$GT$::to_string_lossy::h9afbfb8b28205f24(&var_168, rax, strlen(rax) + 1);
        rbx_1 = var_168;
        arg2 = *var_168[8];
        r12 = var_158;
    }
    
    int64_t rbp;
    rbp = 1;
    uid_t rax_4 = uucore::features::process::getuid::h408babfb7f2600cd();
    uid_t var_170 = rax_4;
    _$LT$uucore..features..entries..Passwd$u20$as$u20$uucore..features..entries..Locate$LT$u32$GT$$GT$::locate::h5d0bb482984d9c00(&var_c8, rax_4);
    int64_t var_198;
    uid_t** var_190;
    int128_t var_148;
    uint64_t (* var_c0)(int32_t* arg1, int64_t* arg2);
    int64_t var_b8;
    int64_t var_a8;
    int128_t var_98;
    int128_t var_88;
    int128_t var_78;
    int128_t var_68;
    int128_t var_58;
    
    if (var_c8 != -0x8000000000000000)
    {
        int128_t var_f8_2 = var_58;
        int128_t var_108_2 = var_68;
        int128_t var_118_2 = var_78;
        int128_t var_128_2 = var_88;
        int128_t var_138_2 = var_98;
        var_148 = var_a8;
        var_158 = var_b8;
        var_168 = var_c8;
        rbp = 1;
        
        if (rbx_1 != -0x7fffffffffffffff)
        {
            var_1b8 = rbx_1;
            uid_t** var_1a8_1 = r12;
            var_e8 = &var_1b8;
            *var_e8[8] = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h9ee76235c490d349;
            var_1a0 = &data_4e8d98;
            int64_t var_198_2 = 2;
            int64_t var_180_1 = 0;
            int128_t* var_190_1 = &var_e8;
            int64_t var_188_1 = 1;
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
        int64_t var_180_2 = 0;
        var_190 = &var_1b8;
        int64_t var_188_2 = 1;
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
    
    uid_t rax_5 = uucore::features::process::getegid::h2ca565c9eb3bafb7();
    uid_t var_16c = rax_5;
    
    if (rax_5 == var_170)
    {
        _$LT$uucore..features..entries..Passwd$u20$as$u20$uucore..features..entries..Locate$LT$u32$GT$$GT$::locate::h5d0bb482984d9c00(&var_c8, rax_5);
        
        if (var_c8 != -0x8000000000000000)
        {
            int128_t var_f8_3 = var_58;
            int128_t var_108_3 = var_68;
            int128_t var_118_3 = var_78;
            int128_t var_128_3 = var_88;
            int128_t var_138_3 = var_98;
            var_148 = var_a8;
            var_158 = var_b8;
            var_168 = var_c8;
            var_1b8 = &var_168;
            var_1b0 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_1a0 = &data_4e8dd8;
            var_198 = 2;
            int64_t var_180_3 = 0;
            var_190 = &var_1b8;
            int64_t var_188_3 = 1;
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
    
    gid_t rax_6;
    int32_t rdx_4;
    rax_6 = uucore::features::process::getgid::h996eeb286e507395();
    var_40 = rax_6;
    
    if (rax_6 != var_16c)
    {
        _$LT$uucore..features..entries..Group$u20$as$u20$uucore..features..entries..Locate$LT$u32$GT$$GT$::locate::hf537d3ad4e514fa6(&var_1a0, rax_6);
        
        if (var_1a0 != -0x8000000000000000)
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
    uid_t** var_1a8_2 = var_158;
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
    int64_t result = core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u32$GT$$GT$::h4a55a5c1ac3ca45b(
        var_c8, var_c0);
    
    if (rbx_1 != -0x7fffffffffffffff && rbp)
        return core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hcdb2e0fcaf73ab0e(
            rbx_1, arg2);
    
    return result;
}
