
  int64_t* uu_shuf::read_input_file::h39a00d9d5113d201(int64_t* arg1, int64_t arg2, uint64_t arg3)

{
    int64_t var_80;
    int32_t var_78;
    int64_t var_70;
    int64_t* rax_1;
    void* const rcx;
    
    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h7a1eebabf92f0a45(arg2, arg3, "-src/uu/shuf/src/shuf.rsassertio…", 1))
    {
        std::fs::File::open::h6de938cd2a1a2187(&var_70, arg2);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h44a724dea645e385(&var_80, &var_70);
        int64_t rax_2 = var_80;
        
        if (!rax_2)
        {
            rax_1 = alloc::boxed::Box$LT$T$GT$::new::h76bc6918f77c692b(var_78);
            rcx = &data_537c28;
            goto label_4c1745;
        }
        
        arg1[1] = rax_2;
        arg1[2] = var_78;
        *arg1 = -0x8000000000000000;
    }
    else
    {
        std::io::stdio::stdin::h7215cc131abb55d8();
        rax_1 = alloc::boxed::Box$LT$T$GT$::new::hfbb2289a6863f155(
            &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5);
        rcx = &data_537c80;
        label_4c1745:
        void var_58;
        std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h7d287012b593b0a9(&var_58, 
            0x2000, rax_1, rcx);
        var_70 = 0;
        int64_t var_68_1 = 1;
        int64_t var_60_1 = 0;
        int64_t rax_3;
        void** rdx_3;
        rax_3 = _$LT$std..io..buffered..bufreader..BufReader$LT$R$GT$$u20$as$u20$std..io..Read$GT$::read_to_end::hc79da0281f407c42(&var_58, &var_70);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h6f9450da0d088758(&var_80, rax_3, rdx_3);
        int64_t rax_4 = var_80;
        
        if (!rax_4)
        {
            arg1[2] = var_60_1;
            *arg1 = var_70;
        }
        else
        {
            arg1[1] = rax_4;
            arg1[2] = var_78;
            *arg1 = -0x8000000000000000;
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hfc2a7b88a66b26dd(&var_70);
        }
        
        core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::hf54340fb0eaaa981(&var_58);
    }
    return arg1;
}
