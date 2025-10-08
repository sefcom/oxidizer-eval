
  fn uu_dd::is_stdout_redirected_to_seekable_file::h70edc5f11da78b84() -> u64

{
    let mut var_30: i64;
    uu_dd::stdout_canonicalized::hef58783e4e0e6eba(&var_30);
    let mut var_40: i32;
    let var_28: i64;
    std::fs::File::open::h6f8eb2428e586d07(&var_40, var_28);
    let mut rbp: i32;
    
    if var_40 == 0
    {
        let fd_1: i32;
        let mut fd: i32 = fd_1;
        let mut rax_2: i64;
        let mut rdx_1: i64;
        rax_2 = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::stream_position::hea3f1471eccd6c38(
            &fd);
        let mut var_50: i64 = rax_2;
        let var_48_1: i64 = rdx_1;
        
        if rax_2 == 0
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::h84bdf3d577fad3a7(&var_50);
            let mut rax_3: i64;
            let mut rdx_2: i64;
            rax_3 =
                _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::h04cf64217ea00d1d(&fd, 1, 0);
            var_50 = rax_3;
            let var_48_2: i64 = rdx_2;
            
            if rax_3 == 0
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::h84bdf3d577fad3a7(&var_50);
                let rax_5: i64 = std::io::Seek::rewind::h4f5eb59316fec924(&fd);
                var_50 = rax_5;
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hc7a03f57d9b19cc5(&var_50);
                rbp = rax_5 == 0;
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
    rbp
}
