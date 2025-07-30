
  fn flealib::commandprocessor::CommandProcessor::change_directory::hcca03d0393fc8e42(arg1: *mut i128, arg2: i64, arg3: u64, arg4: *mut c_void) -> i64

{
    let mut rbp_1: i8;
    let mut r14_2: *mut i32;
    let mut zmm0_1: i128;
    let mut var_d0: *const i8;
    let mut var_a8: *mut *mut [i8; 0xdf];
    let mut var_98: i64;
    let mut var_90: i128;
    let mut var_78: i128;
    let mut var_58: *mut i128;
    let mut var_48: i64;
    let var_38: i64;
    
    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8db7540a69ffbf83(arg2, arg3, "..flealib/src/commandprocessor.r…", 2) == 0
    {
        if arg3 == 0
        {
            if core::sync::atomic::atomic_load::h8980141092664382(
                &log::MAX_LOG_LEVEL_FILTER::hec4bd8d019e67a03) >= 4
            {
                var_a8 = &data_b08648;
                let var_a0_4: i64 = 1;
                let var_98_2: i64 = 8;
                let var_90_3: i128 = {0};
                let rax_12: i64 = log::__private_api::loc::he6f33e710a34adaf(&data_b08658);
                var_d0 = "flealib::commandprocessorWrong n…";
                let var_c8_4: i64 = 0x19;
                let var_c0_4: *const i8 = "flealib::commandprocessorWrong n…";
                let var_b8_4: i64 = 0x19;
                let var_b0_4: i64 = rax_12;
                log::__private_api::log::hd2d1d5843cf283e9(&var_a8, 4, &var_d0);
            }
            
            return _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(
                arg1, "Directory name is empty..flealib…", 0x17);
        }
        
        std::sync::mutex::Mutex$LT$T$GT$::lock::h470d5afd4b782ddc(&var_a8, arg4.byte_offset(0x10));
        let mut rax_4: *mut i32;
        let mut rdx_2: i8;
        rax_4 = core::result::Result$LT$T$C$E$GT$::unwrap::had105b0bcb18ac9e(&var_a8);
        r14_2 = rax_4;
        rbp_1 = rdx_2 & 1;
        flealib::fileserver::FileServer::change_directory::h46ba8243e2a4185e(&var_48, &rax_4[2], 
            arg2, arg3);
        
        if !(0 + -(var_48))
        {
            var_78 = var_48;
            
            if core::sync::atomic::atomic_load::h8980141092664382(
                &log::MAX_LOG_LEVEL_FILTER::hec4bd8d019e67a03) != 0
            {
                var_58 = &var_78;
                let var_50_2: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
                var_a8 = &data_b08638;
                let var_a0_5: i64 = 1;
                *var_90[8] = 0;
                let var_98_3: *mut *mut i128 = &var_58;
                var_90 = 1;
                let rax_16: i64 = log::__private_api::loc::he6f33e710a34adaf(&data_b086a0);
                var_d0 = "flealib::commandprocessorWrong n…";
                let var_c8_5: i64 = 0x19;
                let var_c0_5: *const i8 = "flealib::commandprocessorWrong n…";
                let var_b8_5: i64 = 0x19;
                let var_b0_5: i64 = rax_16;
                log::__private_api::log::hd2d1d5843cf283e9(&var_a8, 1, &var_d0);
            }
            
            arg1[1] = var_38;
            zmm0_1 = var_78;
        }
        else
        {
            if core::sync::atomic::atomic_load::h8980141092664382(
                &log::MAX_LOG_LEVEL_FILTER::hec4bd8d019e67a03) >= 4
            {
                var_a8 = &data_b08628;
                let var_a0_2: i64 = 1;
                var_98 = 8;
                let var_90_2: i128 = {0};
                let rax_6: i64 = log::__private_api::loc::he6f33e710a34adaf(&data_b08688);
                var_d0 = "flealib::commandprocessorWrong n…";
                let var_c8_2: i64 = 0x19;
                let var_c0_2: *const i8 = "flealib::commandprocessorWrong n…";
                let var_b8_2: i64 = 0x19;
                let var_b0_2: i64 = rax_6;
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
        std::sync::mutex::Mutex$LT$T$GT$::lock::h470d5afd4b782ddc(&var_a8, arg4.byte_offset(0x10));
        let mut rax_1: *mut i32;
        let mut rdx: i8;
        rax_1 = core::result::Result$LT$T$C$E$GT$::unwrap::had105b0bcb18ac9e(&var_a8);
        r14_2 = rax_1;
        rbp_1 = rdx & 1;
        flealib::fileserver::FileServer::change_directory_up::hae49b0719f1d97de(&var_48, &rax_1[2]);
        
        if !(0 + -(var_48))
        {
            var_78 = var_48;
            
            if core::sync::atomic::atomic_load::h8980141092664382(
                &log::MAX_LOG_LEVEL_FILTER::hec4bd8d019e67a03) != 0
            {
                var_58 = &var_78;
                let var_50_1: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
                var_a8 = &data_b08638;
                let var_a0_3: i64 = 1;
                *var_90[8] = 0;
                let var_98_1: *mut *mut i128 = &var_58;
                var_90 = 1;
                let rax_10: i64 = log::__private_api::loc::he6f33e710a34adaf(&data_b086e8);
                var_d0 = "flealib::commandprocessorWrong n…";
                let var_c8_3: i64 = 0x19;
                let var_c0_3: *const i8 = "flealib::commandprocessorWrong n…";
                let var_b8_3: i64 = 0x19;
                let var_b0_3: i64 = rax_10;
                log::__private_api::log::hd2d1d5843cf283e9(&var_a8, 1, &var_d0);
            }
            
            arg1[1] = var_38;
            zmm0_1 = var_78;
        }
        else
        {
            if core::sync::atomic::atomic_load::h8980141092664382(
                &log::MAX_LOG_LEVEL_FILTER::hec4bd8d019e67a03) >= 4
            {
                var_a8 = &data_b08628;
                let var_a0_1: i64 = 1;
                var_98 = 8;
                let var_90_1: i128 = {0};
                let rax_3: i64 = log::__private_api::loc::he6f33e710a34adaf(&data_b086d0);
                var_d0 = "flealib::commandprocessorWrong n…";
                let var_c8_1: i64 = 0x19;
                let var_c0_1: *const i8 = "flealib::commandprocessorWrong n…";
                let var_b8_1: i64 = 0x19;
                let var_b0_1: i64 = rax_3;
                log::__private_api::log::hd2d1d5843cf283e9(&var_a8, 4, &var_d0);
            }
            
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(
                &var_a8, "Directory changedError: Director…", 0x11);
            arg1[1] = var_98;
            zmm0_1 = var_a8;
        }
    }
    *arg1 = zmm0_1;
    core::ptr::drop_in_place$LT$std..sync..mutex..MutexGuard$LT$flealib..fileserver..FileServer$GT$$GT$::h22f2e237e3cdbefb(r14_2, rbp_1)
}
