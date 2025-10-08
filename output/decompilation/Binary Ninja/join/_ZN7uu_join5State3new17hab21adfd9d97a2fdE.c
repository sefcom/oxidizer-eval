
  int64_t* uu_join::State::new::hab21adfd9d97a2fd(int64_t* arg1, char arg2, int64_t arg3, uint64_t arg4, int64_t* arg5, int64_t arg6, char arg7, char arg8)

{
    uint64_t rax_2;
    void** const rcx;
    
    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h40620c7a8dc116e5(arg3, arg4, "-non-UTF-8 multi-byte tabvalid s…", 1))
    {
        void var_60;
        std::fs::File::open::h123aad933b4bca75(&var_60, arg3);
        int64_t var_70;
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hadc359ee40c1b991(&var_70, &var_60);
        int64_t rax_3 = var_70;
        int32_t var_68;
        
        if (!rax_3)
        {
            std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h7f82d3637640fb6b(
                &var_60, var_68);
            rax_2 = alloc::boxed::Box$LT$T$GT$::new::ha0ab546ee9cbc98b(&var_60);
            rcx = &data_4fe3e0;
            goto label_46d3c6;
        }
        
        arg1[1] = rax_3;
        arg1[2] = var_68;
        *arg1 = -0x8000000000000000;
    }
    else
    {
        int32_t* rax_1;
        char rdx;
        rax_1 = std::io::stdio::Stdin::lock::h8b2bf765bae79e2f(arg5);
        rax_2 = alloc::boxed::Box$LT$T$GT$::new::h25e583750da886e1(rax_1, rdx & 1);
        rcx = &data_4fe468;
        label_46d3c6:
        *arg1 = 0;
        arg1[1] = 8;
        arg1[2] = 0;
        arg1[3] = arg3;
        arg1[4] = arg4;
        arg1[5] = rax_2;
        arg1[6] = rcx;
        arg1[7] = arg7;
        arg1[8] = arg6;
        arg1[9] = 1;
        arg1[0xa] = 0;
        arg1[0xb] = arg2;
        *(arg1 + 0x59) = arg8;
        *(arg1 + 0x5a) = 0;
    }
    return arg1;
}
