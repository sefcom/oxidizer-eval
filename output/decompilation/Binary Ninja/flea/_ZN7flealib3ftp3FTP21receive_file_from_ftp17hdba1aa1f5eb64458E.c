
  int128_t* flealib::ftp::FTP::receive_file_from_ftp::hdba1aa1f5eb64458(int128_t* arg1, void* arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6, int64_t arg7, int64_t arg8, int64_t arg9, int64_t arg10)

{
    int64_t var_80 = arg3;
    int16_t var_70 = 0x15;
    char const (** const var_158)[0xfb];
    ftp::ftp::FtpStream::connect::hf1e5995836a208f5(&var_158);
    char const (** const rax)[0xfb] = var_158;
    int128_t var_150;
    int128_t var_128 = var_150;
    int128_t var_140;
    int128_t var_118 = var_140;
    
    if (!rax)
    {
        int128_t zmm0 = var_128;
        arg1[1] = var_118;
        *arg1 = zmm0;
    }
    else
    {
        int128_t var_c0_1 = var_128;
        int128_t var_b0_1 = var_118;
        char const (** const var_c8)[0xfb] = rax;
        int64_t var_130;
        int64_t var_a0_1 = var_130;
        ftp::ftp::FtpStream::login::h85964480719ee466(&var_158, &var_c8, arg5, arg6, arg7);
        char rax_1 = var_158;
        
        if (rax_1 != 4)
        {
            label_7a3df9:
            int128_t zmm0_1 = *var_158[1];
            arg1[1] = var_150;
            *(arg1 + 1) = zmm0_1;
            *arg1 = rax_1;
        }
        else
        {
            if (core::sync::atomic::atomic_load::h8980141092664382(
                &log::MAX_LOG_LEVEL_FILTER::hec4bd8d019e67a03) >= 4)
            {
                var_158 = &data_b0ba30;
                var_150 = 1;
                *var_150[8] = 8;
                var_140 = {0};
                int64_t rax_3 = log::__private_api::loc::he6f33e710a34adaf(&data_b0ba70);
                var_128 = "flealib::ftpFile uploaded to FTP…";
                *var_128[8] = 0xc;
                var_118 = "flealib::ftpFile uploaded to FTP…";
                *var_118[8] = 0xc;
                int64_t var_108_1 = rax_3;
                log::__private_api::log::hd2d1d5843cf283e9(&var_158, 4, &var_128);
            }
            
            ftp::ftp::FtpStream::cwd::h97cbe361f69c5b5d(&var_158, &var_c8, arg10);
            rax_1 = var_158;
            
            if (rax_1 != 4)
                goto label_7a3df9;
            
            ftp::ftp::FtpStream::simple_retr::h796a9e436525ae3a(&var_80, &var_c8, arg8);
            void* var_f8;
            int128_t var_e8;
            void var_98;
            int128_t var_68;
            
            if (!(var_80 & 1))
            {
                int64_t var_d8_2 = var_68;
                var_e8 = arg4;
                void var_38;
                std::path::Path::join::h34b2c6dcf923dca6(&var_38, *(arg2 + 8), *(arg2 + 0x10), 
                    arg8);
                int64_t var_48_1 = var_d8_2;
                int128_t var_58 = var_e8;
                char const (** rax_11)[0x109];
                int64_t rdx_6;
                rax_11 = flealib::ftp::FTP::write_file::h859ae53e9703cadf(&var_38, &var_58);
                
                if (!rax_11)
                {
                    if (core::sync::atomic::atomic_load::h8980141092664382(
                        &log::MAX_LOG_LEVEL_FILTER::hec4bd8d019e67a03) >= 4)
                    {
                        var_158 = &data_b0ba40;
                        var_150 = 1;
                        *var_150[8] = 8;
                        int128_t var_140_1 = {0};
                        int64_t rax_18 = log::__private_api::loc::he6f33e710a34adaf(&data_b0ba88);
                        var_128 = "flealib::ftpFile uploaded to FTP…";
                        *var_128[8] = 0xc;
                        var_118 = "flealib::ftpFile uploaded to FTP…";
                        *var_118[8] = 0xc;
                        int64_t var_108_4 = rax_18;
                        log::__private_api::log::hd2d1d5843cf283e9(&var_158, 4, &var_128);
                    }
                    
                    ftp::ftp::FtpStream::quit::hdc9294a3d59b9b89(arg1, &var_c8);
                }
                else
                {
                    char const (** var_100)[0x109] = rax_11;
                    
                    if (core::sync::atomic::atomic_load::h8980141092664382(
                        &log::MAX_LOG_LEVEL_FILTER::hec4bd8d019e67a03))
                    {
                        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h00281d94234d25d8(&var_98, &var_100, rdx_6);
                        var_f8 = &var_98;
                        int64_t (* var_f0_2)(void* arg1, int64_t* arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
                        var_158 = &data_b0ba50;
                        var_150 = 1;
                        *var_140[8] = 0;
                        *var_150[8] = &var_f8;
                        var_140 = 1;
                        int64_t rax_13 = log::__private_api::loc::he6f33e710a34adaf(&data_b0baa0);
                        var_128 = "flealib::ftpFile uploaded to FTP…";
                        *var_128[8] = 0xc;
                        var_118 = "flealib::ftpFile uploaded to FTP…";
                        *var_118[8] = 0xc;
                        int64_t var_108_3 = rax_13;
                        log::__private_api::log::hd2d1d5843cf283e9(&var_158, 1, &var_128);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(
                            &var_98);
                    }
                    
                    int64_t rdx_8 = ftp::ftp::FtpStream::quit::hdc9294a3d59b9b89(&var_158, &var_c8);
                    char rax_14 = var_158;
                    
                    if (rax_14 != 4)
                    {
                        int128_t zmm0_6 = *var_158[1];
                        arg1[1] = var_150;
                        *(arg1 + 1) = zmm0_6;
                        *arg1 = rax_14;
                    }
                    else
                    {
                        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h00281d94234d25d8(&var_128, &var_100, rdx_8);
                        *var_150[0xf] = var_118;
                        *var_158[7] = var_128;
                        *arg1 = 2;
                        *(arg1 + 1) = var_158;
                        arg1[1] = *var_150[7];
                        *(arg1 + 0x18) = *var_150[0xf];
                    }
                    
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h96b79424257da29d(
                        &var_100);
                }
            }
            else
            {
                int128_t var_d8_1 = var_68;
                var_e8 = arg4;
                
                if (core::sync::atomic::atomic_load::h8980141092664382(
                    &log::MAX_LOG_LEVEL_FILTER::hec4bd8d019e67a03))
                {
                    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h0b760c8a2d7ebf1e(&var_98, &var_e8);
                    var_f8 = &var_98;
                    int64_t (* var_f0_1)(void* arg1, int64_t* arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
                    var_158 = &data_b0ba60;
                    var_150 = 1;
                    *var_140[8] = 0;
                    *var_150[8] = &var_f8;
                    var_140 = 1;
                    int64_t rax_5 = log::__private_api::loc::he6f33e710a34adaf(&data_b0bab8);
                    var_128 = "flealib::ftpFile uploaded to FTP…";
                    *var_128[8] = 0xc;
                    var_118 = "flealib::ftpFile uploaded to FTP…";
                    *var_118[8] = 0xc;
                    int64_t var_108_2 = rax_5;
                    log::__private_api::log::hd2d1d5843cf283e9(&var_158, 1, &var_128);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(
                        &var_98);
                }
                
                ftp::ftp::FtpStream::quit::hdc9294a3d59b9b89(&var_158, &var_c8);
                char rax_6 = var_158;
                
                if (rax_6 != 4)
                {
                    int128_t zmm0_3 = *var_158[1];
                    arg1[1] = var_150;
                    *(arg1 + 1) = zmm0_3;
                    *arg1 = rax_6;
                }
                else
                {
                    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h0b760c8a2d7ebf1e(&var_128, &var_e8);
                    *var_150[0xf] = var_118;
                    *var_158[7] = var_128;
                    *arg1 = 2;
                    *(arg1 + 1) = var_158;
                    arg1[1] = *var_150[7];
                    *(arg1 + 0x18) = *var_150[0xf];
                }
                
                core::ptr::drop_in_place$LT$ftp..types..FtpError$GT$::hce9715a046caa375(&var_e8);
            }
        }
        
        core::ptr::drop_in_place$LT$ftp..ftp..FtpStream$GT$::hc72709d3b445c73c(&var_c8);
    }
    
    return arg1;
}
