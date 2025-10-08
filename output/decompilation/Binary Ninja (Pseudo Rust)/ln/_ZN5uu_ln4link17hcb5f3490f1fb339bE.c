
  fn uu_ln::link::hcb5f3490f1fb339b(arg1: i64, arg2: u64, arg3: *mut i8, arg4: u64, arg5: *mut c_void) -> u64

{
    let mut var_130: *mut c_void = -0x8000000000000000;
    let mut var_148: i64;
    let mut var_140: i64;
    let mut var_138: u64;
    
    if *arg5.byte_offset(0x31) == 0
    {
        var_140 = arg1;
        var_138 = arg2;
        var_148 = -0x8000000000000000;
    }
    else
    {
        uu_ln::relative_path::h7904cc2fce3a225c(&var_148, arg1, arg2, arg3, arg4);
    }
    
    let rax: i8 = std::path::Path::is_symlink::h004cfac91d04dbc0(arg3, arg4);
    let mut var_118: *mut c_void;
    let mut r15_1: i32;
    
    if rax == 0
    {
        std::fs::metadata::h3a5d957c4cc0d9ad(&var_118, arg3);
        r15_1 = var_118;
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::haadcf12438c9539e(&var_118);
    }
    
    let mut result: u64;
    let mut var_198: i128;
    let mut var_188: u64;
    let mut var_168: i128;
    let mut var_128: i128;
    let mut var_110: i128;
    let mut var_f8: i128;
    
    if rax == 0 && r15_1 == 2
    {
        'label_4664d5:
        
        if *arg5.byte_offset(0x30) == 0
        {
            let mut rax_28: i8;
            
            if *arg5.byte_offset(0x32) != 0
            {
                rax_28 = std::path::Path::is_symlink::h004cfac91d04dbc0(var_140, var_138);
            }
            
            let mut var_48: u64;
            
            if *arg5.byte_offset(0x32) == 0 || rax_28 == 0
            {
                std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_48, 
                    var_140, var_138);
                'label_4665af:
                let rax_30: *mut *mut [i8; 0xcc] =
                    std::fs::hard_link::hdf0efc3375823ad7(&var_48, arg3);
                var_118 = &var_148;
                var_110 = arg3;
                *var_110[8] = arg4;
                let result_4: u64 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h91e255809ca5c217(rax_30);
                result = result_4;
                
                if result_4 == 0
                {
                    goto 'label_466625;
                }
                
                core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$std..path..Path$GT$$GT$::hb827e69f1c1fdd0b(&var_148);
                core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$std..path..Path$GT$$GT$::hb827e69f1c1fdd0b(&var_130);
            }
            else
            {
                std::fs::canonicalize::hb19e1aefbb6e06ec(&var_118, &var_148);
                _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::ha4d92868a16772a6(&var_198, &var_118);
                let rax_29: u64 = var_198;
                result = *var_198[8];
                
                if rax_29 != -0x8000000000000000
                {
                    var_48 = rax_29;
                    let result_1: u64 = result;
                    let var_38_1: u64 = var_188;
                    goto 'label_4665af;
                }
                
                core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$std..path..Path$GT$$GT$::hb827e69f1c1fdd0b(&var_148);
                core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$std..path..Path$GT$$GT$::hb827e69f1c1fdd0b(&var_130);
            }
        }
        else if std::os::unix::fs::symlink::h60c047a9997568e6(&var_148, arg3) == 0
        {
            'label_466625:
            let mut rbx_1: i8;
            
            if *arg5.byte_offset(0x35) == 0
            {
                rbx_1 = 0;
            }
            else
            {
                var_168 = 1;
                *var_168[8] = arg3;
                let var_158_1: u64 = arg4;
                let var_150_1: i8 = 1;
                var_198 = 1;
                var_198 = var_140;
                let var_180_2: i8 = 1;
                let mut var_68: u64 = &var_168;
                let var_60_2: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                let var_58_1: *mut i128 = &var_198;
                let var_50_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                var_118 = &data_4f6170;
                var_110 = 2;
                var_f8 = 0;
                *var_110[8] = &var_68;
                let mut var_100_6: i64 = 2;
                std::io::stdio::_print::h5e446ff973c02de6(&var_118);
                
                if var_130 != -0x8000000000000000
                {
                    var_168 = var_130;
                    var_198 = 1;
                    *var_198[8] = *var_168[8];
                    let var_188_1: i64 = *var_128[8];
                    let var_180_3: i8 = 1;
                    var_68 = &var_198;
                    let var_60_3: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    var_118 = &data_4f61a0;
                    var_110 = 2;
                    var_f8 = 0;
                    *var_110[8] = &var_68;
                    let var_100_7: i64 = 1;
                    std::io::stdio::_print::h5e446ff973c02de6(&var_118);
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hba0bfa390dca4ccb(&var_168);
                    rbx_1 = 1;
                }
                else
                {
                    var_118 = &data_4f6190;
                    var_110 = 1;
                    *var_110[8] = 8;
                    var_100_6 = {0};
                    std::io::stdio::_print::h5e446ff973c02de6(&var_118);
                    rbx_1 = 0;
                }
            }
            
            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$std..path..Path$GT$$GT$::hb827e69f1c1fdd0b(&var_148);
            result = 0;
            
            if rbx_1 == 0 && var_130 != -0x8000000000000000
            {
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hba0bfa390dca4ccb(&var_130);
                return 0;
            }
        }
        else
        {
            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$std..path..Path$GT$$GT$::hb827e69f1c1fdd0b(&var_148);
            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$std..path..Path$GT$$GT$::hb827e69f1c1fdd0b(&var_130);
        }
    }
    else
    {
        let rbp_1: i8 = *arg5.byte_offset(0x37);
        let mut r15_2: *mut c_void = -0x8000000000000000;
        
        match rbp_1
        {
            1 =>
            {
                uu_ln::simple_backup_path::hf92f6b12668c10c1(&var_118, arg3, arg4, 
                    *arg5.byte_offset(8), *arg5.byte_offset(0x10));
                r15_2 = var_118;
                var_198 = var_110;
            }
            2 =>
            {
                uu_ln::numbered_backup_path::h08a544ce38fbf5a5(&var_118, arg3, arg4);
                r15_2 = var_118;
                var_198 = var_110;
            }
            3 =>
            {
                uu_ln::existing_backup_path::ha10321887a3587c4(&var_118, arg3, arg4, 
                    *arg5.byte_offset(8), *arg5.byte_offset(0x10));
                r15_2 = var_118;
                var_198 = var_110;
            }
        }
        
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$std..path..Path$GT$$GT$::hb827e69f1c1fdd0b(&var_130);
        var_130 = r15_2;
        var_128 = var_198;
        
        if rbp_1 != 3 || *arg5.byte_offset(0x30) != 0
        {
            goto 'label_46613c;
        }
        
        let var_158: i64;
        let mut result_2: u64;
        
        if uucore::features::fs::paths_refer_to_same_file::h287e562d844cfcdb(arg1, arg2, arg3, arg4)
            == 0
        {
            r15_2 = var_130;
            'label_46613c:
            let mut result_3: u64;
            
            if r15_2 != -0x8000000000000000
            {
                result_3 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h18ad8f565ba6a90d(std::fs::rename::h46b0a2b722ba8692(arg3, arg4, &var_130));
                result = result_3;
            }
            
            if r15_2 == -0x8000000000000000 || result_3 == 0
            {
                let rax_13: u32 = *arg5.byte_offset(0x36);
                
                if rax_13 == 0
                {
                    goto 'label_4664d5;
                }
                
                if rax_13 != 1
                {
                    let rax_20: i8 = std::path::Path::is_symlink::h004cfac91d04dbc0(arg3, arg4);
                    let mut rax_21: i8;
                    
                    if rax_20 == 0
                    {
                        rax_21 = uucore::features::fs::paths_refer_to_same_file::h287e562d844cfcdb(
                            arg1, arg2, arg3, arg4);
                    }
                    
                    if rax_20 != 0 || rax_21 == 0
                    {
                        let rax_24: *mut c_void = std::fs::remove_file::ha037a510dc62fc80(arg3);
                        var_118 = rax_24;
                        
                        if rax_24 == 0
                        {
                            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h34c9e922b39888ae(&var_118);
                        }
                        else
                        {
                            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h34c9e922b39888ae(&var_118);
                        }
                        
                        goto 'label_4664d5;
                    }
                    
                    std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(
                        &var_168, arg1, arg2);
                    std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(
                        &var_198, arg3, arg4);
                    let var_100_5: i64 = var_158;
                    let var_110_2: i128 = var_168;
                    let var_f8_2: i128 = var_198;
                    let var_e8_2: u64 = var_188;
                    var_118 = 2;
                    result_2 = alloc::boxed::Box$LT$T$GT$::new::h9832a2155b69f23f(&var_118);
                    goto 'label_4664a5;
                }
                
                let mut rax_14: i64;
                let mut rdx_10: i64;
                rax_14 = uucore::util_name::h074417a1e6395129();
                var_198 = rax_14;
                *var_198[8] = rdx_10;
                var_168 = &var_198;
                *var_168[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h45ff57c8145456ef;
                var_118 = &data_4f6038;
                var_110 = 2;
                var_f8 = 0;
                *var_110[8] = &var_168;
                let var_100_2: i64 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_118);
                var_198 = 1;
                *var_198[8] = arg3;
                var_188 = arg4;
                let var_180_1: i8 = 1;
                var_168 = &var_198;
                *var_168[8] = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                var_118 = &data_4f6110;
                var_110 = 2;
                var_f8 = 0;
                *var_110[8] = &var_168;
                let mut var_100_3: i64 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_118);
                var_118 = &data_4f6130;
                var_110 = 1;
                *var_110[8] = 8;
                var_100_3 = {0};
                std::io::stdio::_eprint::h57899770eacec2ad(&var_118);
                var_118 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
                _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::h73119290360117e3(
                    &var_118);
                
                if uucore::read_yes::h67cb9532536454c0() == 0
                {
                    var_118 = 1;
                    result_2 = alloc::boxed::Box$LT$T$GT$::new::h9832a2155b69f23f(&var_118);
                    goto 'label_4664a5;
                }
                
                let rax_19: *mut c_void = std::fs::remove_file::ha037a510dc62fc80(arg3);
                var_118 = rax_19;
                
                if rax_19 == 0
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h34c9e922b39888ae(&var_118);
                }
                else
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h34c9e922b39888ae(&var_118);
                }
                
                goto 'label_4664d5;
            }
            
            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$std..path..Path$GT$$GT$::hb827e69f1c1fdd0b(&var_148);
            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$std..path..Path$GT$$GT$::hb827e69f1c1fdd0b(&var_130);
        }
        else
        {
            std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_168, arg1, 
                arg2);
            std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_198, arg3, 
                arg4);
            let var_100_1: i64 = var_158;
            let var_110_1: i128 = var_168;
            let var_f8_1: i128 = var_198;
            let var_e8_1: u64 = var_188;
            var_118 = 2;
            result_2 = alloc::boxed::Box$LT$T$GT$::new::h9832a2155b69f23f(&var_118);
            'label_4664a5:
            result = result_2;
            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$std..path..Path$GT$$GT$::hb827e69f1c1fdd0b(&var_148);
            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$std..path..Path$GT$$GT$::hb827e69f1c1fdd0b(&var_130);
        }
    }
    result
}
