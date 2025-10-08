
  uint64_t uu_mv::handle_two_paths::hd6bab6134f770973(char* arg1, uint64_t arg2, char* arg3, uint64_t arg4, void* arg5)

{
    char r14 = *(arg5 + 0x36);
    char rax_1;
    
    if (r14 == 1)
        rax_1 = uucore::features::backup_control::source_is_target_backup::h54cf8f143031f95f(arg1, 
            arg2, arg3, arg4, *(arg5 + 8));
    
    int64_t** var_190;
    int64_t* var_158;
    int64_t* var_130;
    int32_t var_110;
    uint64_t var_108;
    
    if (r14 != 1 || !rax_1)
    {
        std::fs::symlink_metadata::h0e004a46149b98e9(&var_110, arg1);
        int32_t rbx_1 = var_110;
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6bf03d231ff2ee2d(&var_110);
        
        if (rbx_1 == 2)
        {
            uint32_t rax_3;
            
            if (arg2)
                rax_3 = arg1[arg2 - 1];
            
            if (arg2 && (rax_3 == 0x2f || rax_3 == 0x5c))
            {
                var_190 = 1;
                char* var_188_2 = arg1;
                uint64_t var_180_2 = arg2;
                char var_178_2 = 1;
                _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h72cb907f66b31c22(&var_108, &var_190);
                var_110 = 1;
            }
            else
            {
                var_190 = 1;
                char* var_188_3 = arg1;
                uint64_t var_180_3 = arg2;
                char var_178_3 = 1;
                _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h72cb907f66b31c22(&var_108, &var_190);
                var_110 = 0;
            }
            
            return alloc::boxed::Box$LT$T$GT$::new::h1fc079de2e7d2ae0(&var_110);
        }
        
        char rax_4 = std::path::Path::is_dir::h02edbc48c38d7d9e(arg3, arg4);
        char rax_5 = std::path::Path::is_dir::h02edbc48c38d7d9e(arg1, arg2);
        
        if (arg4)
        {
            bool rcx_1 = arg3[arg4 - 1];
            
            if (rcx_1 != 0x2f)
            {
                if (!(rax_5 | rax_4 | rcx_1 != 0x5c) && !*(arg5 + 0x30) && *(arg5 + 0x37) != 2)
                {
                    label_48abbe:
                    var_190 = 1;
                    char* var_188_4 = arg3;
                    uint64_t var_180_4 = arg4;
                    char var_178_4 = 1;
                    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h72cb907f66b31c22(&var_108, &var_190);
                    var_110 = 8;
                    return alloc::boxed::Box$LT$T$GT$::new::h1fc079de2e7d2ae0(&var_110);
                }
            }
            else if (!(rax_5 | rax_4) && !*(arg5 + 0x30) && *(arg5 + 0x37) != 2)
                goto label_48abbe;
        }
        
        char rbx_2 = *(arg5 + 0x30);
        uint64_t rax_2 = uu_mv::assert_not_same_file::hb2a62158ed5fb73d(arg1, arg2, arg3, arg4, 
            rax_4, rbx_2, r14);
        
        if (rax_2)
            return rax_2;
        
        if (rax_4)
        {
            if (!(rbx_2 & 1))
            {
                std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_110, 
                    arg1, arg2);
                uint64_t rax_23 =
                    uu_mv::move_files_into_dir::h52a820120b69cecf(&var_110, 1, arg3, arg4, arg5);
                core::ptr::drop_in_place$LT$$LP$std..path..PathBuf$C$$LP$$RP$$RP$$GT$::h55614b78c78f3bfd(var_110, var_108);
                return rax_23;
            }
            
            if (std::path::Path::is_dir::h02edbc48c38d7d9e(arg1, arg2))
            {
                void** rax_11 =
                    uu_mv::rename::h274fbdeb4e433295(arg1, arg2, arg3, arg4, arg5, nullptr);
                var_110 = arg1;
                var_108 = arg2;
                char* var_100_2 = arg3;
                uint64_t var_f8_2 = arg4;
                return _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hb96d4501591d6172(rax_11);
            }
            
            var_190 = 1;
            char* var_188_9 = arg3;
            uint64_t var_180_8 = arg4;
            char var_178_7 = 1;
            _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h72cb907f66b31c22(
                &var_108, &var_190);
            var_110 = 4;
            return alloc::boxed::Box$LT$T$GT$::new::h1fc079de2e7d2ae0(&var_110);
        }
        
        std::fs::metadata::h12bb7891128f5212(&var_110, arg3);
        int32_t rbx_4 = var_110;
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6bf03d231ff2ee2d(&var_110);
        char rax_12;
        
        if (rbx_4 != 2)
            rax_12 = std::path::Path::is_dir::h02edbc48c38d7d9e(arg1, arg2);
        
        if (rbx_4 == 2 || !rax_12)
        {
            void** rax_22 = uu_mv::rename::h274fbdeb4e433295(arg1, arg2, arg3, arg4, arg5, nullptr);
            
            if (!rax_22)
                return 0;
            
            return uu_mv::handle_two_paths::_$u7b$$u7b$closure$u7d$$u7d$::h0d63b4104768f918(rax_22);
        }
        
        uint32_t rax_14 = *(arg5 + 0x35);
        char* rcx_4 = arg1;
        
        if (!rax_14)
            return 0;
        
        int64_t var_f0;
        bool cond:5_1;
        
        if (rax_14 == 1)
        {
            int64_t** rax_15;
            int64_t rdx_6;
            rax_15 = uucore::util_name::h074417a1e6395129();
            var_190 = rax_15;
            int64_t var_188_5 = rdx_6;
            var_158 = &var_190;
            int64_t (* var_150_2)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h553019366b827b87;
            var_110 = &data_541650;
            var_108 = 2;
            int64_t var_f0_2 = 0;
            int64_t** var_100_3 = &var_158;
            int64_t var_f8_3 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_110);
            var_190 = 1;
            char* var_188_6 = arg3;
            uint64_t var_180_5 = arg4;
            char var_178_5 = 1;
            var_158 = &var_190;
            int64_t (* var_150_3)(int32_t* arg1, int64_t* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_110 = &data_541670;
            var_108 = 2;
            var_f0 = 0;
            int64_t** var_100_4 = &var_158;
            int64_t var_f8_4 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_110);
            var_110 = &data_541690;
            var_108 = 1;
            int64_t var_100_5 = 8;
            var_f8_4 = {0};
            std::io::stdio::_eprint::h57899770eacec2ad(&var_110);
            var_110 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
            _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::h73119290360117e3(
                &var_110);
            cond:5_1 = !uucore::read_yes::h67cb9532536454c0();
            rcx_4 = arg1;
        }
        
        if (rax_14 != 1 || !cond:5_1)
        {
            var_158 = 1;
            char* var_150_5 = rcx_4;
            uint64_t var_148_2 = arg2;
            char var_140_2 = 1;
            int128_t var_60;
            _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h72cb907f66b31c22(
                &var_60, &var_158);
            var_190 = 1;
            char* var_188_8 = arg3;
            uint64_t var_180_7 = arg4;
            char var_178_6 = 1;
            _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h72cb907f66b31c22(
                &var_130, &var_190);
            int64_t var_50;
            int64_t var_f8_6 = var_50;
            var_108 = var_60;
            var_f0 = var_130;
            int64_t var_120;
            int64_t var_e0_1 = var_120;
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
        char* var_150_1 = arg3;
        uint64_t var_148_1 = arg4;
        char var_140_1 = 1;
        var_190 = 1;
        char* var_188_1 = arg1;
        uint64_t var_180_1 = arg2;
        char var_178_1 = 1;
        var_130 = &var_158;
        int64_t (* var_128_1)(int32_t* arg1, int64_t* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
        int64_t* var_120_1 = &var_190;
        int64_t (* var_118_1)(int32_t* arg1, int64_t* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
        var_110 = &data_541620;
        var_108 = 3;
        int64_t var_f0_1 = 0;
        int64_t** var_100_1 = &var_130;
        int64_t var_f8_1 = 2;
        void var_48;
        core::option::Option$LT$T$GT$::map_or_else::h26cd0638306e3785(&var_48, &var_110);
        std::io::error::Error::new::ha2b5f63706640a17(0, &var_48);
    }
    return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
}
