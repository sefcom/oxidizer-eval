
  fn uu_tee::ensure_stdout_not_broken::hbf7c3644b247e073(arg1: *mut i8) -> *mut i8

{
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    let mut var_a8: i32;
    nix::sys::stat::fstat::h932ea0f7705da4a5(&var_a8, 1);
    let var_88: i32;
    
    if var_a8 == 1
    {
        let var_a4: i32;
        *arg1.byte_offset(8) = var_a4 << 0x20 | 2;
        *arg1 = 1;
    }
    else if (var_88 & 0x1000) != 0
    {
        let mut var_b0: i64 = 0x8000000001;
        let mut rax_4: i8;
        let mut rdx_1: i64;
        rax_4 = nix::poll::poll::h39db83bcc35c5ee5(&var_b0);
        
        if (rax_4 & 1) == 0
        {
            if rdx_1 <= 0
            {
                core::panicking::panic::h85d6dd562679980c("internal error: entered unreacha…");
                /* no return */
            }
            
            var_a8 = &var_b0;
            let var_a0_1: *mut i32 = &var_a8;
            arg1[1] = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::hdd04b6cc49b12dea(&var_a8) ^ 1;
            rax_4 = 0;
        }
        else
        {
            *arg1.byte_offset(8) = rdx_1 << 0x20 | 2;
            rax_4 = 1;
        }
        
        *arg1 = rax_4;
    }
    else
    {
        *arg1 = 0x100;
    }
    arg1
}
