
  int64_t* uu_join::State::new::h1e047ff86b763ae6(int64_t* arg1, char arg2, int64_t arg3, uint64_t arg4, int64_t* arg5, int64_t arg6, char arg7, char arg8)

{
    int64_t* rax_2;
    void** const rcx;
    
    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hab9f309aad09d5a2(arg3, arg4, "-non-UTF-8 multi-byte tabvalid s…", 1))
    {
        void var_60;
        std::fs::File::open::h5119db07cecb01a2(&var_60, arg3);
        int64_t var_70;
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h7f1f9b7a34a3754b(&var_70, &var_60);
        int64_t rax_3 = var_70;
        int32_t var_68;
        
        if (!rax_3)
        {
            std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hde7863a5cb2c8fe9(
                &var_60, 0x2000, var_68);
            rax_2 = alloc::boxed::Box$LT$T$GT$::new::h27c807e2bc113c31(&var_60);
            rcx = &data_535340;
            goto label_4c3a3e;
        }
        
        arg1[1] = rax_3;
        arg1[2] = var_68;
        *arg1 = -0x8000000000000000;
    }
    else
    {
        int32_t* rax_1;
        char rdx;
        rax_1 = std::io::stdio::Stdin::lock::h161a36d857331d7f(arg5);
        rax_2 = alloc::boxed::Box$LT$T$GT$::new::hf2d7d209ce9381d4(rax_1, rdx & 1);
        rcx = &data_5353c8;
        label_4c3a3e:
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
