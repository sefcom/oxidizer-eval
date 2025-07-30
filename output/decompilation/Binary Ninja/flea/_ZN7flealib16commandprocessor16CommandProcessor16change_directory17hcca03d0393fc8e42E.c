
  int64_t flealib::commandprocessor::CommandProcessor::change_directory::hcca03d0393fc8e42(int128_t* arg1, int64_t arg2, uint64_t arg3, void* arg4)

{
    char rbp_1;
    int32_t* r14_2;
    int128_t zmm0_1;
    char const* const var_d0;
    char const (** const var_a8)[0xdf];
    int64_t var_98;
    int128_t var_90;
    int128_t var_78;
    int128_t* var_58;
    int64_t var_48;
    int64_t var_38;
    
    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8db7540a69ffbf83(arg2, arg3, "..flealib/src/commandprocessor.r…", 2))
    {
        if (!arg3)
        {
            if (core::sync::atomic::atomic_load::h8980141092664382(
                &log::MAX_LOG_LEVEL_FILTER::hec4bd8d019e67a03) >= 4)
            {
                var_a8 = &data_b08648;
                int64_t var_a0_4 = 1;
                int64_t var_98_2 = 8;
                int128_t var_90_3 = {0};
                int64_t rax_12 = log::__private_api::loc::he6f33e710a34adaf(&data_b08658);
                var_d0 = "flealib::commandprocessorWrong n…";
                int64_t var_c8_4 = 0x19;
                char const* const var_c0_4 = "flealib::commandprocessorWrong n…";
                int64_t var_b8_4 = 0x19;
                int64_t var_b0_4 = rax_12;
                log::__private_api::log::hd2d1d5843cf283e9(&var_a8, 4, &var_d0);
            }
            
            return _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(
                arg1, "Directory name is empty..flealib…", 0x17);
        }
        
        std::sync::mutex::Mutex$LT$T$GT$::lock::h470d5afd4b782ddc(&var_a8, arg4 + 0x10);
        int32_t* rax_4;
        char rdx_2;
        rax_4 = core::result::Result$LT$T$C$E$GT$::unwrap::had105b0bcb18ac9e(&var_a8);
        r14_2 = rax_4;
        rbp_1 = rdx_2 & 1;
        flealib::fileserver::FileServer::change_directory::h46ba8243e2a4185e(&var_48, &rax_4[2], 
            arg2, arg3);
        
        if (!(0 + -(var_48)))
        {
            var_78 = var_48;
            
            if (core::sync::atomic::atomic_load::h8980141092664382(
                &log::MAX_LOG_LEVEL_FILTER::hec4bd8d019e67a03))
            {
                var_58 = &var_78;
                int64_t (* var_50_2)(void* arg1, int64_t* arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
                var_a8 = &data_b08638;
                int64_t var_a0_5 = 1;
                *var_90[8] = 0;
                int128_t** var_98_3 = &var_58;
                var_90 = 1;
                int64_t rax_16 = log::__private_api::loc::he6f33e710a34adaf(&data_b086a0);
                var_d0 = "flealib::commandprocessorWrong n…";
                int64_t var_c8_5 = 0x19;
                char const* const var_c0_5 = "flealib::commandprocessorWrong n…";
                int64_t var_b8_5 = 0x19;
                int64_t var_b0_5 = rax_16;
                log::__private_api::log::hd2d1d5843cf283e9(&var_a8, 1, &var_d0);
            }
            
            arg1[1] = var_38;
            zmm0_1 = var_78;
        }
        else
        {
            if (core::sync::atomic::atomic_load::h8980141092664382(
                &log::MAX_LOG_LEVEL_FILTER::hec4bd8d019e67a03) >= 4)
            {
                var_a8 = &data_b08628;
                int64_t var_a0_2 = 1;
                var_98 = 8;
                int128_t var_90_2 = {0};
                int64_t rax_6 = log::__private_api::loc::he6f33e710a34adaf(&data_b08688);
                var_d0 = "flealib::commandprocessorWrong n…";
                int64_t var_c8_2 = 0x19;
                char const* const var_c0_2 = "flealib::commandprocessorWrong n…";
                int64_t var_b8_2 = 0x19;
                int64_t var_b0_2 = rax_6;
                log::__private_api::log::hd2d1d5843cf283e9(&var_a8, 4, &var_d0);
            }
            
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(
                &var_a8, "Directory changedError: Director…", 0x11);
            arg1[1] = var_98;
            zmm0_1 = var_a8;
        }
    }
    else
    {
        std::sync::mutex::Mutex$LT$T$GT$::lock::h470d5afd4b782ddc(&var_a8, arg4 + 0x10);
        int32_t* rax_1;
        char rdx;
        rax_1 = core::result::Result$LT$T$C$E$GT$::unwrap::had105b0bcb18ac9e(&var_a8);
        r14_2 = rax_1;
        rbp_1 = rdx & 1;
        flealib::fileserver::FileServer::change_directory_up::hae49b0719f1d97de(&var_48, &rax_1[2]);
        
        if (!(0 + -(var_48)))
        {
            var_78 = var_48;
            
            if (core::sync::atomic::atomic_load::h8980141092664382(
                &log::MAX_LOG_LEVEL_FILTER::hec4bd8d019e67a03))
            {
                var_58 = &var_78;
                int64_t (* var_50_1)(void* arg1, int64_t* arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
                var_a8 = &data_b08638;
                int64_t var_a0_3 = 1;
                *var_90[8] = 0;
                int128_t** var_98_1 = &var_58;
                var_90 = 1;
                int64_t rax_10 = log::__private_api::loc::he6f33e710a34adaf(&data_b086e8);
                var_d0 = "flealib::commandprocessorWrong n…";
                int64_t var_c8_3 = 0x19;
                char const* const var_c0_3 = "flealib::commandprocessorWrong n…";
                int64_t var_b8_3 = 0x19;
                int64_t var_b0_3 = rax_10;
                log::__private_api::log::hd2d1d5843cf283e9(&var_a8, 1, &var_d0);
            }
            
            arg1[1] = var_38;
            zmm0_1 = var_78;
        }
        else
        {
            if (core::sync::atomic::atomic_load::h8980141092664382(
                &log::MAX_LOG_LEVEL_FILTER::hec4bd8d019e67a03) >= 4)
            {
                var_a8 = &data_b08628;
                int64_t var_a0_1 = 1;
                var_98 = 8;
                int128_t var_90_1 = {0};
                int64_t rax_3 = log::__private_api::loc::he6f33e710a34adaf(&data_b086d0);
                var_d0 = "flealib::commandprocessorWrong n…";
                int64_t var_c8_1 = 0x19;
                char const* const var_c0_1 = "flealib::commandprocessorWrong n…";
                int64_t var_b8_1 = 0x19;
                int64_t var_b0_1 = rax_3;
                log::__private_api::log::hd2d1d5843cf283e9(&var_a8, 4, &var_d0);
            }
            
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(
                &var_a8, "Directory changedError: Director…", 0x11);
            arg1[1] = var_98;
            zmm0_1 = var_a8;
        }
    }
    *arg1 = zmm0_1;
    return core::ptr::drop_in_place$LT$std..sync..mutex..MutexGuard$LT$flealib..fileserver..FileServer$GT$$GT$::h22f2e237e3cdbefb(r14_2, rbp_1);
}
