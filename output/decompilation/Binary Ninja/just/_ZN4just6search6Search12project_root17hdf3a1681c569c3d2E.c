
  int64_t just::search::Search::project_root::hdf3a1681c569c3d2(int128_t* arg1, int64_t arg2, int64_t arg3, char* arg4, uint64_t arg5)

{
    uint64_t r14 = arg5;
    char* rax;
    uint64_t rdx;
    rax = std::path::Path::parent::hef287f60afa56900(arg4, arg5);
    char* var_160 = rax;
    uint64_t rbp = rdx;
    int64_t var_a8;
    std::fs::read_dir::h1eb2d460fa0fb3e7(&var_a8, arg4);
    char var_a0;
    char rax_1 = var_a0;
    char result;
    int128_t var_e8;
    char result_1;
    int64_t var_d0;
    char* rcx;
    
    if (rax_1 != 2)
    {
        rcx = arg4;
        uint64_t var_108_1 = r14;
        
        while (true)
        {
            char* var_130_1 = var_160;
            int64_t var_118 = var_a8;
            char var_110_1 = rax_1;
            
            while (true)
            {
                _$LT$std..fs..ReadDir$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1934f30e4eea5c14(&var_e8, &var_118);
                
                if (var_e8 != 1)
                    break;
                
                int64_t rax_2 = *var_e8[8];
                int64_t rcx_6 = result_1;
                uint64_t var_150;
                int128_t var_148;
                
                if (!rax_2)
                {
                    just::search::Search::project_root::_$u7b$$u7b$closure$u7d$$u7d$::h6f630030a6b37751(&var_150, rcx, r14, rcx_6);
                    uint64_t rax_11 = var_150;
                    int128_t var_68_1 = var_148;
                    int64_t var_138;
                    int64_t var_58_1 = var_138;
                    *(arg1 + 0x18) = var_138;
                    *(arg1 + 8) = var_148;
                    *arg1 = rax_11;
                    return core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h1e42de9666d40c86(
                        &var_118);
                }
                
                int64_t var_c0;
                int64_t var_88_1 = var_c0;
                int128_t var_98_1 = var_d0;
                var_a8 = rax_2;
                var_a0 = rcx_6;
                std::fs::DirEntry::file_name::h6946eae0b92783e6(&var_150, &var_a8);
                
                if (alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::h642c0cf731eb11c2(var_148, *var_148[8], ".bzrfishl", 4))
                {
                    label_6897e9:
                    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hb5088e4c98ca9abd(
                        &var_150);
                    std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(
                        &var_150, rcx, r14);
                    *(arg1 + 0x18) = *var_148[8];
                    *(arg1 + 8) = var_150;
                    *arg1 = -0x7ffffffffffffffa;
                    core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::h578cf5996977c0ea(&var_a8);
                    return core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h1e42de9666d40c86(
                        &var_118);
                }
                
                core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hb5088e4c98ca9abd(
                    &var_150);
                std::fs::DirEntry::file_name::h6946eae0b92783e6(&var_150, &var_a8);
                
                if (alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::h642c0cf731eb11c2(var_148, *var_148[8], ".gitNAMEpathb", 4))
                    goto label_6897e9;
                
                core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hb5088e4c98ca9abd(
                    &var_150);
                std::fs::DirEntry::file_name::h6946eae0b92783e6(&var_150, &var_a8);
                
                if (alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::h642c0cf731eb11c2(var_148, *var_148[8], &data_471760, 3))
                    goto label_6897e9;
                
                core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hb5088e4c98ca9abd(
                    &var_150);
                std::fs::DirEntry::file_name::h6946eae0b92783e6(&var_150, &var_a8);
                
                if (alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::h642c0cf731eb11c2(var_148, *var_148[8], ".svnmode{", 4))
                    goto label_6897e9;
                
                core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hb5088e4c98ca9abd(
                    &var_150);
                std::fs::DirEntry::file_name::h6946eae0b92783e6(&var_150, &var_a8);
                
                if (alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::h642c0cf731eb11c2(var_148, *var_148[8], &data_471760[3], 6))
                    goto label_6897e9;
                
                core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hb5088e4c98ca9abd(
                    &var_150);
                core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::h578cf5996977c0ea(&var_a8);
            }
            
            core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h1e42de9666d40c86(&var_118);
            bool rax_8;
            
            if (arg2)
            {
                std::path::Path::components::hd0346d362206f2e9(&var_a8, rcx, r14);
                std::path::Path::components::hd0346d362206f2e9(&var_e8, arg2, arg3);
                rax_8 = _$LT$std..path..Components$u20$as$u20$core..cmp..PartialEq$GT$::eq::hd9623c64792f17b1(&var_a8, &var_e8);
            }
            
            if ((arg2 && rax_8) || !var_160)
            {
                result = std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(
                    arg1 + 8, arg4, var_108_1);
                *arg1 = -0x7ffffffffffffffa;
                break;
            }
            
            r14 = rbp;
            char* rax_9;
            uint64_t rdx_7;
            rax_9 = std::path::Path::parent::hef287f60afa56900(var_130_1, r14);
            var_160 = rax_9;
            rbp = rdx_7;
            std::fs::read_dir::h1eb2d460fa0fb3e7(&var_a8, var_130_1);
            rcx = var_130_1;
            rax_1 = var_a0;
            
            if (rax_1 == 2)
                goto label_68952e;
            
            continue;
        }
    }
    else
    {
        rcx = arg4;
        label_68952e:
        just::search::Search::project_root::_$u7b$$u7b$closure$u7d$$u7d$::h6f630030a6b37751(
            &var_e8, rcx, r14, var_a8);
        int128_t zmm0_1 = var_e8;
        result = result_1;
        int64_t var_d7;
        *(arg1 + 0x11) = var_d7;
        *(arg1 + 0x18) = var_d0;
        *arg1 = zmm0_1;
        arg1[1] = result;
    }
    return result;
}
