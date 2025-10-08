
  fn uu_tee::process_error::ha4eebf41bd63a2e6(arg1: *mut i8, arg2: i64, arg3: i64, arg4: i64, arg5: *mut i64) -> i64

{
    let mut result: i64 = arg2;
    let mut var_98: *mut c_void;
    let mut var_68: *mut i64;
    let mut var_48: i64;
    
    if arg1 == 0
    {
        'label_45d53a:
        
        if std::io::error::Error::kind::h135fe00c4e7365f3(arg2) == 0xb
        {
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hc399f132f0256091(result);
            return 0;
        }
        
        let mut rax_6: i64;
        let mut rdx_1: i64;
        rax_6 = uucore::util_name::h074417a1e6395129();
        var_48 = rax_6;
        let var_40_3: i64 = rdx_1;
        var_68 = &var_48;
        let var_60_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0c0a48ca77de87af;
        var_98 = &data_4ea4f0;
        let var_90_3: i64 = 2;
        let var_78_3: i64 = 0;
        let var_88_3: *mut *mut i64 = &var_68;
        let var_80_3: i64 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_98);
        var_48 = 0;
        let var_40_4: i64 = arg3;
        let var_38_2: i64 = arg4;
        let var_30_2: i8 = 0;
        var_68 = &var_48;
        let var_60_4: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
        let var_58_2: *mut i64 = &result;
        let var_50_2: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
            _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
        var_98 = &data_4ea510;
        let var_90_4: i64 = 3;
        let var_78_4: i64 = 0;
        let var_88_4: *mut *mut i64 = &var_68;
        let var_80_4: i64 = 2;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_98);
        goto 'label_45d61f;
    }
    
    match jump_table_4191f8[*arg1]
    {
        0x44262 =>
        {
            let mut rax_4: i64;
            let mut rdx: i64;
            rax_4 = uucore::util_name::h074417a1e6395129();
            var_48 = rax_4;
            let var_40_1: i64 = rdx;
            var_68 = &var_48;
            let var_60_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0c0a48ca77de87af;
            var_98 = &data_4ea4f0;
            let var_90_1: i64 = 2;
            let var_78_1: i64 = 0;
            let var_88_1: *mut *mut i64 = &var_68;
            let var_80_1: i64 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_98);
            var_48 = 0;
            let var_40_2: i64 = arg3;
            let var_38_1: i64 = arg4;
            let var_30_1: i8 = 0;
            var_68 = &var_48;
            let var_60_2: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            let var_58_1: *mut i64 = &result;
            let var_50_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
            var_98 = &data_4ea510;
            let var_90_2: i64 = 3;
            let var_78_2: i64 = 0;
            let var_88_2: *mut *mut i64 = &var_68;
            let var_80_2: i64 = 2;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_98);
            'label_45d61f:
            *arg5 += 1;
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hc399f132f0256091(result);
            0
        }
        0x4433f =>
        {
            goto 'label_45d53a;
        }
        0x4443b =>
        {
            let mut rax_8: i64;
            let mut rdx_2: i64;
            rax_8 = uucore::util_name::h074417a1e6395129();
            var_48 = rax_8;
            let var_40_5: i64 = rdx_2;
            var_68 = &var_48;
            let var_60_5: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0c0a48ca77de87af;
            var_98 = &data_4ea4f0;
            let var_90_5: i64 = 2;
            let var_78_5: i64 = 0;
            let var_88_5: *mut *mut i64 = &var_68;
            let var_80_5: i64 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_98);
            var_48 = 0;
            let var_40_6: i64 = arg3;
            let var_38_3: i64 = arg4;
            let var_30_3: i8 = 0;
            var_68 = &var_48;
            let var_60_6: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            let var_58_3: *mut i64 = &result;
            let var_50_3: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
            var_98 = &data_4ea510;
            let var_90_6: i64 = 3;
            let var_78_6: i64 = 0;
            let var_88_6: *mut *mut i64 = &var_68;
            let var_80_6: i64 = 2;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_98);
            result
        }
        0x44518 =>
        {
            if std::io::error::Error::kind::h135fe00c4e7365f3(arg2) == 0xb
            {
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hc399f132f0256091(result);
                return 0;
            }
            
            let mut rax_10: i64;
            let mut rdx_3: i64;
            rax_10 = uucore::util_name::h074417a1e6395129();
            var_48 = rax_10;
            let var_40_7: i64 = rdx_3;
            var_68 = &var_48;
            let var_60_7: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0c0a48ca77de87af;
            var_98 = &data_4ea4f0;
            let var_90_7: i64 = 2;
            let var_78_7: i64 = 0;
            let var_88_7: *mut *mut i64 = &var_68;
            let var_80_7: i64 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_98);
            var_48 = 0;
            let var_40_8: i64 = arg3;
            let var_38_4: i64 = arg4;
            let var_30_4: i8 = 0;
            var_68 = &var_48;
            let var_60_8: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            let var_58_4: *mut i64 = &result;
            let var_50_4: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
            var_98 = &data_4ea510;
            let var_90_8: i64 = 3;
            let var_78_8: i64 = 0;
            let var_88_8: *mut *mut i64 = &var_68;
            let var_80_8: i64 = 2;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_98);
            result
        }
    }
}
