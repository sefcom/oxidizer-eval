
  char* uu_dd::Output::new_stdout::h76c99dbdf4ef76d1(char* arg1, void* arg2)

{
    void* r14 = arg2;
    std::io::stdio::stdout::h077da66234850927();
    int64_t* var_28 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
    char var_30 = 0;
    int64_t rax;
    void** rdx;
    rax = uu_dd::Dest::seek::hf206f28f02b500d6(&var_30, *(r14 + 0x88));
    int64_t var_20;
    _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hc7b2fb4fd73e14a5(&var_20, rax, rdx);
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
        core::ptr::drop_in_place$LT$uu_dd..Dest$GT$::h3e1c9cbf5a8b743c(var_30, var_2c);
    }
    
    *(arg1 + 0x10) = r14;
    return arg1;
}
