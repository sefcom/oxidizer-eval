
  fn binary::install::add_preload_hook::hf67ddbcc23099137(arg1: *mut i64) -> i64

{
    let mut var_a8: i32;
    let mut var_a0: *mut i8;
    let mut var_98: *mut *mut i64;
    let mut var_90: i64;
    let mut var_78: *const i8;
    let mut var_50: i64;
    let mut var_38: *mut i64;
    
    if core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6() > 2
    {
        var_50 = *arg1.byte_offset(8);
        var_38 = &var_50;
        let var_30_1: fn(arg1: *mut i64, arg2: i64) -> u64 =
            _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h16169839c0f0229e;
        var_a8 = &data_1ce6b08;
        var_a0 = 1;
        let var_88_1: i64 = 0;
        var_98 = &var_38;
        var_90 = 1;
        let rax_1: i64 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce6b88);
        var_78 = &data_45022a[0x15];
        let var_70_1: i64 = 0xf;
        let var_68_1: *const i8 = &data_45022a[0x15];
        let var_60_1: i64 = 0xf;
        let var_58_1: i64 = rax_1;
        log::__private_api::log::h450dfdf51a11f9e0(&var_a8, 3, &var_78);
    }
    
    var_50 = 0;
    let var_48: i64 = 1;
    let var_40: i64 = 0;
    std::fs::File::open::hf06c0a1883d23663(&var_a8, &data_4502c0);
    
    if var_a8 == 1
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..File$C$std..io..error..Error$GT$$GT$::h9c58f2ca93495b32(&var_a8);
    }
    else
    {
        let var_a4: i32;
        var_78 = var_a4;
        let mut rax_3: i8;
        let mut rdx_3: i64;
        rax_3 = _$LT$std..fs..File$u20$as$u20$std..io..Read$GT$::read_to_string::h90303cf0898de375(
            &var_78, &var_50);
        core::result::Result$LT$T$C$E$GT$::unwrap::h60d8d6e3e44b4585(rax_3, rdx_3);
        core::ptr::drop_in_place$LT$std..fs..File$GT$::h0d00817cc0df8c52(var_78);
        
        if (var_a8 & 1) != 0
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..File$C$std..io..error..Error$GT$$GT$::h9c58f2ca93495b32(&var_a8);
        }
    }
    
    let mut rax_4: u64;
    let mut rdx_4: *mut c_void;
    rax_4 = core::str::_$LT$impl$u20$str$GT$::trim_end_matches::hb1f4674a2fe369ae(var_48, var_40);
    alloc::string::String::from_utf8_lossy::h15b2ae7cc020fd00(&var_a8, arg1[1], arg1[2]);
    
    if _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h11591152817aa06e(
        var_a0, var_98, rax_4, rdx_4) == 0
    {
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h8678e8e37eeffbce(&var_a8);
        std::fs::File::create::h5672d150972909f3(&var_a8, &data_4502c0);
        let mut fd: i32 = core::result::Result$LT$T$C$E$GT$::unwrap::h7df6ec60d40e0034(&var_a8);
        let mut var_90_1: i64;
        
        if core::str::_$LT$impl$u20$str$GT$::trim_end_matches::hb1f4674a2fe369ae(var_48, var_40)
            == 0
        {
            var_78 = *arg1.byte_offset(8);
            var_38 = &var_78;
            let var_30_3: fn(arg1: *mut i64, arg2: i64) -> u64 =
                _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h16169839c0f0229e;
            var_a8 = &data_1ce6b48;
            let var_a0_3: i64 = 2;
            let var_88_3: i64 = 0;
            let var_98_3: *mut *mut i64 = &var_38;
            var_90_1 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::h51d2d50506e3e047(
                std::io::Write::write_fmt::hd6ebbe7bec9da27d(&fd, &var_a8));
        }
        else
        {
            let mut var_28: i128 = *arg1.byte_offset(8);
            let mut rax_9: *mut i64;
            let mut rdx_10: i64;
            rax_9 = core::str::_$LT$impl$u20$str$GT$::trim_end_matches::hb1f4674a2fe369ae(var_48, 
                var_40);
            var_38 = rax_9;
            let var_30_2: i64 = rdx_10;
            var_78 = &var_28;
            let var_70_3: fn(arg1: *mut i64, arg2: i64) -> u64 =
                _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h16169839c0f0229e;
            let var_68_3: *mut *mut i64 = &var_38;
            let var_60_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8a47090d3f9d8101;
            var_a8 = &data_1ce6b18;
            let var_a0_2: i64 = 3;
            let var_88_2: i64 = 0;
            let var_98_2: *const *const i8 = &var_78;
            var_90_1 = 2;
            core::result::Result$LT$T$C$E$GT$::unwrap::h51d2d50506e3e047(
                std::io::Write::write_fmt::hd6ebbe7bec9da27d(&fd, &var_a8));
        }
        
        if core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6() > 2
        {
            var_a8 = &data_1ce6b68;
            let var_a0_4: i64 = 1;
            let var_98_4: i64 = 8;
            var_90_1 = {0};
            let rax_13: i64 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce6c00);
            var_78 = &data_45022a[0x15];
            let var_70_4: i64 = 0xf;
            let var_68_4: *const i8 = &data_45022a[0x15];
            let var_60_4: i64 = 0xf;
            let var_58_3: i64 = rax_13;
            log::__private_api::log::h450dfdf51a11f9e0(&var_a8, 3, &var_78);
        }
        
        core::ptr::drop_in_place$LT$std..fs..File$GT$::h0d00817cc0df8c52(fd);
    }
    else
    {
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h8678e8e37eeffbce(&var_a8);
        
        if core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6() >= 3
        {
            var_a8 = &data_1ce6b78;
            let var_a0_1: i64 = 1;
            let var_98_1: i64 = 8;
            var_90 = {0};
            let rax_7: i64 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce6c18);
            var_78 = &data_45022a[0x15];
            let var_70_2: i64 = 0xf;
            let var_68_2: *const i8 = &data_45022a[0x15];
            let var_60_2: i64 = 0xf;
            let var_58_2: i64 = rax_7;
            log::__private_api::log::h450dfdf51a11f9e0(&var_a8, 3, &var_78);
        }
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdc7993f7c2e49023(&var_50);
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h11842ea3b2390ec0(arg1)
}
