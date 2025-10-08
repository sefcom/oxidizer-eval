
  int64_t alacritty::event::Processor::create_window::h24cee6a31c7e46e1(void* arg1, int64_t* arg2, void* arg3)

{
    int64_t var_1030 = 0;
    int64_t var_2030 = 0;
    int64_t var_3030 = 0;
    int64_t var_4030 = 0;
    int64_t var_5030 = 0;
    
    if (*(arg1 + 0x60) == 2)
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    int128_t var_5b38;
    alacritty::cli::WindowOptions::config_overrides::h363042409a39fcc3(&var_5b38, *(arg3 + 0x40), 
        *(arg3 + 0x48));
    int64_t rsi_1 = *(arg1 + 0x3c0);
    alloc::vec::Vec$LT$T$C$A$GT$::extend_trusted::h5c4c742c6e08d753(&var_5b38, rsi_1, 
        *(arg1 + 0x3c8) * 0x38 + rsi_1);
    int64_t* r12 = *(arg1 + 0x3d0);
    alloc::rc::RcInnerPtr::inc_strong::h04231d05a40329cb(r12);
    void* rax =
        alacritty::cli::ParsedOptions::override_config_rc::h35ab90cde0bbb7d9(&var_5b38, r12);
    void* var_5b20 = rax;
    int128_t var_1e78;
    _$LT$winit..platform_impl..linux..EventLoopProxy$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hf017a78d33b24d45(&var_1e78, arg1 + 0x40);
    int128_t var_1e68;
    int128_t var_5ae8 = var_1e68;
    int128_t var_5af8 = var_1e78;
    memcpy(&var_1e78, arg3, 0xb0);
    int64_t var_5b28;
    int64_t var_5b08 = var_5b28;
    int128_t var_5b18 = var_5b38;
    char var_3cb8[0x10];
    alacritty::window_context::WindowContext::additional::h967a45862e027146(&var_3cb8, arg1 + 0x60, 
        arg2, &var_5af8, rax, &var_1e78, &var_5b18);
    int64_t result;
    
    if (_mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(var_3cb8, *data_4e9660)) == 0xffff)
        return result;
    
    int64_t r12_2 = var_3cb8[0];
    int64_t r13_1 = var_3cb8[8];
    void var_5ad8;
    void var_3c98;
    memcpy(&var_5ad8, &var_3c98, 0x1e20);
    *var_5af8[8] = r13_1;
    var_5af8 = r12_2;
    var_5ae8 = result;
    char (* var_3ca0)[0x10];
    *var_5ae8[8] = var_3ca0;
    int64_t rax_3 = alacritty::window_context::WindowContext::id::h00e21fe3de0e9e60(&var_5af8);
    memcpy(&var_3cb8, &var_5af8, 0x1e40);
    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h46ec14ebd8deddf3(&var_1e78, 
        arg1 + 0x330, rax_3, &var_3cb8);
    core::ptr::drop_in_place$LT$core..option..Option$LT$alacritty..window_context..WindowContext$GT$$GT$::h05abba2cc3661483(&var_1e78);
    return 0;
}
