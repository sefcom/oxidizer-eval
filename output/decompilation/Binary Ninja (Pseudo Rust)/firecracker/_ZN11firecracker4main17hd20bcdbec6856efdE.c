
  fn firecracker::main::hd20bcdbec6856efd() -> u64

{
    let mut var_50: i32;
    firecracker::main_exec::h0b30eb7959f3f695(&var_50);
    let mut rbx: i32;
    let mut var_118: *mut *mut [i8; 0x10f];
    let mut var_98: i128;
    
    if var_50 != 0xb
    {
        var_98 = var_50;
        let mut var_d0: *mut i128;
        let mut var_c0: *const i8;
        
        if core::sync::atomic::atomic_load::hcd41a4cf8b7c5bb4(
            &log::MAX_LOG_LEVEL_FILTER::hba2cad573e31d8ba, 0) != 0
        {
            var_d0 = &var_98;
            let var_c8_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = firecracker::_::_$LT$impl$u20$core..fmt..Display$u20$for$u20$firecracker..MainError$GT$::fmt::hf09503798fa43cb0;
            var_118 = &data_430b60;
            let var_110_2: i64 = 1;
            let var_f8_1: i64 = 0;
            let var_108_2: *mut *mut i128 = &var_d0;
            let var_100_1: i64 = 1;
            let rax_5: i64 = log::__private_api::loc::h0b1bf3028c786bb7(&data_7a3e68);
            var_c0 = "firecrackerPath to unix domain s…";
            let var_b8_1: i64 = 0xb;
            let var_b0_1: *const i8 = "firecrackerPath to unix domain s…";
            let var_a8_1: i64 = 0xb;
            let var_a0_1: i64 = rax_5;
            log::__private_api::log_impl::h05439a06b798919c(&var_118, 1, &var_c0);
        }
        
        var_c0 = &var_98;
        let var_b8_2: fn(arg1: *mut i32, arg2: *mut i64) -> u64 =
            _$LT$firecracker..MainError$u20$as$u20$core..fmt..Debug$GT$::fmt::h8305828c66816984;
        var_118 = &data_7a3e28;
        let var_110_3: i64 = 2;
        let mut var_f8_2: i64 = 0;
        let mut var_108_3: *const *const i8 = &var_c0;
        let var_100_2: i64 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_118);
        let var_10: i64;
        let var_d8_1: i64 = var_10;
        let var_20: i128;
        let var_e8_1: i128 = var_20;
        let var_30: i128;
        var_f8_2 = var_30;
        let var_40: i128;
        var_108_3 = var_40;
        var_118 = var_98;
        let rax_7: i32 = firecracker::_$LT$impl$u20$core..convert..From$LT$firecracker..MainError$GT$$u20$for$u20$vmm..FcExitCode$GT$::from::hdc436c2690ea3a60(&var_118);
        rbx = rax_7;
        let mut var_119: i8 = rax_7;
        
        if core::sync::atomic::atomic_load::hcd41a4cf8b7c5bb4(
            &log::MAX_LOG_LEVEL_FILTER::hba2cad573e31d8ba, 0) != 0
        {
            var_d0 = &var_119;
            let var_c8_2: fn(arg1: *mut i8, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h150c2a008a7de3c9;
            var_118 = &data_7a3e48;
            let var_110_4: i64 = 1;
            let var_f8_3: i64 = 0;
            let var_108_4: *mut *mut i128 = &var_d0;
            let var_100_3: i64 = 1;
            let rax_9: i64 = log::__private_api::loc::h0b1bf3028c786bb7(&data_7a3e80);
            var_c0 = "firecrackerPath to unix domain s…";
            let var_b8_3: i64 = 0xb;
            let var_b0_2: *const i8 = "firecrackerPath to unix domain s…";
            let var_a8_2: i64 = 0xb;
            let var_a0_2: i64 = rax_9;
            log::__private_api::log_impl::h05439a06b798919c(&var_118, 1, &var_c0);
            return var_119;
        }
    }
    else
    {
        rbx = 0;
        
        if core::sync::atomic::atomic_load::hcd41a4cf8b7c5bb4(
            &log::MAX_LOG_LEVEL_FILTER::hba2cad573e31d8ba, 0) > 2
        {
            var_118 = &data_7a3e58;
            let var_110_1: i64 = 1;
            let var_108_1: i64 = 8;
            let mut var_100: i64;
            var_100 = {0};
            let rax_1: i64 = log::__private_api::loc::h0b1bf3028c786bb7(&data_7a3e98);
            var_98 = "firecrackerPath to unix domain s…";
            *var_98[8] = 0xb;
            let mut var_88: i128;
            var_88 = "firecrackerPath to unix domain s…";
            *var_88[8] = 0xb;
            let mut var_78: i128;
            var_78 = rax_1;
            log::__private_api::log_impl::h05439a06b798919c(&var_118, 3, &var_98);
            rbx = 0;
        }
    }
    rbx
}
