
  int64_t flealib::commandprocessor::CommandProcessor::get_camera_frame::h0878a6d4f0167b73(int128_t* arg1, void* arg2)

{
    void var_e8;
    std::env::temp_dir::hfef1f0de9c23ac58(&var_e8);
    int32_t var_178;
    char* var_e0;
    uint64_t var_d8;
    std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::hb4876b8b08d05247(&var_178, var_e0, var_d8);
    
    if (var_178 == 1)
    {
        core::option::unwrap_failed::hf53ee17a2013bd69();
        /* no return */
    }
    
    int64_t var_170;
    uint64_t var_168;
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(&var_178, 
        var_170, var_168);
    uint64_t var_a8 = var_168;
    int128_t var_b8 = var_178;
    int64_t var_58;
    flealib::camera::save_camera_frames::h622942fb6d028334(&var_58, 1, *var_b8[8]);
    char const* const var_148;
    int128_t* var_120;
    int128_t var_108;
    
    if (!(0 + -(var_58)))
    {
        var_108 = var_58;
        
        if (core::sync::atomic::atomic_load::h8980141092664382(
            &log::MAX_LOG_LEVEL_FILTER::hec4bd8d019e67a03))
        {
            var_120 = &var_108;
            int64_t (* var_118_1)(void* arg1, int64_t* arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
            var_178 = &data_b08638;
            int64_t var_170_4 = 1;
            int64_t var_158_3 = 0;
            int128_t** var_168_4 = &var_120;
            int64_t var_160_3 = 1;
            int64_t rax_8 = log::__private_api::loc::he6f33e710a34adaf(&data_b088e8);
            var_148 = "flealib::commandprocessorWrong n…";
            int64_t var_140_4 = 0x19;
            char const* const var_138_3 = "flealib::commandprocessorWrong n…";
            int64_t var_130_3 = 0x19;
            int64_t var_128_3 = rax_8;
            log::__private_api::log::hd2d1d5843cf283e9(&var_178, 1, &var_148);
        }
        
        int64_t var_48;
        arg1[1] = var_48;
        *arg1 = var_108;
    }
    else
    {
        if (core::sync::atomic::atomic_load::h8980141092664382(
            &log::MAX_LOG_LEVEL_FILTER::hec4bd8d019e67a03) >= 4)
        {
            var_178 = &data_b087e8;
            int64_t var_170_1 = 1;
            int64_t var_168_1 = 8;
            int64_t var_160;
            var_160 = {0};
            int64_t rax_1 = log::__private_api::loc::he6f33e710a34adaf(&data_b08860);
            var_148 = "flealib::commandprocessorWrong n…";
            int64_t var_140_1 = 0x19;
            char const* const var_138_1 = "flealib::commandprocessorWrong n…";
            int64_t var_130_1 = 0x19;
            int64_t var_128_1 = rax_1;
            log::__private_api::log::hd2d1d5843cf283e9(&var_178, 4, &var_148);
        }
        
        var_148 = &data_b08878;
        int64_t (* var_140_2)(int64_t* arg1, int64_t* arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5e99a2697242919d;
        var_178 = &data_b087f8;
        int64_t var_170_2 = 2;
        int64_t var_158_1 = 0;
        char const* const* var_168_2 = &var_148;
        int64_t var_160_1 = 1;
        void var_40;
        core::option::Option$LT$T$GT$::map_or_else::h09968eee8a96299b(&var_40, &var_178);
        int128_t var_d0;
        std::path::Path::join::h7b07187a9245af47(&var_d0, var_e0, var_d8, &var_40);
        char* r15_1;
        r15_1 = 1;
        std::sync::mutex::Mutex$LT$T$GT$::lock::h470d5afd4b782ddc(&var_178, arg2 + 0x10);
        int32_t* rax_2;
        char rdx_5;
        rax_2 = core::result::Result$LT$T$C$E$GT$::unwrap::had105b0bcb18ac9e(&var_178);
        r15_1 = 1;
        int64_t var_80;
        int64_t rdx_7 =
            flealib::fileserver::FileServer::read_binary_file_by_path::h8cccdbe61e884fb8(&var_80, 
            &rax_2[2], &var_d0);
        
        if (var_80 != -0x8000000000000000)
        {
            int64_t var_70;
            int64_t var_88_1 = var_70;
            int128_t var_98 = var_80;
            flealib::commandprocessor::CommandProcessor::bytes_to_string::hf42e7b3c5214d9fe(
                &var_120, *var_98[8], var_70);
            int64_t var_c0;
            int64_t var_168_5 = var_c0;
            var_178 = var_d0;
            void** rax_11;
            int64_t rdx_11;
            rax_11 = std::fs::remove_file::hcb5cc4c7376d3119(&var_178);
            void** r15_2 = rax_11;
            int64_t var_110;
            
            if (!rax_11)
            {
                if (core::sync::atomic::atomic_load::h8980141092664382(
                    &log::MAX_LOG_LEVEL_FILTER::hec4bd8d019e67a03) >= 4)
                {
                    var_178 = &data_b08828;
                    int64_t var_170_6 = 1;
                    int64_t var_168_7 = 8;
                    var_160_1 = {0};
                    int64_t rax_16 = log::__private_api::loc::he6f33e710a34adaf(&data_b088b8);
                    var_148 = "flealib::commandprocessorWrong n…";
                    int64_t var_140_6 = 0x19;
                    char const* const var_138_5 = "flealib::commandprocessorWrong n…";
                    int64_t var_130_5 = 0x19;
                    int64_t var_128_5 = rax_16;
                    log::__private_api::log::hd2d1d5843cf283e9(&var_178, 4, &var_148);
                }
                
                arg1[1] = var_110;
                *arg1 = var_120;
            }
            else
            {
                void** var_f0 = r15_2;
                
                if (core::sync::atomic::atomic_load::h8980141092664382(
                    &log::MAX_LOG_LEVEL_FILTER::hec4bd8d019e67a03))
                {
                    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h00281d94234d25d8(&var_108, &var_f0, rdx_11);
                    int128_t* var_68 = &var_108;
                    int64_t (* var_60_1)(void* arg1, int64_t* arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
                    var_178 = &data_b08818;
                    int64_t var_170_5 = 1;
                    int64_t var_158_4 = 0;
                    int128_t** var_168_6 = &var_68;
                    int64_t var_160_4 = 1;
                    int64_t rax_13 = log::__private_api::loc::he6f33e710a34adaf(&data_b088a0);
                    var_148 = "flealib::commandprocessorWrong n…";
                    int64_t var_140_5 = 0x19;
                    char const* const var_138_4 = "flealib::commandprocessorWrong n…";
                    int64_t var_130_4 = 0x19;
                    int64_t var_128_4 = rax_13;
                    log::__private_api::log::hd2d1d5843cf283e9(&var_178, 1, &var_148);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(
                        &var_108);
                    r15_2 = var_f0;
                }
                
                arg1[1] = var_110;
                *arg1 = var_120;
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h96b79424257da29d(r15_2);
            }
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hc1da1ed81c1be07b(&var_98);
            r15_1 = nullptr;
        }
        else
        {
            int128_t* var_78;
            var_120 = var_78;
            
            if (core::sync::atomic::atomic_load::h8980141092664382(
                &log::MAX_LOG_LEVEL_FILTER::hec4bd8d019e67a03))
            {
                var_108 = &var_120;
                *var_108[8] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hcf0c0103019d8a0a;
                var_178 = &data_b08838;
                int64_t var_170_3 = 1;
                int64_t var_158_2 = 0;
                int128_t* var_168_3 = &var_108;
                int64_t var_160_2 = 1;
                int64_t rax_5 = log::__private_api::loc::he6f33e710a34adaf(&data_b088d0);
                var_148 = "flealib::commandprocessorWrong n…";
                int64_t var_140_3 = 0x19;
                char const* const var_138_2 = "flealib::commandprocessorWrong n…";
                int64_t var_130_2 = 0x19;
                int64_t var_128_2 = rax_5;
                rdx_7 = log::__private_api::log::hd2d1d5843cf283e9(&var_178, 1, &var_148);
            }
            
            _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h00281d94234d25d8(
                arg1, &var_120, rdx_7);
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h96b79424257da29d(var_120);
            r15_1 = 1;
        }
        
        core::ptr::drop_in_place$LT$std..sync..mutex..MutexGuard$LT$flealib..fileserver..FileServer$GT$$GT$::h22f2e237e3cdbefb(rax_2, rdx_5 & 1);
        
        if (r15_1)
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h2f706af944357a81(&var_d0);
    }
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h2f706af944357a81(&var_e8);
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_b8);
}
