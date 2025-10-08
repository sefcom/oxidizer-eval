
  fn alacritty_terminal::tty::unix::get_pw_entry::hc3ba737ab115be5a(arg1: *mut i64, arg2: *mut i8) -> *mut c_void

{
    let mut result: *mut passwd = nullptr;
    let uid: uid_t = getuid();
    let mut uid_1: uid_t = uid;
    let mut resbuf: *mut i8;
    let rax: i32 = getpwuid_r(uid, &resbuf, arg2, 0x400, &result);
    let resbuf_1: *mut i8 = resbuf;
    let var_ac: i64;
    let var_7c: i64 = var_ac;
    let var_a4: i32;
    let var_74: i32 = var_a4;
    let resbuf_2: *mut i8 = resbuf_1;
    let var_b8: i64;
    let var_88: i64 = var_b8;
    let var_b0: i32;
    let mut var_80: i32 = var_b0;
    let var_a0: *mut i8;
    let var_70: *mut i8 = var_a0;
    let var_98: *mut i8;
    let var_68: *mut i8 = var_98;
    let mut result_1: *mut c_void;
    let mut var_60: i64;
    let mut rdx_8: u64;
    let mut rsi_7: *const i8;
    
    if rax < 0
    {
        rsi_7 = "getpwuid_r failedpw not foundSHE…";
        rdx_8 = 0x11;
        'label_9bed4b:
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h53b11fd4ed117188(&var_60, rsi_7, rdx_8);
        result_1 = std::io::error::Error::_new::hbf6e5d7f23cac6f9(0x28, 
            alloc::boxed::Box$LT$T$GT$::new::hde3c6ec7f3b27af2(&var_60), &data_c96cf0);
        arg1[1] = result_1;
        *arg1 = 0;
    }
    else
    {
        if result == 0
        {
            rsi_7 = "pw not foundSHELLFailed to spawn…";
            rdx_8 = 0xc;
            goto 'label_9bed4b;
        }
        
        if var_b0 != uid
        {
            var_60 = 0;
            core::panicking::assert_failed::h51c03e22510caea5(0, &var_80, &uid_1, &var_60);
            /* no return */
        }
        
        core::ffi::c_str::CStr::to_str::h7208c416e44d9521(&var_60, resbuf_1, strlen(resbuf_1) + 1);
        let mut rax_2: i64;
        let mut rdx_3: i64;
        rax_2 = core::result::Result$LT$T$C$E$GT$::unwrap::hdfe23b01b334229b(&var_60);
        core::ffi::c_str::CStr::to_str::h7208c416e44d9521(&var_60, var_a0, strlen(var_a0) + 1);
        let mut rax_4: i64;
        let mut rdx_5: i64;
        rax_4 = core::result::Result$LT$T$C$E$GT$::unwrap::hdfe23b01b334229b(&var_60);
        core::ffi::c_str::CStr::to_str::h7208c416e44d9521(&var_60, var_98, strlen(var_98) + 1);
        let mut rdx_7: i64;
        result_1 = core::result::Result$LT$T$C$E$GT$::unwrap::hdfe23b01b334229b(&var_60);
        *arg1 = rax_2;
        arg1[1] = rdx_3;
        arg1[2] = rax_4;
        arg1[3] = rdx_5;
        arg1[4] = result_1;
        arg1[5] = rdx_7;
    }
    result_1
}
