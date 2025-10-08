
  void* alacritty_terminal::tty::unix::get_pw_entry::hc3ba737ab115be5a(int64_t* arg1, char* arg2)

{
    struct passwd* result = nullptr;
    uid_t uid = getuid();
    uid_t uid_1 = uid;
    char* resbuf;
    int32_t rax = getpwuid_r(uid, &resbuf, arg2, 0x400, &result);
    char* resbuf_1 = resbuf;
    int64_t var_ac;
    int64_t var_7c = var_ac;
    int32_t var_a4;
    int32_t var_74 = var_a4;
    char* resbuf_2 = resbuf_1;
    int64_t var_b8;
    int64_t var_88 = var_b8;
    int32_t var_b0;
    int32_t var_80 = var_b0;
    char* var_a0;
    char* var_70 = var_a0;
    char* var_98;
    char* var_68 = var_98;
    void* result_1;
    int64_t var_60;
    uint64_t rdx_8;
    char const* const rsi_7;
    
    if (rax < 0)
    {
        rsi_7 = "getpwuid_r failedpw not foundSHE…";
        rdx_8 = 0x11;
        label_9bed4b:
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h53b11fd4ed117188(&var_60, rsi_7, rdx_8);
        result_1 = std::io::error::Error::_new::hbf6e5d7f23cac6f9(0x28, 
            alloc::boxed::Box$LT$T$GT$::new::hde3c6ec7f3b27af2(&var_60), &data_c96cf0);
        arg1[1] = result_1;
        *arg1 = 0;
    }
    else
    {
        if (!result)
        {
            rsi_7 = "pw not foundSHELLFailed to spawn…";
            rdx_8 = 0xc;
            goto label_9bed4b;
        }
        
        if (var_b0 != uid)
        {
            var_60 = 0;
            core::panicking::assert_failed::h51c03e22510caea5(0, &var_80, &uid_1, &var_60);
            /* no return */
        }
        
        core::ffi::c_str::CStr::to_str::h7208c416e44d9521(&var_60, resbuf_1, strlen(resbuf_1) + 1);
        int64_t rax_2;
        int64_t rdx_3;
        rax_2 = core::result::Result$LT$T$C$E$GT$::unwrap::hdfe23b01b334229b(&var_60);
        core::ffi::c_str::CStr::to_str::h7208c416e44d9521(&var_60, var_a0, strlen(var_a0) + 1);
        int64_t rax_4;
        int64_t rdx_5;
        rax_4 = core::result::Result$LT$T$C$E$GT$::unwrap::hdfe23b01b334229b(&var_60);
        core::ffi::c_str::CStr::to_str::h7208c416e44d9521(&var_60, var_98, strlen(var_98) + 1);
        int64_t rdx_7;
        result_1 = core::result::Result$LT$T$C$E$GT$::unwrap::hdfe23b01b334229b(&var_60);
        *arg1 = rax_2;
        arg1[1] = rdx_3;
        arg1[2] = rax_4;
        arg1[3] = rdx_5;
        arg1[4] = result_1;
        arg1[5] = rdx_7;
    }
    return result_1;
}
