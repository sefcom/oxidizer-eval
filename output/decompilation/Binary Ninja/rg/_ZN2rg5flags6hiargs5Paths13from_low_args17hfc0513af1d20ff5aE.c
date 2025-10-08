
  uint64_t rg::flags::hiargs::Paths::from_low_args::hfc0513af1d20ff5a(int64_t* arg1, void* arg2, void* arg3)

{
    int64_t rax;
    void* rdx;
    rax = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h02ccee15b84dfdd3(*(arg3 + 0xc0), 
        8, 0x18);
    int64_t var_b0 = rax;
    uint64_t result = 0;
    int64_t* var_f0;
    alloc::vec::Vec$LT$T$C$A$GT$::drain::h48cde34d4c5afdaa(&var_f0, arg3 + 0xb0);
    int64_t* rax_1 = var_f0;
    int64_t var_e8;
    char const (** const var_120)[0x8e];
    int64_t (* var_108)(char* arg1, int64_t* arg2);
    
    if (rax_1 == var_e8)
    {
        label_651711:
        core::ptr::drop_in_place$LT$alloc..vec..drain..Drain$LT$std..ffi..os_str..OsString$GT$$GT$::h29879139e73d0001(&var_f0);
        void* var_110;
        uint64_t result_1;
        int64_t* var_90;
        
        if (core::sync::atomic::atomic_load::headb9992cbbd027a(
            &log::MAX_LOG_LEVEL_FILTER::hb16df1a2b362bf4c, 0) >= 4)
        {
            result_1 = result;
            var_90 = &result_1;
            uint64_t (* var_88_1)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
            var_120 = &data_7eb098;
            int64_t var_118_1 = 1;
            int64_t var_100_1 = 0;
            var_110 = &var_90;
            var_108 = 1;
            int64_t rax_4 = log::__private_api::loc::h53b04f6fd0066707(&data_7eb130);
            var_f0 = "rg::flags::hiargserror building …";
            int64_t var_e8_1 = 0x11;
            char const* const var_e0_1 = "rg::flags::hiargserror building …";
            int64_t var_d8_1 = 0x11;
            int64_t var_d0_1 = rax_4;
            log::__private_api::log::h124fdfc9e9ed7585(&var_120, 4, &var_f0);
        }
        
        uint64_t rbx_1;
        
        if (result)
        {
            if (result != 1)
                rbx_1 = 0;
            else
            {
                rbx_1 = 1;
                
                if (!_$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$LT$$RF$std..path..Path$GT$$GT$::eq::h2125dccf5663ce54(*(rdx + 8), *(rdx + 0x10), "-\n_rg() {\n  local i cur prev o…", 1))
                    rbx_1 =
                        std::path::Path::is_dir::h02edbc48c38d7d9e(*(rdx + 8), *(rdx + 0x10)) ^ 1;
            }
            
            result_1 = rbx_1;
            
            if (core::sync::atomic::atomic_load::headb9992cbbd027a(
                &log::MAX_LOG_LEVEL_FILTER::hb16df1a2b362bf4c, 0) >= 4)
            {
                var_90 = &result_1;
                int64_t (* var_88_3)(char* arg1, int64_t* arg2) =
                    _$LT$bool$u20$as$u20$core..fmt..Debug$GT$::fmt::h2059a05f7be96066;
                var_120 = &data_7eb0a8;
                int64_t var_118_4 = 1;
                int64_t var_100_3 = 0;
                int64_t** var_110_1 = &var_90;
                int64_t var_108_1 = 1;
                int64_t rax_14 = log::__private_api::loc::h53b04f6fd0066707(&data_7eb190);
                var_f0 = "rg::flags::hiargserror building …";
                int64_t var_e8_4 = 0x11;
                char const* const var_e0_4 = "rg::flags::hiargserror building …";
                int64_t var_d8_4 = 0x11;
                int64_t var_d0_4 = rax_14;
                log::__private_api::log::h124fdfc9e9ed7585(&var_120, 4, &var_f0);
                rbx_1 = result_1;
            }
            
            arg1[2] = result;
            *arg1 = var_b0;
            arg1[3] = 0;
            *(arg1 + 0x19) = rbx_1;
            return result;
        }
        
        char rax_7 = grep_cli::is_readable_stdin::h209fbf26d79344c3();
        char var_121 = rax_7;
        rbx_1 = 1;
        
        if (rax_7 && !*(arg2 + 0x19))
            rbx_1 = *(arg3 + 0x22c);
        
        if (core::sync::atomic::atomic_load::headb9992cbbd027a(
            &log::MAX_LOG_LEVEL_FILTER::hb16df1a2b362bf4c, 0) >= 4)
        {
            var_120 = &var_121;
            int64_t (* var_118_2)(char* arg1, int64_t* arg2) =
                _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hbea0b23ff4cd4bd6;
            var_110 = arg2 + 0x19;
            var_108 = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hbea0b23ff4cd4bd6;
            void* var_100_2 = arg3 + 0x22c;
            uint64_t (* var_f8_1)(char* arg1, int64_t* arg2) = _$LT$rg..flags..lowargs..Mode$u20$as$u20$core..fmt..Debug$GT$::fmt::hb4023750cedb2052;
            var_f0 = &data_7eb0b8;
            int64_t var_e8_2 = 4;
            int64_t var_d0_2 = 0;
            char const (** const* var_e0_2)[0x8e] = &var_120;
            int64_t var_d8_2 = 3;
            int64_t rax_10 = log::__private_api::loc::h53b04f6fd0066707(&data_7eb148);
            var_90 = "rg::flags::hiargserror building …";
            int64_t var_88_2 = 0x11;
            char const* const var_80_1 = "rg::flags::hiargserror building …";
            int64_t var_78_1 = 0x11;
            int64_t var_70_1 = rax_10;
            log::__private_api::log::h124fdfc9e9ed7585(&var_f0, 4, &var_90);
        }
        
        if (!rbx_1)
        {
            if (core::sync::atomic::atomic_load::headb9992cbbd027a(
                &log::MAX_LOG_LEVEL_FILTER::hb16df1a2b362bf4c, 0) >= 4)
            {
                var_120 = &data_7eb108;
                int64_t var_118_5 = 1;
                var_110 = 8;
                var_108 = {0};
                int64_t rax_16 = log::__private_api::loc::h53b04f6fd0066707(&data_7eb160);
                var_f0 = "rg::flags::hiargserror building …";
                int64_t var_e8_5 = 0x11;
                char const* const var_e0_5 = "rg::flags::hiargserror building …";
                int64_t var_d8_5 = 0x11;
                int64_t var_d0_5 = rax_16;
                log::__private_api::log::h124fdfc9e9ed7585(&var_120, 4, &var_f0);
            }
            
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1dbf6ec1d593e24c(&var_120, "-\n_rg() {\n  local i cur prev o…", 1);
        }
        else
        {
            if (core::sync::atomic::atomic_load::headb9992cbbd027a(
                &log::MAX_LOG_LEVEL_FILTER::hb16df1a2b362bf4c, 0) >= 4)
            {
                var_120 = &data_7eb0f8;
                int64_t var_118_3 = 1;
                var_110 = 8;
                var_108 = {0};
                int64_t rax_12 = log::__private_api::loc::h53b04f6fd0066707(&data_7eb178);
                var_f0 = "rg::flags::hiargserror building …";
                int64_t var_e8_3 = 0x11;
                char const* const var_e0_3 = "rg::flags::hiargserror building …";
                int64_t var_d8_3 = 0x11;
                int64_t var_d0_3 = rax_12;
                log::__private_api::log::h124fdfc9e9ed7585(&var_120, 4, &var_f0);
            }
            
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1dbf6ec1d593e24c(&var_120, "././cannot parse integer from em…", 2);
        }
        
        int128_t zmm0_4 = var_120;
        int128_t* rax_18 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x18, 0);
        
        if (!rax_18)
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
        *(arg1 + 0x19) = rbx_1;
    }
    else
    {
        while (true)
        {
            var_f0 = &rax_1[3];
            int64_t rcx_2 = *rax_1;
            
            if (rcx_2 == -0x8000000000000000)
                goto label_651711;
            
            int128_t zmm0_1 = *(rax_1 + 8);
            int64_t var_48 = rcx_2;
            
            if (*(arg2 + 0x19) && _$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$LT$$RF$std..path..Path$GT$$GT$::eq::h2125dccf5663ce54(zmm0_1, *zmm0_1[8], "-\n_rg() {\n  local i cur prev o…", 1))
            {
                var_120 = &data_7eb088;
                int64_t var_118_6 = 1;
                int64_t var_110_2 = 8;
                var_108 = {0};
                arg1[1] = anyhow::__private::format_err::hd87f3faee3401bd9(&var_120);
                *arg1 = -0x8000000000000000;
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hee77a3799ccd604e(&var_48);
                core::ptr::drop_in_place$LT$alloc..vec..drain..Drain$LT$std..ffi..os_str..OsString$GT$$GT$::h29879139e73d0001(&var_f0);
                break;
            }
            
            alloc::vec::Vec$LT$T$C$A$GT$::push::hce819081c7de96c9(&var_b0, &var_48);
            rax_1 = var_f0;
            
            if (rax_1 == var_e8)
                goto label_651711;
        }
    }
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h739d05dbffaabe89(&var_b0);
}
