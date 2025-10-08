
  uint32_t alacritty::ipc::find_socket::h2033fc8b055af1f5(int32_t* arg1, int64_t* arg2)

{
    int128_t var_f8;
    
    if (!(0 + -(*arg2)))
    {
        int64_t var_e8_1 = arg2[2];
        var_f8 = *arg2;
        int32_t var_78;
        uint64_t rdx_1 =
            std::os::unix::net::stream::UnixStream::connect::h5d5356656ab81e48(&var_78, &var_f8);
        
        if (var_78 != 1)
            *arg1 = var_78;
        else
        {
            int64_t var_70;
            *(arg1 + 8) =
                alacritty::ipc::find_socket::_$u7b$$u7b$closure$u7d$$u7d$::h1e62c33cffc915ed(
                &var_f8, var_70, rdx_1);
            *arg1 = 1;
        }
        
        return core::mem::drop::ha42964a555fb617b(&var_f8);
    }
    
    std::env::var::h6dfe92363d5ba5ff(&var_f8, "ALACRITTY_SOCKETglObjectLabelKHR");
    uint32_t result;
    int32_t var_a8;
    
    if (!var_f8)
    {
        std::os::unix::net::stream::UnixStream::connect::h36f5ecc6cc621745(&var_a8, &*var_f8[8]);
        
        if (var_a8 == 1)
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..os..unix..net..stream..UnixStream$C$std..io..error..Error$GT$$GT$::h02eabd496ab55179(&var_a8);
            goto label_85c838;
        }
        
        uint32_t result_1;
        result = result_1;
        arg1[1] = result;
        *arg1 = 0;
    }
    else
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::ha9e0b10d03171307(&var_f8);
        label_85c838:
        alacritty::ipc::socket_dir::h1c4e47f5863be2c9(&var_f8);
        std::fs::read_dir::h8758f6df01041938(&var_a8, &var_f8);
        char result_2;
        result = result_2;
        int64_t rcx_1 = var_a8;
        
        if (result != 2)
        {
            int64_t var_c0 = rcx_1;
            char var_b8_1 = result;
            
            while (true)
            {
                core::iter::traits::iterator::Iterator::try_fold::hbab81b9e7ddd270c(&var_f8, 
                    &var_c0);
                int64_t rax_2 = var_f8;
                
                if (!rax_2)
                    break;
                
                int128_t var_e0;
                int128_t var_90_1 = var_e0;
                result_2 = var_f8;
                var_a8 = rax_2;
                void var_60;
                std::fs::DirEntry::path::hc95af67dccb42f03(&var_60, &var_a8);
                void var_48;
                alacritty::ipc::socket_prefix::h72fe10f54a073b54(&var_48);
                int64_t var_58;
                int64_t var_50;
                char* rax_3;
                int64_t rdx_2;
                int64_t rsi_7;
                rax_3 = std::path::Path::file_name::h6d40d88bf3fb287a(var_58, var_50);
                int64_t rdi_18;
                
                if (!rax_3)
                    rdi_18 = 0;
                else
                {
                    core::str::converts::from_utf8::h8a6dc80f786921e0(&var_f8, rax_3, rdx_2);
                    
                    if (var_f8)
                        rdi_18 = 0;
                    else
                        rdi_18 = *var_f8[8];
                    
                    int64_t var_e8;
                    rsi_7 = var_e8;
                }
                
                int64_t var_40;
                uint64_t var_38;
                
                if (core::option::Option$LT$T$GT$::filter::hd1710d176cb93ef4(rdi_18, rsi_7, var_40, 
                    var_38))
                {
                    std::os::unix::net::stream::UnixStream::connect::h5d5356656ab81e48(&var_f8, 
                        &var_60);
                    
                    if (var_f8 != 1)
                    {
                        arg1[1] = *var_f8[4];
                        *arg1 = 0;
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(
                            &var_48);
                        core::mem::drop::ha42964a555fb617b(&var_60);
                        core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::h3b2ea39347aaddd3(
                            &var_a8);
                        return core::ptr::drop_in_place$LT$core..iter..adapters..filter_map..FilterMap$LT$std..fs..ReadDir$C$alacritty..ipc..find_socket..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::h0bfbe37e96f7e7cb(&var_c0);
                    }
                    
                    int64_t rbx_1 = *var_f8[8];
                    
                    if (std::io::error::Error::kind::h135fe00c4e7365f3(rbx_1) != 2)
                        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h3428ae91bc3bac8a(
                            &*var_f8[8]);
                    else
                    {
                        int64_t var_b0 = rbx_1;
                        int64_t var_68 = std::fs::remove_file::hb53c976d7051c999(&var_60);
                        core::ptr::drop_in_place$LT$core..option..Option$LT$std..io..error..Error$GT$$GT$::h1de10a50e8d7f33d(&var_68);
                        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h3428ae91bc3bac8a(
                            &var_b0);
                    }
                }
                
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_48);
                core::mem::drop::ha42964a555fb617b(&var_60);
                core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::h3b2ea39347aaddd3(&var_a8);
            }
            
            core::ptr::drop_in_place$LT$core..ops..control_flow..ControlFlow$LT$std..fs..DirEntry$GT$$GT$::h654e545e5c290282(&var_f8);
            core::ptr::drop_in_place$LT$core..iter..adapters..filter_map..FilterMap$LT$std..fs..ReadDir$C$alacritty..ipc..find_socket..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::h0bfbe37e96f7e7cb(&var_c0);
            *(arg1 + 8) = std::io::error::Error::new::h31653b416e5e1c98(0, 
                "no socket foundinvalid socket pa…", 0xf);
            *arg1 = 1;
            return core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::hce944beccab591c0(arg2);
        }
        
        *(arg1 + 8) = rcx_1;
        *arg1 = 1;
    }
    return result;
}
