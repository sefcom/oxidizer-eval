
  fn uu_touch::touch_file::h545e8affe65c7ac6(arg1: i64, arg2: u64, arg3: i32, arg4: *mut i64, arg5: i32, arg6: i32, arg7: i32, arg8: i32) -> u64

{
    let rbx: u64 = arg3;
    let mut var_118: ();
    let mut var_e0: i64;
    let mut var_d8: u64;
    let mut r13: i8;
    
    if arg3 == 0
    {
        var_e0 = arg1;
        var_d8 = arg2;
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hc12c33350263b863(
            &var_118, &var_e0);
        r13 = *arg4.byte_offset(0x31);
        
        if r13 == 0
        {
            std::fs::metadata::hb661f9d8212cddd7(&var_e0, arg1);
        }
        else
        {
            std::fs::symlink_metadata::h73fb12f4b49f31d3(&var_e0, arg1);
        }
    }
    else
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h443e6c10e45cdc42(&var_118, "-setting times of : No such file…", 1);
        r13 = *arg4.byte_offset(0x31);
        
        if r13 != 0
        {
            std::fs::symlink_metadata::h73fb12f4b49f31d3(&var_e0, arg1);
        }
        else
        {
            std::fs::metadata::hb661f9d8212cddd7(&var_e0, arg1);
        }
    }
    
    if var_e0 != 2
    {
        goto 'label_53a270;
    }
    
    let mut result: u64;
    
    if std::io::error::Error::kind::h135fe00c4e7365f3(var_d8) != 0
    {
        result = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h68349bb2678f12e3();
    }
    else if arg4[6] != 0
    {
        result = 0;
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h082d50199f5b7db7(var_d8);
    }
    else
    {
        let mut var_1a8: i32;
        let mut var_198: *mut *mut c_void;
        let mut var_160: *mut *mut i64;
        let mut var_128: *mut i64;
        
        if r13 == 0
        {
            std::fs::File::create::hd43d6cc5f8658b35(&var_1a8, arg1);
            let rax_5: i32 = var_1a8;
            
            if rax_5 != 1
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..File$C$std..io..error..Error$GT$$GT$::h8e368889d6e3af53(&var_1a8);
                
                if _$LT$uu_touch..Source$u20$as$u20$core..cmp..PartialEq$GT$::eq::h5fb9aae744f6919a(
                    arg4[3]) == 0 || -(*arg4) != -0x8000000000000000
                {
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h082d50199f5b7db7(
                        var_d8);
                    'label_53a270:
                    let var_1b8_1: u64 = arg8;
                    let mut result_2: u64;
                    let mut rdx_8: *mut i64;
                    result_2 = uu_touch::update_times::h1071b1d93aae9977(arg1, arg2, rbx, r13, 
                        *arg4.byte_offset(0x33), arg5, arg6, arg7);
                    result = result_2;
                }
                else
                {
                    result = 0;
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h082d50199f5b7db7(
                        var_d8);
                }
            }
            else
            {
                let var_138: i32 = rax_5;
                alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_198, arg1, arg2);
                let var_190: *mut *mut i64;
                var_160 = var_190;
                let var_188: *mut c_void;
                let mut var_158: i128;
                var_158 = var_188.byte_offset(var_190);
                let mut rax_7: i8;
                let mut rdx_5: i32;
                rax_7 = core::str::validations::next_code_point_reverse::hdcaf59bd311a5e74(
                    &var_160, rbx);
                let mut rbp: u64;
                rbp = rdx_5 != 0x110000;
                rbp &= rax_7;
                core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h07fb0c98f54110e9(
                    &var_198);
                
                if rbp != 1 || rdx_5 != 0x2f
                {
                    result = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h4cebff401ee48b9e();
                    
                    if *arg4.byte_offset(0x32) == 0
                    {
                        let mut result_1: u64 = result;
                        uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
                        let mut rax_20: *mut i64;
                        let mut rdx_12: i64;
                        rax_20 = uucore::util_name::h074417a1e6395129();
                        var_128 = rax_20;
                        let var_120_3: i64 = rdx_12;
                        var_160 = &var_128;
                        var_158 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h18af96482be5ae0f;
                        *var_158[8] = &result_1;
                        let mut var_148: i8;
                        var_148 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hb8dab0358c2b5eef;
                        var_198 = &data_679d48;
                        let var_190_3: i64 = 3;
                        let var_178_3: i64 = 0;
                        let var_188_5: *mut i64 = &var_160;
                        let var_180_3: i64 = 2;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_198);
                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::he5ad635d7f3c6690(result_1);
                        result = 0;
                    }
                }
                else
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h443e6c10e45cdc42(&var_160, "No such file or directorycannot …", 0x19);
                    let var_188_3: i64 = *var_158[8];
                    var_198 = var_160;
                    std::io::error::Error::_new::hbf6e5d7f23cac6f9(0x28, 
                        alloc::boxed::Box$LT$T$GT$::new::hbf084ac93ba6f116(&var_198), &data_679d98);
                    result = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::ha0ee1aa1888405cd();
                    let var_1a0: i64;
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h082d50199f5b7db7(
                        var_1a0);
                }
                
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h082d50199f5b7db7(var_d8);
            }
        }
        else
        {
            var_160 = nullptr;
            let var_110: i64;
            let mut var_158_1: i128 = var_110;
            let mut var_148_1: i8 = 1;
            var_128 = &var_160;
            let var_120_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_198 = &data_679d28;
            let var_190_1: i64 = 2;
            let var_178_1: i64 = 0;
            let var_188_1: *mut *mut i64 = &var_128;
            let mut var_180_1: i64 = 1;
            let mut var_f8: i128;
            core::option::Option$LT$T$GT$::map_or_else::h42b45f6f6f73b099(&var_f8, &var_198);
            var_180_1 = 1;
            var_198 = var_f8;
            let var_e8: i64;
            let var_188_2: i64 = var_e8;
            result = alloc::boxed::Box$LT$T$GT$::new::hd8fce8cb627455b5(&var_198);
            
            if *arg4.byte_offset(0x32) == 0
            {
                var_1a8 = result;
                let var_1a0_1: *mut *mut c_void = &data_679e10;
                uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(_$LT$uucore..mods..error..USimpleError$u20$as$u20$uucore..mods..error..UError$GT$::code::ha04d37fdd51c3108(result));
                let mut rax_18: *mut i64;
                let mut rdx_10: i64;
                rax_18 = uucore::util_name::h074417a1e6395129();
                var_128 = rax_18;
                let var_120_2: i64 = rdx_10;
                var_160 = &var_128;
                var_158_1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h18af96482be5ae0f;
                *var_158_1[8] = &var_1a8;
                var_148_1 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hebd9cee9c3e78f58;
                var_198 = &data_679d48;
                let var_190_2: i64 = 3;
                let var_178_2: i64 = 0;
                let var_188_4: *mut i64 = &var_160;
                let var_180_2: i64 = 2;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_198);
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::hfd5022d5ded5c4d2(var_1a8, var_1a0_1);
                result = 0;
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h082d50199f5b7db7(var_d8);
            }
            else
            {
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h082d50199f5b7db7(var_d8);
            }
        }
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hc61d8ef8308f20d8(&var_118);
    result
}
