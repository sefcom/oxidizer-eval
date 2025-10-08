
  fn rg::haystack::HaystackBuilder::build::hbf10e93e3f18e435(arg1: *mut i64, arg2: i8, arg3: *mut i128) -> i64

{
    let zmm0: i128 = *arg3;
    let zmm1: i128 = arg3[1];
    let zmm2: i128 = arg3[2];
    let mut var_1a8: i128 = arg3[3];
    let var_178: i128 = arg3[6];
    let var_188: i128 = arg3[5];
    let zmm3: i128 = arg3[4];
    let mut var_1d8: i128 = zmm0;
    let mut var_1e8: *mut c_void;
    let mut var_158: *mut i64;
    let mut var_130: *mut *mut c_void;
    let mut var_100: *mut i64;
    let mut var_d0: *mut i64;
    
    if *var_1a8[8] != 9
    {
        var_1e8 = &*var_1a8[8];
        
        if rg::messages::messages::h9ee4188b23ce53b0() != 0
            && rg::messages::ignore_messages::hf16747a1cdd9c08b() != 0
        {
            std::io::stdio::stdout::hb6a8e10bcccf3287();
            var_d0 = &std::io::stdio::STDOUT::h411b213c5c9add46;
            let rax_3: *mut i64 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_d0);
            var_d0 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
            var_158 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_d0);
            var_d0 = &data_7e99c8;
            let var_c8_1: i64 = 1;
            let var_c0_1: i64 = 8;
            let mut var_b8_1: i128 = {0};
            let mut rbp: i64;
            rbp = 1;
            let rax_5: *mut *mut c_void =
                std::io::Write::write_fmt::hfeba02f6870139ed(&var_158, &var_d0);
            var_130 = rax_5;
            
            if rax_5 != 0
            {
                var_d0 = rax_5;
                let mut rdi_17: i32;
                rdi_17 = std::io::error::Error::kind::h135fe00c4e7365f3(rax_5) != 0xb;
                std::process::exit::hcda678ff272dfed1(rdi_17 * 2);
                /* no return */
            }
            
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h328fe786a92b7324(&var_130);
            var_130 = &var_1e8;
            let var_128_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h3fb75ff7bec6bbbb;
            var_d0 = &data_7ea800;
            let var_c8_2: i64 = 2;
            *var_b8_1[8] = 0;
            let var_c0_2: *mut *mut *mut c_void = &var_130;
            var_b8_1 = 1;
            let rax_6: *mut i64 = std::io::Write::write_fmt::hfeba02f6870139ed(&var_158, &var_d0);
            var_100 = rax_6;
            
            if rax_6 != 0
            {
                var_d0 = rax_6;
                let mut rdi_20: i32;
                rdi_20 = std::io::error::Error::kind::h135fe00c4e7365f3(rax_6) != 0xb;
                std::process::exit::hcda678ff272dfed1(rdi_20 * 2);
                /* no return */
            }
            
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h328fe786a92b7324(&var_100);
            core::ptr::drop_in_place$LT$std..io..stdio..StderrLock$GT$::hc9a1ca1256489ed0(rax_3);
            core::ptr::drop_in_place$LT$std..io..stdio..StderrLock$GT$::hc9a1ca1256489ed0(var_158);
        }
    }
    
    if rg::haystack::Haystack::is_explicit::h64cc0399f7646269(&var_1d8) == 0
        && rg::haystack::Haystack::is_file::hc42aab8fa6a57301(var_1d8, var_1a8) == 0
    {
        if rg::haystack::Haystack::is_dir::hd6f752fd2c8f0e5c(&var_1d8) == 0 &&
            core::sync::atomic::atomic_load::headb9992cbbd027a(
            &log::MAX_LOG_LEVEL_FILTER::hb16df1a2b362bf4c, 0) >= 4
        {
            let mut rax_11: *mut c_void;
            let mut rdx: i64;
            rax_11 = ignore::walk::DirEntry::path::he339916189ce99ea(&var_1d8);
            var_1e8 = rax_11;
            let var_1e0_1: i64 = rdx;
            let mut rax_13: i32;
            
            if var_1d8 == 0
            {
                rax_13 = 0;
            }
            else
            {
                let var_1ec_1: i32 = var_1a8;
                rax_13 = 1;
            }
            
            let mut var_1f0: i32 = rax_13;
            ignore::walk::DirEntry::metadata::hc400968e33669a36(&var_d0, &var_1d8);
            var_130 = &var_1e8;
            let var_128_2: fn(arg1: *mut i64, arg2: i64) -> u64 =
                _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
            let var_120_1: *mut i32 = &var_1f0;
            let var_118_1: fn(arg1: *mut i32, arg2: *mut i64) -> u64 = _$LT$core..option..Option$LT$T$GT$$u20$as$u20$core..fmt..Debug$GT$::fmt::h24ef3ca1a42baf44;
            let var_110_1: *mut *mut i64 = &var_d0;
            let var_108_1: fn(arg1: *mut i32, arg2: *mut i64) -> u64 = _$LT$core..result..Result$LT$T$C$E$GT$$u20$as$u20$core..fmt..Debug$GT$::fmt::h55bf0728ee4a499b;
            var_100 = &data_7eb718;
            let var_f8_1: i64 = 3;
            let var_e0_1: i64 = 0;
            let var_f0_1: *mut *mut *mut c_void = &var_130;
            let var_e8_1: i64 = 3;
            let rax_14: i64 = log::__private_api::loc::h53b04f6fd0066707(&data_7eb748);
            var_158 = "rg::haystack: binary detection: …";
            let var_150_1: i64 = 0xc;
            let var_148_1: *const i8 = "rg::haystack: binary detection: …";
            let var_140_1: i64 = 0xc;
            let var_138_1: i64 = rax_14;
            log::__private_api::log::h124fdfc9e9ed7585(&var_100, 4, &var_158);
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$ignore..Error$GT$$GT$::h4c49ce120ff9d2c9(&var_d0);
        }
        
        *arg1 = 3;
        return core::ptr::drop_in_place$LT$rg..haystack..Haystack$GT$::h5f0cb9c54e389b81(&var_1d8);
    }
    
    let result: i64 = arg2;
    arg1[0xe] = result;
    *arg1.byte_offset(0x60) = var_178;
    *arg1.byte_offset(0x50) = var_188;
    *arg1.byte_offset(0x40) = zmm3;
    let zmm0_1: i128 = var_1d8;
    *arg1.byte_offset(0x30) = var_1a8;
    *arg1.byte_offset(0x20) = zmm2;
    *arg1.byte_offset(0x10) = zmm1;
    *arg1 = zmm0_1;
    result
}
