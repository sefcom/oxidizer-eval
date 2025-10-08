
  fn uu_mv::assert_not_same_file::hb2a62158ed5fb73d(arg1: *mut i8, arg2: u64, arg3: *mut i8, arg4: i64, arg5: i8, arg6: i32, arg7: i8) -> u64

{
    let mut rbx: u64 = arg6;
    let mut r15: *mut i8 = arg1;
    let mut var_120: u64;
    std::path::absolute::h1b953507f7e735f6(&var_120, r15);
    let rax: u64 = var_120;
    
    if -(rax) == -0x8000000000000000
    {
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
    }
    
    let mut var_60: u64 = rax;
    let mut var_118: *mut i8;
    let var_58_1: *mut i8 = var_118;
    let var_110: u64;
    let var_50_1: u64 = var_110;
    let mut var_178: u64;
    uucore::features::fs::canonicalize::h709ce4b875a43b77(&var_178, &var_60);
    let rbp_1: u64 = var_178;
    let var_1d8_1: *mut i8 = r15;
    let mut var_1b0_1: u64;
    let var_170: *mut i8;
    let var_168: u64;
    let mut r15_1: u32;
    
    if rbp_1 != -0x8000000000000000
    {
        var_1b0_1 = var_168;
        std::fs::metadata::h12bb7891128f5212(&var_120, var_170);
        r15_1 = var_120;
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6bf03d231ff2ee2d(&var_120);
        r15 = var_1d8_1;
    }
    
    let mut rax_1: u64;
    let mut r12_2: u64;
    let mut r15_2: *mut i8;
    
    if rbp_1 != -0x8000000000000000 && r15_1 != 2
    {
        r15_2 = var_170;
        r12_2 = rbp_1;
        let mut var_1b4_1: i8;
        let mut var_190: u64;
        let mut var_188: *mut i8;
        let mut var_180: u64;
        let mut rsi_16: *mut i8;
        let mut rdi_22: u64;
        let mut r14_1: u64;
        let mut rdx_5: *mut *mut c_void;
        let mut rbp_2: i8;
        
        if arg5 != 0
        {
            'label_48b44b:
            rbp_2 = rbx ^ 1;
            
            if (rbx & 1) != 0
            {
                goto 'label_48b4ae;
            }
            
            std::path::absolute::h1b953507f7e735f6(&var_120, arg3);
            let rax_4: u64 = var_120;
            
            if rax_4 == -0x8000000000000000
            {
                rax_1 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h7ff9893d52172353(r12_2, r15_2);
                return rax_1;
            }
            
            let mut var_48: u64 = rax_4;
            let var_40_1: *mut i8 = var_118;
            let var_38_1: u64 = var_110;
            uucore::features::fs::canonicalize::h709ce4b875a43b77(&var_178, &var_48);
            rbx = var_178;
            
            if rbx == -0x8000000000000000
            {
                goto 'label_48b4cc;
            }
            
            var_1b4_1 = rbp_2;
            r14_1 = arg2;
            let mut rax_9: i64;
            let mut rdx_10: i64;
            rax_9 = std::path::Path::file_name::h6d40d88bf3fb287a(var_1d8_1, r14_1);
            let mut rcx_4: i64 = 1;
            
            if rax_9 != 0
            {
                rcx_4 = rax_9;
            }
            
            std::path::Path::join::h2b3f1fa38f5fea2a(&var_190, var_170, var_168, rcx_4);
            rdi_22 = rbx;
            rsi_16 = var_170;
        }
        else
        {
            'label_48b49a:
            rbp_2 = 0;
            'label_48b4ae:
            std::path::absolute::h1b953507f7e735f6(&var_120, arg3);
            var_1b4_1 = rbp_2;
            let r13_1: u64 = var_120;
            
            if r13_1 == -0x8000000000000000
            {
                'label_48b4cc:
                rax_1 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h7ff9893d52172353(r12_2, r15_2);
                return rax_1;
            }
            
            let mut rax_5: *mut i8;
            let mut rdx_7: u64;
            rax_5 = std::path::Path::parent::hef287f60afa56900(var_118, var_110);
            
            if rax_5 == 0
            {
                'label_48b546:
                std::path::absolute::h1b953507f7e735f6(&var_120, arg3);
                let rax_7: u64 = var_120;
                
                if rax_7 == -0x8000000000000000
                {
                    'label_48b5c6:
                    let rax_8: u64 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h7ff9893d52172353(r13_1, 
                        var_118);
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h7ff9893d52172353(r12_2, 
                        r15_2);
                    return rax_8;
                }
                
                var_190 = rax_7;
                var_188 = var_118;
                var_180 = var_110;
            }
            else
            {
                core::str::converts::from_utf8::h8a6dc80f786921e0(&var_120, rax_5, rdx_7);
                
                if (var_120 & 1) == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h58b5b4cbfa3f02f8(var_118, var_110, 1, 0) != 0
                {
                    goto 'label_48b546;
                }
                
                uucore::features::fs::canonicalize::hfcc5d9918f2f91cf(&var_120, rax_5, rdx_7);
                rbx = var_120;
                
                if rbx == -0x8000000000000000
                {
                    goto 'label_48b5c6;
                }
                
                let mut rax_10: i64;
                let mut rdx_12: i64;
                rax_10 = std::path::Path::file_name::h6d40d88bf3fb287a(arg3, arg4);
                let mut rcx_5: i64 = 1;
                
                if rax_10 != 0
                {
                    rcx_5 = rax_10;
                }
                
                std::path::Path::join::h2b3f1fa38f5fea2a(&var_190, var_118, var_110, rcx_5);
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h7ff9893d52172353(rbx, var_118);
            }
            
            r14_1 = arg2;
            rdi_22 = r13_1;
            rsi_16 = var_118;
        }
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h7ff9893d52172353(rdi_22, rsi_16);
        let mut rbp_4: *mut i8;
        
        if _$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$GT$::eq::h35303d53f5dfabe5(
            r15_2, var_1b0_1, var_188, var_180) != 0
        {
            rbp_4 = arg7 == 0;
        }
        else if uucore::features::fs::are_hardlinks_to_same_file::hed60833ae00362c2(var_1d8_1, 
            r14_1, arg3) != 0
        {
            rbp_4 = arg7 == 0;
        }
        else if
            uucore::features::fs::are_hardlinks_or_one_way_symlink_to_same_file::hac15d05039645469(
            var_1d8_1, r14_1, arg3) == 0
        {
            rbp_4 = nullptr;
        }
        else
        {
            rbp_4 = arg7 == 0;
        }
        
        let mut rax_14: i64;
        let mut rdx_17: u64;
        rax_14 = std::path::Path::file_name::h6d40d88bf3fb287a(var_1d8_1, r14_1);
        let mut var_1a8: i128;
        let mut var_198: u64;
        let mut var_138: i128;
        let mut var_108_1: i8;
        
        if rax_14 == 0 || (var_1b4_1 & 1) == 0
        {
            var_120 = 1;
            var_118 = arg3;
            let var_110_1: i64 = arg4;
            var_108_1 = 1;
            _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h72cb907f66b31c22(
                &var_138, &var_120);
        }
        else
        {
            let mut var_70: *mut i8 = arg3;
            let var_68_1: i64 = arg4;
            _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hacdb82853e544cb8(
                &var_178, &var_70);
            let mut rax_17: i64;
            let mut rdx_18: u64;
            rax_17 = core::str::_$LT$impl$u20$str$GT$::trim_end_matches::h82b32438de32449e(var_170, 
                var_168);
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h19a54565959f0f6f(&var_120, rax_17, rdx_18);
            var_198 = var_110;
            var_1a8 = var_120;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8db761034a9103d6(&var_178);
            alloc::string::String::push::h0ede46164189e411(&var_1a8, 0x2f);
            alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_120, rax_14, rdx_17);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h367dbc0c8c85d406(&var_1a8, var_118, &var_118[var_110]);
            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h0ec8a001aa281541(
                &var_120);
            let zmm0_2: i128 = var_1a8;
            var_120 = 0;
            var_118 = zmm0_2;
            var_108_1 = 1;
            _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h72cb907f66b31c22(
                &var_138, &var_120);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8db761034a9103d6(&var_1a8);
        }
        
        let var_128: i64;
        
        if rbp_4 == 0
        {
            var_120 = r12_2;
            var_118 = r15_2;
            let var_110_2: u64 = var_1b0_1;
            
            if std::path::Path::starts_with::h3d660a3bec4c329a(var_188, var_180, &var_120) == 0
            {
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8db761034a9103d6(&var_138);
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h7ff9893d52172353(var_190, 
                    var_188);
                return 0;
            }
            
            rbp_4 = nullptr;
        }
        else
        {
            rbx = 1;
            
            if _$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$GT$::eq::h35303d53f5dfabe5(
                r15_2, var_1b0_1, var_188, var_180) != 0
            {
                'label_48b940:
                var_178 = 1;
                let var_170_1: *mut i8 = var_1d8_1;
                let var_168_1: u64 = r14_1;
                let var_160_1: i8 = 1;
                _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h72cb907f66b31c22(&var_1a8, &var_178);
                let var_f0_1: i64 = var_128;
                let var_100_1: i128 = var_138;
                var_118 = var_1a8;
                var_108_1 = var_198;
                var_120 = 2;
                rbp_4 = 1;
                let rax_28: u64 = alloc::boxed::Box$LT$T$GT$::new::h1fc079de2e7d2ae0(&var_120);
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h7ff9893d52172353(var_190, 
                    var_188);
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h7ff9893d52172353(r12_2, r15_2);
                return rax_28;
            }
            
            std::path::Path::components::hd0346d362206f2e9(&var_178, var_1d8_1, r14_1);
            std::path::Path::components::hd0346d362206f2e9(&var_120, 
                ".//home/34r7hm4n/.rustup/toolcha…", 1);
            
            if _$LT$std..path..Components$u20$as$u20$core..cmp..PartialEq$GT$::eq::hd9623c64792f17b1(&var_178, &var_120) != 0
            {
                goto 'label_48b940;
            }
            
            if std::path::Path::ends_with::hc2afcb1f83cadb7f(var_1d8_1, r14_1) != 0
            {
                goto 'label_48b940;
            }
            
            rbp_4 = 1;
            
            if std::path::Path::is_file::h6e28d87ff76ffc41(var_1d8_1, r14_1) != 0
            {
                goto 'label_48b940;
            }
        }
        
        if std::path::Path::is_symlink::h004cfac91d04dbc0(var_1d8_1, r14_1) != 0
        {
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8db761034a9103d6(&var_138);
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h7ff9893d52172353(var_190, var_188);
            
            if rbp_4 == 0
            {
                return 0;
            }
            
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h7ff9893d52172353(r12_2, r15_2);
            return 0;
        }
        
        var_178 = 1;
        let var_170_2: *mut i8 = var_1d8_1;
        let var_168_2: u64 = r14_1;
        let var_160_2: i8 = 1;
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h72cb907f66b31c22(
            &var_1a8, &var_178);
        let var_f0_2: i64 = var_128;
        let var_100_2: i128 = var_138;
        var_118 = var_1a8;
        var_108_1 = var_198;
        var_120 = 3;
        let rax_35: u64 = alloc::boxed::Box$LT$T$GT$::new::h1fc079de2e7d2ae0(&var_120);
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h7ff9893d52172353(var_190, var_188);
        rax_1 = rax_35;
        
        if rbp_4 != 0
        {
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h7ff9893d52172353(r12_2, r15_2);
        }
    }
    else
    {
        std::path::absolute::h1b953507f7e735f6(&var_120, r15);
        r12_2 = var_120;
        r15_2 = var_118;
        
        if r12_2 != -0x8000000000000000
        {
            var_1b0_1 = var_110;
            
            if rbp_1 == -0x8000000000000000
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::haf7b4a323d555885(&var_178);
                
                if arg5 == 0
                {
                    goto 'label_48b49a;
                }
                
                goto 'label_48b44b;
            }
            
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h7ff9893d52172353(rbp_1, var_170);
            
            if arg5 != 0
            {
                goto 'label_48b44b;
            }
            
            goto 'label_48b49a;
        }
        
        let rax_2: u64 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::haf7b4a323d555885(&var_178);
        rax_1 = rax_2;
    }
    rax_1
}
