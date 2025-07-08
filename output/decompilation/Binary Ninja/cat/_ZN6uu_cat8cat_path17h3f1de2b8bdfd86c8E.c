
  uint64_t uu_cat::cat_path::h3f1de2b8bdfd86c8(int64_t* arg1, int64_t arg2, uint64_t arg3, int32_t* arg4, int64_t arg5, int64_t* arg6)

{
    int64_t var_d0 = arg5;
    uint64_t result_1;
    uu_cat::get_input_type::h6ff27855215d6960(&result_1, arg2, arg3);
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
        else
        {
            void* var_d8;
            
            if (result == 2)
            {
                std::io::stdio::stdin::h7215cc131abb55d8();
                std::io::stdio::stdin::h7215cc131abb55d8();
                var_d8 = &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5;
                char rax_1 = std::sys::pal::unix::io::is_terminal::h1ed5dafcafc72212();
                result_1 = &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5;
                char var_c0 = rax_1;
                return uu_cat::cat_handle::h2310985edbce98d4(arg1, &result_1, arg4);
            }
            
            int64_t* rdi_1 = &result_1;
            
            if (result != 7)
            {
                std::fs::File::open::h11d1745ffe6524fc(rdi_1, arg2);
                
                if (!result_1)
                {
                    int32_t fd_1 = *result_1[4];
                    var_d8 = fd_1;
                    
                    if (arg6 &&
                        uucore::features::fs::FileInformation::file_size::h0d1880e968de69d5(arg6))
                    {
                        uucore::features::fs::FileInformation::from_file::hbfeeabf3f9b0206f(
                            &result_1, &var_d8);
                        
                        if (result_1)
                        {
                            core::ptr::drop_in_place$LT$core..result..Result$LT$uucore..features..fs..FileInformation$C$std..io..error..Error$GT$$GT$::h88aced0ed65ad377(&result_1);
                            fd_1 = var_d8;
                        }
                        else if (result_2 == *arg6 && var_bf == arg6[1])
                        {
                            *arg1 = -0x7ffffffffffffffc;
                            return core::ptr::drop_in_place$LT$std..fs..File$GT$::h59c27c7970f16c5f(
                                fd_1);
                        }
                    }
                    
                    result_1 = fd_1;
                    *result_1[4] = 0;
                    uu_cat::cat_handle::h13bdbf50278acfc8(arg1, &result_1, arg4);
                    return core::ptr::drop_in_place$LT$uu_cat..InputHandle$LT$std..fs..File$GT$$GT$::hc879bc74ba17ed2f(result_1);
                }
            }
            else
            {
                std::os::unix::net::stream::UnixStream::connect::he27f40a192a8e4eb(rdi_1, arg2);
                
                if (!result_1)
                {
                    int32_t fd = *result_1[4];
                    var_d8 = fd;
                    int64_t rax =
                        std::os::unix::net::stream::UnixStream::shutdown::h2ca8c4935813fcc4(
                        &var_d8, 1);
                    
                    if (rax)
                    {
                        *arg1 = -0x8000000000000000;
                        arg1[1] = rax;
                        return core::ptr::drop_in_place$LT$std..os..unix..net..stream..UnixStream$GT$::ha55321e5b25e8ec9(fd);
                    }
                    
                    result_1 = fd;
                    *result_1[4] = 0;
                    uu_cat::cat_handle::hd11b5f8e6960e509(arg1, &result_1, arg4);
                    return core::ptr::drop_in_place$LT$uu_cat..InputHandle$LT$std..os..unix..net..stream..UnixStream$GT$$GT$::ha5653865c3424521(result_1);
                }
            }
            
            result = result_2;
            *arg1 = -0x8000000000000000;
            arg1[1] = result;
        }
    }
    return result;
}
