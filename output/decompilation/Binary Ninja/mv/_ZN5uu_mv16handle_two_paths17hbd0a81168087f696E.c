
  int128_t* uu_mv::handle_two_paths::hbd0a81168087f696(char* arg1, uint64_t arg2, char* arg3, size_t arg4, void* arg5)

{
    char r13 = *(arg5 + 0x36);
    char rax_1;
    
    if (r13 == 1)
    {
        *(arg5 + 0x10);
        rax_1 = uucore::features::backup_control::source_is_target_backup::hf52468b25c2dfb23(arg1, 
            arg2, arg3, arg4, *(arg5 + 8));
    }
    
    int64_t** var_1a8;
    int64_t*** var_168;
    int64_t* var_120;
    int32_t var_f8;
    uint64_t var_f0;
    
    if (r13 != 1 || !rax_1)
    {
        int32_t* var_140_1 = arg4;
        std::fs::symlink_metadata::h7febb2c461a7cc90(&var_f8, arg1);
        int32_t r14_1 = var_f8;
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h1a38c79198e9333e(&var_f8);
        
        if (r14_1 == 2)
        {
            if (!uucore::features::fs::path_ends_with_terminator::h30fe62ab1cf88eee(arg1, arg2))
            {
                var_1a8 = 1;
                char* var_1a0_4 = arg1;
                uint64_t var_198_4 = arg2;
                char var_190_4 = 1;
                _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h29e878758f75f5ed(
                    &var_f0, &var_1a8);
                var_f8 = 0;
            }
            else
            {
                var_1a8 = 1;
                char* var_1a0_2 = arg1;
                uint64_t var_198_2 = arg2;
                char var_190_2 = 1;
                _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h29e878758f75f5ed(
                    &var_f0, &var_1a8);
                var_f8 = 1;
            }
            
            return alloc::boxed::Box$LT$T$GT$::new::h0e8b01bf032e1a6a(&var_f8);
        }
        
        std::path::Path::components::h4f3217acf0fc8653(&var_1a8, arg1, arg2);
        std::path::Path::components::h4f3217acf0fc8653(&var_f8, arg3, var_140_1);
        uint64_t rbp_1 = arg2;
        bool cond:0_1 =
            _$LT$std..path..Components$u20$as$u20$core..cmp..PartialEq$GT$::eq::h5cac1ec2999e76da(
            &var_1a8, &var_f8);
        char rax_6;
        
        if (!cond:0_1)
            rax_6 = uucore::features::fs::are_hardlinks_to_same_file::h58f3d52af664165a(arg1, 
                rbp_1, arg3);
        
        int128_t var_138;
        int64_t var_128;
        int64_t var_110;
        int64_t var_d8;
        
        if (!cond:0_1 && !rax_6)
        {
            if (!r13 && uucore::features::fs::are_hardlinks_or_one_way_symlink_to_same_file::hd5db584ecbb68737(arg1, rbp_1, arg3))
                goto label_4e9563;
        }
        else if (!r13)
        {
            label_4e9563:
            std::path::Path::components::h4f3217acf0fc8653(&var_1a8, arg1, rbp_1);
            std::path::Path::components::h4f3217acf0fc8653(&var_f8, 
                "...a Display implementation retu…", 1);
            
            if (_$LT$std..path..Components$u20$as$u20$core..cmp..PartialEq$GT$::eq::h5cac1ec2999e76da(&var_1a8, &var_f8))
            {
                label_4e95be:
                var_168 = 1;
                char* var_160_2 = arg1;
                uint64_t var_158_2 = rbp_1;
                char var_150_2 = 1;
                _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h29e878758f75f5ed(
                    &var_138, &var_168);
                var_1a8 = 1;
                char* var_1a0_5 = arg3;
                int32_t* var_198_5 = var_140_1;
                char var_190_5 = 1;
                _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h29e878758f75f5ed(
                    &var_120, &var_1a8);
                int64_t var_e0_3 = var_128;
                var_f0 = var_138;
                var_d8 = var_120;
                int64_t var_c8_1 = var_110;
                var_f8 = 2;
            }
            else
            {
                if (std::path::Path::ends_with::h69a96bb2edb5d121(arg1, rbp_1, 
                        "/.mv: extra operand src/uu/mv/sr…"))
                    goto label_4e95be;
                
                if (std::path::Path::is_file::h82f08f46fb8d8099(arg1, rbp_1))
                    goto label_4e95be;
                
                var_1a8 = arg1;
                uint64_t var_1a0_10 = rbp_1;
                _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::he15fdbfc0d7582ca(
                    &var_f0, &var_1a8);
                var_f8 = 3;
            }
            
            return alloc::boxed::Box$LT$T$GT$::new::h0e8b01bf032e1a6a(&var_f8);
        }
        
        uint64_t r12_2 = var_140_1;
        char rax_7 = std::path::Path::is_dir::h9ac0db933706da51(arg3, r12_2);
        char rax_8 = std::path::Path::is_dir::h9ac0db933706da51(arg1, rbp_1);
        
        if (uucore::features::fs::path_ends_with_terminator::h30fe62ab1cf88eee(arg3, r12_2))
        {
            if (rax_7)
                goto label_4e94b1;
            
            void* rax_10;
            rax_10 = *(arg5 + 0x30);
            
            if (!(rax_8 | rax_10) && *(arg5 + 0x37) != 2)
            {
                var_1a8 = 1;
                char* var_1a0_3 = arg3;
                uint64_t var_198_3 = r12_2;
                char var_190_3 = 1;
                _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h29e878758f75f5ed(
                    &var_f0, &var_1a8);
                var_f8 = 9;
                return alloc::boxed::Box$LT$T$GT$::new::h0e8b01bf032e1a6a(&var_f8);
            }
        }
        else if (rax_7)
        {
            label_4e94b1:
            
            if (*(arg5 + 0x30))
            {
                if (std::path::Path::is_dir::h9ac0db933706da51(arg1, rbp_1))
                {
                    void** rax_15 =
                        uu_mv::rename::hfc95a4bd2fcddeec(arg1, rbp_1, arg3, r12_2, arg5, nullptr);
                    var_f8 = arg1;
                    var_f0 = rbp_1;
                    char* var_e8_2 = arg3;
                    uint64_t var_e0_2 = r12_2;
                    return _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hf9aae2064c24b4d3(rax_15, &var_f8);
                }
                
                var_1a8 = 1;
                char* var_1a0_9 = arg3;
                uint64_t var_198_8 = r12_2;
                char var_190_8 = 1;
                _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h29e878758f75f5ed(
                    &var_f0, &var_1a8);
                var_f8 = 5;
                return alloc::boxed::Box$LT$T$GT$::new::h0e8b01bf032e1a6a(&var_f8);
            }
            
            if (!std::path::Path::starts_with::h893fbbf855320e98(arg3, r12_2, arg1))
            {
                std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&var_f8, 
                    arg1, rbp_1);
                int128_t* result =
                    uu_mv::move_files_into_dir::hea74a81b456dd214(&var_f8, 1, arg3, r12_2, arg5);
                core::ptr::drop_in_place$LT$$u5b$std..path..PathBuf$u3b$$u20$1$u5d$$GT$::hc08a4c36878649f8(&var_f8);
                return result;
            }
            
            var_138 = arg1;
            *var_138[8] = rbp_1;
            _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::he15fdbfc0d7582ca(&var_168, 
                &var_138);
            var_120 = arg3;
            uint64_t var_118_2 = r12_2;
            _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::he15fdbfc0d7582ca(&var_1a8, 
                &var_120);
            int64_t var_158;
            int64_t var_e0_7 = var_158;
            var_f0 = var_168;
            var_d8 = var_1a8;
            int64_t var_198;
            int64_t var_c8_3 = var_198;
            var_f8 = 4;
            return alloc::boxed::Box$LT$T$GT$::new::h0e8b01bf032e1a6a(&var_f8);
        }
        
        std::fs::metadata::h1d9ddf5324749f9a(&var_f8, arg3);
        int32_t r14_4 = var_f8;
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h1a38c79198e9333e(&var_f8);
        char rax_24;
        
        if (r14_4 != 2)
            rax_24 = std::path::Path::is_dir::h9ac0db933706da51(arg1, rbp_1);
        
        if (r14_4 == 2 || !rax_24)
        {
            void** rax_33 =
                uu_mv::rename::hfc95a4bd2fcddeec(arg1, rbp_1, arg3, var_140_1, arg5, nullptr);
            
            if (!rax_33)
                return nullptr;
            
            return uu_mv::handle_two_paths::_$u7b$$u7b$closure$u7d$$u7d$::h76cfa34b6b986a26(rax_33);
        }
        
        uint32_t rax_26 = *(arg5 + 0x35);
        
        if (!rax_26)
            return nullptr;
        
        bool cond:3_1;
        
        if (rax_26 != 2)
        {
            int64_t** rax_27;
            int64_t rdx_9;
            rax_27 = uucore::util_name::h60d842bf27b05e82();
            var_1a8 = rax_27;
            int64_t var_1a0_6 = rdx_9;
            var_168 = &var_1a8;
            int64_t (* var_160_3)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2fb83001df40ac3a;
            var_f8 = &data_587e10;
            var_f0 = 2;
            int64_t var_d8_2 = 0;
            int64_t**** var_e8_3 = &var_168;
            int64_t var_e0_4 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_f8);
            var_1a8 = 1;
            char* var_1a0_7 = arg3;
            int32_t* var_198_6 = var_140_1;
            char var_190_6 = 1;
            var_168 = &var_1a8;
            int64_t (* var_160_4)(void* arg1, void* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            var_f8 = &data_587e30;
            var_f0 = 2;
            var_d8 = 0;
            int64_t**** var_e8_4 = &var_168;
            int64_t var_e0_5 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_f8);
            var_f8 = &data_587e50;
            var_f0 = 1;
            int64_t var_e8_5 = 8;
            var_e0_5 = {0};
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_f8);
            var_138 = &std::io::stdio::stderr::INSTANCE::ha28648ccba9ff424;
            _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::hf7b2528795edb6d7(
                &var_138);
            cond:3_1 = !uucore::read_yes::hc350e858ab85cf03();
            rbp_1 = arg2;
        }
        
        if (rax_26 == 2 || !cond:3_1)
        {
            var_168 = 1;
            char* var_160_5 = arg1;
            uint64_t var_158_3 = rbp_1;
            char var_150_3 = 1;
            _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h29e878758f75f5ed(&var_138, 
                &var_168);
            var_1a8 = 1;
            char* var_1a0_8 = arg3;
            int32_t* var_198_7 = var_140_1;
            char var_190_7 = 1;
            _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h29e878758f75f5ed(&var_120, 
                &var_1a8);
            int64_t var_e0_6 = var_128;
            var_f0 = var_138;
            var_d8 = var_120;
            int64_t var_c8_2 = var_110;
            var_f8 = 6;
            return alloc::boxed::Box$LT$T$GT$::new::h0e8b01bf032e1a6a(&var_f8);
        }
        
        std::io::error::Error::new::h0657970bda442b78(0x27, 1, 0);
    }
    else
    {
        var_168 = 1;
        char* var_160_1 = arg3;
        size_t var_158_1 = arg4;
        char var_150_1 = 1;
        var_1a8 = 1;
        char* var_1a0_1 = arg1;
        uint64_t var_198_1 = arg2;
        char var_190_1 = 1;
        var_120 = &var_168;
        int64_t (* var_118_1)(void* arg1, void* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        int64_t*** var_110_1 = &var_1a8;
        int64_t (* var_108_1)(void* arg1, void* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        var_f8 = &data_587de0;
        var_f0 = 3;
        int64_t var_d8_1 = 0;
        int64_t** var_e8_1 = &var_120;
        int64_t var_e0_1 = 2;
        void var_48;
        core::option::Option$LT$T$GT$::map_or_else::h70402eff178ea70d(&var_48, &var_f8);
        std::io::error::Error::new::h3b474d96466fa494(0, &var_48);
    }
    return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
}
