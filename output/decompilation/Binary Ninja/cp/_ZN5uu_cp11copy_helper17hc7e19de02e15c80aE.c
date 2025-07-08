
  void* uu_cp::copy_helper::hc7e19de02e15c80a(int64_t* arg1, uint64_t arg2, uint64_t arg3, int32_t* arg4, char* arg5, int64_t* arg6, int64_t arg7, int64_t arg8, char arg9, char arg10, int64_t* arg11)

{
    void* result;
    
    if (*(arg6 + 0x44))
    {
        char* rax_1;
        char* rdx;
        rax_1 = std::path::Path::parent::h65c9a340a6266f2d(arg4, arg5);
        
        if (!rax_1)
            rax_1 = arg4;
        
        result = std::fs::create_dir_all::h4110e3e76e14203b(rax_1);
    }
    
    if (!*(arg6 + 0x44) || !result)
    {
        char rax_2 = uucore::features::fs::path_ends_with_terminator::h30fe62ab1cf88eee(arg4, arg5);
        char rax_3;
        
        if (rax_2)
            rax_3 = std::path::Path::is_dir::h9ac0db933706da51(arg4, arg5);
        
        if (rax_2 && !rax_3)
        {
            result = std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(
                &arg1[1], arg4, arg5);
            *arg1 = 0xc;
        }
        else
        {
            int128_t var_b8;
            int128_t var_78;
            int32_t* var_60;
            
            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha9fb26a3ee82846d(arg2, arg3, "/dev/nullcannot create fifo : Fi…", 9))
            {
                int32_t var_40;
                std::fs::File::create::h63900868be62ed17(&var_40, arg4);
                var_60 = arg4;
                char* var_58_1 = arg5;
                _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h0383ffa9f5ca7973(
                    &var_78, &var_60);
                var_b8 = var_78;
                
                if (!var_40)
                {
                    core::ptr::drop_in_place$LT$$LT$core..result..Result$LT$std..fs..File$C$std..io..error..Error$GT$$u20$as$u20$quick_error..ResultExt$LT$std..fs..File$C$std..io..error..Error$GT$$GT$..context$LT$alloc..string..String$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h31ac547e1a80ac38(&var_b8);
                    int32_t fd;
                    result = core::ptr::drop_in_place$LT$std..fs..File$GT$::h4b422317f52b3bf0(fd);
                    *arg1 = 0xd;
                }
                else
                {
                    void* result_1;
                    result = result_1;
                    int64_t rcx = var_b8;
                    int32_t fd_1 = *var_b8[8];
                    int64_t rdx_2 = *var_b8[0xc];
                    
                    if (rcx == -0x8000000000000000)
                    {
                        result =
                            core::ptr::drop_in_place$LT$std..fs..File$GT$::h4b422317f52b3bf0(fd_1);
                        *arg1 = 0xd;
                    }
                    else
                    {
                        int64_t var_68;
                        *(arg1 + 0x1c) = *var_68[4];
                        *(arg1 + 0x14) = rdx_2;
                        *arg1 = 3;
                        arg1[1] = rcx;
                        arg1[2] = fd_1;
                        arg1[4] = result;
                    }
                }
            }
            else if (arg10 && *(arg6 + 0x46) && !*(arg6 + 0x3f))
            {
                result = uu_cp::copy_fifo::h6a16af34214a700e(&var_b8, arg4, arg5, *(arg6 + 0x3c), 
                    *(arg6 + 0x47));
                
                if (var_b8 != 0xd)
                    goto label_5083f5;
                
                *arg1 = 0xd;
            }
            else
            {
                int128_t var_9d;
                int128_t var_8d;
                
                if (!arg9)
                {
                    int64_t* rdx_10;
                    void* rsi_11;
                    int64_t r8_3;
                    void* r9_2;
                    int64_t r10_2;
                    int128_t zmm0_3;
                    int128_t zmm1_2;
                    int128_t zmm2_2;
                    rdx_10 = uu_cp::platform::linux::copy_on_write::h4f923509b4fe6a3f(&var_b8, 
                        arg2, arg3, arg4, arg5, *(arg6 + 0x4b), *(arg6 + 0x4a), arg7, arg8, arg10);
                    result = var_b8;
                    var_78 = *var_b8[8];
                    uint64_t rcx_5 = *var_b8[0xa];
                    *var_78[2] = rcx_5;
                    
                    if (result != 0xd)
                    {
                        int64_t var_80;
                        arg1[7] = var_80;
                        zmm0_3 = var_b8;
                        *(arg1 + 0x2b) = var_8d;
                        *(arg1 + 0x1b) = var_9d;
                        *(arg1 + 0xb) = zmm0_3;
                        *(arg1 + 0xa) = *var_78[2];
                        arg1[1] = var_78;
                        *arg1 = result;
                    }
                    else
                    {
                        var_60 = var_78;
                        result = *var_78[2];
                        *var_60[2] = result;
                        
                        if (!*(arg6 + 0x3e) && *(arg6 + 0x47))
                            result = uu_cp::show_debug::hb7db704407dbf64f(&var_60, rsi_11, rdx_10, 
                                rcx_5, r8_3, r9_2, zmm0_3, zmm1_2, zmm2_2, arg1, arg2, r10_2, arg4, 
                                arg3, arg6, arg5, var_b8);
                        
                        *arg1 = 0xd;
                    }
                }
                else
                {
                    result =
                        uu_cp::copy_link::h3110b816ad64228e(&var_b8, arg2, arg3, arg4, arg5, arg11);
                    
                    if (var_b8 == 0xd)
                        *arg1 = 0xd;
                    else
                    {
                        label_5083f5:
                        int128_t zmm0_2 = var_b8;
                        *(arg1 + 0x30) = var_8d;
                        *(arg1 + 0x20) = var_9d;
                        int64_t var_a8;
                        *(arg1 + 0x10) = var_a8;
                        *arg1 = zmm0_2;
                    }
                }
            }
        }
    }
    else
    {
        *arg1 = 2;
        arg1[1] = result;
    }
    
    return result;
}
