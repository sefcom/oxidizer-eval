
  fn rg::flags::hiargs::Paths::from_low_args::hfc0513af1d20ff5a(arg1: *mut i64, arg2: *mut c_void, arg3: *mut c_void) -> u64

{
    let mut rax: i64;
    let mut rdx: *mut c_void;
    rax = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h02ccee15b84dfdd3(
        *arg3.byte_offset(0xc0), 8, 0x18);
    let mut var_b0: i64 = rax;
    let result: u64 = 0;
    let mut var_f0: *mut i64;
    alloc::vec::Vec$LT$T$C$A$GT$::drain::h48cde34d4c5afdaa(&var_f0, arg3.byte_offset(0xb0));
    let mut rax_1: *mut i64 = var_f0;
    let var_e8: i64;
    let mut var_120: *mut *mut [i8; 0x8e];
    let mut var_108: fn(arg1: *mut i8, arg2: *mut i64) -> i64;
    
    if rax_1 == var_e8
    {
        'label_651711:
        core::ptr::drop_in_place$LT$alloc..vec..drain..Drain$LT$std..ffi..os_str..OsString$GT$$GT$::h29879139e73d0001(&var_f0);
        let mut var_110: *mut c_void;
        let mut result_1: u64;
        let mut var_90: *mut i64;
        
        if core::sync::atomic::atomic_load::headb9992cbbd027a(
            &log::MAX_LOG_LEVEL_FILTER::hb16df1a2b362bf4c, 0) >= 4
        {
            result_1 = result;
            var_90 = &result_1;
            let var_88_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
            var_120 = &data_7eb098;
            let var_118_1: i64 = 1;
            let var_100_1: i64 = 0;
            var_110 = &var_90;
            var_108 = 1;
            let rax_4: i64 = log::__private_api::loc::h53b04f6fd0066707(&data_7eb130);
            var_f0 = "rg::flags::hiargserror building …";
            let var_e8_1: i64 = 0x11;
            let var_e0_1: *const i8 = "rg::flags::hiargserror building …";
            let var_d8_1: i64 = 0x11;
            let var_d0_1: i64 = rax_4;
            log::__private_api::log::h124fdfc9e9ed7585(&var_120, 4, &var_f0);
        }
        
        let mut rbx_1: u64;
        
        if result != 0
        {
            if result != 1
            {
                rbx_1 = 0;
            }
            else
            {
                rbx_1 = 1;
                
                if _$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$LT$$RF$std..path..Path$GT$$GT$::eq::h2125dccf5663ce54(*rdx.byte_offset(8), *rdx.byte_offset(0x10), 
                    "-\n_rg() {\n  local i cur prev o…", 1) == 0
                {
                    rbx_1 = std::path::Path::is_dir::h02edbc48c38d7d9e(*rdx.byte_offset(8), 
                        *rdx.byte_offset(0x10)) ^ 1;
                }
            }
            
            result_1 = rbx_1;
            
            if core::sync::atomic::atomic_load::headb9992cbbd027a(
                &log::MAX_LOG_LEVEL_FILTER::hb16df1a2b362bf4c, 0) >= 4
            {
                var_90 = &result_1;
                let var_88_3: fn(arg1: *mut i8, arg2: *mut i64) -> i64 =
                    _$LT$bool$u20$as$u20$core..fmt..Debug$GT$::fmt::h2059a05f7be96066;
                var_120 = &data_7eb0a8;
                let var_118_4: i64 = 1;
                let var_100_3: i64 = 0;
                let var_110_1: *mut *mut i64 = &var_90;
                let var_108_1: i64 = 1;
                let rax_14: i64 = log::__private_api::loc::h53b04f6fd0066707(&data_7eb190);
                var_f0 = "rg::flags::hiargserror building …";
                let var_e8_4: i64 = 0x11;
                let var_e0_4: *const i8 = "rg::flags::hiargserror building …";
                let var_d8_4: i64 = 0x11;
                let var_d0_4: i64 = rax_14;
                log::__private_api::log::h124fdfc9e9ed7585(&var_120, 4, &var_f0);
                rbx_1 = result_1;
            }
            
            arg1[2] = result;
            *arg1 = var_b0;
            arg1[3] = 0;
            *arg1.byte_offset(0x19) = rbx_1;
            return result;
        }
        
        let rax_7: i8 = grep_cli::is_readable_stdin::h209fbf26d79344c3();
        let mut var_121: i8 = rax_7;
        rbx_1 = 1;
        
        if rax_7 != 0 && *arg2.byte_offset(0x19) == 0
        {
            rbx_1 = *arg3.byte_offset(0x22c) != 0;
        }
        
        if core::sync::atomic::atomic_load::headb9992cbbd027a(
            &log::MAX_LOG_LEVEL_FILTER::hb16df1a2b362bf4c, 0) >= 4
        {
            var_120 = &var_121;
            let var_118_2: fn(arg1: *mut i8, arg2: *mut i64) -> i64 =
                _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hbea0b23ff4cd4bd6;
            var_110 = arg2.byte_offset(0x19);
            var_108 = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hbea0b23ff4cd4bd6;
            let var_100_2: *mut c_void = arg3.byte_offset(0x22c);
            let var_f8_1: fn(arg1: *mut i8, arg2: *mut i64) -> u64 = _$LT$rg..flags..lowargs..Mode$u20$as$u20$core..fmt..Debug$GT$::fmt::hb4023750cedb2052;
            var_f0 = &data_7eb0b8;
            let var_e8_2: i64 = 4;
            let var_d0_2: i64 = 0;
            let var_e0_2: *const *mut *mut [i8; 0x8e] = &var_120;
            let var_d8_2: i64 = 3;
            let rax_10: i64 = log::__private_api::loc::h53b04f6fd0066707(&data_7eb148);
            var_90 = "rg::flags::hiargserror building …";
            let var_88_2: i64 = 0x11;
            let var_80_1: *const i8 = "rg::flags::hiargserror building …";
            let var_78_1: i64 = 0x11;
            let var_70_1: i64 = rax_10;
            log::__private_api::log::h124fdfc9e9ed7585(&var_f0, 4, &var_90);
        }
        
        if rbx_1 == 0
        {
            if core::sync::atomic::atomic_load::headb9992cbbd027a(
                &log::MAX_LOG_LEVEL_FILTER::hb16df1a2b362bf4c, 0) >= 4
            {
                var_120 = &data_7eb108;
                let var_118_5: i64 = 1;
                var_110 = 8;
                var_108 = {0};
                let rax_16: i64 = log::__private_api::loc::h53b04f6fd0066707(&data_7eb160);
                var_f0 = "rg::flags::hiargserror building …";
                let var_e8_5: i64 = 0x11;
                let var_e0_5: *const i8 = "rg::flags::hiargserror building …";
                let var_d8_5: i64 = 0x11;
                let var_d0_5: i64 = rax_16;
                log::__private_api::log::h124fdfc9e9ed7585(&var_120, 4, &var_f0);
            }
            
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1dbf6ec1d593e24c(&var_120, "-\n_rg() {\n  local i cur prev o…", 1);
        }
        else
        {
            if core::sync::atomic::atomic_load::headb9992cbbd027a(
                &log::MAX_LOG_LEVEL_FILTER::hb16df1a2b362bf4c, 0) >= 4
            {
                var_120 = &data_7eb0f8;
                let var_118_3: i64 = 1;
                var_110 = 8;
                var_108 = {0};
                let rax_12: i64 = log::__private_api::loc::h53b04f6fd0066707(&data_7eb178);
                var_f0 = "rg::flags::hiargserror building …";
                let var_e8_3: i64 = 0x11;
                let var_e0_3: *const i8 = "rg::flags::hiargserror building …";
                let var_d8_3: i64 = 0x11;
                let var_d0_3: i64 = rax_12;
                log::__private_api::log::h124fdfc9e9ed7585(&var_120, 4, &var_f0);
            }
            
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1dbf6ec1d593e24c(&var_120, "././cannot parse integer from em…", 2);
        }
        
        let zmm0_4: i128 = var_120;
        let rax_18: *mut i128 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x18, 0);
        
        if rax_18 == 0
        {
            alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
            /* no return */
        }
        
        rbx_1 ^= 1;
        rax_18[1] = var_110;
        *rax_18 = zmm0_4;
        *arg1 = 1;
        arg1[1] = rax_18;
        arg1[2] = 1;
        arg1[3] = 1;
        *arg1.byte_offset(0x19) = rbx_1;
    }
    else
    {
        loop
        {
            var_f0 = &rax_1[3];
            let rcx_2: i64 = *rax_1;
            
            if rcx_2 == -0x8000000000000000
            {
                goto 'label_651711;
            }
            
            let zmm0_1: i128 = *rax_1.byte_offset(8);
            let mut var_48: i64 = rcx_2;
            
            if *arg2.byte_offset(0x19) != 0 && _$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$LT$$RF$std..path..Path$GT$$GT$::eq::h2125dccf5663ce54(zmm0_1, *zmm0_1[8], 
                "-\n_rg() {\n  local i cur prev o…", 1) != 0
            {
                var_120 = &data_7eb088;
                let var_118_6: i64 = 1;
                let var_110_2: i64 = 8;
                var_108 = {0};
                arg1[1] = anyhow::__private::format_err::hd87f3faee3401bd9(&var_120);
                *arg1 = -0x8000000000000000;
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hee77a3799ccd604e(&var_48);
                core::ptr::drop_in_place$LT$alloc..vec..drain..Drain$LT$std..ffi..os_str..OsString$GT$$GT$::h29879139e73d0001(&var_f0);
                break;
            }
            
            alloc::vec::Vec$LT$T$C$A$GT$::push::hce819081c7de96c9(&var_b0, &var_48);
            rax_1 = var_f0;
            
            if rax_1 == var_e8
            {
                goto 'label_651711;
            }
        }
    }
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h739d05dbffaabe89(
        &var_b0)
}
