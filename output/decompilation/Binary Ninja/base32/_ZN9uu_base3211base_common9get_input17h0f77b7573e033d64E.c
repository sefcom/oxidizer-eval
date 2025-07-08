
  int64_t* uu_base32::base_common::get_input::h0f77b7573e033d64(int64_t* arg1, void* arg2)

{
    uint64_t rax_1;
    void** const rcx;
    int64_t rdx_2;
    void* var_28;
    
    if (*(arg2 + 0x10) != -0x8000000000000000)
    {
        std::fs::File::open::h6364263faa0b0b02(&var_28, arg2 + 0x10);
        uint64_t var_38;
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hb851e02a25cfd4b9(&var_38, &var_28, arg2 + 0x10);
        rax_1 = var_38;
        int32_t var_30;
        
        if (!rax_1)
        {
            rax_1 = alloc::boxed::Box$LT$T$GT$::new::h49813bb62d5bf258(var_30);
            rcx = &data_549790;
            rdx_2 = 0;
        }
        else
        {
            rcx = var_30;
            rdx_2 = 1;
        }
    }
    else
    {
        std::io::stdio::stdin::h7215cc131abb55d8();
        var_28 = &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5;
        int32_t* rax;
        char rdx;
        rax = std::io::stdio::Stdin::lock::h161a36d857331d7f(&var_28);
        rax_1 = alloc::boxed::Box$LT$T$GT$::new::h482febea39d844c0(rax, rdx & 1);
        rcx = &data_549738;
        rdx_2 = 0;
    }
    arg1[1] = rax_1;
    arg1[2] = rcx;
    *arg1 = rdx_2;
    return arg1;
}
