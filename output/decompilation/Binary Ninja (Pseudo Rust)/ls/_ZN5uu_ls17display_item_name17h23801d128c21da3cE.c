
  fn uu_ls::display_item_name::h23801d128c21da3c(arg1: *mut i128, arg2: *mut c_void, arg3: u64, arg4: i8, arg5: i64, arg6: *mut i128, arg7: *mut c_void, arg8: *mut i64) -> i64

{
    let mut var_2f8: i64;
    uucore::features::quoting_style::escape_name::h942044e1943bd5af(&var_2f8, *arg2.byte_offset(8), 
        *arg2.byte_offset(0x10), arg3 + 0xfc);
    let var_2f0: i64;
    let mut var_2e8: *mut i64;
    let mut var_178: i128;
    let mut var_168: *mut i64;
    
    if *(arg3 + 0xf7) != 0
    {
        let mut rax: i32;
        rax = 1;
        let var_2fc_1: i32 = rax;
        uu_ls::create_hyperlink::h0a10a692235dc40b(&var_178, var_2f0, var_2e8, arg2);
        core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h9930b46afeec8fe4(var_2f8, 
            var_2f0);
        var_2e8 = var_168;
        var_2f8 = var_178;
    }
    
    let var_290: *mut i64 = arg7.byte_offset(0x68);
    
    if *arg7.byte_offset(0x85) != 2
    {
        uu_ls::colors::color_name::hafb991a3ed925fc5(&var_178, &var_2f8, arg2, var_290, arg7, 
            nullptr, 
            uu_ls::display_item_name::_$u7b$$u7b$closure$u7d$$u7d$::h25fbdfd9e7387c2f(arg3, arg8, 
                var_2e8));
        var_2e8 = var_168;
        var_2f8 = var_178;
    }
    
    let rbx_3: i8 = *(arg3 + 0x100);
    let mut rax_2: *mut i64;
    rax_2 = 1;
    let mut var_2fc_2: i8 = rax_2;
    
    if rbx_3 != 1 && arg6[1] != 0
    {
        var_168 = var_2e8;
        var_178 = var_2f8;
        var_2f8 = *arg6;
        var_2e8 = arg6[1];
        std::ffi::os_str::OsString::push::h7acd85275a97cdac(&var_2f8, &var_178);
        core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h9930b46afeec8fe4(var_178, 
            *var_178[8]);
        var_2fc_2 = 0;
    }
    
    let r15_2: u32 = *(arg3 + 0xff);
    let mut var_2d8: i32;
    let mut var_228: i128;
    
    if r15_2 != 0
    {
        let rax_9: i32 = uu_ls::classify_file::hfca466d8ec9ab1d0(arg2, arg7);
        
        if r15_2 != 1
        {
            if r15_2 != 2
            {
                if rax_9 != 0x110000
                {
                    goto 'label_59e74e;
                }
                
                goto 'label_59e73f;
            }
            
            if rax_9 == 0x2a || rax_9 == 0x110000
            {
                goto 'label_59e73f;
            }
            
            goto 'label_59e74e;
        }
        
        if rax_9 != 0x2f
        {
            goto 'label_59e73f;
        }
        
        'label_59e74e:
        var_2d8 = 0;
        let mut rax_10: *mut i8;
        let mut rdx_4: u64;
        rax_10 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(rax_9, &var_2d8);
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h24216b49f21f2baf(&var_178, rax_10, rdx_4);
        let var_218_1: *mut i64 = var_168;
        var_228 = var_178;
        std::ffi::os_str::OsString::push::had4c4c06171a790f(&var_2f8, *var_228[8], var_168);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_228);
        
        if rbx_3 != 1
        {
            goto 'label_59e938;
        }
        
        goto 'label_59e7c0;
    }
    
    'label_59e73f:
    
    if rbx_3 != 1
    {
        goto 'label_59e938;
    }
    
    'label_59e7c0:
    
    if uu_ls::PathData::file_type::h413d2014e9fb015b(arg2, arg7) == 0
    {
        goto 'label_59e938;
    }
    
    let rax_12: *mut c_void = uu_ls::PathData::file_type::h413d2014e9fb015b(arg2, arg7);
    
    if rax_12 == 0
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    if (0xf000 & *rax_12) != 0xa000 || *arg2.byte_offset(0x128) == 1
    {
        goto 'label_59e938;
    }
    
    *arg2.byte_offset(0x28);
    let mut var_240: i64;
    std::fs::read_link::h8fc09be18a8db6e8(&var_240, *arg2.byte_offset(0x20));
    let mut var_2b8: i128;
    
    if !(0 + -(var_240))
    {
        var_2b8 = var_240;
        std::ffi::os_str::OsString::push::h8d27602952d812af(&var_2f8, " -", 4);
        let var_230: u64;
        
        if *arg7.byte_offset(0x85) != 2
        {
            let rsi_21: *mut i8 = *var_2b8[8];
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h523154303afc7abc(&var_178, rsi_21, var_230);
            let var_278_1: *mut i64 = var_168;
            let mut var_288: i128 = var_178;
            
            if std::path::Path::is_absolute::hf2dacc49683e82ac(rsi_21, var_230) == 0
            {
                let mut rax_20: *mut i8;
                let mut rdx_12: u64;
                rax_20 = std::path::Path::parent::hef287f60afa56900(*arg2.byte_offset(0x20), 
                    *arg2.byte_offset(0x28));
                
                if rax_20 != 0
                {
                    std::path::Path::join::h7af255de9de1491f(&var_178, rax_20, rdx_12, &var_288);
                    let var_278_2: *mut i64 = var_168;
                    var_288 = var_178;
                }
            }
            
            var_228 = 0;
            var_2d8 = -0x8000000000000000;
            uu_ls::PathData::new::h2697718e531487bc(&var_178, &var_288, &var_228, &var_2d8, 
                *(arg3 + 0xf3), *(arg3 + 0xfa), arg3, 0);
            
            if uu_ls::PathData::get_metadata::h14c40f15e3077b4f(arg2, arg7) != 0
            {
                goto 'label_59ecb7;
            }
            
            let var_158: i64;
            let var_150: i64;
            let var_50: i8;
            uu_ls::get_metadata_with_deref_opt::h6fbf7688ce069f5f(&var_228, var_158, var_150, 
                var_50);
            
            if var_228 != 2
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h4d6173845b848954(&var_228);
                'label_59ecb7:
                uucore::features::quoting_style::escape_name::h942044e1943bd5af(&var_228, rsi_21, 
                    var_230, arg3 + 0xfc);
                uu_ls::colors::color_name::hafb991a3ed925fc5(&var_2d8, &var_228, arg2, var_290, 
                    arg7, &var_178, 
                    uu_ls::display_item_name::_$u7b$$u7b$closure$u7d$$u7d$::h25fbdfd9e7387c2f(arg3, 
                        arg8, var_2e8));
                std::ffi::os_str::OsString::push::h7ae4c515aa982082(&var_2f8, &var_2d8);
            }
            else
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h4d6173845b848954(&var_228);
                *arg2.byte_offset(0x28);
                std::fs::read_link::h8fc09be18a8db6e8(&var_228, *arg2.byte_offset(0x20));
                core::result::Result$LT$T$C$E$GT$::unwrap::h2ec348307e7b0fa4(&var_2d8, &var_228);
                std::ffi::os_str::OsString::push::h94a704c4a50176c7(&var_2f8, &var_2d8);
            }
            
            core::ptr::drop_in_place$LT$uu_ls..PathData$GT$::h76a87c73f87c0bb8(&var_178);
        }
        else
        {
            uucore::features::quoting_style::escape_name::h942044e1943bd5af(&var_178, *var_2b8[8], 
                var_230, arg3 + 0xfc);
            std::ffi::os_str::OsString::push::h7ae4c515aa982082(&var_2f8, &var_178);
        }
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h2dce88b0c646837f(&var_2b8);
        
        if *(arg3 + 0xf3) != 0
        {
            goto 'label_59e946;
        }
    }
    else
    {
        let var_238: i64;
        let var_248_1: i64 = var_238;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h523154303afc7abc(&var_178, *arg2.byte_offset(0x20), *arg2.byte_offset(0x28));
        let var_210_1: *mut i64 = var_168;
        var_228 = var_178;
        let var_208_1: i64 = var_238;
        let var_200_1: i8 = 0;
        var_228 = -0x7ffffffffffffffe;
        uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
        let mut rax_14: i64;
        let mut rdx_8: i64;
        rax_14 = uucore::util_name::h074417a1e6395129();
        var_2b8 = rax_14;
        *var_2b8[8] = rdx_8;
        var_2d8 = &var_2b8;
        let var_2d0_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf27cb4f53db833cd;
        let var_2c8_1: *mut i128 = &var_228;
        let var_2c0_1: fn(arg1: *mut c_void, arg2: *mut i64) -> u64 =
            _$LT$uu_ls..LsError$u20$as$u20$core..fmt..Display$GT$::fmt::hdc9e99969c77fead;
        var_178 = &data_686b10;
        *var_178[8] = 3;
        let var_158_1: i64 = 0;
        let var_168_1: *mut i32 = &var_2d8;
        let var_160_1: i64 = 2;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_178);
        core::ptr::drop_in_place$LT$uu_ls..LsError$GT$::h1c73d4e6f6d6872e(&var_228);
        'label_59e938:
        
        if *(arg3 + 0xf3) != 0
        {
            'label_59e946:
            
            if (arg4 & 1) != 0
            {
                if rbx_3 != 4
                {
                    uu_ls::pad_left::h9cc9c358e56c676a(&var_228, *arg2.byte_offset(0x38), 
                        *arg2.byte_offset(0x40), arg5);
                }
                else
                {
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_228, arg2.byte_offset(0x30));
                }
                
                let r12_1: i64 = var_2f8;
                let rbx_4: *mut i64 = var_2e8;
                var_2d8 = &var_228;
                let var_2d0_2: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                var_178 = &data_686678;
                *var_178[8] = 2;
                let var_158_2: i64 = 0;
                let var_168_2: *mut i32 = &var_2d8;
                let var_160_2: i64 = 1;
                let mut var_48: i128;
                core::option::Option$LT$T$GT$::map_or_else::h69a0b1154707aabf(&var_48, &var_178);
                var_2f8 = var_48;
                let var_38: *mut i64;
                var_2e8 = var_38;
                var_178 = r12_1;
                *var_178[8] = var_2f0;
                let var_168_3: *mut i64 = rbx_4;
                std::ffi::os_str::OsString::push::h7ae4c515aa982082(&var_2f8, &var_178);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_228);
            }
        }
    }
    arg1[1] = var_2e8;
    *arg1 = var_2f8;
    let result: i64 = core::ptr::drop_in_place$LT$core..cell..lazy..LazyCell$LT$usize$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnOnce$LT$$LP$$RP$$GT$$u2b$Output$u20$$u3d$$u20$usize$GT$$GT$$GT$::h4c6a460533912afd(arg8);
    
    if var_2fc_2 == 0
    {
        return result;
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(arg6)
}
