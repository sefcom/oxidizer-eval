
  fn uu_dd::is_stdout_redirected_to_seekable_file::he86a24b914264a0a() -> u64

{
    let mut var_28: ();
    uu_dd::stdout_canonicalized::h8616e33a4059f2ee(&var_28);
    let mut var_38: i32;
    let var_20: i64;
    std::fs::File::open::h7106e998c3d1654b(&var_38, var_20);
    let rbp: i32 = var_38;
    let mut rbx: i64;
    
    if rbp == 0
    {
        let fd_1: i32;
        let mut fd: i32 = fd_1;
        let mut rax_2: i64;
        let mut rdx_1: i64;
        rax_2 = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(&fd, 2, 0);
        let mut var_48: i64 = rax_2;
        let var_40_1: i64 = rdx_1;
        
        if rax_2 == 0
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::h5fb3bf5cfc30f7c8(&var_48);
            let mut rax_3: i64;
            let mut rdx_2: i64;
            rax_3 =
                _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(&fd, 1, 0);
            var_48 = rax_3;
            let var_40_2: i64 = rdx_2;
            
            if rax_3 == 0
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::h5fb3bf5cfc30f7c8(&var_48);
                let rax_5: i64 = std::io::Seek::rewind::h775fcf7d5bbb9e4d(&fd);
                var_48 = rax_5;
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hdf0c997779a17efc(&var_48);
                rbx = rax_5 == 0;
            }
            else
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::h5fb3bf5cfc30f7c8(&var_48);
                rbx = 0;
            }
        }
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::h5fb3bf5cfc30f7c8(&var_48);
            rbx = 0;
        }
        
        core::ptr::drop_in_place$LT$std..fs..File$GT$::h9d905c7759330312(fd);
    }
    else
    {
        rbx = 0;
    }
    
    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h4302a5a7bca89692(&var_28);
    
    if rbp != 0
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..File$C$std..io..error..Error$GT$$GT$::hc4afd8b230b2ba09(&var_38);
    }
    
    rbx
}
