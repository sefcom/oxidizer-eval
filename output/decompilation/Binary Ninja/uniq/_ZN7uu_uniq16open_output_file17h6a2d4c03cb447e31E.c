
  int64_t* uu_uniq::open_output_file::h6a2d4c03cb447e31(int64_t* arg1, int64_t arg2, uint64_t arg3)

{
    char rax_1;
    
    if (arg2)
        rax_1 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h679c5716f854e642(arg2, arg3, "-Could not open ", 1);
    
    uint64_t rax_3;
    void** const rcx;
    int64_t rdx;
    int64_t* var_40;
    
    if (arg2 && !rax_1)
    {
        std::fs::File::create::h5f141230072c7c86(&var_40, arg2);
        uint64_t var_50;
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hc64994a9983278f5(&var_50, &var_40);
        rax_3 = var_50;
        int32_t var_48;
        
        if (!rax_3)
        {
            std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::hda9b44c021880ad4(
                &var_40, var_48);
            rax_3 = alloc::boxed::Box$LT$T$GT$::new::h6a1ac761650a84ad(&var_40);
            rcx = &data_4f5a88;
            rdx = 0;
        }
        else
        {
            rcx = var_48;
            rdx = 1;
        }
    }
    else
    {
        std::io::stdio::stdout::hb6a8e10bcccf3287();
        var_40 = &std::io::stdio::STDOUT::h411b213c5c9add46;
        rax_3 = alloc::boxed::Box$LT$T$GT$::new::h9d32404ba33e3096(
            std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_40));
        rcx = &data_4f5ad8;
        rdx = 0;
    }
    arg1[1] = rax_3;
    arg1[2] = rcx;
    *arg1 = rdx;
    return arg1;
}
