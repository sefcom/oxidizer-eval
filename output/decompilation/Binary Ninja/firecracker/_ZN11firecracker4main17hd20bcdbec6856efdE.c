
  uint64_t firecracker::main::hd20bcdbec6856efd()

{
    int32_t var_50;
    firecracker::main_exec::h0b30eb7959f3f695(&var_50);
    int32_t rbx;
    char const (** const var_118)[0x10f];
    int128_t var_98;
    
    if (var_50 != 0xb)
    {
        var_98 = var_50;
        int128_t* var_d0;
        char const* const var_c0;
        
        if (core::sync::atomic::atomic_load::hcd41a4cf8b7c5bb4(
            &log::MAX_LOG_LEVEL_FILTER::hba2cad573e31d8ba, 0))
        {
            var_d0 = &var_98;
            int64_t (* var_c8_1)(int32_t* arg1, int64_t* arg2) = firecracker::_::_$LT$impl$u20$core..fmt..Display$u20$for$u20$firecracker..MainError$GT$::fmt::hf09503798fa43cb0;
            var_118 = &data_430b60;
            int64_t var_110_2 = 1;
            int64_t var_f8_1 = 0;
            int128_t** var_108_2 = &var_d0;
            int64_t var_100_1 = 1;
            int64_t rax_5 = log::__private_api::loc::h0b1bf3028c786bb7(&data_7a3e68);
            var_c0 = "firecrackerPath to unix domain s…";
            int64_t var_b8_1 = 0xb;
            char const* const var_b0_1 = "firecrackerPath to unix domain s…";
            int64_t var_a8_1 = 0xb;
            int64_t var_a0_1 = rax_5;
            log::__private_api::log_impl::h05439a06b798919c(&var_118, 1, &var_c0);
        }
        
        var_c0 = &var_98;
        uint64_t (* var_b8_2)(int32_t* arg1, int64_t* arg2) =
            _$LT$firecracker..MainError$u20$as$u20$core..fmt..Debug$GT$::fmt::h8305828c66816984;
        var_118 = &data_7a3e28;
        int64_t var_110_3 = 2;
        int64_t var_f8_2 = 0;
        char const* const* var_108_3 = &var_c0;
        int64_t var_100_2 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_118);
        int64_t var_10;
        int64_t var_d8_1 = var_10;
        int128_t var_20;
        int128_t var_e8_1 = var_20;
        int128_t var_30;
        var_f8_2 = var_30;
        int128_t var_40;
        var_108_3 = var_40;
        var_118 = var_98;
        int32_t rax_7 = firecracker::_$LT$impl$u20$core..convert..From$LT$firecracker..MainError$GT$$u20$for$u20$vmm..FcExitCode$GT$::from::hdc436c2690ea3a60(&var_118);
        rbx = rax_7;
        char var_119 = rax_7;
        
        if (core::sync::atomic::atomic_load::hcd41a4cf8b7c5bb4(
            &log::MAX_LOG_LEVEL_FILTER::hba2cad573e31d8ba, 0))
        {
            var_d0 = &var_119;
            uint64_t (* var_c8_2)(char* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h150c2a008a7de3c9;
            var_118 = &data_7a3e48;
            int64_t var_110_4 = 1;
            int64_t var_f8_3 = 0;
            int128_t** var_108_4 = &var_d0;
            int64_t var_100_3 = 1;
            int64_t rax_9 = log::__private_api::loc::h0b1bf3028c786bb7(&data_7a3e80);
            var_c0 = "firecrackerPath to unix domain s…";
            int64_t var_b8_3 = 0xb;
            char const* const var_b0_2 = "firecrackerPath to unix domain s…";
            int64_t var_a8_2 = 0xb;
            int64_t var_a0_2 = rax_9;
            log::__private_api::log_impl::h05439a06b798919c(&var_118, 1, &var_c0);
            return var_119;
        }
    }
    else
    {
        rbx = 0;
        
        if (core::sync::atomic::atomic_load::hcd41a4cf8b7c5bb4(
            &log::MAX_LOG_LEVEL_FILTER::hba2cad573e31d8ba, 0) > 2)
        {
            var_118 = &data_7a3e58;
            int64_t var_110_1 = 1;
            int64_t var_108_1 = 8;
            int64_t var_100;
            var_100 = {0};
            int64_t rax_1 = log::__private_api::loc::h0b1bf3028c786bb7(&data_7a3e98);
            var_98 = "firecrackerPath to unix domain s…";
            *var_98[8] = 0xb;
            int128_t var_88;
            var_88 = "firecrackerPath to unix domain s…";
            *var_88[8] = 0xb;
            int128_t var_78;
            var_78 = rax_1;
            log::__private_api::log_impl::h05439a06b798919c(&var_118, 3, &var_98);
            rbx = 0;
        }
    }
    return rbx;
}
