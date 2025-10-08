
  uint64_t uu_cat::cat_path::h2dae90d146b12434(int64_t* arg1, char* arg2, int64_t arg3, char* arg4, int64_t arg5, int64_t* arg6)

{
    int64_t var_e0 = arg5;
    uint64_t result_1;
    uu_cat::get_input_type::hbfde5e00eb22cee4(&result_1, arg2, arg3);
    uint64_t result = result_1;
    char result_2;
    int64_t var_bf;
    
    if (result != -0x7ffffffffffffffa)
    {
        arg1[2] = var_bf;
        *(arg1 + 9) = var_bf;
        *arg1 = result;
        arg1[1] = result_2;
    }
    else
    {
        result = result_2;
        
        if (!result)
            *arg1 = -0x7ffffffffffffffd;
        else if (result == 2)
        {
            std::io::stdio::stdin::h9a05a2c3e7544b2a();
            result = uucore::features::fs::FileInformation::from_file::hb6ba8add35b75427(&result_1);
            int64_t rbp_1 = result_2;
            
            if (!(result_1 & 1))
            {
                std::io::stdio::stdin::h9a05a2c3e7544b2a();
                char rax_2 = std::sys::io::is_terminal::isatty::is_terminal::hd06dbb5b64a2e82f();
                result_1 = &std::io::stdio::stdin::INSTANCE::heccb3522b341563b;
                char var_c0 = rax_2;
                
                if (!arg6 || *arg6 != rbp_1 || var_bf != arg6[1])
                    return uu_cat::cat_handle::h83d5d925eb060efb(arg1, &result_1, arg4);
                
                result = uu_cat::is_appending::h9e9d7fe51c0c743f();
                
                if (!result)
                    return uu_cat::cat_handle::h83d5d925eb060efb(arg1, &result_1, arg4);
                
                *arg1 = -0x7ffffffffffffffc;
            }
            else
            {
                *arg1 = -0x8000000000000000;
                arg1[1] = rbp_1;
            }
        }
        else
        {
            int32_t* rdi_1 = &result_1;
            
            if (result != 7)
            {
                std::fs::File::open::h74de74db77eaa88e(rdi_1, arg2);
                
                if (!(result_1 & 1))
                {
                    int32_t rbp_2 = *result_1[4];
                    
                    if (arg6 &&
                        uucore::features::fs::FileInformation::file_size::h5ed1507e54a6e051(arg6))
                    {
                        uucore::features::fs::FileInformation::from_file::h4dbb3c16aaf63a90(
                            &result_1, rbp_2);
                        
                        if (result_1 == 1)
                            core::ptr::drop_in_place$LT$core..result..Result$LT$uucore..features..fs..FileInformation$C$std..io..error..Error$GT$$GT$::hc263a3b15372b709(&result_1);
                        else if (result_2 == *arg6 && var_bf == arg6[1])
                        {
                            *arg1 = -0x7ffffffffffffffc;
                            /* tailcall */
                            return core::ptr::drop_in_place$LT$std..fs..File$GT$::hb12cd77b3305f064(
                                rbp_2);
                        }
                    }
                    
                    result_1 = rbp_2;
                    *result_1[4] = 0;
                    uu_cat::cat_handle::h670456dd76daed3c(arg1, &result_1, arg4);
                    return core::ptr::drop_in_place$LT$uu_cat..InputHandle$LT$std..fs..File$GT$$GT$::h63f04d642924b2eb(result_1);
                }
            }
            else
            {
                std::os::unix::net::stream::UnixStream::connect::h284395e806ec7af2(rdi_1, arg2);
                
                if (!(result_1 & 1))
                {
                    int32_t fd = *result_1[4];
                    int32_t fd_1 = fd;
                    int64_t rax =
                        std::os::unix::net::stream::UnixStream::shutdown::hb2aa252500a1ff7c(&fd_1, 
                        1);
                    
                    if (rax)
                    {
                        *arg1 = -0x8000000000000000;
                        arg1[1] = rax;
                        return core::ptr::drop_in_place$LT$std..fs..File$GT$::hb12cd77b3305f064(fd);
                    }
                    
                    result_1 = fd;
                    *result_1[4] = 0;
                    uu_cat::cat_handle::h3a9fe38f68852762(arg1, &result_1, arg4);
                    return core::ptr::drop_in_place$LT$uu_cat..InputHandle$LT$std..fs..File$GT$$GT$::h63f04d642924b2eb(result_1);
                }
            }
            
            result = result_2;
            *arg1 = -0x8000000000000000;
            arg1[1] = result;
        }
    }
    return result;
}
