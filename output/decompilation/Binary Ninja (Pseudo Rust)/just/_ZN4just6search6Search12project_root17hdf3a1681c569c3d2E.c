
  fn just::search::Search::project_root::hdf3a1681c569c3d2(arg1: *mut i128, arg2: i64, arg3: i64, arg4: *mut i8, arg5: u64) -> i64

{
    let mut r14: u64 = arg5;
    let mut rax: *mut i8;
    let mut rdx: u64;
    rax = std::path::Path::parent::hef287f60afa56900(arg4, arg5);
    let mut var_160: *mut i8 = rax;
    let mut rbp: u64 = rdx;
    let mut var_a8: i64;
    std::fs::read_dir::h1eb2d460fa0fb3e7(&var_a8, arg4);
    let mut var_a0: i8;
    let mut rax_1: i8 = var_a0;
    let mut result: i8;
    let mut var_e8: i128;
    let result_1: i8;
    let var_d0: i64;
    let mut rcx: *mut i8;
    
    if rax_1 != 2
    {
        rcx = arg4;
        let var_108_1: u64 = r14;
        
        loop
        {
            let var_130_1: *mut i8 = var_160;
            let mut var_118: i64 = var_a8;
            let var_110_1: i8 = rax_1;
            
            loop
            {
                _$LT$std..fs..ReadDir$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1934f30e4eea5c14(&var_e8, &var_118);
                
                if var_e8 != 1
                {
                    break;
                }
                
                let rax_2: i64 = *var_e8[8];
                let rcx_6: i64 = result_1;
                let mut var_150: u64;
                let var_148: i128;
                
                if rax_2 == 0
                {
                    just::search::Search::project_root::_$u7b$$u7b$closure$u7d$$u7d$::h6f630030a6b37751(&var_150, rcx, r14, rcx_6);
                    let rax_11: u64 = var_150;
                    let var_68_1: i128 = var_148;
                    let var_138: i64;
                    let var_58_1: i64 = var_138;
                    *arg1.byte_offset(0x18) = var_138;
                    *arg1.byte_offset(8) = var_148;
                    *arg1 = rax_11;
                    return core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h1e42de9666d40c86(
                        &var_118);
                }
                
                let var_c0: i64;
                let var_88_1: i64 = var_c0;
                let var_98_1: i128 = var_d0;
                var_a8 = rax_2;
                var_a0 = rcx_6;
                std::fs::DirEntry::file_name::h6946eae0b92783e6(&var_150, &var_a8);
                
                if alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::h642c0cf731eb11c2(var_148, *var_148[8], ".bzrfishl", 4) != 0
                {
                    'label_6897e9:
                    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hb5088e4c98ca9abd(
                        &var_150);
                    std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(
                        &var_150, rcx, r14);
                    *arg1.byte_offset(0x18) = *var_148[8];
                    *arg1.byte_offset(8) = var_150;
                    *arg1 = -0x7ffffffffffffffa;
                    core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::h578cf5996977c0ea(&var_a8);
                    return core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h1e42de9666d40c86(
                        &var_118);
                }
                
                core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hb5088e4c98ca9abd(
                    &var_150);
                std::fs::DirEntry::file_name::h6946eae0b92783e6(&var_150, &var_a8);
                
                if alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::h642c0cf731eb11c2(var_148, *var_148[8], ".gitNAMEpathb", 4) != 0
                {
                    goto 'label_6897e9;
                }
                
                core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hb5088e4c98ca9abd(
                    &var_150);
                std::fs::DirEntry::file_name::h6946eae0b92783e6(&var_150, &var_a8);
                
                if alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::h642c0cf731eb11c2(var_148, *var_148[8], &data_471760, 3) != 0
                {
                    goto 'label_6897e9;
                }
                
                core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hb5088e4c98ca9abd(
                    &var_150);
                std::fs::DirEntry::file_name::h6946eae0b92783e6(&var_150, &var_a8);
                
                if alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::h642c0cf731eb11c2(var_148, *var_148[8], ".svnmode{", 4) != 0
                {
                    goto 'label_6897e9;
                }
                
                core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hb5088e4c98ca9abd(
                    &var_150);
                std::fs::DirEntry::file_name::h6946eae0b92783e6(&var_150, &var_a8);
                
                if alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::h642c0cf731eb11c2(var_148, *var_148[8], &data_471760[3], 6) != 0
                {
                    goto 'label_6897e9;
                }
                
                core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hb5088e4c98ca9abd(
                    &var_150);
                core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::h578cf5996977c0ea(&var_a8);
            }
            
            core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h1e42de9666d40c86(&var_118);
            let mut rax_8: bool;
            
            if arg2 != 0
            {
                std::path::Path::components::hd0346d362206f2e9(&var_a8, rcx, r14);
                std::path::Path::components::hd0346d362206f2e9(&var_e8, arg2, arg3);
                rax_8 = _$LT$std..path..Components$u20$as$u20$core..cmp..PartialEq$GT$::eq::hd9623c64792f17b1(&var_a8, &var_e8);
            }
            
            if (arg2 != 0 && rax_8 != 0) || var_160 == 0
            {
                result = std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(
                    arg1.byte_offset(8), arg4, var_108_1);
                *arg1 = -0x7ffffffffffffffa;
                break;
            }
            
            r14 = rbp;
            let mut rax_9: *mut i8;
            let mut rdx_7: u64;
            rax_9 = std::path::Path::parent::hef287f60afa56900(var_130_1, r14);
            var_160 = rax_9;
            rbp = rdx_7;
            std::fs::read_dir::h1eb2d460fa0fb3e7(&var_a8, var_130_1);
            rcx = var_130_1;
            rax_1 = var_a0;
            
            if rax_1 == 2
            {
                goto 'label_68952e;
            }
            
            continue;
        }
    }
    else
    {
        rcx = arg4;
        'label_68952e:
        just::search::Search::project_root::_$u7b$$u7b$closure$u7d$$u7d$::h6f630030a6b37751(
            &var_e8, rcx, r14, var_a8);
        let zmm0_1: i128 = var_e8;
        result = result_1;
        let var_d7: i64;
        *arg1.byte_offset(0x11) = var_d7;
        *arg1.byte_offset(0x18) = var_d0;
        *arg1 = zmm0_1;
        arg1[1] = result;
    }
    result
}
