
  fn firecracker::api_server::parsed_request::describe::h4773036524096959(arg1: *mut i64, arg2: i8, arg3: i64, arg4: u64, arg5: *mut c_void) -> i64

{
    let mut var_89: i8 = arg2;
    let mut var_68: i64 = arg3;
    let var_60: u64 = arg4;
    let mut rax: i8;
    let mut rdx: u64;
    rax = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb86d93d0e67a6bf4(arg3, arg4, "/mmds/cpu-config request on . To…", 5);
    let mut var_88: *mut i8;
    let mut var_58: *mut c_void;
    
    if arg5 == 0 || rax != 0
    {
        var_88 = &var_89;
        let var_80: fn(arg1: *mut i8, arg2: *mut i64) -> i64 =
            _$LT$micro_http..common..Method$u20$as$u20$core..fmt..Debug$GT$::fmt::h82e2c33064e74b2c;
        let var_78: *mut i64 = &var_68;
        let var_70: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::h9e623ec8df216556;
        var_58 = &data_7a3790;
        let var_50: i64 = 2;
    }
    else
    {
        let mut rax_1: i8;
        rax_1 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb86d93d0e67a6bf4(arg3, arg4, "/cpu-config request on . To view…", 0xb);
        
        if rax_1 == 0
        {
            /* tailcall */
            return firecracker::api_server::parsed_request::describe_with_body::hf46da4cd4417a7fb(
                arg1, arg2, arg3, arg4, *arg5.byte_offset(8), *arg5.byte_offset(0x10));
        }
        
        if core::sync::atomic::atomic_load::hcd41a4cf8b7c5bb4(
            &log::MAX_LOG_LEVEL_FILTER::hba2cad573e31d8ba, 0) >= 4
        {
            let mut rax_3: i8;
            rax_3 = log::__private_api::enabled::h13ece3defc83be86();
            
            if rax_3 != 0
            {
                /* tailcall */
                return
                    firecracker::api_server::parsed_request::describe_with_body::hf46da4cd4417a7fb(
                    arg1, arg2, arg3, arg4, *arg5.byte_offset(8), *arg5.byte_offset(0x10));
            }
        }
        
        var_88 = &var_89;
        let var_80_1: fn(arg1: *mut i8, arg2: *mut i64) -> i64 =
            _$LT$micro_http..common..Method$u20$as$u20$core..fmt..Debug$GT$::fmt::h82e2c33064e74b2c;
        let var_78_1: *mut i64 = &var_68;
        let var_70_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::h9e623ec8df216556;
        var_58 = &data_7a37b0;
        let var_50_1: i64 = 3;
    }
    
    let var_38: i64 = 0;
    let var_48: *mut *mut i8 = &var_88;
    let var_40: i64 = 2;
    core::option::Option$LT$T$GT$::map_or_else::h72293bc1363e991f(arg1, 0, rdx, &var_58)
}
