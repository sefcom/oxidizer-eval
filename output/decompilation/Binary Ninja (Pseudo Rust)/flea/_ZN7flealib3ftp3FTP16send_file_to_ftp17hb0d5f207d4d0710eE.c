
  fn flealib::ftp::FTP::send_file_to_ftp::hb0d5f207d4d0710e(arg1: *mut i128, arg2: i64, arg3: i64, arg4: i64, arg5: i64, arg6: i64, arg7: i64, arg8: *mut i8, arg9: i64, arg10: i64) -> *mut i128

{
    let mut var_98: i64 = arg3;
    let var_90: i64 = arg4;
    let mut var_88: i16 = 0x15;
    let mut var_f8: *mut *mut [i8; 0xfb];
    ftp::ftp::FtpStream::connect::hf1e5995836a208f5(&var_f8);
    let rax: *mut *mut [i8; 0xfb] = var_f8;
    let mut var_f0: i128;
    let mut var_c8: i128 = var_f0;
    let mut var_e0: i128;
    let mut var_b8: i128 = var_e0;
    
    if rax == 0
    {
        let zmm0: i128 = var_c8;
        arg1[1] = var_b8;
        *arg1 = zmm0;
    }
    else
    {
        let var_68_1: i128 = var_c8;
        let var_58_1: i128 = var_b8;
        let mut var_70: *mut *mut [i8; 0xfb] = rax;
        let var_d0: i64;
        let var_48_1: i64 = var_d0;
        ftp::ftp::FtpStream::login::h85964480719ee466(&var_f8, &var_70, arg5, arg6, arg7);
        let mut rax_1: i8 = var_f8;
        
        if rax_1 != 4
        {
            'label_7a4412:
            let zmm0_1: i128 = *var_f8[1];
            arg1[1] = var_f0;
            *arg1.byte_offset(1) = zmm0_1;
            *arg1 = rax_1;
        }
        else
        {
            if core::sync::atomic::atomic_load::h8980141092664382(
                &log::MAX_LOG_LEVEL_FILTER::hec4bd8d019e67a03) >= 4
            {
                var_f8 = &data_b0ba30;
                var_f0 = 1;
                *var_f0[8] = 8;
                var_e0 = {0};
                let rax_3: i64 = log::__private_api::loc::he6f33e710a34adaf(&data_b0baf0);
                var_c8 = "flealib::ftpFile uploaded to FTP…";
                *var_c8[8] = 0xc;
                var_b8 = "flealib::ftpFile uploaded to FTP…";
                *var_b8[8] = 0xc;
                let var_a8_1: i64 = rax_3;
                log::__private_api::log::hd2d1d5843cf283e9(&var_f8, 4, &var_c8);
            }
            
            ftp::ftp::FtpStream::cwd::h97cbe361f69c5b5d(&var_f8, &var_70, arg10);
            rax_1 = var_f8;
            
            if rax_1 != 4
            {
                goto 'label_7a4412;
            }
            
            std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::hb4876b8b08d05247(&var_f8, arg8, arg9);
            
            if var_f8 == 1
            {
                core::option::unwrap_failed::hf53ee17a2013bd69();
                /* no return */
            }
            
            let mut var_40: i64;
            let rdx_5: i64 =
                flealib::ftp::FTP::read_file_to_vec::he7dde53015678ca3(&var_40, var_f0);
            
            if !(0 + -(var_40))
            {
                let var_30: i64;
                var_88 = var_30;
                var_98 = var_40;
                let var_80_1: i64 = 0;
                let mut rax_12: *mut i8;
                let mut rdx_8: i64;
                rax_12 = std::path::Path::file_name::h0fed3ab641b82e54(arg8, arg9);
                
                if rax_12 != 0
                {
                    std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::hb4876b8b08d05247(&var_c8, rax_12, rdx_8);
                }
                
                if rax_12 == 0 || var_c8 == 1
                {
                    core::option::unwrap_failed::hf53ee17a2013bd69();
                    /* no return */
                }
                
                ftp::ftp::FtpStream::put::h92f0c1ef1757d774(&var_f8, &var_70, *var_c8[8], var_b8, 
                    &var_98);
                let rax_13: i8 = var_f8;
                
                if rax_13 != 4
                {
                    let zmm0_5: i128 = *var_f8[1];
                    arg1[1] = var_f0;
                    *arg1.byte_offset(1) = zmm0_5;
                    *arg1 = rax_13;
                    core::ptr::drop_in_place$LT$lettre..message..body..Body$GT$::h5cc690b9a7f87720(
                        &var_98);
                }
                else
                {
                    if core::sync::atomic::atomic_load::h8980141092664382(
                        &log::MAX_LOG_LEVEL_FILTER::hec4bd8d019e67a03) >= 4
                    {
                        var_f8 = &data_b0bad0;
                        var_f0 = 1;
                        *var_f0[8] = 8;
                        let var_e0_1: i128 = {0};
                        let rax_15: i64 = log::__private_api::loc::he6f33e710a34adaf(&data_b0bb50);
                        var_c8 = "flealib::ftpFile uploaded to FTP…";
                        *var_c8[8] = 0xc;
                        var_b8 = "flealib::ftpFile uploaded to FTP…";
                        *var_b8[8] = 0xc;
                        let var_a8_3: i64 = rax_15;
                        log::__private_api::log::hd2d1d5843cf283e9(&var_f8, 4, &var_c8);
                    }
                    
                    core::ptr::drop_in_place$LT$lettre..message..body..Body$GT$::h5cc690b9a7f87720(
                        &var_98);
                    ftp::ftp::FtpStream::quit::hdc9294a3d59b9b89(arg1, &var_70);
                }
            }
            else
            {
                let var_38: i64;
                let mut var_a0: i64 = var_38;
                
                if core::sync::atomic::atomic_load::h8980141092664382(
                    &log::MAX_LOG_LEVEL_FILTER::hec4bd8d019e67a03) != 0
                {
                    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h00281d94234d25d8(&var_98, &var_a0, rdx_5);
                    let mut var_28: *mut i64 = &var_98;
                    let var_20_1: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
                    var_f8 = &data_b0bae0;
                    var_f0 = 1;
                    *var_e0[8] = 0;
                    *var_f0[8] = &var_28;
                    var_e0 = 1;
                    let rax_6: i64 = log::__private_api::loc::he6f33e710a34adaf(&data_b0bb68);
                    var_c8 = "flealib::ftpFile uploaded to FTP…";
                    *var_c8[8] = 0xc;
                    var_b8 = "flealib::ftpFile uploaded to FTP…";
                    *var_b8[8] = 0xc;
                    let var_a8_2: i64 = rax_6;
                    log::__private_api::log::hd2d1d5843cf283e9(&var_f8, 1, &var_c8);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(
                        &var_98);
                }
                
                let rdx_7: i64 = ftp::ftp::FtpStream::quit::hdc9294a3d59b9b89(&var_f8, &var_70);
                let rax_7: i8 = var_f8;
                
                if rax_7 != 4
                {
                    let zmm0_3: i128 = *var_f8[1];
                    arg1[1] = var_f0;
                    *arg1.byte_offset(1) = zmm0_3;
                    *arg1 = rax_7;
                }
                else
                {
                    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h00281d94234d25d8(&var_c8, &var_a0, rdx_7);
                    *var_f0[0xf] = var_b8;
                    *var_f8[7] = var_c8;
                    *arg1 = 2;
                    *arg1.byte_offset(1) = var_f8;
                    arg1[1] = *var_f0[7];
                    *arg1.byte_offset(0x18) = *var_f0[0xf];
                }
                
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h96b79424257da29d(&var_a0);
            }
        }
        
        core::ptr::drop_in_place$LT$ftp..ftp..FtpStream$GT$::hc72709d3b445c73c(&var_70);
    }
    
    arg1
}
