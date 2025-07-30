
  fn flealib::commandprocessor::CommandProcessor::get_camera_frame::h0878a6d4f0167b73(arg1: *mut i128, arg2: *mut c_void) -> i64

{
    let mut var_e8: ();
    std::env::temp_dir::hfef1f0de9c23ac58(&var_e8);
    let mut var_178: i32;
    let var_e0: *mut i8;
    let var_d8: u64;
    std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::hb4876b8b08d05247(&var_178, var_e0, var_d8);
    
    if var_178 == 1
    {
        core::option::unwrap_failed::hf53ee17a2013bd69();
        /* no return */
    }
    
    let var_170: i64;
    let var_168: u64;
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(&var_178, 
        var_170, var_168);
    let var_a8: u64 = var_168;
    let mut var_b8: i128 = var_178;
    let mut var_58: i64;
    flealib::camera::save_camera_frames::h622942fb6d028334(&var_58, 1, *var_b8[8]);
    let mut var_148: *const i8;
    let mut var_120: *mut i128;
    let mut var_108: i128;
    
    if !(0 + -(var_58))
    {
        var_108 = var_58;
        
        if core::sync::atomic::atomic_load::h8980141092664382(
            &log::MAX_LOG_LEVEL_FILTER::hec4bd8d019e67a03) != 0
        {
            var_120 = &var_108;
            let var_118_1: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
            var_178 = &data_b08638;
            let var_170_4: i64 = 1;
            let var_158_3: i64 = 0;
            let var_168_4: *mut *mut i128 = &var_120;
            let var_160_3: i64 = 1;
            let rax_8: i64 = log::__private_api::loc::he6f33e710a34adaf(&data_b088e8);
            var_148 = "flealib::commandprocessorWrong n…";
            let var_140_4: i64 = 0x19;
            let var_138_3: *const i8 = "flealib::commandprocessorWrong n…";
            let var_130_3: i64 = 0x19;
            let var_128_3: i64 = rax_8;
            log::__private_api::log::hd2d1d5843cf283e9(&var_178, 1, &var_148);
        }
        
        let var_48: i64;
        arg1[1] = var_48;
        *arg1 = var_108;
    }
    else
    {
        if core::sync::atomic::atomic_load::h8980141092664382(
            &log::MAX_LOG_LEVEL_FILTER::hec4bd8d019e67a03) >= 4
        {
            var_178 = &data_b087e8;
            let var_170_1: i64 = 1;
            let var_168_1: i64 = 8;
            let mut var_160: i64;
            var_160 = {0};
            let rax_1: i64 = log::__private_api::loc::he6f33e710a34adaf(&data_b08860);
            var_148 = "flealib::commandprocessorWrong n…";
            let var_140_1: i64 = 0x19;
            let var_138_1: *const i8 = "flealib::commandprocessorWrong n…";
            let var_130_1: i64 = 0x19;
            let var_128_1: i64 = rax_1;
            log::__private_api::log::hd2d1d5843cf283e9(&var_178, 4, &var_148);
        }
        
        var_148 = &data_b08878;
        let var_140_2: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5e99a2697242919d;
        var_178 = &data_b087f8;
        let var_170_2: i64 = 2;
        let var_158_1: i64 = 0;
        let var_168_2: *const *const i8 = &var_148;
        let mut var_160_1: i64 = 1;
        let mut var_40: ();
        core::option::Option$LT$T$GT$::map_or_else::h09968eee8a96299b(&var_40, &var_178);
        let mut var_d0: i128;
        std::path::Path::join::h7b07187a9245af47(&var_d0, var_e0, var_d8, &var_40);
        let mut r15_1: *mut i8;
        r15_1 = 1;
        std::sync::mutex::Mutex$LT$T$GT$::lock::h470d5afd4b782ddc(&var_178, arg2.byte_offset(0x10));
        let mut rax_2: *mut i32;
        let mut rdx_5: i8;
        rax_2 = core::result::Result$LT$T$C$E$GT$::unwrap::had105b0bcb18ac9e(&var_178);
        r15_1 = 1;
        let mut var_80: i64;
        let mut rdx_7: i64 =
            flealib::fileserver::FileServer::read_binary_file_by_path::h8cccdbe61e884fb8(&var_80, 
            &rax_2[2], &var_d0);
        
        if var_80 != -0x8000000000000000
        {
            let var_70: i64;
            let var_88_1: i64 = var_70;
            let mut var_98: i128 = var_80;
            flealib::commandprocessor::CommandProcessor::bytes_to_string::hf42e7b3c5214d9fe(
                &var_120, *var_98[8], var_70);
            let var_c0: i64;
            let var_168_5: i64 = var_c0;
            var_178 = var_d0;
            let mut rax_11: *mut *mut c_void;
            let mut rdx_11: i64;
            rax_11 = std::fs::remove_file::hcb5cc4c7376d3119(&var_178);
            let mut r15_2: *mut *mut c_void = rax_11;
            let var_110: i64;
            
            if rax_11 == 0
            {
                if core::sync::atomic::atomic_load::h8980141092664382(
                    &log::MAX_LOG_LEVEL_FILTER::hec4bd8d019e67a03) >= 4
                {
                    var_178 = &data_b08828;
                    let var_170_6: i64 = 1;
                    let var_168_7: i64 = 8;
                    var_160_1 = {0};
                    let rax_16: i64 = log::__private_api::loc::he6f33e710a34adaf(&data_b088b8);
                    var_148 = "flealib::commandprocessorWrong n…";
                    let var_140_6: i64 = 0x19;
                    let var_138_5: *const i8 = "flealib::commandprocessorWrong n…";
                    let var_130_5: i64 = 0x19;
                    let var_128_5: i64 = rax_16;
                    log::__private_api::log::hd2d1d5843cf283e9(&var_178, 4, &var_148);
                }
                
                arg1[1] = var_110;
                *arg1 = var_120;
            }
            else
            {
                let mut var_f0: *mut *mut c_void = r15_2;
                
                if core::sync::atomic::atomic_load::h8980141092664382(
                    &log::MAX_LOG_LEVEL_FILTER::hec4bd8d019e67a03) != 0
                {
                    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h00281d94234d25d8(&var_108, &var_f0, rdx_11);
                    let mut var_68: *mut i128 = &var_108;
                    let var_60_1: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
                    var_178 = &data_b08818;
                    let var_170_5: i64 = 1;
                    let var_158_4: i64 = 0;
                    let var_168_6: *mut *mut i128 = &var_68;
                    let var_160_4: i64 = 1;
                    let rax_13: i64 = log::__private_api::loc::he6f33e710a34adaf(&data_b088a0);
                    var_148 = "flealib::commandprocessorWrong n…";
                    let var_140_5: i64 = 0x19;
                    let var_138_4: *const i8 = "flealib::commandprocessorWrong n…";
                    let var_130_4: i64 = 0x19;
                    let var_128_4: i64 = rax_13;
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
            let var_78: *mut i128;
            var_120 = var_78;
            
            if core::sync::atomic::atomic_load::h8980141092664382(
                &log::MAX_LOG_LEVEL_FILTER::hec4bd8d019e67a03) != 0
            {
                var_108 = &var_120;
                *var_108[8] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hcf0c0103019d8a0a;
                var_178 = &data_b08838;
                let var_170_3: i64 = 1;
                let var_158_2: i64 = 0;
                let var_168_3: *mut i128 = &var_108;
                let var_160_2: i64 = 1;
                let rax_5: i64 = log::__private_api::loc::he6f33e710a34adaf(&data_b088d0);
                var_148 = "flealib::commandprocessorWrong n…";
                let var_140_3: i64 = 0x19;
                let var_138_2: *const i8 = "flealib::commandprocessorWrong n…";
                let var_130_2: i64 = 0x19;
                let var_128_2: i64 = rax_5;
                rdx_7 = log::__private_api::log::hd2d1d5843cf283e9(&var_178, 1, &var_148);
            }
            
            _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h00281d94234d25d8(
                arg1, &var_120, rdx_7);
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h96b79424257da29d(var_120);
            r15_1 = 1;
        }
        
        core::ptr::drop_in_place$LT$std..sync..mutex..MutexGuard$LT$flealib..fileserver..FileServer$GT$$GT$::h22f2e237e3cdbefb(rax_2, rdx_5 & 1);
        
        if r15_1 != 0
        {
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h2f706af944357a81(&var_d0);
        }
    }
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h2f706af944357a81(&var_e8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_b8)
}
