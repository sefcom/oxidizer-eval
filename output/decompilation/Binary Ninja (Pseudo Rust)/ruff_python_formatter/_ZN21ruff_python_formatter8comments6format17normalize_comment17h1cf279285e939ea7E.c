
  fn ruff_python_formatter::comments::format::normalize_comment::h1cf279285e939ea7(arg1: *mut i64, arg2: *mut i32, arg3: *mut i8, arg4: i64) -> *mut i128

{
    let mut rax: *mut c_void;
    let mut rdx_1: i64;
    rax = ruff_formatter::source_code::SourceCodeSlice::text::h88bb2d0c23d31a8a(arg2, arg3, arg4);
    let mut rax_1: *mut i8;
    let mut rdx_2: i64;
    rax_1 = core::str::_$LT$impl$u20$str$GT$::trim_end_matches::hc1c5622f93930984(rax, rdx_1);
    let mut r12: *mut i8 = rax_1;
    let mut r13: i64 = rdx_2;
    let mut var_98: i32;
    ruff_python_formatter::comments::format::strip_comment_prefix::hbac1a00885230484(&var_98, 
        rax_1, rdx_2);
    let rax_2: i32 = var_98;
    let mut result: *mut i128;
    let var_90: *mut i8;
    let var_88: i64;
    
    if rax_2 != 4
    {
        r12 = var_90;
        r13 = var_88;
        arg1[1] = rax_2;
        let var_94: i32;
        *arg1.byte_offset(0xc) = var_94;
        result = 1;
        'label_700179:
        arg1[2] = r12;
        arg1[3] = r13;
        *arg1 = result;
    }
    else
    {
        let mut var_48: *mut i8 = var_90;
        let var_40_1: i64 = var_88;
        
        if var_88 == 0
        {
            arg1[1] = -0x8000000000000000;
            r13 = 1;
            r12 = "#Didn't find expected comment to…";
            result = nullptr;
            goto 'label_700179;
        }
        
        __builtin_memcpy(&var_98, " !:#\'…", 0x14);
        
        if core::str::pattern::Pattern::is_prefix_of::h1fd50cc35b7d7b71(&var_98, var_90, var_88)
            != 0
        {
            arg1[1] = -0x8000000000000000;
            result = nullptr;
            goto 'label_700179;
        }
        
        var_98 = 0;
        let mut rax_4: *mut i8;
        let mut rdx_4: u64;
        rax_4 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0xa0, &var_98);
        let mut rax_11: *mut *mut i64;
        let mut var_68: *mut i64;
        let mut rax_10: *mut i64;
        let mut rdx_8: i64;
        
        if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hf48f8dbcb851e47f(var_90, 
            var_88, rax_4, rdx_4) == 0
        {
            rax_10 = core::str::_$LT$impl$u20$str$GT$::trim_start_matches::hd401112d4c765288(
                var_90, var_88);
            'label_700211:
            var_68 = rax_10;
            let var_60_1: i64 = rdx_8;
            let mut var_58: *mut i64 = &var_68;
            let var_50_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hdb2fd416f06f629c;
            var_98 = &data_97cc78;
            let var_90_1: i64 = 1;
            let var_78_1: i64 = 0;
            rax_11 = &var_58;
        }
        else
        {
            let mut rax_6: i64;
            let mut rdx_6: i64;
            rax_6 = core::str::_$LT$impl$u20$str$GT$::trim_start_matches::h08e9bc36e1fbb522(var_90, 
                var_88);
            let mut var_38: i64 = rax_6;
            let var_30_1: i64 = rdx_6;
            let mut rax_7: i64;
            let mut rdx_7: i64;
            rax_7 = core::str::_$LT$impl$u20$str$GT$::trim_start_matches::hd401112d4c765288(rax_6, 
                rdx_6);
            let mut rax_9: *mut i64;
            
            if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hf48f8dbcb851e47f(rax_7, 
                rdx_7, "type:# #Didn't find expected com…", 5) == 0
            {
                var_98 = 0;
                let mut rax_12: *mut i8;
                let mut rdx_9: u64;
                rax_12 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x20, &var_98);
                
                if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hf48f8dbcb851e47f(
                    rax_6, rdx_6, rax_12, rdx_9) == 0
                {
                    rax_10 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(2, var_90, var_88);
                    
                    if rax_10 != 0
                    {
                        goto 'label_700211;
                    }
                    
                    core::str::slice_error_fail::h1a2885084e28d077(var_90, var_88, 2, var_88);
                    /* no return */
                }
                
                rax_9 = &var_38;
            }
            else
            {
                rax_9 = &var_48;
            }
            
            var_68 = rax_9;
            let var_60_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hdb2fd416f06f629c;
            var_98 = &data_97cc78;
            let var_90_2: i64 = 1;
            let var_78_2: i64 = 0;
            rax_11 = &var_68;
        }
        let var_88_1: *mut *mut i64 = rax_11;
        let var_80_1: i64 = 1;
        result = core::option::Option$LT$T$GT$::map_or_else::h9c3ecc8c56a3befd(&arg1[1], &var_98);
        *arg1 = 0;
    }
    result
}
