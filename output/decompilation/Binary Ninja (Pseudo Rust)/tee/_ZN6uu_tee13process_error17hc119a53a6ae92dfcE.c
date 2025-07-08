
  fn uu_tee::process_error::hc119a53a6ae92dfc(arg1: *mut i8, arg2: i64, arg3: *mut c_void, arg4: *mut i64) -> i64

{
    let mut result: i64 = arg2;
    let mut var_90: *mut c_void;
    let mut var_60: *mut i64;
    let mut var_40: i64;
    
    if arg1 == 0
    {
        'label_4b3801:
        
        if std::io::error::Error::kind::hb2ff5fa058639b3d(arg2) == 0xb
        {
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hb33ceb02c1cf9a1d(arg2);
            return 0;
        }
        
        let mut rax_6: i64;
        let mut rdx_1: i64;
        rax_6 = uucore::util_name::h60d842bf27b05e82();
        var_40 = rax_6;
        let mut var_38_2: i64 = rdx_1;
        var_60 = &var_40;
        let var_58_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h845947ade0b20afc;
        var_90 = &data_51f9a8;
        let var_88_3: i64 = 2;
        let var_70_3: i64 = 0;
        let var_80_3: *mut *mut i64 = &var_60;
        let var_78_3: i64 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_90);
        let zmm0_2: i128 = *arg3.byte_offset(8);
        var_40 = 0;
        var_38_2 = zmm0_2;
        let var_28_2: i8 = 0;
        var_60 = &var_40;
        let var_58_4: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        let var_50_2: *mut i64 = &result;
        let var_48_2: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
            _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
        var_90 = &data_51f9c8;
        let var_88_4: i64 = 3;
        let var_70_4: i64 = 0;
        let var_80_4: *mut *mut i64 = &var_60;
        let var_78_4: i64 = 2;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_90);
        goto 'label_4b38e3;
    }
    
    match jump_table_413afc[*arg1]
    {
        0x9fc28 =>
        {
            let mut rax_4: i64;
            let mut rdx: i64;
            rax_4 = uucore::util_name::h60d842bf27b05e82();
            var_40 = rax_4;
            let mut var_38_1: i64 = rdx;
            var_60 = &var_40;
            let var_58_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h845947ade0b20afc;
            var_90 = &data_51f9a8;
            let var_88_1: i64 = 2;
            let var_70_1: i64 = 0;
            let var_80_1: *mut *mut i64 = &var_60;
            let var_78_1: i64 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_90);
            let zmm0_1: i128 = *arg3.byte_offset(8);
            var_40 = 0;
            var_38_1 = zmm0_1;
            let var_28_1: i8 = 0;
            var_60 = &var_40;
            let var_58_2: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            let var_50_1: *mut i64 = &result;
            let var_48_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
            var_90 = &data_51f9c8;
            let var_88_2: i64 = 3;
            let var_70_2: i64 = 0;
            let var_80_2: *mut *mut i64 = &var_60;
            let var_78_2: i64 = 2;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_90);
            'label_4b38e3:
            *arg4 += 1;
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hb33ceb02c1cf9a1d(result);
            0
        }
        0x9fd02 =>
        {
            goto 'label_4b3801;
        }
        0x9fdfd =>
        {
            let mut rax_8: i64;
            let mut rdx_2: i64;
            rax_8 = uucore::util_name::h60d842bf27b05e82();
            var_40 = rax_8;
            let mut var_38_3: i64 = rdx_2;
            var_60 = &var_40;
            let var_58_5: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h845947ade0b20afc;
            var_90 = &data_51f9a8;
            let var_88_5: i64 = 2;
            let var_70_5: i64 = 0;
            let var_80_5: *mut *mut i64 = &var_60;
            let var_78_5: i64 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_90);
            let zmm0_3: i128 = *arg3.byte_offset(8);
            var_40 = 0;
            var_38_3 = zmm0_3;
            let var_28_3: i8 = 0;
            var_60 = &var_40;
            let var_58_6: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            let var_50_3: *mut i64 = &result;
            let var_48_3: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
            var_90 = &data_51f9c8;
            let var_88_6: i64 = 3;
            let var_70_6: i64 = 0;
            let var_80_6: *mut *mut i64 = &var_60;
            let var_78_6: i64 = 2;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_90);
            result
        }
        0x9fed7 =>
        {
            if std::io::error::Error::kind::hb2ff5fa058639b3d(arg2) == 0xb
            {
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hb33ceb02c1cf9a1d(arg2);
                return 0;
            }
            
            let mut rax_10: i64;
            let mut rdx_3: i64;
            rax_10 = uucore::util_name::h60d842bf27b05e82();
            var_40 = rax_10;
            let mut var_38_4: i64 = rdx_3;
            var_60 = &var_40;
            let var_58_7: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h845947ade0b20afc;
            var_90 = &data_51f9a8;
            let var_88_7: i64 = 2;
            let var_70_7: i64 = 0;
            let var_80_7: *mut *mut i64 = &var_60;
            let var_78_7: i64 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_90);
            let zmm0_4: i128 = *arg3.byte_offset(8);
            var_40 = 0;
            var_38_4 = zmm0_4;
            let var_28_4: i8 = 0;
            var_60 = &var_40;
            let var_58_8: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            let var_50_4: *mut i64 = &result;
            let var_48_4: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
            var_90 = &data_51f9c8;
            let var_88_8: i64 = 3;
            let var_70_8: i64 = 0;
            let var_80_8: *mut *mut i64 = &var_60;
            let var_78_8: i64 = 2;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_90);
            result
        }
    }
}
