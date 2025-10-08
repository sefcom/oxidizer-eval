
  fn uu_mv::handle_two_paths::hd6bab6134f770973(arg1: *mut i8, arg2: u64, arg3: *mut i8, arg4: u64, arg5: *mut c_void) -> u64

{
    let r14: i8 = *arg5.byte_offset(0x36);
    let mut rax_1: i8;
    
    if r14 == 1
    {
        rax_1 = uucore::features::backup_control::source_is_target_backup::h54cf8f143031f95f(arg1, 
            arg2, arg3, arg4, *arg5.byte_offset(8));
    }
    
    let mut var_190: *mut *mut i64;
    let mut var_158: *mut i64;
    let mut var_130: *mut i64;
    let mut var_110: i32;
    let mut var_108: u64;
    
    if r14 != 1 || rax_1 == 0
    {
        std::fs::symlink_metadata::h0e004a46149b98e9(&var_110, arg1);
        let rbx_1: i32 = var_110;
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6bf03d231ff2ee2d(&var_110);
        
        if rbx_1 == 2
        {
            let mut rax_3: u32;
            
            if arg2 != 0
            {
                rax_3 = arg1[arg2 - 1];
            }
            
            if arg2 != 0 && (rax_3 == 0x2f || rax_3 == 0x5c)
            {
                var_190 = 1;
                let var_188_2: *mut i8 = arg1;
                let var_180_2: u64 = arg2;
                let var_178_2: i8 = 1;
                _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h72cb907f66b31c22(&var_108, &var_190);
                var_110 = 1;
            }
            else
            {
                var_190 = 1;
                let var_188_3: *mut i8 = arg1;
                let var_180_3: u64 = arg2;
                let var_178_3: i8 = 1;
                _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h72cb907f66b31c22(&var_108, &var_190);
                var_110 = 0;
            }
            
            return alloc::boxed::Box$LT$T$GT$::new::h1fc079de2e7d2ae0(&var_110);
        }
        
        let rax_4: i8 = std::path::Path::is_dir::h02edbc48c38d7d9e(arg3, arg4);
        let rax_5: i8 = std::path::Path::is_dir::h02edbc48c38d7d9e(arg1, arg2);
        
        if arg4 != 0
        {
            let rcx_1: bool = arg3[arg4 - 1];
            
            if rcx_1 != 0x2f
            {
                if (rax_5 | rax_4 | rcx_1 != 0x5c) == 0 && *arg5.byte_offset(0x30) == 0
                    && *arg5.byte_offset(0x37) != 2
                {
                    'label_48abbe:
                    var_190 = 1;
                    let var_188_4: *mut i8 = arg3;
                    let var_180_4: u64 = arg4;
                    let var_178_4: i8 = 1;
                    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h72cb907f66b31c22(&var_108, &var_190);
                    var_110 = 8;
                    return alloc::boxed::Box$LT$T$GT$::new::h1fc079de2e7d2ae0(&var_110);
                }
            }
            else if (rax_5 | rax_4) == 0 && *arg5.byte_offset(0x30) == 0
                && *arg5.byte_offset(0x37) != 2
            {
                goto 'label_48abbe;
            }
        }
        
        let rbx_2: i8 = *arg5.byte_offset(0x30);
        let rax_2: u64 = uu_mv::assert_not_same_file::hb2a62158ed5fb73d(arg1, arg2, arg3, arg4, 
            rax_4, rbx_2, r14);
        
        if rax_2 != 0
        {
            return rax_2;
        }
        
        if rax_4 != 0
        {
            if (rbx_2 & 1) == 0
            {
                std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_110, 
                    arg1, arg2);
                let rax_23: u64 =
                    uu_mv::move_files_into_dir::h52a820120b69cecf(&var_110, 1, arg3, arg4, arg5);
                core::ptr::drop_in_place$LT$$LP$std..path..PathBuf$C$$LP$$RP$$RP$$GT$::h55614b78c78f3bfd(var_110, var_108);
                return rax_23;
            }
            
            if std::path::Path::is_dir::h02edbc48c38d7d9e(arg1, arg2) != 0
            {
                let rax_11: *mut *mut c_void =
                    uu_mv::rename::h274fbdeb4e433295(arg1, arg2, arg3, arg4, arg5, nullptr);
                var_110 = arg1;
                var_108 = arg2;
                let var_100_2: *mut i8 = arg3;
                let var_f8_2: u64 = arg4;
                return _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hb96d4501591d6172(rax_11);
            }
            
            var_190 = 1;
            let var_188_9: *mut i8 = arg3;
            let var_180_8: u64 = arg4;
            let var_178_7: i8 = 1;
            _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h72cb907f66b31c22(
                &var_108, &var_190);
            var_110 = 4;
            return alloc::boxed::Box$LT$T$GT$::new::h1fc079de2e7d2ae0(&var_110);
        }
        
        std::fs::metadata::h12bb7891128f5212(&var_110, arg3);
        let rbx_4: i32 = var_110;
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6bf03d231ff2ee2d(&var_110);
        let mut rax_12: i8;
        
        if rbx_4 != 2
        {
            rax_12 = std::path::Path::is_dir::h02edbc48c38d7d9e(arg1, arg2);
        }
        
        if rbx_4 == 2 || rax_12 == 0
        {
            let rax_22: *mut *mut c_void =
                uu_mv::rename::h274fbdeb4e433295(arg1, arg2, arg3, arg4, arg5, nullptr);
            
            if rax_22 == 0
            {
                return 0;
            }
            
            return uu_mv::handle_two_paths::_$u7b$$u7b$closure$u7d$$u7d$::h0d63b4104768f918(rax_22);
        }
        
        let rax_14: u32 = *arg5.byte_offset(0x35);
        let mut rcx_4: *mut i8 = arg1;
        
        if rax_14 == 0
        {
            return 0;
        }
        
        let mut var_f0: i64;
        let mut cond:5_1: bool;
        
        if rax_14 == 1
        {
            let mut rax_15: *mut *mut i64;
            let mut rdx_6: i64;
            rax_15 = uucore::util_name::h074417a1e6395129();
            var_190 = rax_15;
            let var_188_5: i64 = rdx_6;
            var_158 = &var_190;
            let var_150_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h553019366b827b87;
            var_110 = &data_541650;
            var_108 = 2;
            let var_f0_2: i64 = 0;
            let var_100_3: *mut *mut i64 = &var_158;
            let var_f8_3: i64 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_110);
            var_190 = 1;
            let var_188_6: *mut i8 = arg3;
            let var_180_5: u64 = arg4;
            let var_178_5: i8 = 1;
            var_158 = &var_190;
            let var_150_3: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_110 = &data_541670;
            var_108 = 2;
            var_f0 = 0;
            let var_100_4: *mut *mut i64 = &var_158;
            let mut var_f8_4: i64 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_110);
            var_110 = &data_541690;
            var_108 = 1;
            let var_100_5: i64 = 8;
            var_f8_4 = {0};
            std::io::stdio::_eprint::h57899770eacec2ad(&var_110);
            var_110 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
            _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::h73119290360117e3(
                &var_110);
            cond:5_1 = uucore::read_yes::h67cb9532536454c0() == 0;
            rcx_4 = arg1;
        }
        
        if rax_14 != 1 || !cond:5_1
        {
            var_158 = 1;
            let var_150_5: *mut i8 = rcx_4;
            let var_148_2: u64 = arg2;
            let var_140_2: i8 = 1;
            let mut var_60: i128;
            _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h72cb907f66b31c22(
                &var_60, &var_158);
            var_190 = 1;
            let var_188_8: *mut i8 = arg3;
            let var_180_7: u64 = arg4;
            let var_178_6: i8 = 1;
            _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h72cb907f66b31c22(
                &var_130, &var_190);
            let var_50: i64;
            let var_f8_6: i64 = var_50;
            var_108 = var_60;
            var_f0 = var_130;
            let var_120: i64;
            let var_e0_1: i64 = var_120;
            var_110 = 5;
            return alloc::boxed::Box$LT$T$GT$::new::h1fc079de2e7d2ae0(&var_110);
        }
        
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h19a54565959f0f6f(&var_110, 1, 0);
        std::io::error::Error::_new::hbf6e5d7f23cac6f9(0x28, 
            alloc::boxed::Box$LT$T$GT$::new::hfa7a333923b705a4(&var_110), &data_541778);
    }
    else
    {
        var_158 = 1;
        let var_150_1: *mut i8 = arg3;
        let var_148_1: u64 = arg4;
        let var_140_1: i8 = 1;
        var_190 = 1;
        let var_188_1: *mut i8 = arg1;
        let var_180_1: u64 = arg2;
        let var_178_1: i8 = 1;
        var_130 = &var_158;
        let var_128_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
        let var_120_1: *mut i64 = &var_190;
        let var_118_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
        var_110 = &data_541620;
        var_108 = 3;
        let var_f0_1: i64 = 0;
        let var_100_1: *mut *mut i64 = &var_130;
        let var_f8_1: i64 = 2;
        let mut var_48: ();
        core::option::Option$LT$T$GT$::map_or_else::h26cd0638306e3785(&var_48, &var_110);
        std::io::error::Error::new::ha2b5f63706640a17(0, &var_48);
    }
    uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2()
}
