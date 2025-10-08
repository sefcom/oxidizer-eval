
  int64_t rg::haystack::HaystackBuilder::build::hbf10e93e3f18e435(int64_t* arg1, char arg2, int128_t* arg3)

{
    int128_t zmm0 = *arg3;
    int128_t zmm1 = arg3[1];
    int128_t zmm2 = arg3[2];
    int128_t var_1a8 = arg3[3];
    int128_t var_178 = arg3[6];
    int128_t var_188 = arg3[5];
    int128_t zmm3 = arg3[4];
    int128_t var_1d8 = zmm0;
    void* var_1e8;
    int64_t* var_158;
    void** var_130;
    int64_t* var_100;
    int64_t* var_d0;
    
    if (*var_1a8[8] != 9)
    {
        var_1e8 = &*var_1a8[8];
        
        if (rg::messages::messages::h9ee4188b23ce53b0()
            && rg::messages::ignore_messages::hf16747a1cdd9c08b())
        {
            std::io::stdio::stdout::hb6a8e10bcccf3287();
            var_d0 = &std::io::stdio::STDOUT::h411b213c5c9add46;
            int64_t* rax_3 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_d0);
            var_d0 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
            var_158 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_d0);
            var_d0 = &data_7e99c8;
            int64_t var_c8_1 = 1;
            int64_t var_c0_1 = 8;
            int128_t var_b8_1 = {0};
            int64_t rbp;
            rbp = 1;
            void** rax_5 = std::io::Write::write_fmt::hfeba02f6870139ed(&var_158, &var_d0);
            var_130 = rax_5;
            
            if (rax_5)
            {
                var_d0 = rax_5;
                int32_t rdi_17;
                rdi_17 = std::io::error::Error::kind::h135fe00c4e7365f3(rax_5) != 0xb;
                std::process::exit::hcda678ff272dfed1(rdi_17 * 2);
                /* no return */
            }
            
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h328fe786a92b7324(&var_130);
            var_130 = &var_1e8;
            int64_t (* var_128_1)(int64_t* arg1, int64_t* arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h3fb75ff7bec6bbbb;
            var_d0 = &data_7ea800;
            int64_t var_c8_2 = 2;
            *var_b8_1[8] = 0;
            void*** var_c0_2 = &var_130;
            var_b8_1 = 1;
            int64_t* rax_6 = std::io::Write::write_fmt::hfeba02f6870139ed(&var_158, &var_d0);
            var_100 = rax_6;
            
            if (rax_6)
            {
                var_d0 = rax_6;
                int32_t rdi_20;
                rdi_20 = std::io::error::Error::kind::h135fe00c4e7365f3(rax_6) != 0xb;
                std::process::exit::hcda678ff272dfed1(rdi_20 * 2);
                /* no return */
            }
            
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h328fe786a92b7324(&var_100);
            core::ptr::drop_in_place$LT$std..io..stdio..StderrLock$GT$::hc9a1ca1256489ed0(rax_3);
            core::ptr::drop_in_place$LT$std..io..stdio..StderrLock$GT$::hc9a1ca1256489ed0(var_158);
        }
    }
    
    if (!rg::haystack::Haystack::is_explicit::h64cc0399f7646269(&var_1d8)
        && !rg::haystack::Haystack::is_file::hc42aab8fa6a57301(var_1d8, var_1a8))
    {
        if (!rg::haystack::Haystack::is_dir::hd6f752fd2c8f0e5c(&var_1d8) &&
            core::sync::atomic::atomic_load::headb9992cbbd027a(
            &log::MAX_LOG_LEVEL_FILTER::hb16df1a2b362bf4c, 0) >= 4)
        {
            void* rax_11;
            int64_t rdx;
            rax_11 = ignore::walk::DirEntry::path::he339916189ce99ea(&var_1d8);
            var_1e8 = rax_11;
            int64_t var_1e0_1 = rdx;
            int32_t rax_13;
            
            if (!var_1d8)
                rax_13 = 0;
            else
            {
                int32_t var_1ec_1 = var_1a8;
                rax_13 = 1;
            }
            
            int32_t var_1f0 = rax_13;
            ignore::walk::DirEntry::metadata::hc400968e33669a36(&var_d0, &var_1d8);
            var_130 = &var_1e8;
            uint64_t (* var_128_2)(int64_t* arg1, int64_t arg2) =
                _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
            int32_t* var_120_1 = &var_1f0;
            uint64_t (* var_118_1)(int32_t* arg1, int64_t* arg2) = _$LT$core..option..Option$LT$T$GT$$u20$as$u20$core..fmt..Debug$GT$::fmt::h24ef3ca1a42baf44;
            int64_t** var_110_1 = &var_d0;
            uint64_t (* var_108_1)(int32_t* arg1, int64_t* arg2) = _$LT$core..result..Result$LT$T$C$E$GT$$u20$as$u20$core..fmt..Debug$GT$::fmt::h55bf0728ee4a499b;
            var_100 = &data_7eb718;
            int64_t var_f8_1 = 3;
            int64_t var_e0_1 = 0;
            void*** var_f0_1 = &var_130;
            int64_t var_e8_1 = 3;
            int64_t rax_14 = log::__private_api::loc::h53b04f6fd0066707(&data_7eb748);
            var_158 = "rg::haystack: binary detection: …";
            int64_t var_150_1 = 0xc;
            char const* const var_148_1 = "rg::haystack: binary detection: …";
            int64_t var_140_1 = 0xc;
            int64_t var_138_1 = rax_14;
            log::__private_api::log::h124fdfc9e9ed7585(&var_100, 4, &var_158);
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$ignore..Error$GT$$GT$::h4c49ce120ff9d2c9(&var_d0);
        }
        
        *arg1 = 3;
        return core::ptr::drop_in_place$LT$rg..haystack..Haystack$GT$::h5f0cb9c54e389b81(&var_1d8);
    }
    
    int64_t result = arg2;
    arg1[0xe] = result;
    *(arg1 + 0x60) = var_178;
    *(arg1 + 0x50) = var_188;
    *(arg1 + 0x40) = zmm3;
    int128_t zmm0_1 = var_1d8;
    *(arg1 + 0x30) = var_1a8;
    *(arg1 + 0x20) = zmm2;
    *(arg1 + 0x10) = zmm1;
    *arg1 = zmm0_1;
    return result;
}
