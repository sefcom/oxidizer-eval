
  fn flealib::ftp::FTP::receive_file_from_ftp::hdba1aa1f5eb64458(arg1: *mut i128, arg2: *mut c_void, arg3: i64, arg4: i64, arg5: i64, arg6: i64, arg7: i64, arg8: i64, arg9: i64, arg10: i64) -> *mut i128

{
    let mut var_80: i64 = arg3;
    let var_70: i16 = 0x15;
    let mut var_158: *mut *mut [i8; 0xfb];
    ftp::ftp::FtpStream::connect::hf1e5995836a208f5(&var_158);
    let rax: *mut *mut [i8; 0xfb] = var_158;
    let mut var_150: i128;
    let mut var_128: i128 = var_150;
    let mut var_140: i128;
    let mut var_118: i128 = var_140;
    
    if rax == 0
    {
        let zmm0: i128 = var_128;
        arg1[1] = var_118;
        *arg1 = zmm0;
    }
    else
    {
        let var_c0_1: i128 = var_128;
        let var_b0_1: i128 = var_118;
        let mut var_c8: *mut *mut [i8; 0xfb] = rax;
        let var_130: i64;
        let var_a0_1: i64 = var_130;
        ftp::ftp::FtpStream::login::h85964480719ee466(&var_158, &var_c8, arg5, arg6, arg7);
        let mut rax_1: i8 = var_158;
        
        if rax_1 != 4
        {
            'label_7a3df9:
            let zmm0_1: i128 = *var_158[1];
            arg1[1] = var_150;
            *arg1.byte_offset(1) = zmm0_1;
            *arg1 = rax_1;
        }
        else
        {
            if core::sync::atomic::atomic_load::h8980141092664382(
                &log::MAX_LOG_LEVEL_FILTER::hec4bd8d019e67a03) >= 4
            {
                var_158 = &data_b0ba30;
                var_150 = 1;
                *var_150[8] = 8;
                var_140 = {0};
                let rax_3: i64 = log::__private_api::loc::he6f33e710a34adaf(&data_b0ba70);
                var_128 = "flealib::ftpFile uploaded to FTP…";
                *var_128[8] = 0xc;
                var_118 = "flealib::ftpFile uploaded to FTP…";
                *var_118[8] = 0xc;
                let var_108_1: i64 = rax_3;
                log::__private_api::log::hd2d1d5843cf283e9(&var_158, 4, &var_128);
            }
            
            ftp::ftp::FtpStream::cwd::h97cbe361f69c5b5d(&var_158, &var_c8, arg10);
            rax_1 = var_158;
            
            if rax_1 != 4
            {
                goto 'label_7a3df9;
            }
            
            ftp::ftp::FtpStream::simple_retr::h796a9e436525ae3a(&var_80, &var_c8, arg8);
            let mut var_f8: *mut c_void;
            let mut var_e8: i128;
            let mut var_98: ();
            let var_68: i128;
            
            if (var_80 & 1) == 0
            {
                let var_d8_2: i64 = var_68;
                var_e8 = arg4;
                let mut var_38: ();
                std::path::Path::join::h34b2c6dcf923dca6(&var_38, *arg2.byte_offset(8), 
                    *arg2.byte_offset(0x10), arg8);
                let var_48_1: i64 = var_d8_2;
                let mut var_58: i128 = var_e8;
                let mut rax_11: *mut *mut [i8; 0x109];
                let mut rdx_6: i64;
                rax_11 = flealib::ftp::FTP::write_file::h859ae53e9703cadf(&var_38, &var_58);
                
                if rax_11 == 0
                {
                    if core::sync::atomic::atomic_load::h8980141092664382(
                        &log::MAX_LOG_LEVEL_FILTER::hec4bd8d019e67a03) >= 4
                    {
                        var_158 = &data_b0ba40;
                        var_150 = 1;
                        *var_150[8] = 8;
                        let var_140_1: i128 = {0};
                        let rax_18: i64 = log::__private_api::loc::he6f33e710a34adaf(&data_b0ba88);
                        var_128 = "flealib::ftpFile uploaded to FTP…";
                        *var_128[8] = 0xc;
                        var_118 = "flealib::ftpFile uploaded to FTP…";
                        *var_118[8] = 0xc;
                        let var_108_4: i64 = rax_18;
                        log::__private_api::log::hd2d1d5843cf283e9(&var_158, 4, &var_128);
                    }
                    
                    ftp::ftp::FtpStream::quit::hdc9294a3d59b9b89(arg1, &var_c8);
                }
                else
                {
                    let mut var_100: *mut *mut [i8; 0x109] = rax_11;
                    
                    if core::sync::atomic::atomic_load::h8980141092664382(
                        &log::MAX_LOG_LEVEL_FILTER::hec4bd8d019e67a03) != 0
                    {
                        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h00281d94234d25d8(&var_98, &var_100, rdx_6);
                        var_f8 = &var_98;
                        let var_f0_2: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
                        var_158 = &data_b0ba50;
                        var_150 = 1;
                        *var_140[8] = 0;
                        *var_150[8] = &var_f8;
                        var_140 = 1;
                        let rax_13: i64 = log::__private_api::loc::he6f33e710a34adaf(&data_b0baa0);
                        var_128 = "flealib::ftpFile uploaded to FTP…";
                        *var_128[8] = 0xc;
                        var_118 = "flealib::ftpFile uploaded to FTP…";
                        *var_118[8] = 0xc;
                        let var_108_3: i64 = rax_13;
                        log::__private_api::log::hd2d1d5843cf283e9(&var_158, 1, &var_128);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(
                            &var_98);
                    }
                    
                    let rdx_8: i64 =
                        ftp::ftp::FtpStream::quit::hdc9294a3d59b9b89(&var_158, &var_c8);
                    let rax_14: i8 = var_158;
                    
                    if rax_14 != 4
                    {
                        let zmm0_6: i128 = *var_158[1];
                        arg1[1] = var_150;
                        *arg1.byte_offset(1) = zmm0_6;
                        *arg1 = rax_14;
                    }
                    else
                    {
                        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h00281d94234d25d8(&var_128, &var_100, rdx_8);
                        *var_150[0xf] = var_118;
                        *var_158[7] = var_128;
                        *arg1 = 2;
                        *arg1.byte_offset(1) = var_158;
                        arg1[1] = *var_150[7];
                        *arg1.byte_offset(0x18) = *var_150[0xf];
                    }
                    
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h96b79424257da29d(
                        &var_100);
                }
            }
            else
            {
                let var_d8_1: i128 = var_68;
                var_e8 = arg4;
                
                if core::sync::atomic::atomic_load::h8980141092664382(
                    &log::MAX_LOG_LEVEL_FILTER::hec4bd8d019e67a03) != 0
                {
                    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h0b760c8a2d7ebf1e(&var_98, &var_e8);
                    var_f8 = &var_98;
                    let var_f0_1: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
                    var_158 = &data_b0ba60;
                    var_150 = 1;
                    *var_140[8] = 0;
                    *var_150[8] = &var_f8;
                    var_140 = 1;
                    let rax_5: i64 = log::__private_api::loc::he6f33e710a34adaf(&data_b0bab8);
                    var_128 = "flealib::ftpFile uploaded to FTP…";
                    *var_128[8] = 0xc;
                    var_118 = "flealib::ftpFile uploaded to FTP…";
                    *var_118[8] = 0xc;
                    let var_108_2: i64 = rax_5;
                    log::__private_api::log::hd2d1d5843cf283e9(&var_158, 1, &var_128);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(
                        &var_98);
                }
                
                ftp::ftp::FtpStream::quit::hdc9294a3d59b9b89(&var_158, &var_c8);
                let rax_6: i8 = var_158;
                
                if rax_6 != 4
                {
                    let zmm0_3: i128 = *var_158[1];
                    arg1[1] = var_150;
                    *arg1.byte_offset(1) = zmm0_3;
                    *arg1 = rax_6;
                }
                else
                {
                    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h0b760c8a2d7ebf1e(&var_128, &var_e8);
                    *var_150[0xf] = var_118;
                    *var_158[7] = var_128;
                    *arg1 = 2;
                    *arg1.byte_offset(1) = var_158;
                    arg1[1] = *var_150[7];
                    *arg1.byte_offset(0x18) = *var_150[0xf];
                }
                
                core::ptr::drop_in_place$LT$ftp..types..FtpError$GT$::hce9715a046caa375(&var_e8);
            }
        }
        
        core::ptr::drop_in_place$LT$ftp..ftp..FtpStream$GT$::hc72709d3b445c73c(&var_c8);
    }
    
    arg1
}
