
  int128_t* flealib::ftp::FTP::send_file_to_ftp::hb0d5f207d4d0710e(int128_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6, int64_t arg7, char* arg8, int64_t arg9, int64_t arg10)

{
    int64_t var_98 = arg3;
    int64_t var_90 = arg4;
    int16_t var_88 = 0x15;
    char const (** const var_f8)[0xfb];
    ftp::ftp::FtpStream::connect::hf1e5995836a208f5(&var_f8);
    char const (** const rax)[0xfb] = var_f8;
    int128_t var_f0;
    int128_t var_c8 = var_f0;
    int128_t var_e0;
    int128_t var_b8 = var_e0;
    
    if (!rax)
    {
        int128_t zmm0 = var_c8;
        arg1[1] = var_b8;
        *arg1 = zmm0;
    }
    else
    {
        int128_t var_68_1 = var_c8;
        int128_t var_58_1 = var_b8;
        char const (** const var_70)[0xfb] = rax;
        int64_t var_d0;
        int64_t var_48_1 = var_d0;
        ftp::ftp::FtpStream::login::h85964480719ee466(&var_f8, &var_70, arg5, arg6, arg7);
        char rax_1 = var_f8;
        
        if (rax_1 != 4)
        {
            label_7a4412:
            int128_t zmm0_1 = *var_f8[1];
            arg1[1] = var_f0;
            *(arg1 + 1) = zmm0_1;
            *arg1 = rax_1;
        }
        else
        {
            if (core::sync::atomic::atomic_load::h8980141092664382(
                &log::MAX_LOG_LEVEL_FILTER::hec4bd8d019e67a03) >= 4)
            {
                var_f8 = &data_b0ba30;
                var_f0 = 1;
                *var_f0[8] = 8;
                var_e0 = {0};
                int64_t rax_3 = log::__private_api::loc::he6f33e710a34adaf(&data_b0baf0);
                var_c8 = "flealib::ftpFile uploaded to FTP…";
                *var_c8[8] = 0xc;
                var_b8 = "flealib::ftpFile uploaded to FTP…";
                *var_b8[8] = 0xc;
                int64_t var_a8_1 = rax_3;
                log::__private_api::log::hd2d1d5843cf283e9(&var_f8, 4, &var_c8);
            }
            
            ftp::ftp::FtpStream::cwd::h97cbe361f69c5b5d(&var_f8, &var_70, arg10);
            rax_1 = var_f8;
            
            if (rax_1 != 4)
                goto label_7a4412;
            
            std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::hb4876b8b08d05247(&var_f8, arg8, arg9);
            
            if (var_f8 == 1)
            {
                core::option::unwrap_failed::hf53ee17a2013bd69();
                /* no return */
            }
            
            int64_t var_40;
            int64_t rdx_5 = flealib::ftp::FTP::read_file_to_vec::he7dde53015678ca3(&var_40, var_f0);
            
            if (!(0 + -(var_40)))
            {
                int64_t var_30;
                var_88 = var_30;
                var_98 = var_40;
                int64_t var_80_1 = 0;
                char* rax_12;
                int64_t rdx_8;
                rax_12 = std::path::Path::file_name::h0fed3ab641b82e54(arg8, arg9);
                
                if (rax_12)
                    std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::hb4876b8b08d05247(&var_c8, rax_12, rdx_8);
                
                if (!rax_12 || var_c8 == 1)
                {
                    core::option::unwrap_failed::hf53ee17a2013bd69();
                    /* no return */
                }
                
                ftp::ftp::FtpStream::put::h92f0c1ef1757d774(&var_f8, &var_70, *var_c8[8], var_b8, 
                    &var_98);
                char rax_13 = var_f8;
                
                if (rax_13 != 4)
                {
                    int128_t zmm0_5 = *var_f8[1];
                    arg1[1] = var_f0;
                    *(arg1 + 1) = zmm0_5;
                    *arg1 = rax_13;
                    core::ptr::drop_in_place$LT$lettre..message..body..Body$GT$::h5cc690b9a7f87720(
                        &var_98);
                }
                else
                {
                    if (core::sync::atomic::atomic_load::h8980141092664382(
                        &log::MAX_LOG_LEVEL_FILTER::hec4bd8d019e67a03) >= 4)
                    {
                        var_f8 = &data_b0bad0;
                        var_f0 = 1;
                        *var_f0[8] = 8;
                        int128_t var_e0_1 = {0};
                        int64_t rax_15 = log::__private_api::loc::he6f33e710a34adaf(&data_b0bb50);
                        var_c8 = "flealib::ftpFile uploaded to FTP…";
                        *var_c8[8] = 0xc;
                        var_b8 = "flealib::ftpFile uploaded to FTP…";
                        *var_b8[8] = 0xc;
                        int64_t var_a8_3 = rax_15;
                        log::__private_api::log::hd2d1d5843cf283e9(&var_f8, 4, &var_c8);
                    }
                    
                    core::ptr::drop_in_place$LT$lettre..message..body..Body$GT$::h5cc690b9a7f87720(
                        &var_98);
                    ftp::ftp::FtpStream::quit::hdc9294a3d59b9b89(arg1, &var_70);
                }
            }
            else
            {
                int64_t var_38;
                int64_t var_a0 = var_38;
                
                if (core::sync::atomic::atomic_load::h8980141092664382(
                    &log::MAX_LOG_LEVEL_FILTER::hec4bd8d019e67a03))
                {
                    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h00281d94234d25d8(&var_98, &var_a0, rdx_5);
                    int64_t* var_28 = &var_98;
                    int64_t (* var_20_1)(void* arg1, int64_t* arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
                    var_f8 = &data_b0bae0;
                    var_f0 = 1;
                    *var_e0[8] = 0;
                    *var_f0[8] = &var_28;
                    var_e0 = 1;
                    int64_t rax_6 = log::__private_api::loc::he6f33e710a34adaf(&data_b0bb68);
                    var_c8 = "flealib::ftpFile uploaded to FTP…";
                    *var_c8[8] = 0xc;
                    var_b8 = "flealib::ftpFile uploaded to FTP…";
                    *var_b8[8] = 0xc;
                    int64_t var_a8_2 = rax_6;
                    log::__private_api::log::hd2d1d5843cf283e9(&var_f8, 1, &var_c8);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(
                        &var_98);
                }
                
                int64_t rdx_7 = ftp::ftp::FtpStream::quit::hdc9294a3d59b9b89(&var_f8, &var_70);
                char rax_7 = var_f8;
                
                if (rax_7 != 4)
                {
                    int128_t zmm0_3 = *var_f8[1];
                    arg1[1] = var_f0;
                    *(arg1 + 1) = zmm0_3;
                    *arg1 = rax_7;
                }
                else
                {
                    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h00281d94234d25d8(&var_c8, &var_a0, rdx_7);
                    *var_f0[0xf] = var_b8;
                    *var_f8[7] = var_c8;
                    *arg1 = 2;
                    *(arg1 + 1) = var_f8;
                    arg1[1] = *var_f0[7];
                    *(arg1 + 0x18) = *var_f0[0xf];
                }
                
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h96b79424257da29d(&var_a0);
            }
        }
        
        core::ptr::drop_in_place$LT$ftp..ftp..FtpStream$GT$::hc72709d3b445c73c(&var_70);
    }
    
    return arg1;
}
