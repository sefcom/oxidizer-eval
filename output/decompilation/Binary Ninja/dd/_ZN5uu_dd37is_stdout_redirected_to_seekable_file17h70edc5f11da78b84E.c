
  uint64_t uu_dd::is_stdout_redirected_to_seekable_file::h70edc5f11da78b84()

{
    int64_t var_30;
    uu_dd::stdout_canonicalized::hef58783e4e0e6eba(&var_30);
    int32_t var_40;
    int64_t var_28;
    std::fs::File::open::h6f8eb2428e586d07(&var_40, var_28);
    int32_t rbp;
    
    if (!var_40)
    {
        int32_t fd_1;
        int32_t fd = fd_1;
        int64_t rax_2;
        int64_t rdx_1;
        rax_2 = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::stream_position::hea3f1471eccd6c38(
            &fd);
        int64_t var_50 = rax_2;
        int64_t var_48_1 = rdx_1;
        
        if (!rax_2)
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::h84bdf3d577fad3a7(&var_50);
            int64_t rax_3;
            int64_t rdx_2;
            rax_3 =
                _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::h04cf64217ea00d1d(&fd, 1, 0);
            var_50 = rax_3;
            int64_t var_48_2 = rdx_2;
            
            if (!rax_3)
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::h84bdf3d577fad3a7(&var_50);
                int64_t rax_5 = std::io::Seek::rewind::h4f5eb59316fec924(&fd);
                var_50 = rax_5;
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hc7a03f57d9b19cc5(&var_50);
                rbp = !rax_5;
            }
            else
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::h84bdf3d577fad3a7(&var_50);
                rbp = 0;
            }
        }
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::h84bdf3d577fad3a7(&var_50);
            rbp = 0;
        }
        
        core::ptr::drop_in_place$LT$std..fs..File$GT$::h2ff6435789191b84(fd);
    }
    else
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..File$C$std..io..error..Error$GT$$GT$::h92b93fa98429e7c9(&var_40);
        rbp = 0;
    }
    
    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h9ec2bf852da89cb7(var_30, var_28);
    return rbp;
}
