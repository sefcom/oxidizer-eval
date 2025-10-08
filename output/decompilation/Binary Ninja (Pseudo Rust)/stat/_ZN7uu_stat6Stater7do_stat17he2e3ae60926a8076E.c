
  fn uu_stat::Stater::do_stat::he2e3ae60926a8076(arg1: *mut c_void, arg2: i64, arg3: u64, arg4: i8) -> u64

{
    let mut var_f8: ();
    alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_f8, arg2, arg3);
    let var_f0: i64;
    let var_e8: u64;
    let mut rbx_1: i32;
    let mut var_228: i128;
    let mut var_218_1: i64;
    let mut var_208: *mut i64;
    let mut var_1a8: i128;
    let var_198: i64;
    let mut var_e0: *mut c_void;
    
    if alloc::string::_$LT$impl$u20$core..cmp..PartialEq$LT$$RF$str$GT$$u20$for$u20$alloc..borrow..Cow$LT$str$GT$$GT$::eq::hd1cc9c84389cf4ad(var_f0, var_e8) == 0
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1259f2eee6e0998a(&var_1a8, arg2, arg3);
        var_218_1 = var_198;
        var_228 = var_1a8;
        let mut var_1e8: *mut *mut i64;
        let mut var_1c8: i128;
        
        if (*arg1.byte_offset(0x61) & 1) == 0
        {
            'label_47720c:
            let mut rax_6: i8;
            
            if *arg1.byte_offset(0x60) == 0 && arg4 != 0
            {
                rax_6 = alloc::string::_$LT$impl$u20$core..cmp..PartialEq$LT$$RF$str$GT$$u20$for$u20$alloc..borrow..Cow$LT$str$GT$$GT$::eq::hd1cc9c84389cf4ad(var_f0, var_e8);
            }
            
            if *arg1.byte_offset(0x60) != 0 || (arg4 != 0 && rax_6 != 0)
            {
                std::fs::metadata::h072f4c1a892eb28c(&var_e0, &var_228);
            }
            else
            {
                std::fs::symlink_metadata::h2513065fab3b6eaa(&var_e0, &var_228);
            }
            
            if var_e0 != 2
            {
                memcpy(&var_1a8, &var_e0, 0xb0);
                let rax_11: i8 = *arg1.byte_offset(0x62);
                let mut rcx_2: i64 = 0x30;
                let var_170: i32;
                
                if ((var_170 - 0x2000) & 0xb000) != 0
                {
                    rcx_2 = 0x18;
                }
                
                if rax_11 != 0
                {
                    rcx_2 = 0x18;
                }
                
                let mut rsi_9: *mut i64 = *arg1.byte_offset(rcx_2).byte_offset(8);
                let r12_3: *mut c_void = &rsi_9[*arg1.byte_offset(rcx_2).byte_offset(0x10) * 5];
                let mut rdx_8: i32;
                let mut rax_12: i8;
                
                do
                {
                    let mut r13_2: *mut i64 = &rsi_9[5];
                    
                    if rsi_9 == r12_3
                    {
                        r13_2 = rsi_9;
                    }
                    
                    if rsi_9 == r12_3
                    {
                        goto 'label_477466;
                    }
                    
                    rax_12 = uu_stat::Stater::process_token_files::hdd01ebca8999d86b(arg1, rsi_9, 
                        &var_1a8, var_f0, var_e8, &var_228, var_170, rax_11);
                    rsi_9 = r13_2;
                } while (rax_12 & 1) == 0;
                rbx_1 = rdx_8;
                core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hc59876b3a9eab6e0(
                    var_228, *var_228[8]);
            }
            else
            {
                let var_d8: i64;
                var_1c8 = var_d8;
                let mut rax_8: *mut i64;
                let mut rdx_5: i64;
                rax_8 = uucore::util_name::h074417a1e6395129();
                var_208 = rax_8;
                let var_200_4: i64 = rdx_5;
                var_1e8 = &var_208;
                let var_1e0_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h917f70ba7096f615;
                var_1a8 = &data_519c28;
                *var_1a8[8] = 2;
                let var_188_2: i64 = 0;
                let var_198_3: *mut *mut *mut i64 = &var_1e8;
                let var_190_2: i64 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_1a8);
                var_208 = nullptr;
                let var_200_5: i64 = var_f0;
                let var_1f8_2: u64 = var_e8;
                let var_1f0_2: i8 = 1;
                var_1e8 = &var_208;
                let var_1e0_4: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                let var_1d8_2: *mut i128 = &var_1c8;
                let var_1d0_2: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
                var_1a8 = &data_51a010;
                *var_1a8[8] = 3;
                let var_188_3: i64 = 0;
                let var_198_4: *mut *mut *mut i64 = &var_1e8;
                let var_190_3: i64 = 2;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_1a8);
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h436c7c335a4a9568(&var_1c8);
                rbx_1 = 1;
                core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hc59876b3a9eab6e0(
                    var_228, *var_228[8]);
            }
        }
        else
        {
            'label_47705f:
            uucore::features::fsext::statfs::h5579f27baf6b5c75(&var_1a8, *var_228[8]);
            
            if var_1a8 != 1
            {
                let mut rdi_19: *mut i64 = *arg1.byte_offset(0x20);
                let mut i: i64 = *arg1.byte_offset(0x28) * 0x28;
                
                while i != 0
                {
                    i -= 0x28;
                    uu_stat::process_token_filesystem::h67597bda6d6ea400(rdi_19, &*var_1a8[8], 
                        var_f0, var_e8);
                    rdi_19 = &rdi_19[5];
                }
                
                'label_477466:
                core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hc59876b3a9eab6e0(
                    var_228, *var_228[8]);
                rbx_1 = 0;
            }
            else
            {
                let var_190: i64;
                let var_1b8_1: i64 = var_190;
                var_1c8 = var_1a8;
                let mut rax_4: *mut i64;
                let mut rdx_3: i64;
                rax_4 = uucore::util_name::h074417a1e6395129();
                var_208 = rax_4;
                let var_200_2: i64 = rdx_3;
                var_1e8 = &var_208;
                let var_1e0_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h917f70ba7096f615;
                var_e0 = &data_519c28;
                let var_d8_2: i64 = 2;
                let var_c0_1: i64 = 0;
                let var_d0_1: *mut *mut *mut i64 = &var_1e8;
                let var_c8_1: i64 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_e0);
                var_208 = nullptr;
                let var_200_3: i64 = var_f0;
                let var_1f8_1: u64 = var_e8;
                let var_1f0_1: i8 = 1;
                var_1e8 = &var_208;
                let var_1e0_2: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                let var_1d8_1: *mut i128 = &var_1c8;
                let var_1d0_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                var_e0 = &data_519fe0;
                let var_d8_3: i64 = 3;
                let var_c0_2: i64 = 0;
                let var_d0_2: *mut *mut *mut i64 = &var_1e8;
                let var_c8_2: i64 = 2;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_e0);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44f04a5137e020d4(&var_1c8);
                rbx_1 = 1;
                core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hc59876b3a9eab6e0(
                    var_228, *var_228[8]);
            }
        }
    }
    else
    {
        let r12_1: i8 = *arg1.byte_offset(0x61);
        
        if r12_1 == 0
        {
            std::fs::canonicalize::h666f0a788dd30df7(&var_1a8, "/dev/stdinunsupported for this o…");
            
            if 0 + -(var_1a8)
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h2e8638ca9d3a432a(&var_1a8);
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1259f2eee6e0998a(&var_1a8, "/dev/stdinunsupported for this o…", 0xa);
            }
            
            var_218_1 = var_198;
            var_228 = var_1a8;
            
            if (r12_1 & 1) != 0
            {
                goto 'label_47705f;
            }
            
            goto 'label_47720c;
        }
        
        let mut rax_1: *mut c_void;
        let mut rdx: i64;
        rax_1 = uucore::util_name::h074417a1e6395129();
        var_e0 = rax_1;
        let var_d8_1: i64 = rdx;
        var_208 = &var_e0;
        let var_200_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h917f70ba7096f615;
        var_1a8 = &data_519c28;
        *var_1a8[8] = 2;
        let var_188_1: i64 = 0;
        let var_198_1: *mut *mut i64 = &var_208;
        let mut var_190_1: i64 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_1a8);
        var_1a8 = &data_519fd0;
        *var_1a8[8] = 1;
        let var_198_2: i64 = 8;
        var_190_1 = {0};
        std::io::stdio::_eprint::h57899770eacec2ad(&var_1a8);
        rbx_1 = 1;
    }
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::ha7af664bba1b7bff(&var_f8);
    rbx_1
}
