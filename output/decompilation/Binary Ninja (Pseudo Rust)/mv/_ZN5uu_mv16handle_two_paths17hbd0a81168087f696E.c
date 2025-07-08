
  fn uu_mv::handle_two_paths::hbd0a81168087f696(arg1: *mut i8, arg2: u64, arg3: *mut i8, arg4: size_t, arg5: *mut c_void) -> *mut i128

{
    let r13: i8 = *arg5.byte_offset(0x36);
    let mut rax_1: i8;
    
    if r13 == 1
    {
        *arg5.byte_offset(0x10);
        rax_1 = uucore::features::backup_control::source_is_target_backup::hf52468b25c2dfb23(arg1, 
            arg2, arg3, arg4, *arg5.byte_offset(8));
    }
    
    let mut var_1a8: *mut *mut i64;
    let mut var_168: *mut *mut *mut i64;
    let mut var_120: *mut i64;
    let mut var_f8: i32;
    let mut var_f0: u64;
    
    if r13 != 1 || rax_1 == 0
    {
        let var_140_1: *mut i32 = arg4;
        std::fs::symlink_metadata::h7febb2c461a7cc90(&var_f8, arg1);
        let r14_1: i32 = var_f8;
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h1a38c79198e9333e(&var_f8);
        
        if r14_1 == 2
        {
            if uucore::features::fs::path_ends_with_terminator::h30fe62ab1cf88eee(arg1, arg2) == 0
            {
                var_1a8 = 1;
                let var_1a0_4: *mut i8 = arg1;
                let var_198_4: u64 = arg2;
                let var_190_4: i8 = 1;
                _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h29e878758f75f5ed(
                    &var_f0, &var_1a8);
                var_f8 = 0;
            }
            else
            {
                var_1a8 = 1;
                let var_1a0_2: *mut i8 = arg1;
                let var_198_2: u64 = arg2;
                let var_190_2: i8 = 1;
                _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h29e878758f75f5ed(
                    &var_f0, &var_1a8);
                var_f8 = 1;
            }
            
            return alloc::boxed::Box$LT$T$GT$::new::h0e8b01bf032e1a6a(&var_f8);
        }
        
        std::path::Path::components::h4f3217acf0fc8653(&var_1a8, arg1, arg2);
        std::path::Path::components::h4f3217acf0fc8653(&var_f8, arg3, var_140_1);
        let mut rbp_1: u64 = arg2;
        let cond:0_1: bool =
            _$LT$std..path..Components$u20$as$u20$core..cmp..PartialEq$GT$::eq::h5cac1ec2999e76da(
            &var_1a8, &var_f8) != 0;
        let mut rax_6: i8;
        
        if !cond:0_1
        {
            rax_6 = uucore::features::fs::are_hardlinks_to_same_file::h58f3d52af664165a(arg1, 
                rbp_1, arg3);
        }
        
        let mut var_138: i128;
        let var_128: i64;
        let var_110: i64;
        let mut var_d8: i64;
        
        if !cond:0_1 && rax_6 == 0
        {
            if r13 == 0 && uucore::features::fs::are_hardlinks_or_one_way_symlink_to_same_file::hd5db584ecbb68737(arg1, rbp_1, arg3) != 0
            {
                goto 'label_4e9563;
            }
        }
        else if r13 == 0
        {
            'label_4e9563:
            std::path::Path::components::h4f3217acf0fc8653(&var_1a8, arg1, rbp_1);
            std::path::Path::components::h4f3217acf0fc8653(&var_f8, 
                "...a Display implementation retu…", 1);
            
            if _$LT$std..path..Components$u20$as$u20$core..cmp..PartialEq$GT$::eq::h5cac1ec2999e76da(&var_1a8, &var_f8) != 0
            {
                'label_4e95be:
                var_168 = 1;
                let var_160_2: *mut i8 = arg1;
                let var_158_2: u64 = rbp_1;
                let var_150_2: i8 = 1;
                _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h29e878758f75f5ed(
                    &var_138, &var_168);
                var_1a8 = 1;
                let var_1a0_5: *mut i8 = arg3;
                let var_198_5: *mut i32 = var_140_1;
                let var_190_5: i8 = 1;
                _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h29e878758f75f5ed(
                    &var_120, &var_1a8);
                let var_e0_3: i64 = var_128;
                var_f0 = var_138;
                var_d8 = var_120;
                let var_c8_1: i64 = var_110;
                var_f8 = 2;
            }
            else
            {
                if std::path::Path::ends_with::h69a96bb2edb5d121(arg1, rbp_1, 
                    "/.mv: extra operand src/uu/mv/sr…") != 0
                {
                    goto 'label_4e95be;
                }
                
                if std::path::Path::is_file::h82f08f46fb8d8099(arg1, rbp_1) != 0
                {
                    goto 'label_4e95be;
                }
                
                var_1a8 = arg1;
                let var_1a0_10: u64 = rbp_1;
                _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::he15fdbfc0d7582ca(
                    &var_f0, &var_1a8);
                var_f8 = 3;
            }
            
            return alloc::boxed::Box$LT$T$GT$::new::h0e8b01bf032e1a6a(&var_f8);
        }
        
        let r12_2: u64 = var_140_1;
        let rax_7: i8 = std::path::Path::is_dir::h9ac0db933706da51(arg3, r12_2);
        let rax_8: i8 = std::path::Path::is_dir::h9ac0db933706da51(arg1, rbp_1);
        
        if uucore::features::fs::path_ends_with_terminator::h30fe62ab1cf88eee(arg3, r12_2) != 0
        {
            if rax_7 != 0
            {
                goto 'label_4e94b1;
            }
            
            let mut rax_10: *mut c_void;
            rax_10 = *arg5.byte_offset(0x30) != 0;
            
            if (rax_8 | rax_10) == 0 && *arg5.byte_offset(0x37) != 2
            {
                var_1a8 = 1;
                let var_1a0_3: *mut i8 = arg3;
                let var_198_3: u64 = r12_2;
                let var_190_3: i8 = 1;
                _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h29e878758f75f5ed(
                    &var_f0, &var_1a8);
                var_f8 = 9;
                return alloc::boxed::Box$LT$T$GT$::new::h0e8b01bf032e1a6a(&var_f8);
            }
        }
        else if rax_7 != 0
        {
            'label_4e94b1:
            
            if *arg5.byte_offset(0x30) != 0
            {
                if std::path::Path::is_dir::h9ac0db933706da51(arg1, rbp_1) != 0
                {
                    let rax_15: *mut *mut c_void =
                        uu_mv::rename::hfc95a4bd2fcddeec(arg1, rbp_1, arg3, r12_2, arg5, nullptr);
                    var_f8 = arg1;
                    var_f0 = rbp_1;
                    let var_e8_2: *mut i8 = arg3;
                    let var_e0_2: u64 = r12_2;
                    return _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hf9aae2064c24b4d3(rax_15, &var_f8);
                }
                
                var_1a8 = 1;
                let var_1a0_9: *mut i8 = arg3;
                let var_198_8: u64 = r12_2;
                let var_190_8: i8 = 1;
                _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h29e878758f75f5ed(
                    &var_f0, &var_1a8);
                var_f8 = 5;
                return alloc::boxed::Box$LT$T$GT$::new::h0e8b01bf032e1a6a(&var_f8);
            }
            
            if std::path::Path::starts_with::h893fbbf855320e98(arg3, r12_2, arg1) == 0
            {
                std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&var_f8, 
                    arg1, rbp_1);
                let result: *mut i128 =
                    uu_mv::move_files_into_dir::hea74a81b456dd214(&var_f8, 1, arg3, r12_2, arg5);
                core::ptr::drop_in_place$LT$$u5b$std..path..PathBuf$u3b$$u20$1$u5d$$GT$::hc08a4c36878649f8(&var_f8);
                return result;
            }
            
            var_138 = arg1;
            *var_138[8] = rbp_1;
            _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::he15fdbfc0d7582ca(&var_168, 
                &var_138);
            var_120 = arg3;
            let var_118_2: u64 = r12_2;
            _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::he15fdbfc0d7582ca(&var_1a8, 
                &var_120);
            let var_158: i64;
            let var_e0_7: i64 = var_158;
            var_f0 = var_168;
            var_d8 = var_1a8;
            let var_198: i64;
            let var_c8_3: i64 = var_198;
            var_f8 = 4;
            return alloc::boxed::Box$LT$T$GT$::new::h0e8b01bf032e1a6a(&var_f8);
        }
        
        std::fs::metadata::h1d9ddf5324749f9a(&var_f8, arg3);
        let r14_4: i32 = var_f8;
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h1a38c79198e9333e(&var_f8);
        let mut rax_24: i8;
        
        if r14_4 != 2
        {
            rax_24 = std::path::Path::is_dir::h9ac0db933706da51(arg1, rbp_1);
        }
        
        if r14_4 == 2 || rax_24 == 0
        {
            let rax_33: *mut *mut c_void =
                uu_mv::rename::hfc95a4bd2fcddeec(arg1, rbp_1, arg3, var_140_1, arg5, nullptr);
            
            if rax_33 == 0
            {
                return nullptr;
            }
            
            return uu_mv::handle_two_paths::_$u7b$$u7b$closure$u7d$$u7d$::h76cfa34b6b986a26(rax_33);
        }
        
        let rax_26: u32 = *arg5.byte_offset(0x35);
        
        if rax_26 == 0
        {
            return nullptr;
        }
        
        let mut cond:3_1: bool;
        
        if rax_26 != 2
        {
            let mut rax_27: *mut *mut i64;
            let mut rdx_9: i64;
            rax_27 = uucore::util_name::h60d842bf27b05e82();
            var_1a8 = rax_27;
            let var_1a0_6: i64 = rdx_9;
            var_168 = &var_1a8;
            let var_160_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2fb83001df40ac3a;
            var_f8 = &data_587e10;
            var_f0 = 2;
            let var_d8_2: i64 = 0;
            let var_e8_3: *mut *mut *mut *mut i64 = &var_168;
            let var_e0_4: i64 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_f8);
            var_1a8 = 1;
            let var_1a0_7: *mut i8 = arg3;
            let var_198_6: *mut i32 = var_140_1;
            let var_190_6: i8 = 1;
            var_168 = &var_1a8;
            let var_160_4: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            var_f8 = &data_587e30;
            var_f0 = 2;
            var_d8 = 0;
            let var_e8_4: *mut *mut *mut *mut i64 = &var_168;
            let mut var_e0_5: i64 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_f8);
            var_f8 = &data_587e50;
            var_f0 = 1;
            let var_e8_5: i64 = 8;
            var_e0_5 = {0};
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_f8);
            var_138 = &std::io::stdio::stderr::INSTANCE::ha28648ccba9ff424;
            _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::hf7b2528795edb6d7(
                &var_138);
            cond:3_1 = uucore::read_yes::hc350e858ab85cf03() == 0;
            rbp_1 = arg2;
        }
        
        if rax_26 == 2 || !cond:3_1
        {
            var_168 = 1;
            let var_160_5: *mut i8 = arg1;
            let var_158_3: u64 = rbp_1;
            let var_150_3: i8 = 1;
            _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h29e878758f75f5ed(&var_138, 
                &var_168);
            var_1a8 = 1;
            let var_1a0_8: *mut i8 = arg3;
            let var_198_7: *mut i32 = var_140_1;
            let var_190_7: i8 = 1;
            _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h29e878758f75f5ed(&var_120, 
                &var_1a8);
            let var_e0_6: i64 = var_128;
            var_f0 = var_138;
            var_d8 = var_120;
            let var_c8_2: i64 = var_110;
            var_f8 = 6;
            return alloc::boxed::Box$LT$T$GT$::new::h0e8b01bf032e1a6a(&var_f8);
        }
        
        std::io::error::Error::new::h0657970bda442b78(0x27, 1, 0);
    }
    else
    {
        var_168 = 1;
        let var_160_1: *mut i8 = arg3;
        let var_158_1: size_t = arg4;
        let var_150_1: i8 = 1;
        var_1a8 = 1;
        let var_1a0_1: *mut i8 = arg1;
        let var_198_1: u64 = arg2;
        let var_190_1: i8 = 1;
        var_120 = &var_168;
        let var_118_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        let var_110_1: *mut *mut *mut i64 = &var_1a8;
        let var_108_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        var_f8 = &data_587de0;
        var_f0 = 3;
        let var_d8_1: i64 = 0;
        let var_e8_1: *mut *mut i64 = &var_120;
        let var_e0_1: i64 = 2;
        let mut var_48: ();
        core::option::Option$LT$T$GT$::map_or_else::h70402eff178ea70d(&var_48, &var_f8);
        std::io::error::Error::new::h3b474d96466fa494(0, &var_48);
    }
    uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa()
}
