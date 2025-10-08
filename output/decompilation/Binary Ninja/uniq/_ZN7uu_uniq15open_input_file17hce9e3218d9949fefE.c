
  int64_t* uu_uniq::open_input_file::hce9e3218d9949fef(int64_t* arg1, int64_t arg2, uint64_t arg3)

{
    char rax_1;
    
    if (arg2)
        rax_1 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h679c5716f854e642(arg2, arg3, "-Could not open ", 1);
    
    uint64_t rax_3;
    void** const rcx;
    int64_t rdx_1;
    void* var_50;
    
    if (arg2 && !rax_1)
    {
        std::fs::File::open::h89bebe60b629907a(&var_50, arg2);
        uint64_t var_60;
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hc64994a9983278f5(&var_60, &var_50);
        rax_3 = var_60;
        int32_t var_58;
        
        if (!rax_3)
        {
            std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::ha5cb902d0606ef3d(
                &var_50, var_58);
            rax_3 = alloc::boxed::Box$LT$T$GT$::new::hcfb3c24bb78fa996(&var_50);
            rcx = &data_4f5968;
            rdx_1 = 0;
        }
        else
        {
            rcx = var_58;
            rdx_1 = 1;
        }
    }
    else
    {
        std::io::stdio::stdin::h9a05a2c3e7544b2a();
        var_50 = &std::io::stdio::stdin::INSTANCE::heccb3522b341563b;
        int32_t* rax_2;
        char rdx;
        rax_2 = std::io::stdio::Stdin::lock::h8b2bf765bae79e2f(&var_50);
        rax_3 = alloc::boxed::Box$LT$T$GT$::new::h9df9e3bedef2cae6(rax_2, rdx & 1);
        rcx = &data_4f59f0;
        rdx_1 = 0;
    }
    arg1[1] = rax_3;
    arg1[2] = rcx;
    *arg1 = rdx_1;
    return arg1;
}
