
  char* uu_dd::Output::new_stdout::hc67289d375d2c7da(char* arg1, void* arg2)

{
    void* r14 = arg2;
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    int64_t* var_28 = &std::io::stdio::STDOUT::h411b213c5c9add46;
    char var_30 = 0;
    char rax;
    int64_t rdx;
    rax = uu_dd::Dest::seek::h5a64bc595251d974(&var_30, *(r14 + 0x88));
    int64_t var_20;
    _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h202423c1371f09a8(&var_20, rax, rdx);
    int64_t rax_1 = var_20;
    
    if (!rax_1)
        *arg1 = var_30;
    else
    {
        void* var_18;
        r14 = var_18;
        *(arg1 + 8) = rax_1;
        *arg1 = 4;
        int32_t var_2c;
        core::ptr::drop_in_place$LT$uu_dd..Dest$GT$::h46074e24ca5324af(var_30, var_2c);
    }
    
    *(arg1 + 0x10) = r14;
    return arg1;
}
