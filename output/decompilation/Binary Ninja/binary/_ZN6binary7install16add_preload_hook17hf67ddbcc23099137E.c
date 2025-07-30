
  int64_t binary::install::add_preload_hook::hf67ddbcc23099137(int64_t* arg1)

{
    int32_t var_a8;
    char* var_a0;
    int64_t** var_98;
    int64_t var_90;
    char const* const var_78;
    int64_t var_50;
    int64_t* var_38;
    
    if (core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6() > 2)
    {
        var_50 = *(arg1 + 8);
        var_38 = &var_50;
        uint64_t (* var_30_1)(int64_t* arg1, int64_t arg2) =
            _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h16169839c0f0229e;
        var_a8 = &data_1ce6b08;
        var_a0 = 1;
        int64_t var_88_1 = 0;
        var_98 = &var_38;
        var_90 = 1;
        int64_t rax_1 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce6b88);
        var_78 = &data_45022a[0x15];
        int64_t var_70_1 = 0xf;
        char const* const var_68_1 = &data_45022a[0x15];
        int64_t var_60_1 = 0xf;
        int64_t var_58_1 = rax_1;
        log::__private_api::log::h450dfdf51a11f9e0(&var_a8, 3, &var_78);
    }
    
    var_50 = 0;
    int64_t var_48 = 1;
    int64_t var_40 = 0;
    std::fs::File::open::hf06c0a1883d23663(&var_a8, &data_4502c0);
    
    if (var_a8 == 1)
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..File$C$std..io..error..Error$GT$$GT$::h9c58f2ca93495b32(&var_a8);
    else
    {
        int32_t var_a4;
        var_78 = var_a4;
        char rax_3;
        int64_t rdx_3;
        rax_3 = _$LT$std..fs..File$u20$as$u20$std..io..Read$GT$::read_to_string::h90303cf0898de375(
            &var_78, &var_50);
        core::result::Result$LT$T$C$E$GT$::unwrap::h60d8d6e3e44b4585(rax_3, rdx_3);
        core::ptr::drop_in_place$LT$std..fs..File$GT$::h0d00817cc0df8c52(var_78);
        
        if (var_a8 & 1)
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..File$C$std..io..error..Error$GT$$GT$::h9c58f2ca93495b32(&var_a8);
    }
    
    uint64_t rax_4;
    void* rdx_4;
    rax_4 = core::str::_$LT$impl$u20$str$GT$::trim_end_matches::hb1f4674a2fe369ae(var_48, var_40);
    alloc::string::String::from_utf8_lossy::h15b2ae7cc020fd00(&var_a8, arg1[1], arg1[2]);
    
    if (!
        _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h11591152817aa06e(
        var_a0, var_98, rax_4, rdx_4))
    {
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h8678e8e37eeffbce(&var_a8);
        std::fs::File::create::h5672d150972909f3(&var_a8, &data_4502c0);
        int32_t fd = core::result::Result$LT$T$C$E$GT$::unwrap::h7df6ec60d40e0034(&var_a8);
        int64_t var_90_1;
        
        if (!core::str::_$LT$impl$u20$str$GT$::trim_end_matches::hb1f4674a2fe369ae(var_48, var_40))
        {
            var_78 = *(arg1 + 8);
            var_38 = &var_78;
            uint64_t (* var_30_3)(int64_t* arg1, int64_t arg2) =
                _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h16169839c0f0229e;
            var_a8 = &data_1ce6b48;
            int64_t var_a0_3 = 2;
            int64_t var_88_3 = 0;
            int64_t** var_98_3 = &var_38;
            var_90_1 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::h51d2d50506e3e047(
                std::io::Write::write_fmt::hd6ebbe7bec9da27d(&fd, &var_a8));
        }
        else
        {
            int128_t var_28 = *(arg1 + 8);
            int64_t* rax_9;
            int64_t rdx_10;
            rax_9 = core::str::_$LT$impl$u20$str$GT$::trim_end_matches::hb1f4674a2fe369ae(var_48, 
                var_40);
            var_38 = rax_9;
            int64_t var_30_2 = rdx_10;
            var_78 = &var_28;
            uint64_t (* var_70_3)(int64_t* arg1, int64_t arg2) =
                _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h16169839c0f0229e;
            int64_t** var_68_3 = &var_38;
            int64_t (* var_60_3)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8a47090d3f9d8101;
            var_a8 = &data_1ce6b18;
            int64_t var_a0_2 = 3;
            int64_t var_88_2 = 0;
            char const* const* var_98_2 = &var_78;
            var_90_1 = 2;
            core::result::Result$LT$T$C$E$GT$::unwrap::h51d2d50506e3e047(
                std::io::Write::write_fmt::hd6ebbe7bec9da27d(&fd, &var_a8));
        }
        
        if (core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6() > 2)
        {
            var_a8 = &data_1ce6b68;
            int64_t var_a0_4 = 1;
            int64_t var_98_4 = 8;
            var_90_1 = {0};
            int64_t rax_13 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce6c00);
            var_78 = &data_45022a[0x15];
            int64_t var_70_4 = 0xf;
            char const* const var_68_4 = &data_45022a[0x15];
            int64_t var_60_4 = 0xf;
            int64_t var_58_3 = rax_13;
            log::__private_api::log::h450dfdf51a11f9e0(&var_a8, 3, &var_78);
        }
        
        core::ptr::drop_in_place$LT$std..fs..File$GT$::h0d00817cc0df8c52(fd);
    }
    else
    {
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h8678e8e37eeffbce(&var_a8);
        
        if (core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6() >= 3)
        {
            var_a8 = &data_1ce6b78;
            int64_t var_a0_1 = 1;
            int64_t var_98_1 = 8;
            var_90 = {0};
            int64_t rax_7 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce6c18);
            var_78 = &data_45022a[0x15];
            int64_t var_70_2 = 0xf;
            char const* const var_68_2 = &data_45022a[0x15];
            int64_t var_60_2 = 0xf;
            int64_t var_58_2 = rax_7;
            log::__private_api::log::h450dfdf51a11f9e0(&var_a8, 3, &var_78);
        }
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdc7993f7c2e49023(&var_50);
    return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h11842ea3b2390ec0(arg1);
}
