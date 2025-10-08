
  int64_t alacritty::event::Processor::create_initial_window::h8fe83dcae680d880(void* arg1, int64_t* arg2, int64_t arg3)

{
    int64_t var_1028 = 0;
    int64_t var_2028 = 0;
    int64_t var_3028 = 0;
    int64_t var_4028 = 0;
    int64_t var_5028 = 0;
    int128_t var_1e68;
    _$LT$winit..platform_impl..linux..EventLoopProxy$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hf017a78d33b24d45(&var_1e68, arg1 + 0x40);
    int128_t var_1e58;
    int128_t var_5ad8 = var_1e58;
    int128_t var_5ae8 = var_1e68;
    int64_t* r12 = *(arg1 + 0x3d0);
    alloc::rc::RcInnerPtr::inc_strong::h04231d05a40329cb(r12);
    memcpy(&var_1e68, arg3, 0xb0);
    char var_3ca8[0x10];
    alacritty::window_context::WindowContext::initial::hf53962b78b6f5e18(&var_3ca8, arg2, 
        &var_5ae8, r12, &var_1e68);
    int64_t result;
    
    if (_mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(var_3ca8, *data_4e9660)) == 0xffff)
        return result;
    
    int64_t r12_1 = var_3ca8[0];
    int64_t r13_1 = var_3ca8[8];
    void var_5ac8;
    void var_3c88;
    memcpy(&var_5ac8, &var_3c88, 0x1e20);
    *var_5ae8[8] = r13_1;
    var_5ae8 = r12_1;
    var_5ad8 = result;
    char (* var_3c90)[0x10];
    *var_5ad8[8] = var_3c90;
    void var_46d0;
    int64_t rax_1;
    int64_t rdx_1;
    rax_1 = _$LT$glutin..context..NotCurrentContext$u20$as$u20$glutin..config..GetGlConfig$GT$::config::hde59c67359acb4ca(&var_46d0);
    core::ptr::drop_in_place$LT$core..option..Option$LT$glutin..config..Config$GT$$GT$::h6dd549acf5270ad2(arg1 + 0x60);
    *(arg1 + 0x60) = rax_1;
    *(arg1 + 0x68) = rdx_1;
    int64_t rax_2 = alacritty::window_context::WindowContext::id::h00e21fe3de0e9e60(&var_5ae8);
    memcpy(&var_3ca8, &var_5ae8, 0x1e40);
    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h46ec14ebd8deddf3(&var_1e68, 
        arg1 + 0x330, rax_2, &var_3ca8);
    core::ptr::drop_in_place$LT$core..option..Option$LT$alacritty..window_context..WindowContext$GT$$GT$::h05abba2cc3661483(&var_1e68);
    return 0;
}
