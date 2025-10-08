
  fn uu_cat::cat_path::h2dae90d146b12434(arg1: *mut i64, arg2: *mut i8, arg3: i64, arg4: *mut i8, arg5: i64, arg6: *mut i64) -> u64

{
    let var_e0: i64 = arg5;
    let mut result_1: u64;
    uu_cat::get_input_type::hbfde5e00eb22cee4(&result_1, arg2, arg3);
    let mut result: u64 = result_1;
    let result_2: i8;
    let var_bf: i64;
    
    if result != -0x7ffffffffffffffa
    {
        arg1[2] = var_bf;
        *arg1.byte_offset(9) = var_bf;
        *arg1 = result;
        arg1[1] = result_2;
    }
    else
    {
        result = result_2;
        
        if result == 0
        {
            *arg1 = -0x7ffffffffffffffd;
        }
        else if result == 2
        {
            std::io::stdio::stdin::h9a05a2c3e7544b2a();
            result = uucore::features::fs::FileInformation::from_file::hb6ba8add35b75427(&result_1);
            let rbp_1: i64 = result_2;
            
            if (result_1 & 1) == 0
            {
                std::io::stdio::stdin::h9a05a2c3e7544b2a();
                let rax_2: i8 = std::sys::io::is_terminal::isatty::is_terminal::hd06dbb5b64a2e82f();
                result_1 = &std::io::stdio::stdin::INSTANCE::heccb3522b341563b;
                let var_c0: i8 = rax_2;
                
                if arg6 == 0 || *arg6 != rbp_1 || var_bf != arg6[1]
                {
                    return uu_cat::cat_handle::h83d5d925eb060efb(arg1, &result_1, arg4);
                }
                
                result = uu_cat::is_appending::h9e9d7fe51c0c743f();
                
                if result == 0
                {
                    return uu_cat::cat_handle::h83d5d925eb060efb(arg1, &result_1, arg4);
                }
                
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
            let rdi_1: *mut i32 = &result_1;
            
            if result != 7
            {
                std::fs::File::open::h74de74db77eaa88e(rdi_1, arg2);
                
                if (result_1 & 1) == 0
                {
                    let rbp_2: i32 = *result_1[4];
                    
                    if arg6 != 0 &&
                        uucore::features::fs::FileInformation::file_size::h5ed1507e54a6e051(arg6) != 0
                    {
                        uucore::features::fs::FileInformation::from_file::h4dbb3c16aaf63a90(
                            &result_1, rbp_2);
                        
                        if result_1 == 1
                        {
                            core::ptr::drop_in_place$LT$core..result..Result$LT$uucore..features..fs..FileInformation$C$std..io..error..Error$GT$$GT$::hc263a3b15372b709(&result_1);
                        }
                        else if result_2 == *arg6 && var_bf == arg6[1]
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
                
                if (result_1 & 1) == 0
                {
                    let fd: i32 = *result_1[4];
                    let mut fd_1: i32 = fd;
                    let rax: i64 =
                        std::os::unix::net::stream::UnixStream::shutdown::hb2aa252500a1ff7c(&fd_1, 
                        1);
                    
                    if rax != 0
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
    result
}
